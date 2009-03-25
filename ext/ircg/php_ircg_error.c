#include "php_ircg_private.h"
#include "php_ircg_alloc.h"
#include "php_ircg_error.h"
#include "php_ircg_smart_str.h"
#include <time.h>

/* {{{ Post-connection error-storage */

/*
 * This is an internal API which serves the purpose to store the reason
 * for terminating a connection.  The termination will cause the
 * connection id to become invalid.  A script can then use a
 * function to retrieve the last error message associated with that id
 * and will usually present a nicely formatted
 * error message to the end-user.
 *
 * We automatically garbage-collect every GC_INTVL seconds, so there is
 * no need for a separate gc thread.
 */

#define GC_INTVL 60

void php_ircg_error_msg_dtor(struct errormsg *m)
{
	smart_str_free_ex(&m->msg, 1);
	IRCG_SHARED_FREE(m);
}

void php_ircg_error_msg_gc(time_t now)
{
	struct errormsg *m, *prev = NULL, *next;
	time_t lim;

	IRCG_LOCK_GET(php_ircg->error_msgs_lock);
	lim = now - GC_INTVL;
	php_ircg->next_gc = now + GC_INTVL;
	
	for (m = php_ircg->error_msgs; m; prev = m, m = m->next) {
		if (m->when < lim) {
			struct errormsg *to;
			/* Check whether we have subsequent outdated records */
			
			for (to = m->next; to; to = next) {
				next = to->next;
				if (m->when >= lim) break;
				php_ircg_error_msg_dtor(to);
			}

			php_ircg_error_msg_dtor(m);
			
			if (prev)
				prev->next = to;
			else
				php_ircg->error_msgs = to;
			
			if (!to) break;
			m = to;
		}
	}
	IRCG_LOCK_PUT(php_ircg->error_msgs_lock);
}

void php_ircg_add_error_msg(smart_str *msg, int msgid, int connid)
{
	struct errormsg *m;

	IRCG_LOCK_GET(php_ircg->error_msgs_lock);
	for (m = php_ircg->error_msgs; m; m = m->next) {
		if (m->id == connid) break;
	}

	if (!m) {
		m = IRCG_SHARED_ALLOC(sizeof(*m));
		m->msg.c = 0;
		m->id = connid;
	}

	m->when = php_ircg_now();
	m->msg.len = 0;
	smart_str_append_ex(&m->msg, msg, 1);
	m->msgid = msgid;
	m->next = php_ircg->error_msgs;
	php_ircg->error_msgs = m;
	IRCG_LOCK_PUT(php_ircg->error_msgs_lock);
}

struct errormsg *php_ircg_lookup_and_remove_error_msg(int id)
{
	struct errormsg *m, *prev = NULL;

	IRCG_LOCK_GET(php_ircg->error_msgs_lock);
	for (m = php_ircg->error_msgs; m; prev = m, m = m->next) {
		if (m->id == id) {
			if (prev)
				prev->next = m->next;
			else
				php_ircg->error_msgs = m->next;

			break;
		}
	}
	IRCG_LOCK_PUT(php_ircg->error_msgs_lock);
	return m;
}
/* }}} */


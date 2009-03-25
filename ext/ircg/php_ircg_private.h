#ifndef PHP_IRCG_PRIVATE_H
#define PHP_IRCG_PRIVATE_H

#include "php.h"

#include "if_irc.h"
#include "irc_write_buffer.h"

#if IRCG_API_VERSION < 20021127
#define USE_IRCONN_MANAGEMENT
#define USE_FD2IRCONN

#define ircg_fetch_area(name, ptr, size, fn) do { *(ptr) = IRCG_SHARED_ALLOC((size)); memset(*(ptr), 0, (size)); (fn)(*(ptr)); } while (0)

/* provide dummy definitions */
#include "php_ircg_hash.h"
#include "php_ircg_lock.h"

#else
#include <ircg_resource.h>
#include <ircg_hash.h>
#include <ircg_lock.h>
#endif

#include "php_ircg_error.h"

#include "php_ircg_tokenizer.h"
#include "php_ircg_formats.h"

typedef struct {
	int rc; /* how many connections reference this struct */
	int dead;
	format_msg_t *fmt_msgs[NO_FMTS];
} php_fmt_msgs_t;

struct php_ircg_global {
	
	php_fmt_msgs_t **fmt_msgs;
	ircg_hash_table h_fmt_msgs;
	IRCG_LOCK(fmt_msgs_lock);

	/* these just serve statistical/entertainment purposes */
	unsigned long irc_connects, irc_set_currents, irc_quit_handlers, 
			exec_fmt_msgs, exec_token_compiler,
			irc_wbuf_destructs, failed_set_currents, max_concurrency;

	unsigned long fmt_sets_exist, fmt_sets_evicted, fmt_sets_updates, 
			fmt_sets_ignored, fmt_sets_created, fmt_sets_destroyed;
	unsigned long cache_hits, cache_misses;
	int highest_fd;

	time_t next_gc;

	struct errormsg *error_msgs;
	IRCG_LOCK(error_msgs_lock);
	
	php_fmt_msgs_t fmt_msgs_default_compiled;

	int is_fastcgi;
};

extern struct php_ircg_global *php_ircg;

time_t php_ircg_now(void);

int php_ircg_get_target_data(uid_t *uid, gid_t *gid TSRMLS_DC);

#endif

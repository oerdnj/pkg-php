/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2004 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.0 of the PHP license,       |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_0.txt.                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Sascha Schumann <sascha@schumann.cx>                         |
   +----------------------------------------------------------------------+
*/

/* $Id: ircg.c,v 1.200 2004/01/08 08:15:52 andi Exp $ */

/* {{{ includes */

#include <time.h>

#include <fcntl.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "php_ircg.h"
#include "ext/standard/html.h"

#include "ext/standard/php_lcg.h"

#include "ext/standard/info.h"
#include "ext/standard/basic_functions.h"

#ifdef PHP_WIN32
#include "win32/time.h"
#else
#include <sys/time.h>
#endif

#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif
#ifdef HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif
#ifdef HAVE_ARPA_INET_H
#include <arpa/inet.h>
#endif

/* }}} */

/* {{{ Definitions */

#include "php_ircg_conversion.h"
#include "php_ircg_cache.h"
#include "php_ircg_alloc.h"
#include "php_ircg_error.h"
#include "php_ircg_tokenizer.h"

#include "php_ircg_smart_str.h"
#include "php_ircg_private.h"

#ifdef USE_IRCONN_MANAGEMENT
static HashTable h_irconn; /* Integer IDs to php_irconn_t * */
static int irconn_id;
#endif

#ifdef USE_FD2IRCONN
static HashTable h_fd2irconn; /* fd's to Integer IDs */
#endif

struct php_ircg_global  *php_ircg;

static void *php_ircg_cb_msg_handle;
static void *php_ircg_cb_wbuf_handle;

/* initialized in the IRCG control process, so that we can avoid locking */
struct cache_entry *php_ircg_cache_entries;

#define SEEN_FD(fd) do { if ((fd) > php_ircg->highest_fd) php_ircg->highest_fd = (fd); } while (0)

/* }}} */

/* {{{ ircg_functions[] */
function_entry ircg_functions[] = {
#ifdef IRCG_PENDING_URL
	PHP_FE(ircg_set_on_die, NULL)
	PHP_FE(ircg_set_on_read_data, NULL)
#endif
	PHP_FE(ircg_pconnect, NULL)
	PHP_FE(ircg_set_current, NULL)
	PHP_FE(ircg_set_file, NULL)
	PHP_FE(ircg_join, NULL)
	PHP_FE(ircg_part, NULL)
	PHP_FE(ircg_msg, NULL)
	PHP_FE(ircg_notice, NULL)
	PHP_FE(ircg_nick, NULL)
	PHP_FE(ircg_topic, NULL)
	PHP_FE(ircg_channel_mode, NULL)
	PHP_FE(ircg_html_encode, NULL)
	PHP_FE(ircg_whois, NULL)
	PHP_FE(ircg_kick, NULL)
	PHP_FE(ircg_nickname_escape, NULL)
	PHP_FE(ircg_nickname_unescape, NULL)
	PHP_FE(ircg_ignore_add, NULL)
	PHP_FE(ircg_ignore_del, NULL)
	PHP_FE(ircg_disconnect, NULL)
	PHP_FE(ircg_fetch_error_msg, NULL)
	PHP_FE(ircg_is_conn_alive, NULL)
	PHP_FE(ircg_lookup_format_messages, NULL)
	PHP_FE(ircg_register_format_messages, NULL)
	PHP_FE(ircg_get_username, NULL)
	PHP_FE(ircg_eval_ecmascript_params, NULL)
	PHP_FE(ircg_names, NULL)
	PHP_FE(ircg_invite, NULL)
	PHP_FE(ircg_lusers, NULL)
	PHP_FE(ircg_oper, NULL)
	PHP_FE(ircg_who, NULL)
	PHP_FE(ircg_list, NULL)
	{NULL, NULL, NULL}	/* Must be the last line in ircg_functions[] */
};
/* }}} */

/* {{{ Structures, enumerations, definitions */

#if IRCG_API_VERSION - 0 < 20010303
# error "Please upgrade to at least IRCG 2.0b1"
#endif

typedef struct {
	irconn_t conn;
	smart_str buffer;
	time_t login;
	int fd;
	int irconn_id;
#if 0
	struct sockaddr_in sin; /* address of stream conn */
#endif
	php_fmt_msgs_t *fmt_msgs;
	irc_write_buf wb;
	ircg_hash_table ctcp_msgs;
	
#ifdef IRCG_PENDING_URL
	char *od_data; /* On_Die */
	size_t od_len;
	struct in_addr od_ip;
	short od_port;

	struct in_addr read_data_ip;
	short read_data_port;
	smart_str read_data_req;
#endif
	
	char bailout_on_trivial; /* Whether to handle trivial errors as fatal */
	
	char *ident; /* NOT available outside of ircg_pconnect or register_hooks */
	char *password; /* dito */
	char *realname; /* dito */
} php_irconn_t;


#define format_msg php_ircg_format_msg

static void msg_send(php_irconn_t *conn, smart_str *msg);

/* }}} */

/* {{{ Default format messages */

static char *fmt_msgs_default[] = {
	"%f@%6c: %m<br />",
	"%f: %m<br />",
	"To %t: %m<br />",
	"%f leaves %6c<br />",
	"%f joins %6c<br />",
	"%t was kicked by %f from %6c (%m)<br />",
	"%f changes topic on %6c to %m<br />",
	"Error: %m<br />",
	"Fatal Error: %m<br />",
	"",
	"",
	"%f changes nick to %t<br />",
	"%f quits (%m)<br />",
	"Welcome to channel %6c:",
	" %f",
	" are in the channel %6c<br />",
	"%f: user(%t) host(%c) real name(%m)<br />",
	"%f: server(%c) server info(%m)<br />",
	"%f has been idle for %m seconds<br />",
	"%f is on channel %6c<br />",
	"End of whois for %f<br />",
	"%f sets voice flag of %t to %m on %6c<br />",
	"%f sets channel operator flag of %t to %m on %6c<br />",
	"banned from %6c: %m<br />",
	"end of ban list for %6c<br />",
	"You have been disconnected<br />",
	"Channel %6c has %t users and the topic is '%m'<br />",
	"End of LIST<br />",
	"Nickname %t has ident %f, realname '%m', hostname %c, ",
	"is on server %t, has flag %f, hopcount %m, and channel %c.<br />",
	"End of WHO<br />",
	"%f has invited %t to %6c<br />",
	"[notice %6c] %f: %m<br />",
	"notice from %f: %m<br />",
	"notice to %t: %m<br />",
	"%t users, %f services, %r servers<br />",
	"%r operators<br />",
	"%r unknown connections<br />",
	"%r formed channels<br />",
	"I have %t clients and %r servers<br />",
};

ZEND_DECLARE_MODULE_GLOBALS(ircg);

PHP_INI_BEGIN()
	STD_PHP_INI_ENTRY("ircg.work_dir", "/tmp/ircg", PHP_INI_ALL, OnUpdateString, work_dir, zend_ircg_globals, ircg_globals)
	STD_PHP_INI_ENTRY("ircg.shared_mem_size", "6000000", PHP_INI_ALL, OnUpdateInt, shared_mem_size, zend_ircg_globals, ircg_globals)
	STD_PHP_INI_ENTRY("ircg.keep_alive_interval", "60", PHP_INI_ALL, OnUpdateInt, ka_interval, zend_ircg_globals, ircg_globals)
	STD_PHP_INI_ENTRY("ircg.max_format_message_sets", "12", PHP_INI_ALL, OnUpdateInt, max_fmt_msg_sets, zend_ircg_globals, ircg_globals)
	STD_PHP_INI_ENTRY("ircg.control_user", "nobody", PHP_INI_ALL, OnUpdateString, control_user, zend_ircg_globals, ircg_globals)

PHP_INI_END()

/* }}} */

/* {{{ Format-message accessor macros */

#define format_msg_cache(fmt, cache, chan, to, from, msg, res) \
	format_msg(fmt, chan, to, from, msg, res)
	
#define MSG(conn, type) \
	(conn->fmt_msgs->fmt_msgs[type])

#define FORMAT_MSG(conn, type, chan, to, from, msg, res, u, ulen) {			\
	format_msg(MSG(conn, type), chan, \
			to, from, msg, res, u, ulen, NULL);								\
}

/* }}} */

/* {{{ Helper-functions */

static void fmt_msgs_dtor(void *dummy)
{
	php_fmt_msgs_t *fmt_msgs = dummy;
	int i;

	for (i = 0; i < NO_FMTS; i++) {
		if (fmt_msgs->fmt_msgs[i])
			php_ircg_free_fmt_msg(fmt_msgs->fmt_msgs[i]);
	}
	php_ircg->fmt_sets_destroyed++;
	IRCG_SHARED_FREE(dummy);
}

static php_irconn_t *lookup_irconn(int id)
{
#ifdef USE_IRCONN_MANAGEMENT
	php_irconn_t **ret;
	
	if (ircg_hash_index_find(&h_irconn, id, (void **) &ret) == FAILURE)
		return NULL;
	return *ret;
#else
	return ircg_resource_get(id);
#endif
}

#ifdef USE_IRCONN_MANAGEMENT
#define put_irconn(a) do {} while(0)
#else
static void put_irconn(php_irconn_t *c)
{
	ircg_resource_put(c->irconn_id);
}
#endif

static php_fmt_msgs_t *lookup_fmt_msgs(zval **id, int inc)
{
	int *i;
	php_fmt_msgs_t *p;

	IRCG_LOCK_GET(php_ircg->fmt_msgs_lock);
	if (ircg_hash_find(&php_ircg->h_fmt_msgs, Z_STRVAL_PP(id), Z_STRLEN_PP(id),
				(void **) &i) == FAILURE) {
		IRCG_LOCK_PUT(php_ircg->fmt_msgs_lock);
		return NULL;
	}
	p = php_ircg->fmt_msgs[*i];
	
	assert(p != NULL);
	assert(p->dead == 0);
	
	if (inc) {
		p->rc++;
	}
	IRCG_LOCK_PUT(php_ircg->fmt_msgs_lock);
	
	return p;
}

static void fmt_msgs_drop_ref(php_fmt_msgs_t *p)
{
	IRCG_LOCK_GET(php_ircg->fmt_msgs_lock);

	assert(p->rc > 0);
	if (--p->rc == 0 && p->dead) {
		fmt_msgs_dtor(p);
	}
	
	IRCG_LOCK_PUT(php_ircg->fmt_msgs_lock);
}

static void irconn_dtor(void *dummy)
{
	php_irconn_t **conn = dummy;
	
	irc_disconnect(&(*conn)->conn, "Browser connection closed");
}

/* }}} */


static int is_my_conn(php_irconn_t *conn)
{
#if 0
	struct sockaddr_in sin;
	socklen_t len = sizeof(sin);

	if (getpeername(conn->fd, &sin, &len)) {
		if (errno == EBADF || errno == ENOTSOCK || errno == ENOTCONN)
			return 0;
		else
			/* closing a connection is better than leaking fds */
			return 1;
	}

	if (sin.sin_addr.s_addr == conn->sin.sin_addr.s_addr 
			&& sin.sin_port == conn->sin.sin_port)
#endif
		return 1;
	return 0;
}

/* {{{ quit_handler */

static void quit_handler(irconn_t *c, void *dummy)
{
	php_irconn_t *conn = dummy;

	php_ircg->irc_quit_handlers++;

#ifdef USE_IRCONN_MANAGEMENT
	ircg_hash_index_del(&h_irconn, conn->irconn_id);
#endif

	if (conn->fd > -1) {
		smart_str m = {0};

		FORMAT_MSG(conn, FMT_MSG_DISCONNECTED, NULL, NULL, NULL, NULL,
			&m, conn->conn.username, conn->conn.username_len);
		msg_send(conn, &m);

#ifdef USE_FD2IRCONN
		ircg_hash_index_del(&h_fd2irconn, conn->fd);
		if (is_my_conn(conn))
			shutdown(conn->fd, 2);
#endif
		conn->fd = -1;
		irc_write_buf_del(&conn->wb);
	}

	if (conn->fmt_msgs->rc > 0) {
		fmt_msgs_drop_ref(conn->fmt_msgs);
	}
	
	ircg_hash_destroy(&conn->ctcp_msgs);
	smart_str_free(&conn->read_data_req);
	smart_str_free_ex(&conn->buffer, 1);
	
#ifdef IRCG_PENDING_URL
	if (conn->od_port) {
		irc_add_pending_url(conn->od_ip, conn->od_port, conn->od_data, 
				conn->od_len);
		IRCG_SHARED_FREE(conn->od_data);
	}
#endif
	
	memset(conn, 0xbb, sizeof *conn);
	IRCG_SHARED_FREE(conn);
}
/* }}} */



/* {{{ HTTP-related */

#include "SAPI.h"

#define ADD_HEADER(a) sapi_add_header(a, sizeof(a) - 1, 1)

#ifdef USE_FD2IRCONN
static void http_closed_connection(int fd)
{
	int *id, stored_id;

	if (ircg_hash_index_find(&h_fd2irconn, fd, (void **) &id) == FAILURE)
		return;

	stored_id = *id;

	ircg_hash_index_del(&h_fd2irconn, fd);
#ifdef USE_IRCONN_MANAGEMENT
	ircg_hash_index_del(&h_irconn, stored_id);
#endif
}
#endif

/* }}} */

time_t php_ircg_now(void)
{
	struct timeval now;

#if IRCG_API_VERSION >= 20010601
	now.tv_sec = ircg_now_time_t;
	if (now.tv_sec == (time_t) 0) 
#endif
		gettimeofday(&now, NULL);

	return now.tv_sec;
}

#define WINDOW_TIMEOUT (3 * 60)

static const char timeout_message[] = "Timed out waiting for streaming window";

/* {{{ Message-delivery */
static void msg_accum_send(php_irconn_t *conn, smart_str *msg)
{
	int n;
	
	if (msg->c == 0) return;

	switch (conn->fd) {
	case -1: /* No message window yet. Buffer */
		if ((php_ircg_now() - conn->login) > WINDOW_TIMEOUT) {
			irc_disconnect(&conn->conn, timeout_message);
			goto done;
		}
		smart_str_append_ex(&conn->buffer, msg, 1);
		goto done;
	default:
#if IRCG_API_VERSION - 0 >= 20010601
		if ((n = irc_write_buf_append_ex(&conn->wb, msg, 0))) {
			const char *reason;
		
#if IRCG_API_VERSION - 0 >= 20020308	
			switch (n) {
			case D_OVERFLOW:
				reason = "Client is too slow, client-specific queue full";
				break;
			case D_POLL_ERROR:
				reason = "Poll failed. The connection is bad.";
				break;
			case D_CORRUPT_QUEUE:
				reason = "Internal failure: Corrupt queue";
				break;
			default:
				if (n < 0)
					reason = strerror(-n);
				else
#else
			{
#endif
					reason = "Write to HTTP client failed for no reason";
			}

			irc_disconnect(&conn->conn, reason);
		}
		return;
#elif IRCG_API_VERSION - 0 >= 20010302
		irc_write_buf_append_ex(&conn->wb, msg, 0); /* no copy */
		return;
#else
		irc_write_buf_append(&conn->wb, msg);
#endif
		break;
	}


done:
	smart_str_free_ex(msg, 1);
}

static void msg_send(php_irconn_t *conn, smart_str *msg)
{
	msg_accum_send(conn, msg);
	if (conn->fd >= 0)
		irc_write_buf_flush(&conn->wb);
}

static void msg_replay_buffer(php_irconn_t *conn)
{
	msg_accum_send(conn, &conn->buffer);
	conn->buffer.c = NULL;
	conn->buffer.len = conn->buffer.a = 0;
}
/* }}} */

/* {{{ IRCG-handlers */
static void handle_ctcp(php_irconn_t *conn, smart_str *chan, smart_str *from,
		smart_str *to, smart_str *msg, smart_str *result)
{
	char *token;
	char *token_end;
	char *ctcp_arg;
	char *ctcp_arg_end;
	format_msg_t **fmt_msg_p;
	smart_str tmp = {0};
	int status = 0;

	token = msg->c + 1;
	token_end = strchr(token, 1);

	if (!token_end) return;

	*token_end = 0;
	
	ctcp_arg = strchr(token, ' ');
	
	if (ctcp_arg) {
		ctcp_arg_end = token_end;
		token_end = ctcp_arg;
		*token_end = 0;
		ctcp_arg++;
		smart_str_setl(&tmp, ctcp_arg, ctcp_arg_end - ctcp_arg);
	}
	
	if (ircg_hash_find(&conn->ctcp_msgs, token, token_end - token, 
				(void **) &fmt_msg_p) != SUCCESS) {
		return;
	}
		
	format_msg(*fmt_msg_p, chan, to, from, &tmp, result, 
			conn->conn.username, conn->conn.username_len, &status);

	if (status == 1) {
		irc_disconnect(&conn->conn, "Connection terminated by "
				"authenticated CTCP message");
	}
}

static void msg_handler(irconn_t *ircc, smart_str *chan, smart_str *from,
		smart_str *msg, void *conn_data, void *chan_data)
{
	php_irconn_t *conn = conn_data;
	smart_str m = {0};
	smart_str s_username;

	smart_str_setl(&s_username, ircc->username, ircc->username_len);

	if (msg->c[0] == '\001') {
		handle_ctcp(conn, chan, from, chan?chan:&s_username, msg, &m);
	} else if (chan) {
		FORMAT_MSG(conn, FMT_MSG_CHAN, chan, &s_username, from, msg, &m, conn->conn.username, conn->conn.username_len);
	} else {
		FORMAT_MSG(conn, FMT_MSG_PRIV_TO_ME, NULL, &s_username, from,
				msg, &m, conn->conn.username, conn->conn.username_len);
	}

	msg_send(conn, &m);
}

static void notice_handler(irconn_t *ircc, smart_str *chan, smart_str *from,
		smart_str *msg, void *conn_data, void *chan_data)
{
	php_irconn_t *conn = conn_data;
	smart_str m = {0};
	smart_str s_username;

	smart_str_setl(&s_username, ircc->username, ircc->username_len);

	if (msg->c[0] == '\001') {
		handle_ctcp(conn, chan, from, chan?chan:&s_username, msg, &m);
	} else if (chan) {
		FORMAT_MSG(conn, FMT_MSG_NOTICE_CHAN, chan, &s_username, from, msg, &m, conn->conn.username, conn->conn.username_len);
	} else {
		FORMAT_MSG(conn, FMT_MSG_NOTICE_TO_ME, NULL, &s_username, from,
				msg, &m, conn->conn.username, conn->conn.username_len);
	}

	msg_send(conn, &m);
}

static void nick_handler(irconn_t *c, smart_str *oldnick, smart_str *newnick,
		void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_NICK, NULL, newnick, oldnick, NULL,
			&m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void whois_user_handler(irconn_t *c, smart_str *nick, smart_str *user,
		smart_str *host, smart_str *real_name, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_WHOIS_USER, host, user, nick,
			real_name, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}


static void whois_server_handler(irconn_t *c, smart_str *nick, 
		smart_str *server, smart_str *server_info, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_WHOIS_SERVER, server, NULL, nick,
			server_info, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}


static void whois_idle_handler(irconn_t *c, smart_str *nick, 
		smart_str *idletime, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_WHOIS_IDLE, NULL, NULL, nick,
			idletime, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void end_of_whois_handler(irconn_t *c, smart_str *nick, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_WHOIS_END, NULL, NULL, nick, NULL, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}


static void whois_channels_handler(irconn_t *c, smart_str *nick, 
		smart_str *channels, int nr, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};
	int i;
	
	for (i = 0; i < nr; i++) {
		FORMAT_MSG(conn, FMT_MSG_WHOIS_CHANNEL, &channels[i], NULL, 
				nick, NULL, &m, conn->conn.username, conn->conn.username_len);
	}
	msg_send(conn, &m);
}

static void list_handler(irconn_t *c, smart_str *channel, smart_str *visible,
		smart_str *topic, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_LIST, channel, visible, NULL, topic, &m, 
			conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void listend_handler(irconn_t *c, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_LISTEND, NULL, NULL, NULL, NULL, &m,
			conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

#if IRCG_API_VERSION >= 20021115

static void whoreply_handler(irconn_t *c, smart_str *chan, smart_str *user,
        smart_str *host, smart_str *server, smart_str *nick, smart_str *flag,
        smart_str *hopcount, smart_str *realname, void *dummy,
        void *chan_data)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_WHOREPLY1, host, nick, user, realname, &m,
			conn->conn.username, conn->conn.username_len);

	FORMAT_MSG(conn, FMT_MSG_WHOREPLY2, chan, server, flag, hopcount, &m,
			conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void endofwho_handler(irconn_t *c, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_ENDOFWHO, NULL, NULL, NULL, NULL, &m,
			conn->conn.username, conn->conn.username_len);

	msg_send(conn, &m);
}

#endif

#if IRCG_API_VERSION >= 20021117

static void invite_handler(irconn_t *c, smart_str *nick, smart_str *chan, int mode, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};
	smart_str *from, *to, tmp = {0};
	
	smart_str_setl(&tmp, conn->conn.username, conn->conn.username_len);
	if (mode == 1) {
		from = &tmp;
		to = nick;
	} else {
		from = nick;
		to = &tmp;
	}
		
	FORMAT_MSG(conn, FMT_MSG_INVITE, chan, to, from, NULL, &m,
			conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

#endif

static void luserclient_handler(irconn_t *c, smart_str *users, smart_str *services, smart_str *servers, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_LUSERCLIENT, NULL, users, services, servers, &m,
			conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void luserme_handler(irconn_t *c, smart_str *users, smart_str *servers, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_LUSERME, NULL, users, NULL, servers, &m,
			conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void luserop_handler(irconn_t *c, smart_str *str, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_LUSEROP, NULL, NULL, NULL, str, &m,
			conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void luserunknown_handler(irconn_t *c, smart_str *str, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_LUSERUNKNOWN, NULL, NULL, NULL, str, &m,
			conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void luserchannels_handler(irconn_t *c, smart_str *str, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_LUSERCHANNELS, NULL, NULL, NULL, str, &m,
			conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

/* }}} */

static void error_handler(irconn_t *ircc, int id, int fatal, smart_str *msg, void *conn_data)
{
	php_irconn_t *conn = conn_data;
	smart_str m = {0};
	smart_str s_username;
	smart_str tmp;
	int disconn = 0;

	if (conn->bailout_on_trivial) {
		if (id == 474 || id == 475) {
			fatal = disconn = 1;
		}
	}
	
	smart_str_setl(&tmp, "IRC SERVER", sizeof("IRC SERVER") - 1);
	smart_str_setl(&s_username, ircc->username, ircc->username_len);
	FORMAT_MSG(conn, fatal ? FMT_MSG_FATAL_ERROR : FMT_MSG_ERROR, NULL, 
			&s_username, &tmp, msg, &m, conn->conn.username, conn->conn.username_len);

	if (fatal) {
		php_ircg_add_error_msg(msg, id, conn->irconn_id);
	}
	
	msg_send(conn, &m);

	/* Fatal messages from the IRCG layer automatically call irc_disconnect; 
	   if we simulate a fatal error, we need to do that manually */
	if (disconn)
		irc_disconnect(ircc, "A fatal error occured");
}

/* {{{ IRCG-handlers */
static void banlist_handler(irconn_t *ircc, smart_str *channel, smart_str *mask, void *conn_data)
{
	php_irconn_t *conn = conn_data;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_BANLIST, channel, NULL, NULL, mask, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void end_of_banlist_handler(irconn_t *ircc, smart_str *channel, void *conn_data)
{
	php_irconn_t *conn = conn_data;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_BANLIST_END, channel, NULL, NULL, NULL, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void user_add_single(php_irconn_t *conn, smart_str *channel, smart_str *users)
{
	smart_str m = {0};
	FORMAT_MSG(conn, FMT_MSG_JOIN, channel, NULL, &users[0],
			NULL, &m, conn->conn.username, conn->conn.username_len);
	FORMAT_MSG(conn, FMT_MSG_JOIN_LIST_END, channel, NULL, NULL,
		NULL, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void user_add_multiple(php_irconn_t *conn, smart_str *channel, smart_str *users, int nr)
{
	int i;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_MASS_JOIN_BEGIN, channel, NULL, NULL,
			NULL, &m, conn->conn.username, conn->conn.username_len);
	for (i = 0; i < nr; i++) {
		FORMAT_MSG(conn, FMT_MSG_MASS_JOIN_ELEMENT, channel, NULL,
				&users[i], NULL, &m, conn->conn.username, conn->conn.username_len);
	}

	FORMAT_MSG(conn, FMT_MSG_MASS_JOIN_END, channel, NULL, NULL,
			NULL, &m, conn->conn.username, conn->conn.username_len);


	msg_send(conn, &m);
}

#if IRCG_API_VERSION >= 20021109

static void user_add_ex(irconn_t *ircc, smart_str *channel, smart_str *users,
		int nr, int namelist, void *dummy)
{
	if (namelist) {
		user_add_multiple(dummy, channel, users, nr);
	} else {
		user_add_single(dummy, channel, users);
	}
}

#else

static void user_add(irconn_t *ircc, smart_str *channel, smart_str *users,
		int nr, void *dummy)
{
	if (nr > 1) {
		user_add_multiple(dummy, channel, users, nr);
	} else {
		user_add_single(dummy, channel, users);
	}
}

#endif

static void new_topic(irconn_t *ircc, smart_str *channel, smart_str *who, smart_str *topic, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_TOPIC, channel, NULL, who, topic, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void part_handler(irconn_t *ircc, smart_str *channel, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};
	smart_str s_username;

	smart_str_setl(&s_username, ircc->username, ircc->username_len);

	FORMAT_MSG(conn, FMT_MSG_SELF_PART, channel, NULL, &s_username, 
			NULL, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void user_leave(irconn_t *ircc, smart_str *channel, smart_str *user, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_LEAVE, channel, NULL, user, NULL, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void user_quit(irconn_t *ircc, smart_str *user, smart_str *msg, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	FORMAT_MSG(conn, FMT_MSG_QUIT, NULL, NULL, user, msg, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

static void idle_recv_queue(irconn_t *ircc, void *dummy)
{
	php_irconn_t *conn = dummy;

	
	if (conn->fd >= 0) {
		smart_str tmp = {0};

		smart_str_setl(&tmp, " \n" , 2);
		irc_write_buf_append_ex(&conn->wb, &tmp, 1);
		irc_write_buf_flush(&conn->wb);
	} else if ((php_ircg_now() - conn->login) > WINDOW_TIMEOUT) {
		char buf[1024];

		sprintf(buf, "timeout after %ld seconds (%ld, %ld)", 
				php_ircg_now()-conn->login,
				php_ircg_now(), conn->login);
		irc_disconnect(ircc, buf);
	}
}

static void user_kick(irconn_t *ircc, smart_str *channel, smart_str *who, smart_str *kicked_by, smart_str *reason, void *dummy)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};

	if (conn->bailout_on_trivial && who->len == ircc->username_len && memcmp(who->c, ircc->username, who->len) == 0) {
		irc_disconnect(ircc, "Bailout on trivial: KICK");
	}
	FORMAT_MSG(conn, FMT_MSG_KICK, channel, who, kicked_by, reason, &m, conn->conn.username, conn->conn.username_len);
	msg_send(conn, &m);
}

#if IRCG_API_VERSION >= 20010307
static void mode_channel_handler(irconn_t *ircc, smart_str *nick,
		smart_str *channel, smart_str *who, int mode, int give, void *dummy,
		void *dummy2)
{
	php_irconn_t *conn = dummy;
	smart_str m = {0};
	smart_str what;

	if (give)
		smart_str_setl(&what, "1", 1);
	else
		smart_str_setl(&what, "0", 1);
	
	if (mode & IRCG_MODE_VOICE) {
		FORMAT_MSG(conn, FMT_MSG_MODE_VOICE, channel, nick, who, &what, 
				&m, conn->conn.username, conn->conn.username_len);
		msg_send(conn, &m);
	}
	if (mode & IRCG_MODE_OP) {
		FORMAT_MSG(conn, FMT_MSG_MODE_OP, channel, nick, who, &what, &m, conn->conn.username, conn->conn.username_len);
		msg_send(conn, &m);
	}
}
#endif
/* }}} */

/* {{{ proto bool ircg_set_on_read_data(int connection, string host, int port, string data) 
   Set action to be executed when data is received from a HTTP client */
PHP_FUNCTION(ircg_set_on_read_data)
{
	zval **p1, **p2, **p3, **p4;
	php_irconn_t *conn;
	
	if (ZEND_NUM_ARGS() != 4 || zend_get_parameters_ex(4, &p1, &p2, &p3, &p4) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);

	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;
	
	convert_to_string_ex(p2);
	convert_to_long_ex(p3);
	convert_to_string_ex(p4);

	if (inet_aton(Z_STRVAL_PP(p2), &conn->read_data_ip) != 0) {
		conn->read_data_port = Z_LVAL_PP(p3);
		
		smart_str_appendl(&conn->read_data_req, Z_STRVAL_PP(p4), Z_STRLEN_PP(p4));
		RETVAL_TRUE;
	} else {
		RETVAL_FALSE;
	}
	
	put_irconn(conn);
}
/* }}} */

/* {{{ proto bool ircg_set_on_die(int connection, string host, int port, string data) 
   Sets hostaction to be executed when connection dies */
#ifdef IRCG_PENDING_URL
PHP_FUNCTION(ircg_set_on_die)
{
	zval **p1, **p2, **p3, **p4;
	php_irconn_t *conn;
	
	if (ZEND_NUM_ARGS() != 4 || zend_get_parameters_ex(4, &p1, &p2, &p3, &p4) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);

	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;
	
	convert_to_string_ex(p2);
	convert_to_long_ex(p3);
	convert_to_string_ex(p4);

	if (inet_aton(Z_STRVAL_PP(p2), &conn->od_ip) != 0) {
		conn->od_port = Z_LVAL_PP(p3);
		conn->od_data = IRCG_SHARED_ALLOC(Z_STRLEN_PP(p4));
		memcpy(conn->od_data, Z_STRVAL_PP(p4), Z_STRLEN_PP(p4));
		conn->od_len = Z_STRLEN_PP(p4);
		RETVAL_TRUE;
	} else {
		RETVAL_FALSE;
	}
	
	put_irconn(conn);
}
#endif
/* }}} */

/* {{{ proto string ircg_get_username(int connection)
   Gets username for connection */
PHP_FUNCTION(ircg_get_username)
{
	zval **p1;
	php_irconn_t *conn;

	if (ZEND_NUM_ARGS() != 1 || zend_get_parameters_ex(1, &p1) == FAILURE)
		WRONG_PARAM_COUNT;
	
	convert_to_long_ex(p1);

	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;

	RETVAL_STRINGL((char *) conn->conn.username, conn->conn.username_len, 1);

	put_irconn(conn);
}
/* }}} */

static void wbuf_hooks(irc_write_buf *p, void *data);

/* {{{ proto bool ircg_set_file(int connection, string path)
   Sets logfile for connection */
PHP_FUNCTION(ircg_set_file)
{
	zval **p1, **p2;
	php_irconn_t *conn;
	int do_put = 1;
	
	if (IRCGG(flush_data)) {
		php_error(E_WARNING, "ircg_set_file/_current must not be called multiple times during one request");
		RETURN_FALSE;
	}
	
	if (ZEND_NUM_ARGS() != 2 || zend_get_parameters_ex(2, &p1, &p2) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);
	convert_to_string_ex(p2);

	conn = lookup_irconn(Z_LVAL_PP(p1));

	RETVAL_FALSE;

	if (!conn) return;

	if (conn->fd != -1) {
		php_error(E_WARNING, "ircg_set_file cannot be used together with "
				"ircg_set_current.");
		goto out;
	}
   
	conn->fd = open(Z_STRVAL_PP(p2), O_WRONLY|O_CREAT|O_TRUNC|O_APPEND, 0644);
	if (conn->fd == -1) {
			goto out;
	}
	SEEN_FD(conn->fd);
   
	if (fcntl(conn->fd, F_SETFD, 1)) {
		close(conn->fd);
		conn->fd = -1;
		goto out;
	}

	if (irc_write_buf_add_ex(&conn->wb, conn->fd, wbuf_hooks, conn) == 0) {
		ircg_resource_get(conn->irconn_id);
		
		IRCGG(flush_data) = conn;
		do_put = 0;
		
		RETVAL_TRUE;
	} else {
		close(conn->fd);
		conn->fd = -1;
	}

out:

	if (do_put)
		put_irconn(conn);
}
/* }}} */

static void wbuf_closed_conn(irc_write_buf *p, void *data)
{
	php_ircg->irc_wbuf_destructs++;
	irc_disconnect(data, "Client connection terminated");
}

static void wbuf_add_complete(irc_write_buf *p, void *data)
{
	put_irconn(data);
}

#include "ext/standard/url.h"

static void wbuf_read_data(irc_write_buf *p, void *data, smart_str *s)
{
	php_irconn_t *conn = (php_irconn_t *) data;
	smart_str enc = {0};
	smart_str req = {0};
	
	enc.c = php_url_encode(s->c, s->len, &enc.len);

	smart_str_append(&req, &conn->read_data_req);
	smart_str_appends(&req, "Connection: close\r\n"
			"Content-Type: "
			"application/x-www-form-urlencoded\r\n"
			"Content-Length: ");
	smart_str_append_long(&req, enc.len + 5);
	smart_str_appends(&req, "\r\n\r\ndata=");
	smart_str_append(&req, &enc);
	
	efree(enc.c);

	irc_add_pending_url(conn->read_data_ip, conn->read_data_port,
			req.c, req.len);

	smart_str_free(&req);
}

IRCG_CB_MAP_START(php_ircg_cb_wbuf)
	IRCG_CB_MAP_ENTRY(wbuf_closed_conn)
	IRCG_CB_MAP_ENTRY(wbuf_add_complete)
	IRCG_CB_MAP_ENTRY(wbuf_read_data)
IRCG_CB_MAP_END()

static void wbuf_hooks(irc_write_buf *p, void *data)
{
	php_irconn_t *conn = (php_irconn_t *) data;

	irc_write_buf_reg(p, WB_MAP_HANDLE, (irc_hook) php_ircg_cb_wbuf_handle);
	irc_write_buf_reg(p, WB_CLOSED_CONN, wbuf_closed_conn);
	irc_write_buf_reg(p, WB_ADD_COMPLETE, wbuf_add_complete);
	
	if (conn->read_data_port)
		irc_write_buf_reg(p, WB_READ_DATA, wbuf_read_data);
}

#ifndef USE_FD2IRCONN
#define php_ircg_register_closed_connection(a) (0)
#endif

/* {{{ proto bool ircg_set_current(int connection)
   Sets current connection for output */
PHP_FUNCTION(ircg_set_current)
{
	zval **p1;
	php_irconn_t *conn;
	int do_put = 1;
	int n;
	
	if (IRCGG(flush_data)) {
		php_error(E_WARNING, "ircg_set_file/_current must not be called multiple times during one request");
		RETURN_FALSE;
	}

	if (ZEND_NUM_ARGS() != 1 || zend_get_parameters_ex(1, &p1) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);
	
	RETVAL_FALSE;

	if (SG(headers_sent)) {
		char *output_start_filename = php_get_output_start_filename(TSRMLS_C);
		int output_start_lineno = php_get_output_start_lineno(TSRMLS_C);

		if (output_start_filename) {
			php_error(E_WARNING, "Please ensure that ircg_set_current is "
					"called before your script generates any output. "
					"(output started at %s:%d)",
					output_start_filename, output_start_lineno);
		} else {
			php_error(E_WARNING, "Please ensure that ircg_set_current is "
					"called before your script generates any output");
		}
		return;
	}

	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) return;

	if (conn->fd >= 0) {
#if WRITE_BUF_SUPPORTS_ASYNC_OPERATION_LIKE_WE_WOULD_NEED_IT
#ifdef USE_FD2IRCONN
		/* There is a HTTP connection alive, kill it */
		ircg_hash_index_del(&h_fd2irconn, conn->fd);
#endif
		irc_write_buf_del(&conn->wb);
		conn->fd = -1;
#else
		php_error(E_WARNING, "You called ircg_set_current/_file for this connection before. This is not supported at this time. Ignoring this call.");
		goto out;
#endif
	}
	
	if (php_ircg_register_with_sapi(&conn->fd TSRMLS_CC) 
			|| php_ircg_register_closed_connection(http_closed_connection)
			|| fcntl(conn->fd, F_GETFL) == -1) {
#ifdef USE_IRCONN_MANAGEMENT
		ircg_hash_index_del(&h_irconn, Z_LVAL_PP(p1));
#endif
		php_error(E_WARNING, "Failed to obtain the socket of the current "
				"HTTP connection");
		goto out;
	}

	if (conn->fd == -1)
		goto out;
	
	SEEN_FD(conn->fd);
	
#ifdef USE_FD2IRCONN
	ircg_hash_index_update(&h_fd2irconn, conn->fd, &Z_LVAL_PP(p1), 
			sizeof(int), NULL);
#endif

#if IRCG_API_VERSION < 20021127
#define ircg_resource_get(a) do {} while (0)
	irc_write_buf_add(&conn->wb, conn->fd);
	n = 0;
#else
	n = irc_write_buf_add_ex(&conn->wb, conn->fd, wbuf_hooks, conn);
#endif
		
	if (n == 0) {
		ircg_resource_get(conn->irconn_id);
		php_ircg->irc_set_currents++;
		IRCGG(flush_data) = conn;

		if (php_ircg->is_fastcgi)
			irc_write_buf_reg(&conn->wb, WB_FILTER_FUNC, irc_write_buf_filter_fastcgi);

		/* We maintain a reference to conn until rshutdown */
		do_put = 0;
		RETVAL_TRUE;
	} else {
		php_ircg->failed_set_currents++;
		conn->fd = -1;
	}

out:
	if (do_put)
		put_irconn(conn);
}
/* }}} */

/* {{{ proto string ircg_nickname_escape(string nick) 
   Escapes special characters in nickname to be IRC-compliant */
PHP_FUNCTION(ircg_nickname_escape)
{
	zval **p1;
	smart_str in;
	smart_str out = {0};

	if (ZEND_NUM_ARGS() != 1 || zend_get_parameters_ex(1, &p1) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_string_ex(p1);

	smart_str_setl(&in, Z_STRVAL_PP(p1), Z_STRLEN_PP(p1));

	php_ircg_nickname_escape(&in, &out);
	smart_str_0(&out);
	
	RETVAL_STRINGL(out.c, out.len, 1);

	smart_str_free_ex(&out, 1);
}
/* }}} */

/* {{{ proto string ircg_nickname_unescape(string nick)
   Decodes encoded nickname */
PHP_FUNCTION(ircg_nickname_unescape)
{
	zval **p1;
	smart_str in;
	smart_str out = {0};

	if (ZEND_NUM_ARGS() != 1 || zend_get_parameters_ex(1, &p1) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_string_ex(p1);

	smart_str_setl(&in, Z_STRVAL_PP(p1), Z_STRLEN_PP(p1));

	php_ircg_nickname_unescape(&in, &out);
	smart_str_0(&out);
	
	RETVAL_STRINGL(out.c, out.len, 1);

	smart_str_free_ex(&out, 1);
}
/* }}} */

/* {{{ proto bool ircg_join(int connection, string channel [, string chan-key])
   Joins a channel on a connected server */
PHP_FUNCTION(ircg_join)
{
	zval **p1, **p2, **p3;
	php_irconn_t *conn;
	char *key = NULL;

	if (ZEND_NUM_ARGS() < 2 || ZEND_NUM_ARGS() > 3
			|| zend_get_parameters_ex(ZEND_NUM_ARGS(), &p1, &p2, &p3) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);
	convert_to_string_ex(p2);

	if (ZEND_NUM_ARGS() > 2) {
		convert_to_string_ex(p3);
		key = Z_STRVAL_PP(p3);
	}
	
	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;
	
	irc_join(&conn->conn, Z_STRVAL_PP(p2), key,  conn);

	put_irconn(conn);

	RETVAL_TRUE;
}
/* }}} */

/* {{{ proto bool ircg_oper(int connection, string name, string password)
   Elevates privileges to IRC OPER */
PHP_FUNCTION(ircg_oper)
{
	zval **p1, **p2, **p3;
	php_irconn_t *conn;

	if (ZEND_NUM_ARGS() != 3
			|| zend_get_parameters_ex(ZEND_NUM_ARGS(), &p1, &p2, &p3) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);
	convert_to_string_ex(p2);
	convert_to_string_ex(p3);

	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;

	irc_handle_command(&conn->conn, "OPER", 2, Z_STRVAL_PP(p2), Z_STRVAL_PP(p3));
	put_irconn(conn);
	RETVAL_TRUE;
}
/* }}} */

/* {{{ proto bool ircg_whois( int connection, string nick)
   Queries user information for nick on server */
#if IRCG_API_VERSION - 0 >= 20010227
PHP_FUNCTION(ircg_whois)
{
	zval **p1, **p2;
	php_irconn_t *conn;

	if (ZEND_NUM_ARGS() != 2 || zend_get_parameters_ex(2, &p1, &p2) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);
	convert_to_string_ex(p2);

	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;
	
	irc_handle_command(&conn->conn, "WHOIS", 1, Z_STRVAL_PP(p2));

	put_irconn(conn);
	RETVAL_TRUE;
}
#endif
/* }}} */

/* {{{ proto bool ircg_ignore_add(resource connection, string nick)
   Adds a user to your ignore list on a server */
#if IRCG_API_VERSION - 0 >= 20010402
PHP_FUNCTION(ircg_ignore_add)
{
	zval **args[2];
	php_irconn_t *conn;
	smart_str s;

	if (ZEND_NUM_ARGS() != 2 || zend_get_parameters_array_ex(2, args) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(args[0]);
	convert_to_string_ex(args[1]);

	conn = lookup_irconn(Z_LVAL_PP(args[0]));
	if (!conn) RETURN_FALSE;

	smart_str_setl(&s, Z_STRVAL_PP(args[1]), Z_STRLEN_PP(args[1]));
	if (irc_ignore_check(&conn->conn, &s) == 0)
		irc_ignore_add(&conn->conn, &s, 1);

	put_irconn(conn);
}
#endif
/* }}} */

/* {{{ proto array ircg_fetch_error_msg(int connection)
   Returns the error from previous ircg operation */
PHP_FUNCTION(ircg_fetch_error_msg)
{
	zval **args[2];
	struct errormsg *m;

	if (ZEND_NUM_ARGS() != 1 || zend_get_parameters_array_ex(1, args) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(args[0]);

	m = php_ircg_lookup_and_remove_error_msg(Z_LVAL_PP(args[0]));

	if (!m) RETURN_FALSE;

	array_init(return_value);
	add_index_long(return_value, 0, m->msgid);
	add_index_stringl(return_value, 1, m->msg.c, m->msg.len, 1);
	php_ircg_error_msg_dtor(m);
}
/* }}} */

/* {{{ proto bool ircg_ignore_del(int connection, string nick)
   Removes a user from your ignore list */
#if IRCG_API_VERSION - 0 >= 20010402
PHP_FUNCTION(ircg_ignore_del)
{
	zval **args[2];
	php_irconn_t *conn;
	smart_str s;

	if (ZEND_NUM_ARGS() != 2 || zend_get_parameters_array_ex(2, args) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(args[0]);
	convert_to_string_ex(args[1]);

	conn = lookup_irconn(Z_LVAL_PP(args[0]));
	if (!conn) RETURN_FALSE;

	smart_str_setl(&s, Z_STRVAL_PP(args[1]), Z_STRLEN_PP(args[1]));
	if (irc_ignore_del(&conn->conn, &s)) {
		RETVAL_FALSE;
	} else {
		RETVAL_TRUE;
	}
	put_irconn(conn);
}
#endif
/* }}} */

/* {{{ proto bool ircg_channel_mode(int connection, string channel, string mode_spec, string nick)
   Sets channel mode flags for user */
#if IRCG_API_VERSION - 0 >= 20010227
PHP_FUNCTION(ircg_channel_mode)
{
	zval **args[4];
	php_irconn_t *conn;

	if (ZEND_NUM_ARGS() != 4 || zend_get_parameters_array_ex(4, args) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(args[0]);
	convert_to_string_ex(args[1]);
	convert_to_string_ex(args[2]);
	convert_to_string_ex(args[3]);

	conn = lookup_irconn(Z_LVAL_PP(args[0]));
	if (!conn) RETURN_FALSE;
	
	irc_handle_command(&conn->conn, "MODE", Z_STRLEN_PP(args[3]) > 0 ? 3 : 2, 
			Z_STRVAL_PP(args[1]),
			Z_STRVAL_PP(args[2]), Z_STRVAL_PP(args[3]));
	put_irconn(conn);
	RETVAL_TRUE;
}
#endif
/* }}} */

/* {{{ proto bool ircg_topic(int connection, string channel, string topic)
   Sets topic for channel */
#if IRCG_API_VERSION - 0 >= 20010226
PHP_FUNCTION(ircg_topic)
{
	zval **p1, **p2, **p3;
	php_irconn_t *conn;

	if (ZEND_NUM_ARGS() != 3 || zend_get_parameters_ex(3, &p1, &p2, &p3) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);
	convert_to_string_ex(p2);
	convert_to_string_ex(p3);

	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;
	
	irc_handle_command(&conn->conn, "TOPIC", 2, Z_STRVAL_PP(p2), Z_STRVAL_PP(p3));
	put_irconn(conn);
	RETVAL_TRUE;
}
#endif
/* }}} */

/* {{{ proto string ircg_html_encode(string html_text)
   Encodes HTML preserving output */
PHP_FUNCTION(ircg_html_encode)
{
	zval **p1, **p2, **p3;
	smart_str res = {0};
	int auto_links = 1;
	int conv_br = 0;
	
	if (ZEND_NUM_ARGS() < 1 || ZEND_NUM_ARGS() > 3
		   	|| zend_get_parameters_ex(ZEND_NUM_ARGS(), &p1, &p2, &p3) == FAILURE)
		WRONG_PARAM_COUNT;

	switch (ZEND_NUM_ARGS()) {
		case 3:
			convert_to_boolean_ex(p3);
			conv_br = Z_LVAL_PP(p3);
		case 2:
			convert_to_boolean_ex(p2);
			auto_links = Z_LVAL_PP(p2);
		case 1:
			convert_to_string_ex(p1);
	}
	
	ircg_mirc_color(Z_STRVAL_PP(p1), &res, Z_STRLEN_PP(p1), auto_links, conv_br);

	RETVAL_STRINGL(res.c, res.len, 1);

	smart_str_free_ex(&res, 1);
}
/* }}} */

/* {{{ proto bool ircg_who(int connection, string mask [, bool ops_only])
   Queries server for WHO information */
#if IRCG_API_VERSION >= 20021115
PHP_FUNCTION(ircg_who)
{
	int ops = 0;
	zval **p1, **p2, **p3;
	php_irconn_t *conn;
	
	if (ZEND_NUM_ARGS() < 2 || ZEND_NUM_ARGS() > 3
			|| zend_get_parameters_ex(ZEND_NUM_ARGS(), &p1, &p2, &p3) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);
	convert_to_string_ex(p2);

	if (ZEND_NUM_ARGS() > 2) {
		convert_to_boolean_ex(p3);
		ops = Z_BVAL_PP(p3);
	}
	
	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;

	irc_handle_command(&conn->conn, "WHO", ops ? 2 : 1, Z_STRVAL_PP(p2), "o");

	put_irconn(conn);
	
	RETVAL_TRUE;
}
#endif
/* }}} */

/* {{{ proto bool ircg_invite(int connection, string channel, string nickname)
   INVITEs nickname to channel */
#if IRCG_API_VERSION >= 20021117
PHP_FUNCTION(ircg_invite)
{
	zval **p1, **p2, **p3;
	php_irconn_t *conn;
	
	if (ZEND_NUM_ARGS() != 3
			|| zend_get_parameters_ex(3, &p1, &p2, &p3) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);
	convert_to_string_ex(p2);
	convert_to_string_ex(p3);
	
	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;

	irc_handle_command(&conn->conn, "INVITE", 2, Z_STRVAL_PP(p3),
			Z_STRVAL_PP(p2));
	put_irconn(conn);
	
	RETVAL_TRUE;
}
#endif
/* }}} */

/* {{{ proto bool ircg_names( int connection, string channel [, string target])
   Queries visible usernames */
PHP_FUNCTION(ircg_names)
{
	zval **p1, **p2, **p3;
	php_irconn_t *conn;
	int ac = ZEND_NUM_ARGS();

	if (ac < 2 || ac > 3 || zend_get_parameters_ex(ac, &p1, &p2, &p3) == FAILURE)

		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);
	convert_to_string_ex(p2);

	if (ac > 2) {
		convert_to_string_ex(p3);
	}

	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;

	irc_handle_command(&conn->conn, "NAMES", ac > 2 ? 2 : 1, Z_STRVAL_PP(p2), ac > 2 ? Z_STRVAL_PP(p3) : NULL);
	put_irconn(conn);
	RETVAL_TRUE;
}
/* }}} */

/* {{{ proto bool ircg_kick(int connection, string channel, string nick, string reason)
   Kicks user from channel */
#if IRCG_API_VERSION - 0 >= 20010226
PHP_FUNCTION(ircg_kick)
{
	zval **p1, **p2, **p3, **p4;
	php_irconn_t *conn;

	if (ZEND_NUM_ARGS() != 4 || zend_get_parameters_ex(4, &p1, &p2, &p3, &p4) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);
	convert_to_string_ex(p2);
	convert_to_string_ex(p3);
	convert_to_string_ex(p4);

	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;
	
	irc_handle_command(&conn->conn, "KICK", 3, Z_STRVAL_PP(p2), Z_STRVAL_PP(p3), Z_STRVAL_PP(p4));
	put_irconn(conn);
	RETVAL_TRUE;
}
#endif
/* }}} */

/* {{{ proto bool ircg_lusers(int connection)
   IRC network statistics */
PHP_FUNCTION(ircg_lusers)
{
	zval **p1;
	php_irconn_t *conn;

	if (ZEND_NUM_ARGS() != 1 || zend_get_parameters_ex(1, &p1) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);

	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;

	irc_handle_command(&conn->conn, "LUSERS", 0);
	put_irconn(conn);
	RETVAL_TRUE;
}
/* }}} */

/* {{{ proto bool ircg_part(int connection, string channel)
   Leaves a channel */
PHP_FUNCTION(ircg_part)
{
	zval **p1, **p2;
	php_irconn_t *conn;

	if (ZEND_NUM_ARGS() != 2 || zend_get_parameters_ex(2, &p1, &p2) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);
	convert_to_string_ex(p2);

	conn = lookup_irconn(Z_LVAL_PP(p1));

	if (!conn) RETURN_FALSE;
	
	irc_part(&conn->conn, Z_STRVAL_PP(p2));
	put_irconn(conn);
	RETVAL_TRUE;
}
/* }}} */

/* {{{ proto bool ircg_is_conn_alive(int connection)
   Checks connection status */
PHP_FUNCTION(ircg_is_conn_alive)
{
	zval **p1;
	php_irconn_t *conn;
	
	if (ZEND_NUM_ARGS() != 1
			|| zend_get_parameters_ex(1, &p1) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(p1);

	if (!(conn = lookup_irconn(Z_LVAL_PP(p1))))
		RETURN_FALSE;
	put_irconn(conn);
	RETURN_TRUE;
}
/* }}} */

/* {{{ proto bool ircg_lookup_format_messages(string name)
   Selects a set of format strings for display of IRC messages */
PHP_FUNCTION(ircg_lookup_format_messages)
{
	zval **p1;

	if (ZEND_NUM_ARGS() != 1 
			|| zend_get_parameters_ex(1, &p1) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_string_ex(p1);

	if (lookup_fmt_msgs(p1, 0))
		RETURN_TRUE;
	RETVAL_FALSE;
}
/* }}} */

static int delete_idx(void *dest, void *arg)
{
	int *idx = dest;

	if (*idx == (int) arg) {
		php_ircg->fmt_sets_evicted++;
		return 1;
	}
	return 0;
}

/* {{{ proto bool ircg_register_format_messages(string name, array messages)
   Registers a set of format strings for display of IRC messages */
PHP_FUNCTION(ircg_register_format_messages)
{
	zval **p1, **p2;
	HashTable *h;
	int i;
	int *ip;
	php_fmt_msgs_t *fmt_msgs;
	zval **arg;
	php_fmt_msgs_t *old = NULL;
	int ret = SUCCESS;
	
	if (ZEND_NUM_ARGS() != 2 
			|| zend_get_parameters_ex(2, &p1, &p2) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_string_ex(p1);	

	if (Z_TYPE_PP(p2) != IS_ARRAY) {
		php_error(E_WARNING, "The second parameter should be an array");
		RETURN_FALSE;
	}

	h = HASH_OF(*p2);

	fmt_msgs = IRCG_SHARED_ALLOC(sizeof *fmt_msgs);
	php_ircg->fmt_sets_created++;
	fmt_msgs->rc = 0;
	fmt_msgs->dead = 0;
	
	for (i = 0; i < NO_FMTS; i++) {
		fmt_msgs->fmt_msgs[i] = 0;
		if (zend_hash_index_find(h, i, (void **) &arg) == SUCCESS) {
			convert_to_string_ex(arg);
			php_ircg_token_compiler(Z_STRVAL_PP(arg), Z_STRLEN_PP(arg), &fmt_msgs->fmt_msgs[i]);
		} else
			php_ircg_token_compiler("", 0, &fmt_msgs->fmt_msgs[i]);
	}
	
	IRCG_LOCK_GET(php_ircg->fmt_msgs_lock);

	if (ircg_hash_find(&php_ircg->h_fmt_msgs, Z_STRVAL_PP(p1), Z_STRLEN_PP(p1),
				(void **) &ip) == SUCCESS) {
		i = *ip;
		old = php_ircg->fmt_msgs[i];
		php_ircg->fmt_msgs[i] = fmt_msgs;
		php_ircg->fmt_sets_updates++;
	} else {
		int lim = IRCGG(max_fmt_msg_sets);

		for (i = 0; i < lim; i++) {
			if (php_ircg->fmt_msgs[i] == 0
					|| php_ircg->fmt_msgs[i]->rc == 0) {
				old = php_ircg->fmt_msgs[i];
				php_ircg->fmt_msgs[i] = fmt_msgs;
				break;
			}
		}
		
		if (old) {
			ircg_hash_apply_with_argument(&php_ircg->h_fmt_msgs,
					delete_idx, (void *) i);
		} else {
			php_ircg->fmt_sets_exist++;
		}
		if (i != lim) {
			ircg_hash_update(&php_ircg->h_fmt_msgs, Z_STRVAL_PP(p1), 
					Z_STRLEN_PP(p1), &i, sizeof(i), NULL);
		} else {
			/* no available slot */
			php_ircg->fmt_sets_ignored++;
			fmt_msgs_dtor(fmt_msgs);
			ret = FAILURE;
		}
	}
	
	if (old) {
		if (old->rc) {
			old->dead = 1;
		} else {
			fmt_msgs_dtor(old);
		}
	}

	IRCG_LOCK_PUT(php_ircg->fmt_msgs_lock);
	
	if (ret == FAILURE) 
		RETURN_FALSE;
	RETURN_TRUE;	
}
/* }}} */

IRCG_CB_MAP_START(php_ircg_cb_msg)
	IRCG_CB_MAP_ENTRY(msg_handler)
	IRCG_CB_MAP_ENTRY(quit_handler)
	IRCG_CB_MAP_ENTRY(error_handler)
	IRCG_CB_MAP_ENTRY(nick_handler)
	IRCG_CB_MAP_ENTRY(part_handler)
	IRCG_CB_MAP_ENTRY(user_leave)
	IRCG_CB_MAP_ENTRY(user_kick)
	IRCG_CB_MAP_ENTRY(user_quit)
	IRCG_CB_MAP_ENTRY(new_topic)
	IRCG_CB_MAP_ENTRY(whois_user_handler)
	IRCG_CB_MAP_ENTRY(whois_server_handler)
	IRCG_CB_MAP_ENTRY(whois_idle_handler)
	IRCG_CB_MAP_ENTRY(whois_channels_handler)
	IRCG_CB_MAP_ENTRY(end_of_whois_handler)
	IRCG_CB_MAP_ENTRY(mode_channel_handler)
	IRCG_CB_MAP_ENTRY(idle_recv_queue)
	IRCG_CB_MAP_ENTRY(banlist_handler)
	IRCG_CB_MAP_ENTRY(end_of_banlist_handler)
	IRCG_CB_MAP_ENTRY(list_handler)
	IRCG_CB_MAP_ENTRY(listend_handler)
#if IRCG_API_VERSION >= 20021109
	IRCG_CB_MAP_ENTRY(user_add_ex)
#else
	IRCG_CB_MAP_ENTRY(user_add)
#endif
	IRCG_CB_MAP_ENTRY(whoreply_handler)
	IRCG_CB_MAP_ENTRY(endofwho_handler)
	IRCG_CB_MAP_ENTRY(invite_handler)
	IRCG_CB_MAP_ENTRY(notice_handler)
	IRCG_CB_MAP_ENTRY(luserclient_handler)
	IRCG_CB_MAP_ENTRY(luserme_handler)
	IRCG_CB_MAP_ENTRY(luserop_handler)
	IRCG_CB_MAP_ENTRY(luserunknown_handler)
	IRCG_CB_MAP_ENTRY(luserchannels_handler)
IRCG_CB_MAP_END()

/* {{{ register_hooks */
static void register_hooks(irconn_t *conn, void *dummy)
{
	php_irconn_t *irconn = dummy;
	
	if (irconn->ident) {
		smart_str m;

		smart_str_sets(&m, irconn->ident);
		irc_set_ident(conn, &m);
	}

	if (irconn->password) {
		smart_str m;

		smart_str_sets(&m, irconn->password);
		irc_set_password(conn, &m);
	}

#if IRCG_API_VERSION - 0 >= 20010225
	if (irconn->realname) {
		smart_str m;
		smart_str_sets(&m, irconn->realname);
		irc_set_realname(conn, &m);
	}
#endif

#define MSG_NOT_EMPTY(n) (MSG(irconn,n) && MSG(irconn,n)->ntoken != 0)

#define IFMSG(n, p, q) if (MSG_NOT_EMPTY(n)) irc_register_hook(conn, p, q)
	
	irc_register_hook(conn, IRCG_MSG, msg_handler);
	irc_register_hook(conn, IRCG_QUIT, quit_handler);
	irc_register_hook(conn, IRCG_ERROR, error_handler);
	IFMSG(FMT_MSG_NICK, IRCG_NICK, nick_handler);

	IFMSG(FMT_MSG_SELF_PART, IRCG_PART, part_handler);
	IFMSG(FMT_MSG_LEAVE, IRCG_USER_LEAVE, user_leave);
	IFMSG(FMT_MSG_KICK, IRCG_USER_KICK, user_kick);
	IFMSG(FMT_MSG_QUIT, IRCG_USER_QUIT, user_quit);
	IFMSG(FMT_MSG_TOPIC, IRCG_TOPIC, new_topic);

#if IRCG_API_VERSION - 0 >= 20010227
	irc_register_hook(conn, IRCG_WHOISUSER, whois_user_handler);
	irc_register_hook(conn, IRCG_WHOISSERVER, whois_server_handler);
	irc_register_hook(conn, IRCG_WHOISIDLE, whois_idle_handler);
	irc_register_hook(conn, IRCG_WHOISCHANNELS, whois_channels_handler);
	irc_register_hook(conn, IRCG_ENDOFWHOIS, end_of_whois_handler);
#endif

#if IRCG_API_VERSION >= 20010307
	irc_register_hook(conn, IRCG_MODE_CHANNEL, mode_channel_handler);
#endif

#if IRCG_API_VERSION >= 20010310
	irc_register_hook(conn, IRCG_IDLE_RECV_QUEUE, idle_recv_queue);
#endif

#if IRCG_API_VERSION >= 20010416
	irc_register_hook(conn, IRCG_BANLIST, banlist_handler);
	irc_register_hook(conn, IRCG_ENDOFBANLIST, end_of_banlist_handler);
#endif

#if IRCG_API_VERSION >= 20020922
	/* RPL_LIST/RPL_LISTEND */
	irc_register_hook(conn, IRCG_LIST, list_handler);
	irc_register_hook(conn, IRCG_LISTEND, listend_handler);
#endif

#if IRCG_API_VERSION >= 20021109
	IFMSG(FMT_MSG_MASS_JOIN_ELEMENT, IRCG_USER_ADD_EX, user_add_ex);
#else	
	IFMSG(FMT_MSG_MASS_JOIN_ELEMENT, IRCG_USER_ADD, user_add);
#endif

#if IRCG_API_VERSION >= 20021115
	if (MSG_NOT_EMPTY(FMT_MSG_WHOREPLY1)
			|| MSG_NOT_EMPTY(FMT_MSG_WHOREPLY2)) {
		irc_register_hook(conn, IRCG_WHOREPLY, whoreply_handler);
	}
	IFMSG(FMT_MSG_ENDOFWHO, IRCG_ENDOFWHO, endofwho_handler);
#endif

#if IRCG_API_VERSION >= 20021117
	IFMSG(FMT_MSG_INVITE, IRCG_INVITE, invite_handler);
#endif

	irc_register_hook(conn, IRCG_NOTICE, notice_handler);

	IFMSG(FMT_MSG_LUSERCLIENT, IRCG_LUSERCLIENT, luserclient_handler);
	IFMSG(FMT_MSG_LUSERME, IRCG_LUSERME, luserme_handler);
	IFMSG(FMT_MSG_LUSEROP, IRCG_LUSEROP, luserop_handler);
	IFMSG(FMT_MSG_LUSERUNKNOWN, IRCG_LUSERUNKNOWN, luserunknown_handler);
	IFMSG(FMT_MSG_LUSERCHANNELS, IRCG_LUSERCHANNELS, luserchannels_handler);
	
	irc_set_map_handle(conn, php_ircg_cb_msg_handle);
}
/* }}} */

static void ctcp_msgs_dtor(format_msg_t **fmt)
{
	php_ircg_free_fmt_msg(*fmt);
}

/* {{{ ircg_copy_ctcp_msgs */
static int ircg_copy_ctcp_msgs(zval **array, php_irconn_t *conn)
{
	zval **val;
	char *str;
	ulong num;
	uint str_len;
	HashPosition pos;
	format_msg_t *fmt;

	zend_hash_internal_pointer_reset_ex(Z_ARRVAL_PP(array), &pos);

	while (zend_hash_get_current_key_ex(Z_ARRVAL_PP(array), &str, &str_len, &num, 0, &pos) == HASH_KEY_IS_STRING) {
		zend_hash_get_current_data_ex(Z_ARRVAL_PP(array), (void **) &val, &pos);
		convert_to_string_ex(val);
		fmt = 0;
		php_ircg_token_compiler(Z_STRVAL_PP(val), Z_STRLEN_PP(val), &fmt);
		ircg_hash_add(&conn->ctcp_msgs, str, str_len - 1, &fmt,
				sizeof(fmt), NULL);
		
		zend_hash_move_forward_ex(Z_ARRVAL_PP(array), &pos);
	}
	
	return 0;
}
/* }}} */

/* {{{ proto int ircg_pconnect(string username [, string server [, int port [, string format-msg-set-name [, array ctcp-set [, array user-details [, bool bailout-on-trivial]]]]]])
   Create a persistent IRC connection */
PHP_FUNCTION(ircg_pconnect)
{
	int drop_ref = 0;
	/* This should become an array very soon */
	zval **p1, **p2, **p3, **p4 = NULL, **p5 = NULL, **p6, **p7;
	const char *username = 0;
	const char *server = "0";
	int port = 6667;
	php_fmt_msgs_t *fmt_msgs = NULL;	
	php_irconn_t *conn;
	int bailout_on_trivial = 1;
	int concurrency;
	
	if (ZEND_NUM_ARGS() < 1 || ZEND_NUM_ARGS() > 7 
			|| zend_get_parameters_ex(ZEND_NUM_ARGS(), &p1, &p2, &p3, &p4, &p5, &p6, &p7) == FAILURE)
		WRONG_PARAM_COUNT;

	switch (ZEND_NUM_ARGS()) {
	case 7:
		convert_to_long_ex(p7);
		bailout_on_trivial = Z_LVAL_PP(p7);
	case 6:
	case 5:
	case 4:
		convert_to_string_ex(p4);
		if ((fmt_msgs = lookup_fmt_msgs(p4, 1)))
			drop_ref = 1;
	case 3:
		convert_to_long_ex(p3);
		port = Z_LVAL_PP(p3);
	case 2:
		convert_to_string_ex(p2);
		server = Z_STRVAL_PP(p2);
	case 1:
		convert_to_string_ex(p1);
		username = Z_STRVAL_PP(p1);
	}

	if (!fmt_msgs)
		fmt_msgs = &php_ircg->fmt_msgs_default_compiled;

	/*
	 * conn must be able to live longer than the hash entry in h_irconn,
	 * so we have to allocate it ourselves.
	 */
	conn = IRCG_SHARED_ALLOC(sizeof *conn);
	memset(conn, 0, sizeof *conn);
	conn->fd = -1;
	if (ZEND_NUM_ARGS() > 5 && Z_TYPE_PP(p6) == IS_ARRAY) {
		zval **val;

		if (zend_hash_find(Z_ARRVAL_PP(p6), "ident", sizeof("ident"),
					(void **) &val) == SUCCESS) {
			convert_to_string_ex(val);
			conn->ident = Z_STRVAL_PP(val);
		}

		if (zend_hash_find(Z_ARRVAL_PP(p6), "password", sizeof("password"),
					(void **) &val) == SUCCESS) {
			convert_to_string_ex(val);
			conn->password = Z_STRVAL_PP(val);
		}

		if (zend_hash_find(Z_ARRVAL_PP(p6), "realname", sizeof("realname"),
					(void **) &val) == SUCCESS) {
			convert_to_string_ex(val);
			conn->realname = Z_STRVAL_PP(val);
		}
	}

	conn->fmt_msgs = fmt_msgs;	
	if (irc_connect(username, register_hooks, 
			conn, server, port, &conn->conn)) {
		if (drop_ref)
			fmt_msgs_drop_ref(fmt_msgs);
		IRCG_SHARED_FREE(conn);
		php_error(E_WARNING, "%s(): irc_connect() failed prematurely", get_active_function_name(TSRMLS_C));
		RETURN_FALSE;
	}

	concurrency = ++php_ircg->irc_connects - php_ircg->irc_quit_handlers;

	if (concurrency > php_ircg->max_concurrency)
		php_ircg->max_concurrency = concurrency;

	ircg_hash_init(&conn->ctcp_msgs, 10, NULL, (dtor_func_t) ctcp_msgs_dtor, 1);
	if (p5 && Z_TYPE_PP(p5) == IS_ARRAY) {
		ircg_copy_ctcp_msgs(p5, conn);
	}

#ifdef USE_IRCONN_MANAGEMENT
	if (irconn_id == 0)
		irconn_id = 10000.0 * php_combined_lcg(TSRMLS_C);
	else
		irconn_id += 20.0 * (1.0 + php_combined_lcg(TSRMLS_C));
	
	
	while (ircg_hash_index_exists(&h_irconn, irconn_id)) {
		irconn_id++;
	}
	
	conn->irconn_id = irconn_id;
	ircg_hash_index_update(&h_irconn, irconn_id, &conn, sizeof(conn), NULL);
#else
	conn->irconn_id = conn->conn.resid;
#endif

	conn->login = php_ircg_now();
		
	/* XXX: we take chances by assuming that wordsize read/writes are atomic */
	if (conn->login >= php_ircg->next_gc)
		php_ircg_error_msg_gc(conn->login);

	RETVAL_LONG(conn->irconn_id);
}
/* }}} */

/* {{{ proto bool ircg_disconnect(int connection, string reason)
   Terminate IRC connection */
PHP_FUNCTION(ircg_disconnect)
{
	zval **id, **reason;
	php_irconn_t *conn;
	
	if (ZEND_NUM_ARGS() != 2 || zend_get_parameters_ex(2, &id, &reason) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(id);
	convert_to_string_ex(reason);

#ifdef USE_IRCONN_MANAGEMENT
	ircg_hash_index_del(&h_irconn, Z_LVAL_PP(id));
#else
	conn = lookup_irconn(Z_LVAL_PP(id));
	
	if (!conn) RETURN_FALSE;
	
	irc_disconnect(&conn->conn, Z_STRVAL_PP(reason));
	
	put_irconn(conn);
#endif

	RETURN_TRUE;
}
/* }}} */

/* {{{ proto bool ircg_nick(int connection, string newnick)
   Changes the nickname */
PHP_FUNCTION(ircg_nick)
{
	zval **id, **newnick;
	php_irconn_t *conn;
	
	if (ZEND_NUM_ARGS() != 2 || zend_get_parameters_ex(2, &id, &newnick) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(id);
	convert_to_string_ex(newnick);

	conn = lookup_irconn(Z_LVAL_PP(id));

	if (!conn) RETURN_FALSE;
	
	irc_nick(&conn->conn, Z_STRVAL_PP(newnick));
	put_irconn(conn);
	
	RETURN_TRUE;
}
/* }}} */

/* {{{ proto bool ircg_list(int connection, string channel)
   List topic/user count of channel(s) */
PHP_FUNCTION(ircg_list)
{
	zval **id, **p2;
	php_irconn_t *conn;
	int ac = ZEND_NUM_ARGS();

	if (ac != 2 || zend_get_parameters_ex(ac, &id, &p2) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(id);
	convert_to_string_ex(p2);

	conn = lookup_irconn(Z_LVAL_PP(id));

	if (!conn) RETURN_FALSE;

	irc_handle_command(&conn->conn, "LIST", 1, Z_STRVAL_PP(p2));
	put_irconn(conn);

	RETURN_TRUE;
}
/* }}} */


/* {{{ proto bool ircg_notice(int connection, string recipient, string message)
   Sends a one-way communication NOTICE to a target */
PHP_FUNCTION(ircg_notice)
{
	zval **id, **recipient, **msg;
	php_irconn_t *conn;
	
	if (ZEND_NUM_ARGS() != 3 || zend_get_parameters_ex(3, &id, &recipient, &msg) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_long_ex(id);
	convert_to_string_ex(recipient);
	convert_to_string_ex(msg);

	conn = lookup_irconn(Z_LVAL_PP(id));

	if (!conn) RETURN_FALSE;

	irc_handle_command(&conn->conn, "NOTICE", 2, Z_STRVAL_PP(recipient), Z_STRVAL_PP(msg));
	put_irconn(conn);
	RETURN_TRUE;
}
/* }}} */

/* {{{ proto array ircg_eval_ecmascript_params(string params)
   Decodes a list of JS-encoded parameters into a native array */

#define ADD_PARA() do { \
				if (para.len) smart_str_0(&para); \
				add_next_index_stringl(return_value, \
						para.len == 0 ? empty_string : para.c, \
						para.len, 0); \
				para.len = 0; \
				para.c = 0; \
} while (0)

PHP_FUNCTION(ircg_eval_ecmascript_params)
{
	zval **str;
	int s;
	unsigned char *ptr, *ptre;
	unsigned char c;
	smart_str para = {0};

	if (ZEND_NUM_ARGS() != 1 || zend_get_parameters_ex(1, &str) == FAILURE)
		WRONG_PARAM_COUNT;

	convert_to_string_ex(str);

	array_init(return_value);

	ptr = Z_STRVAL_PP(str);
	ptre = ptr + Z_STRLEN_PP(str);

	s = 0;
	
	for (; ptr < ptre; ptr++) {
		c = *ptr;
		switch (s) {

		/*
		 * State 0: Looking for ' or digit
		 * State 1: Assembling parameter inside '..'
		 * State 2: After escape sign: Copies single char verbatim, go to 1
		 * State 3: Assembling numeric para, no quotation
		 * State 4: Looking for ",", skipping whitespace
		 */

		case 0:
			switch (c) {
			case '\'':
				s = 1;
				para.len = 0;
				break;

			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9':
				s = 3;
				smart_str_appendc(&para, c);
				break;

			default: /* erroneous */
				return;
			}
			break;

		case 1:
			switch (c) {
			case '\\':
				s = 2;
				break;

			case '\'':
				s = 4;
				ADD_PARA();
				break;

			default:
				smart_str_appendc(&para, c);
				break;
			}
			break;

		case 2:
			smart_str_appendc(&para, c);
			s = 1;
			break;

		case 3:
			switch (c) {
			case ',':
				s = 0;
				ADD_PARA();
				break;

			default:
				smart_str_appendc(&para, c);
				break;
			}
			break;

		case 4:
			switch (c) {
			case ',':
				s = 0;
				break;
			}
			break;
		}
	}

	if (para.len != 0) {
		if (s == 3)
			ADD_PARA();
		else
			smart_str_free(&para);
	}
}
/* }}} */

/* {{{ proto bool ircg_msg(int connection, string recipient, string message [,bool loop-suppress])
   Delivers a message to the IRC network */
PHP_FUNCTION(ircg_msg)
{
	zval **id, **recipient, **msg, **suppress;
	php_irconn_t *conn;
	smart_str l = {0};
	smart_str m = {0};
	smart_str tmp, tmp2;
	int o_suppress = 0;
	
	if (ZEND_NUM_ARGS() < 3 || ZEND_NUM_ARGS() > 4 || zend_get_parameters_ex(ZEND_NUM_ARGS(), &id, &recipient, &msg, &suppress) == FAILURE)
		WRONG_PARAM_COUNT;

	switch (ZEND_NUM_ARGS()) {
	case 4:
		convert_to_long_ex(suppress);
		o_suppress = Z_LVAL_PP(suppress);
	case 3:
		convert_to_long_ex(id);
		convert_to_string_ex(recipient);
		convert_to_string_ex(msg);
	}

	conn = lookup_irconn(Z_LVAL_PP(id));

	if (!conn) RETURN_FALSE;

	irc_msg(&conn->conn, Z_STRVAL_PP(recipient), Z_STRVAL_PP(msg));
	
	if (!o_suppress) {
		smart_str_setl(&l, Z_STRVAL_PP(msg), Z_STRLEN_PP(msg));

		smart_str_setl(&tmp, Z_STRVAL_PP(recipient), Z_STRLEN_PP(recipient));
		smart_str_setl(&tmp2, conn->conn.username, conn->conn.username_len);

		switch (Z_STRVAL_PP(recipient)[0]) {
			case '#':
			case '&':
				if (l.c[0] == 1) {
					handle_ctcp(conn, &tmp, &tmp2, &tmp, &l, &m);
				} else {
					FORMAT_MSG(conn, FMT_MSG_CHAN, &tmp, NULL, &tmp2, &l, &m, conn->conn.username, conn->conn.username_len);
				}
				break;
			default:
				if (l.c[0] == 1) {
					handle_ctcp(conn, NULL, &tmp2, &tmp, &l, &m);
				} else {
					FORMAT_MSG(conn, FMT_MSG_PRIV_FROM_ME, NULL,
							&tmp, &tmp2, &l, &m, conn->conn.username, conn->conn.username_len);
				}
		}

		msg_send(conn, &m);
	}

	put_irconn(conn);
	RETURN_TRUE;
}
/* }}} */

PHP_RINIT_FUNCTION(ircg)
{
	IRCGG(flush_data) = 0;
	return SUCCESS;
}

/* {{{ PHP_RSHUTDOWN
 */
PHP_RSHUTDOWN_FUNCTION(ircg)
{
	if (IRCGG(flush_data)) {
		php_irconn_t *conn = IRCGG(flush_data);

#if IRCG_API_VERSION >= 20021127

		/*
		 * In a multi-process environment, IRCG will use sendmsg(2)
		 * to send the socket to the control process.  After that
		 * system call, we can close the socket without any problem.
		 *
		 * Some web servers (e.g. Apache) will call shutdown(2) on
		 * the socket, so that the control process could not send
		 * any more data.  This must be prevented, so we 
		 * relinquish this process's control of the socket.
		 */
		
		if (irc_write_buf_close_conn()) {
			sapi_send_headers(TSRMLS_C);
			sapi_flush(TSRMLS_C);
			close(conn->fd);
		}
#endif

		msg_replay_buffer(conn);
		irc_write_buf_flush(&conn->wb);
		put_irconn(conn);
	}

	return SUCCESS;
}
/* }}} */

/* {{{ ircg_module_entry */
zend_module_entry ircg_module_entry = {
	STANDARD_MODULE_HEADER,
	"ircg",
	ircg_functions,
	PHP_MINIT(ircg),
	PHP_MSHUTDOWN(ircg),
	PHP_RINIT(ircg),
	PHP_RSHUTDOWN(ircg),
	PHP_MINFO(ircg),
	NO_VERSION_YET,
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_IRCG
ZEND_GET_MODULE(ircg)
#endif
/* }}} */

static int init(void *p)
{
	int i;

	IRCG_LOCK_INIT(php_ircg->fmt_msgs_lock);
	IRCG_LOCK_INIT(php_ircg->error_msgs_lock);

	for (i = 0; i < NO_FMTS; i++) {
		php_ircg_token_compiler(fmt_msgs_default[i], strlen(fmt_msgs_default[i]), &php_ircg->fmt_msgs_default_compiled.fmt_msgs[i]);
	}
	return 0;
}

static void setup(int stage);

/* {{{ PHP_MINIT_FUNCTION
 */
PHP_MINIT_FUNCTION(ircg)
{
	uid_t uid;
	gid_t gid;
	char *user;
	char buf[32];
	
#if IRCG_API_VERSION >= 20010307
	if (irc_sizeof_irconn() != sizeof(irconn_t)) {
		printf("FATAL: The size of the irconn_t structure has changed "
				"since you compiled PHP.  Please rebuild PHP against "
				"the correct IRCG header files.\n");
		exit(1);
	}

	if (irc_sizeof_write_buf() != sizeof(irc_write_buf)) {
		printf("FATAL: The size of the irc_write_buf structure has changed "
				"since you compiled PHP.  Please rebuild PHP against "
				"the correct IRCG header files.\n");
		exit(1);
	}
#endif
	
	REGISTER_INI_ENTRIES();

	php_ircg_init_compat();
	
#if IRCG_API_VERSION >= 20021127
	if (php_ircg_get_target_data(&uid, &gid TSRMLS_CC)) {
		user = IRCGG(control_user);
	} else {
		sprintf(buf, "%u", uid);
		user = buf;
	}
		
	if (ircg_setup_global(IRCGG(work_dir), IRCGG(shared_mem_size), user, setup))
		return FAILURE;
#else
	setup(0);
	setup(1);
#endif
	
	ircg_hash_init(&php_ircg->h_fmt_msgs, 0, NULL, NULL, 1);
#ifdef USE_FD2IRCONN	
	ircg_hash_init(&h_fd2irconn, 0, NULL, NULL, 1);
#endif
#ifdef USE_IRCONN_MANAGEMENT
	ircg_hash_init(&h_irconn, 0, NULL, irconn_dtor, 1);
#endif
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MSHUTDOWN_FUNCTION
 */
PHP_MSHUTDOWN_FUNCTION(ircg)
{
#ifdef USE_IRCONN_MANAGEMENT
	ircg_hash_destroy(&h_irconn);
#endif
#ifdef USE_FD2IRCONN
	ircg_hash_destroy(&h_fd2irconn);
#endif

	return SUCCESS;
}
/* }}} */

#if IRCG_API_VERSION >= 20021127
#include <ircg_log.h>
#endif

static void php_ircg_print_table_row(const char *name, unsigned int d TSRMLS_DC)
{
	char buf[32];
	
	PUTS("<tr><td class='e' style='background: #ccf'>");
	PUTS(name);
	PUTS("</td><td class='v' style='background: #ccc; text-align: right'>");
	PUTS(smart_str_print_unsigned(buf + sizeof(buf) - 1, d));
	PUTS("</td></tr>");
}


/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(ircg)
{
#if IRCG_API_VERSION >= 20021127
	int i;
	const char *name;
	ircg_log_int val;
#endif

	php_info_print_table_start();
	php_info_print_table_header(2, "Property", "Value");
	
	php_ircg_print_table_row("Maximum number of open fds (system limit)",
			getdtablesize() TSRMLS_CC);
	php_ircg_print_table_row("Highest encountered fd",
			php_ircg->highest_fd TSRMLS_CC);
	php_ircg_print_table_row("Maximum concurrent IRC connections", 
			php_ircg->max_concurrency TSRMLS_CC);
	php_ircg_print_table_row("Scanner result cache hits", 
			php_ircg->cache_hits TSRMLS_CC);
	php_ircg_print_table_row("Scanner result cache misses", 
			php_ircg->cache_misses TSRMLS_CC);
	php_ircg_print_table_row("Handled format messages", 
			php_ircg->exec_fmt_msgs TSRMLS_CC);
	php_ircg_print_table_row("Tokenizer invocations", 
			php_ircg->exec_token_compiler TSRMLS_CC);
	php_ircg_print_table_row("Initiated IRC connections", 
			php_ircg->irc_connects TSRMLS_CC);
	php_ircg_print_table_row("Terminated IRC connections", 
			php_ircg->irc_quit_handlers TSRMLS_CC);
	php_ircg_print_table_row("Persistent HTTP connections", 
			php_ircg->irc_set_currents TSRMLS_CC);
	php_ircg_print_table_row("Failed persistent HTTP connections", 
			php_ircg->failed_set_currents TSRMLS_CC);
	php_ircg_print_table_row("Write buffer destructs", 
			php_ircg->irc_wbuf_destructs TSRMLS_CC);
	php_ircg_print_table_row("Format sets exist",
			php_ircg->fmt_sets_exist TSRMLS_CC);
	php_ircg_print_table_row("Format sets evicted",
			php_ircg->fmt_sets_evicted TSRMLS_CC);
	php_ircg_print_table_row("Format sets updates",
			php_ircg->fmt_sets_updates TSRMLS_CC);
	php_ircg_print_table_row("Format sets ignored",
			php_ircg->fmt_sets_ignored TSRMLS_CC);
	php_ircg_print_table_row("Format sets created",
			php_ircg->fmt_sets_created TSRMLS_CC);
	php_ircg_print_table_row("Format sets destroyed",
			php_ircg->fmt_sets_destroyed TSRMLS_CC);

#if IRCG_API_VERSION >= 20021127
	
	php_info_print_table_end();
	php_info_print_table_start();
	php_info_print_table_header(2, "IRCG 4 Property", "Value");
	
	for (i = 0; i < IRCG_LOG_CNT_NR; i++) {
		ircg_log_get(i, &val, &name);
		php_ircg_print_table_row(name, val TSRMLS_CC);
	}

#endif
	php_info_print_table_end();
	

	DISPLAY_INI_ENTRIES();
}
/* }}} */


static void setup(int stage)
{
	if (stage == 0) {
		ircg_fetch_area("php-ircg-main", (void **) &php_ircg, sizeof *php_ircg, init);

		ircg_register_relocation_map("php_ircg_msg_handler", php_ircg_cb_msg);
		ircg_register_relocation_map("php_ircg_wbuf_handler", php_ircg_cb_wbuf);
		
	} else if (stage == 1) {
		size_t sz;
		TSRMLS_FETCH();
		
		ircg_reader_keep_alive_interval(IRCGG(ka_interval));
		php_ircg_cache_entries = malloc(sizeof(struct cache_entry) * NR_CACHE_ENTRIES);
		memset(php_ircg_cache_entries, 0, sizeof(struct cache_entry) * NR_CACHE_ENTRIES);

		sz = sizeof(void *) * IRCGG(max_fmt_msg_sets);
		php_ircg->fmt_msgs = IRCG_SHARED_ALLOC(sz);
		memset(php_ircg->fmt_msgs, 0, sz);

		php_ircg->is_fastcgi = strcmp(sapi_module.name, "cgi-fcgi") == 0;
	} else if (stage == -1) {
		memset(php_ircg, 0x78, sizeof *php_ircg);
		IRCG_SHARED_FREE(php_ircg);
		php_ircg = NULL;
	}
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: sw=4 ts=4 fdm=marker
 * vim<600: sw=4 ts=4
 */

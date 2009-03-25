#ifndef PHP_IRCG_ERROR_H
#define PHP_IRCG_ERROR_H

struct errormsg {
	smart_str msg;
	int msgid;
	int id;
	time_t when;
	struct errormsg *next;
};

void php_ircg_error_msg_dtor(struct errormsg *m);
void php_ircg_error_msg_gc(time_t now);
void php_ircg_add_error_msg(smart_str *msg, int msgid, int connid);
struct errormsg *php_ircg_lookup_and_remove_error_msg(int id);

#endif

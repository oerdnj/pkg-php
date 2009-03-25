#ifndef PHP_IRCG_TOKENIZER_H
#define PHP_IRCG_TOKENIZER_H

#include "ircg_smart_str_public.h"

#define INLINE_STRING_LEN 15

struct inline_string {
	char buf_len;
	char buf[INLINE_STRING_LEN];
};

typedef struct {
	unsigned char code;
	union {
		unsigned char v;
		void *ptr;
		smart_str s;
		struct inline_string is;
	} para;
} token_t;

typedef struct format_msg {
	int ntoken;
	token_t t[1];
} format_msg_t;

enum {
	C_CHANNEL = 1,
	C_FROM,
	C_TO,
	C_MESSAGE,
	C_STRING,
	C_STRING_INLINE,
	C_PERCENT,
	C_TERMINATE_1		/* auth by username */
};

enum {
	P_RAW         = 0,
	P_JS          = 1,
	P_NICKNAME    = 2,
	P_NICKNAME_JS = 3,
	P_HTML        = 4,
	P_HTML_JS     = 5,
	P_NOAUTO_LINKS = 8, /* Don't automatically convert links */
	P_CONV_BR      = 16,	/* Convert a special character to <br> */
	P_COND_STOP    = 32,	/* If argument != username, stop */
}; 

#define NR_CACHE_ENTRIES 24

void php_ircg_token_compiler(const char *fmt, size_t len, format_msg_t **fp);
void php_ircg_format_msg(const format_msg_t *fmt_msg, smart_str *channel, 
		smart_str *to, smart_str *from, smart_str *msg, smart_str *result, 
		const char *username, int username_len, int *status);
void php_ircg_fmt_msgs_dtor(void *dummy);
void php_ircg_free_fmt_msg(format_msg_t *f);


#endif

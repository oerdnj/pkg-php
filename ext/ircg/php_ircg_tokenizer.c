#define SMART_STR_PREALLOC 4

#include "php_ircg_private.h"
#include "php_ircg_alloc.h"
#include "php_ircg_conversion.h"
#include "php_ircg_smart_str.h"

/* {{{ token_compiler */

#include "php_ircg_tokenizer.h"

#include "php_ircg_alloc.h"

#define NEW_TOKEN(a, b) 								\
	if (n + 1 >= alloced) {	\
		alloced += 10;				\
		f = IRCG_SHARED_REALLOC(f, sizeof *f + alloced * sizeof(token_t)); \
		*fp = f;	\
	}	\
	f->t[n].code=a;											\
	f->t[n++].para.b


#define HANDLE_VERBATIM_STRING() 				\
	if (len <= INLINE_STRING_LEN) {				\
		struct inline_string is;				\
												\
		is.buf_len = len;						\
		memcpy(is.buf, p, len);					\
		NEW_TOKEN(C_STRING_INLINE, is) = is;	\
	} else {									\
		s.c = 0;								\
		smart_str_appendl_ex(&s, p, len, 1);	\
		NEW_TOKEN(C_STRING, s) = s;				\
	}

	

void php_ircg_token_compiler(const char *fmt, size_t fmtlen, format_msg_t **fp)
{
	const char *p, *pe;
	const char *q;
	int n = 0;
	int alloced = 0;
	char mode;
	unsigned long len;
	char c;
	smart_str s;
	format_msg_t *f = *fp;

	php_ircg->exec_token_compiler++;
	
	if (fmt[0] == '\0') {
		*fp = NULL;
		return;
	}

	p = fmt;
	pe = fmt + fmtlen;

	do {
		q = p;
		while (*q != '%') 
			if (++q >= pe) {
				len = pe - p;
				HANDLE_VERBATIM_STRING();
				goto leave_loop;
			}
		len = q - p;

		if (len > 0) {
			HANDLE_VERBATIM_STRING();
		}
		mode = 0;

next:
		c = *++q; /* skip '%' and look at next char */
		switch (c) {
		case '1': mode |= P_JS; goto next;
		case '2': mode |= P_NICKNAME; goto next;
		case '3': mode |= P_NOAUTO_LINKS; goto next;
		case '4': mode |= P_CONV_BR; goto next;
		case '5': mode |= P_COND_STOP; goto next;
		case '6': mode |= P_HTML; goto next;

		/* associate mode bits with each command where applicable */
		case 'c': NEW_TOKEN(C_CHANNEL, v) = mode; break;
		case 'd': NEW_TOKEN(C_TERMINATE_1, v) = mode; break;
		case 't': NEW_TOKEN(C_TO, v) = mode; break;
		case 'f': NEW_TOKEN(C_FROM, v) = mode; break;
		case 'r': NEW_TOKEN(C_MESSAGE, v) = mode; break;
		case 'm': NEW_TOKEN(C_MESSAGE, v) = mode | P_HTML; break;
		case 'j': NEW_TOKEN(C_MESSAGE, v) = mode | P_HTML | P_JS; break;

		case '%': NEW_TOKEN(C_PERCENT, v) = 0; break;

		default: /* ignore invalid combinations */
				  break;
		}
		p = q + 1; /* skip last format character */
	} while (p < pe);

leave_loop:
	
	f->ntoken = n;
}
/* }}} */

/* {{{ format_msg */
void php_ircg_format_msg(const format_msg_t *fmt_msg, smart_str *channel, 
		smart_str *to, smart_str *from, smart_str *msg, smart_str *result, 
		const char *username, int username_len, int *status)
{
	int i = 0;
	const token_t *t;
	int ntoken;
    smart_str tmp = {0};

	if (!fmt_msg) return;
	
	ntoken = fmt_msg->ntoken;
	t = fmt_msg->t;
	
#define IRCG_APPEND(what, use_cache) 				\
		if (t[i].para.v & P_COND_STOP) {			\
			if (username_len != what->len || memcmp(what->c, username, username_len) != 0) \
				goto stop;							\
			continue;								\
		}											\
		switch (t[i].para.v & 7) {					\
		case P_JS: 									\
			if (!what) break;						\
			php_ircg_js_escape(what, result); 		\
			break; 									\
		case P_NICKNAME_JS: { 						\
			smart_str tmp = {0}; 					\
			if (!what) break;						\
			php_ircg_nickname_unescape(what, &tmp); 	\
			php_ircg_js_escape(&tmp, result); 		\
			smart_str_free_ex(&tmp, 1); 			\
			break; 									\
		} 											\
		case P_NICKNAME: 							\
			if (!what) break;						\
			php_ircg_nickname_unescape(what, result); 	\
			break; 									\
		case P_RAW: 								\
			if (!what) break;						\
			smart_str_append_ex(result, what, 1); 	\
			break; 									\
		case P_HTML_JS:								\
			if (!what) break;						\
			if (use_cache) {						\
				ircg_mirc_color_cache(msg,			\
						&tmp, channel,				\
						!(t[i].para.v & P_NOAUTO_LINKS), \
						t[i].para.v & P_CONV_BR);	\
			} else {								\
				ircg_mirc_color(what->c, &tmp,		\
						what->len,					\
						!(t[i].para.v & P_NOAUTO_LINKS), \
						t[i].para.v & P_CONV_BR);	\
			}										\
			php_ircg_js_escape(&tmp, result);		\
			smart_str_free(&tmp);					\
			break;									\
		case P_HTML:								\
			if (!what) break;						\
			if (use_cache) {						\
				ircg_mirc_color_cache(msg,			\
						result, channel,			\
						!(t[i].para.v & P_NOAUTO_LINKS), \
						t[i].para.v & P_CONV_BR);	\
			} else {								\
				ircg_mirc_color(what->c, result,	\
						what->len,					\
						!(t[i].para.v & P_NOAUTO_LINKS), \
						t[i].para.v & P_CONV_BR);	\
			}										\
			break;									\
		}

	for (; ntoken-- > 0; i++) {
		switch (t[i].code) {
		case C_STRING_INLINE: smart_str_appendl_ex(result, t[i].para.is.buf, 
									  t[i].para.is.buf_len, 1); break;
		case C_STRING: smart_str_append_ex(result, &t[i].para.s, 1); break;
		case C_FROM: IRCG_APPEND(from, 0); break;
		case C_TO: IRCG_APPEND(to, 0); break;
		case C_CHANNEL: IRCG_APPEND(channel, 0); break;
		case C_MESSAGE: IRCG_APPEND(msg, 1); break;
		case C_PERCENT: smart_str_appendc_ex(result, '%', 1); break;
		case C_TERMINATE_1: /* auth by username */
			if (ntoken > 0 && t[i+1].code == C_STRING) {
				if (t[i+1].para.s.len == from->len
						&& strncasecmp(t[i+1].para.s.c, from->c, from->len) == 0)
					*status = 1;
			} else
				*status = 1;
		}
	}

stop:	
	
	if (result->c)
		smart_str_0(result);
	php_ircg->exec_fmt_msgs++;
}


void php_ircg_free_fmt_msg(format_msg_t *f)
{
	int i = 0;
	
	while (f->ntoken-- > 0) {
		switch (f->t[i].code) {
		case C_STRING: 
			smart_str_free_ex(&f->t[i].para.s, 1);
			break;
		}
		i++;
	}
	IRCG_SHARED_FREE(f);
}

/* }}} */



#include "php_ircg_smart_str.h"
#include "php_ircg_alloc.h"

/* {{{ Escape functions */
void php_ircg_js_escape(smart_str *input, smart_str *output)
{
	char *p;
	char *end;

	end = input->c + input->len;

	for(p = input->c; p < end; p++) {
		switch (*p) {
		case '"':
		case '\\':
		case '\'':
			smart_str_appendc_ex(output, '\\', 1);
			/* fall-through */
		default:
			smart_str_appendc_ex(output, *p, 1);
		}
	}
}

static const char hextab[] = "0123456789abcdef";

#define NICKNAME_ESC_CHAR '|'

void php_ircg_nickname_escape(smart_str *input, smart_str *output)
{
	unsigned char *p;
	unsigned char *end;
	unsigned char c;

	p = (unsigned char *) input->c;
	end = p + input->len;

	while (p < end) {
		c = *p;
		if ((c >= 'a' && c <= 'z')
				|| (c >= 'A' && c <= 'Z')
				|| (c >= '0' && c <= '9'))
			smart_str_appendc_ex(output, c, 1);
		else {
			smart_str_appendc_ex(output, NICKNAME_ESC_CHAR, 1);
			smart_str_appendc_ex(output, hextab[c >> 4], 1);
			smart_str_appendc_ex(output, hextab[c & 15], 1);
		}
		p++;
	}
}

#define HEX_VALUE(c) ((c>='a'&&c<='f')?c-'a'+10:(c>='0'&&c<='9')?c-'0':0)

void php_ircg_nickname_unescape(smart_str *input, smart_str *output)
{
	char *p;
	char *end;

	end = input->c + input->len;

	for(p = input->c; p < end; p++) {
		switch (p[0]) {
		case NICKNAME_ESC_CHAR:
			if (p + 2 >= end) break;
			smart_str_appendc_ex(output, (HEX_VALUE(p[1]) << 4) + HEX_VALUE(p[2]), 1);
			p += 2;
			break;
		default:
			smart_str_appendc_ex(output, p[0], 1);
		}
	}
}
/* }}} */

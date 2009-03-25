#ifndef PHP_IRCG_SMART_STR_H
#define PHP_IRCG_SMART_STR_H

#include "ircg_smart_str.h"

#define smart_str_free_ex(a,b) smart_str_free((a))
#define smart_str_appendl_ex(a,b,c,d) smart_str_appendl((a),(b),(c))
#define smart_str_appendc_ex(a,b,c) smart_str_appendc((a),(b))
#define smart_str_append_ex(a,b,c) smart_str_append((a),(b))
#define smart_str_appends_ex(a,b,c) smart_str_appends((a),(b))

#endif

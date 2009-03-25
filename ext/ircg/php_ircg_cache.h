#ifndef PHP_IRCG_CACHE_H
#define PHP_IRCG_CACHE_H

#include "php.h"
#include "ext/standard/basic_functions.h"
#include "ircg_smart_str_public.h"

struct cache_entry {
	php_uint32 h;
	char mask;
	smart_str src;
	smart_str result;
};

extern struct cache_entry *php_ircg_cache_entries;
extern int php_ircg_last_ce_write;

void ircg_mirc_color_cache(smart_str *src, smart_str *result,
		smart_str *channel, int auto_links, int gen_br);

#endif

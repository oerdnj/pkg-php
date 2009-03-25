/* {{{ cache-related stuff */

#include "php_ircg_private.h"
#include "php_ircg_alloc.h"
#include "php_ircg_cache.h"

#include "php_ircg_smart_str.h"

/* This is an expensive operation in terms of CPU time.  We
   try to spend as little time in it by caching messages which
   are sent to channels (and hence used multiple times). */
void ircg_mirc_color(const char *, smart_str *, size_t, int, int);


#undef MIN
#define MIN(a,b) (a<b?a:b)

static inline php_uint32 ghash(smart_str *str, int auto_links, int gen_br)
{
	php_uint32 h;
	const char *data = str->c, *e = str->c + MIN(3, str->len);
	
	for (h = 2166136261U; data < e; ) {
		h *= 16777619;
		h ^= *data++;
	}
	h *= 16777619;
	h ^= auto_links ? 1 : 2;
	h *= 16777619;
	h ^= gen_br ? 1 : 2;
	
	return h;
}
/* }}} */

static int last_ce_write;

#define NR_CACHE_ENTRIES 24


/* {{{ ircg_mirc_color_cache */
void ircg_mirc_color_cache(smart_str *src, smart_str *result,
		smart_str *channel, int auto_links, int gen_br)
{
	/* We only cache messages in the context of a channel */
	if (channel && php_ircg_cache_entries) {
		int hash;
		int i;
		char mask = (auto_links ? 1 : 0) | (gen_br ? 2 : 0); 
		struct cache_entry *ce = php_ircg_cache_entries + last_ce_write;
		struct cache_entry *cee = php_ircg_cache_entries + NR_CACHE_ENTRIES;
		
		hash = ghash(src, auto_links, gen_br);

		/* we search forward .. */
		for (i = 0; i < NR_CACHE_ENTRIES; i++) {
			if (ce->h == hash
					&& ce->mask == mask
					&& ce->src.len == src->len
					&& memcmp(ce->src.c, src->c, src->len) == 0) {
				php_ircg->cache_hits++;
				goto found;
			}
			if (++ce >= cee)
				ce = php_ircg_cache_entries;
		}

		php_ircg->cache_misses++;
		/* .. and insert in the reverse direction */

		if (--last_ce_write < 0)
			last_ce_write = NR_CACHE_ENTRIES - 1;

		ce = php_ircg_cache_entries + last_ce_write;
		ce->h = hash;
		ce->mask = mask;
		ce->src.len = 0;
		ce->result.len = 0;
		
		smart_str_append_ex(&ce->src, src, 1);
		smart_str_0(&ce->src);
		ircg_mirc_color(ce->src.c, &ce->result, ce->src.len, auto_links, gen_br);
		
found:
		smart_str_append_ex(result, &ce->result, 1);
	} else {
		/* No channel message, no caching */
		ircg_mirc_color(src->c, result, src->len, auto_links, gen_br);
	}
}
/* }}} */

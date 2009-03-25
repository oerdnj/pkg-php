#ifndef PHP_IRCG_ALLOC_H
#define PHP_IRCG_ALLOC_H

#include <if_irc.h>

# if IRCG_API_VERSION < 20021127
#  define IRCG_SHARED_ALLOC(a) malloc((a))
#  define IRCG_SHARED_REALLOC(a,b) realloc((a),(b))
#  define IRCG_SHARED_FREE(a) free((a))
# else

/* for smart_strs */
#  define realloc(a,b) IRCG_SHARED_REALLOC(a,b)
#  define free(a) IRCG_SHARED_FREE(a)

#  include <ircg_alloc.h>

# endif

#endif

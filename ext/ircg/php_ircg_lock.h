#define IRCG_LOCK(name) char dummy_ ## name
#define IRCG_LOCK_INIT(name) do {} while (0)
#define IRCG_LOCK_GET(name) do {} while (0)
#define IRCG_LOCK_PUT(name) do {} while (0)
#define IRCG_LOCK_DESTROY(name) do {} while (0)

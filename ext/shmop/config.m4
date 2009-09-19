dnl $Id: config.m4 72968 2002-03-12 16:44:00Z sas $
PHP_ARG_ENABLE(shmop, whether to enable shmop support, 
[  --enable-shmop          Enable shmop support])

if test "$PHP_SHMOP" != "no"; then
  AC_DEFINE(HAVE_SHMOP, 1, [ ])
  PHP_NEW_EXTENSION(shmop, shmop.c, $ext_shared)
fi

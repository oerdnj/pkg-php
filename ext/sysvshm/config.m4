dnl
dnl $Id: config.m4 187290 2005-05-29 23:17:16Z sniper $
dnl

PHP_ARG_ENABLE(sysvshm,whether to enable System V shared memory support,
[  --enable-sysvshm        Enable the System V shared memory support])

if test "$PHP_SYSVSHM" != "no"; then
  AC_DEFINE(HAVE_SYSVSHM, 1, [ ])
  PHP_NEW_EXTENSION(sysvshm, sysvshm.c, $ext_shared)
fi

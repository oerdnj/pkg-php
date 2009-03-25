dnl
dnl $Id: config.m4,v 1.8 2005/05/29 23:16:40 sniper Exp $
dnl

PHP_ARG_ENABLE(filepro,whether to enable the bundled filePro support,
[  --enable-filepro        Enable the bundled read-only filePro support])

if test "$PHP_FILEPRO" = "yes"; then
  AC_DEFINE(HAVE_FILEPRO, 1, [ ])
  PHP_NEW_EXTENSION(filepro, filepro.c, $ext_shared)
fi

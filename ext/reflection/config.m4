dnl $Id: config.m4,v 1.4.2.3.2.1.2.3 2008/05/02 23:05:05 tony2001 Exp $
dnl config.m4 for extension reflection

AC_DEFINE(HAVE_REFLECTION, 1, [Whether Reflection is enabled])
PHP_NEW_EXTENSION(reflection, php_reflection.c, no)

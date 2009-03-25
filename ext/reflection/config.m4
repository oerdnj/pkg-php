dnl $Id: config.m4,v 1.4.2.3 2005/12/03 01:12:45 sniper Exp $
dnl config.m4 for extension reflection

PHP_ARG_ENABLE(reflection, whether to enable reflection support,
[  --disable-reflection    Disable reflection support], yes, no)

if test "$PHP_REFLECTION" != "no"; then
  if test "$ext_shared" = "yes"; then
    AC_MSG_ERROR(Cannot build reflection as a shared module)
  fi
  AC_DEFINE(HAVE_REFLECTION, 1, [Whether Reflection is enabled])
  PHP_NEW_EXTENSION(reflection, php_reflection.c)
fi

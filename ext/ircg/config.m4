dnl
dnl $Id: config.m4,v 1.23 2003/06/04 01:38:03 sas Exp $
dnl

PHP_ARG_WITH(ircg, for IRCG support,
[  --with-ircg             Include IRCG support])

AC_ARG_WITH(ircg-config,
[  --with-ircg-config=PATH   IRCG: Path to the ircg-config script],
[ IRCG_CONFIG=$withval ],
[
if test "$PHP_IRCG" != "yes" && test "$PHP_IRCG" != "no"; then
  IRCG_CONFIG=$PHP_IRCG/bin/ircg-config
else
  IRCG_CONFIG=ircg-config
fi
])

if test "$PHP_IRCG" != "no"; then
  IRCG_PREFIX=`$IRCG_CONFIG --prefix`

  if test -z "$IRCG_PREFIX"; then
    AC_MSG_ERROR([I cannot run the ircg-config script which should have been installed by IRCG. Please ensure that the script is in your PATH or point --with-ircg-config to the path of the script.])
  fi

  PHP_ADD_INCLUDE($IRCG_PREFIX/include)
  PHP_ADD_LIBRARY(ircg,yes,IRCG_SHARED_LIBADD)
  PHP_EVAL_LIBLINE(`$IRCG_CONFIG --ldflags`, IRCG_SHARED_LIBADD)
  PHP_EVAL_INCLINE(`$IRCG_CONFIG --cppflags`)
  PHP_ADD_LIBPATH($IRCG_PREFIX/lib, IRCG_SHARED_LIBADD)  
  PHP_SUBST(IRCG_SHARED_LIBADD)

  ircg_src=ircg_common.c
  if test "$PHP_SAPI" = "thttpd"; then
    ircg_src=
    PHP_ADD_SOURCES(PHP_EXT_DIR(ircg),ircg_thttpd.c,[],sapi)
    PHP_ADD_SOURCES(PHP_EXT_DIR(ircg),ircg_common.c,[],cli)
  else
    PHP_ADD_LIBRARY(dl,yes,IRCG_SHARED_LIBADD)
  fi
  PHP_NEW_EXTENSION(ircg,[ ircg.c ircg_scanner.c php_ircg_cache.c $ircg_src \
          php_ircg_conversion.c php_ircg_error.c php_ircg_tokenizer.c],
          $ext_shared)
  unset ircg_src
  AC_DEFINE(HAVE_IRCG, 1, [Whether you want IRCG support])
  PHP_ADD_MAKEFILE_FRAGMENT
fi

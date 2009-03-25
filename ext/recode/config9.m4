dnl
dnl $Id: config9.m4,v 1.2.6.1 2008/12/01 23:30:21 johannes Exp $
dnl

dnl Check for extensions with which Recode can not work
if test "$PHP_RECODE" != "no"; then
  test "$PHP_IMAP"  != "no" && recode_conflict="$recode_conflict imap"

  if test -n "$MYSQL_LIBNAME"; then
    PHP_CHECK_LIBRARY($MYSQL_LIBNAME, hash_insert, [
      recode_conflict="$recode_conflict mysql"
    ])
  fi

  if test -n "$recode_conflict"; then
    AC_MSG_ERROR([recode extension can not be configured together with:$recode_conflict])
  fi
fi

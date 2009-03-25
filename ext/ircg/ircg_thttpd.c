/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2004 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.0 of the PHP license,       |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_0.txt.                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Sascha Schumann <sascha@schumann.cx>                         |
   +----------------------------------------------------------------------+
*/

/* $Id: ircg_thttpd.c,v 1.5 2004/01/08 08:15:53 andi Exp $ */

int php_ircg_register_closed_connection(void (*http_closed_connection)(int))
{
	thttpd_register_on_close(http_closed_connection);
	thttpd_set_dont_close();
	return 0;
}

int php_ircg_register_with_sapi(int *fd TSRMLS_DC)
{
	return sapi_get_fd(fd TSRMLS_CC);
}

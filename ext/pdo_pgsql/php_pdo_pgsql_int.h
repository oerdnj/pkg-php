/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2005 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.0 of the PHP license,       |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_0.txt.                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Edin Kadribasic <edink@emini.dk>                             |
  +----------------------------------------------------------------------+
*/

/* $Id: php_pdo_pgsql_int.h,v 1.13.2.1 2005/11/25 03:35:04 wez Exp $ */

#ifndef PHP_PDO_PGSQL_INT_H
#define PHP_PDO_PGSQL_INT_H

#include <libpq-fe.h>
#include <php.h>

#define PHP_PDO_PGSQL_CONNECTION_FAILURE_SQLSTATE "08006"

typedef struct {
	const char *file;
	int line;
	unsigned int errcode;
	char *errmsg;
} pdo_pgsql_error_info;

/* stuff we use in a pgsql database handle */
typedef struct {
	PGconn		*server;
	unsigned 	attached:1;
	unsigned 	_reserved:31;
	pdo_pgsql_error_info	einfo;
	Oid 		pgoid;
} pdo_pgsql_db_handle;

typedef struct {
	char         *def;
	Oid          pgsql_type;
	long         intval;
	zend_bool    boolval;
} pdo_pgsql_column;

typedef struct {
	pdo_pgsql_db_handle     *H;
	PGresult                *result;
	int                     current_row;
	pdo_pgsql_column        *cols;
	char *cursor_name;
#if HAVE_PQPREPARE
	char *stmt_name;
	char *query;
	char **param_values;
	int *param_lengths;
	int *param_formats;
	Oid *param_types;
#endif
} pdo_pgsql_stmt;

typedef struct {
	char		*repr;
	long		repr_len;
	int		pgsql_type;
	void		*thing;	/* for LOBS, REFCURSORS etc. */
} pdo_pgsql_bound_param;

extern pdo_driver_t pdo_pgsql_driver;

extern int _pdo_pgsql_error(pdo_dbh_t *dbh, pdo_stmt_t *stmt, int errcode, const char *sqlstate, const char *file, int line TSRMLS_DC);
#define pdo_pgsql_error(d,e,z)	_pdo_pgsql_error(d, NULL, e, z, __FILE__, __LINE__ TSRMLS_CC)
#define pdo_pgsql_error_stmt(s,e,z)	_pdo_pgsql_error(s->dbh, s, e, z, __FILE__, __LINE__ TSRMLS_CC)

extern struct pdo_stmt_methods pgsql_stmt_methods;

#ifdef HAVE_PQRESULTERRORFIELD
#define pdo_pgsql_sqlstate(r) PQresultErrorField(r, PG_DIAG_SQLSTATE)
#else
#define pdo_pgsql_sqlstate(r) (const char *)NULL
#endif

enum {
	PDO_PGSQL_ATTR_DISABLE_NATIVE_PREPARED_STATEMENT = PDO_ATTR_DRIVER_SPECIFIC,
};

#endif /* PHP_PDO_PGSQL_INT_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */

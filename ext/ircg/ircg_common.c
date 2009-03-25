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

/* $Id: ircg_common.c,v 1.14 2004/01/08 08:15:52 andi Exp $ */

#if YOU_ARE_SANE

Then better walk away from this file.

#endif

#include "php.h"

int php_ircg_register_closed_connection(void (*http_closed_connection)(int))
{
	return -1;
}

#define PHP_IRCG_COMPATIBLE

#ifdef PHP_IRCG_COMPATIBLE

#include <dlfcn.h>

static int (*php_ircg_sapi_get_fd)(int *fd TSRMLS_DC);
static int (*php_ircg_sapi_force_http_10)(TSRMLS_D);
static int (*php_ircg_sapi_get_target_uid)(uid_t * TSRMLS_DC);
static int (*php_ircg_sapi_get_target_gid)(gid_t * TSRMLS_DC);

/* Apache 1.3 definitions */

static int is_apache;

static uid_t *php_ircg_ap_user_id;
static gid_t *php_ircg_ap_group_id;


typedef struct {
	unsigned long a;
	int fd;
} ircg_APFD;

typedef struct {
	int a;
	unsigned char *b;
	int c[3];
	void *d[2];
	int e;
	void (*f)(void);
	void *g;
	long int h;
	void *i;

	union {
		int fd;
		/* IBM HTTP Server adds another abstraction layer */
		ircg_APFD *apfd;
	} x;
} ircg_BUFF;

typedef struct {
	void *a[4];
	int b;
	ircg_BUFF *client;
} ircg_conn_rec;

typedef struct {
	void *a;
	
	ircg_conn_rec *connection;
	
	void *b[5];
	int c;
	enum { REALLY_NOTHING } d;
	int e;
	void *f;
	
	int proto_num;
} ircg_request_rec;

/* Apache 2.0 definitions */

static int is_apache2;

static void *php_ircg_apa2_core_module;
static void *(*php_ircg_apa2_get_module_config)(void *, void *);

typedef struct {
	void *a;
	uid_t user_id;
	gid_t group_id;
} ircg_apa2_unixd_config_rec;

static ircg_apa2_unixd_config_rec *php_ircg_apa2_unixd_config;

typedef struct {
	void *a;
	int fd;
} ircg_apr_unix_socket;

typedef struct {
	void *a[8];
	unsigned b;
	enum { REALLY_NOTHING2 } c;
	signed int d;
	int e;
	void *f[2];
	long g;
	
	void *conn_config;
} ircg_apa2_conn_rec;

typedef struct {
	void *a;
	ircg_apa2_conn_rec *connection;

	void *b[5];
	int c[3];
	char *d;

	int proto_num;
} ircg_apa2_request_rec;


typedef struct {
	int a;
	ircg_apa2_request_rec *r;
} ircg_apa2_php_struct;

#include "main/SAPI.h"

static int php_ircg_force_http_10(TSRMLS_D)
{
	if (is_apache) {
		ircg_request_rec *r = SG(server_context);
	
		/* ensure that we are not accidentially hitting something else */
		if (r->proto_num == 9 
				|| (r->proto_num >= 1000 && r->proto_num <= 2000)) {
			r->proto_num = 1000;
			return SUCCESS;
		}
	} else if (is_apache2) {
		ircg_apa2_php_struct *p = SG(server_context);
	
		/* ensure that we are not accidentially hitting something else */
		if (p && p->r && (p->r->proto_num == 9 
				|| (p->r->proto_num >= 1000 && p->r->proto_num <= 2000))) {
			p->r->proto_num = 1000;
			return SUCCESS;
		}
	} else if (php_ircg_sapi_force_http_10) {
		return php_ircg_sapi_force_http_10(TSRMLS_C);
	}
	return FAILURE;
}

static int php_ircg_get_fd(int *nfd TSRMLS_DC)
{
	int fd = -1;
	
	if (is_apache) {
		ircg_request_rec *r = SG(server_context);

		fd = r->connection->client->x.fd;

		if (fd < -1 && fd > 130000) {
			fd = r->connection->client->x.apfd->fd;
		}

	} else if (is_apache2) {
		ircg_apa2_php_struct *p = SG(server_context);
		
		if (p) {
			ircg_apr_unix_socket *s;
			
			s = php_ircg_apa2_get_module_config(p->r->connection->conn_config,
					php_ircg_apa2_core_module);

			if (s) {	
				fd = s->fd;
			}
		}
	} else if (php_ircg_sapi_get_fd) {
		return php_ircg_sapi_get_fd(nfd TSRMLS_CC);
	}
	
	if (fd >= 0 && fd < 130000) {
		*nfd = fd;
		return SUCCESS;
	}

	return FAILURE;
}

static int php_ircg_get_target_uid(uid_t *obj TSRMLS_DC)
{
	if (is_apache) {
		*obj = *php_ircg_ap_user_id;
		return SUCCESS;
	} else if (is_apache2) {
		*obj = php_ircg_apa2_unixd_config->user_id;
		return SUCCESS;
	}
	return FAILURE;
}

static int php_ircg_get_target_gid(gid_t *obj TSRMLS_DC)
{
	if (is_apache) {
		*obj = *php_ircg_ap_group_id;
		return SUCCESS;
	} else if (is_apache2) {
		*obj = php_ircg_apa2_unixd_config->group_id;
		return SUCCESS;
	}
	return FAILURE;
}

#endif

#ifndef RTLD_DEFAULT
#define RTLD_DEFAULT NULL
#endif

void php_ircg_init_compat(TSRMLS_D)
{
#ifdef PHP_IRCG_COMPATIBLE
	void *p;
	
	if (strcmp(sapi_module.name, "apache") == 0) {
		is_apache = 1;
		php_ircg_ap_user_id = dlsym(RTLD_DEFAULT, "ap_user_id");
		php_ircg_ap_group_id = dlsym(RTLD_DEFAULT, "ap_group_id");
	} else if (strcmp(sapi_module.name, "apache2filter") == 0
			|| strcmp(sapi_module.name, "apache2handler") == 0) {
		is_apache2 = 1;

		php_ircg_apa2_core_module = dlsym(RTLD_DEFAULT, "core_module");
		php_ircg_apa2_get_module_config = dlsym(RTLD_DEFAULT,
				"ap_get_module_config");
		php_ircg_apa2_unixd_config = dlsym(RTLD_DEFAULT, "unixd_config");
	}
	

	p = dlsym(RTLD_DEFAULT, "sapi_get_fd");
	php_ircg_sapi_get_fd = p ? p : php_ircg_get_fd;

	p = dlsym(RTLD_DEFAULT, "sapi_force_http_10");
	php_ircg_sapi_force_http_10 = p ? p : php_ircg_force_http_10;

	p = dlsym(RTLD_DEFAULT, "sapi_get_target_uid");
	php_ircg_sapi_get_target_uid = p ? p : php_ircg_get_target_uid;
	
	p = dlsym(RTLD_DEFAULT, "sapi_get_target_gid");
	php_ircg_sapi_get_target_gid = p ? p : php_ircg_get_target_gid;
#endif
}

int php_ircg_get_target_data(uid_t *uid, gid_t *gid TSRMLS_DC)
{
	return php_ircg_get_target_uid(uid TSRMLS_CC)
		|| php_ircg_get_target_gid(gid TSRMLS_CC);
}

int php_ircg_register_with_sapi(int *fd TSRMLS_DC)
{
#ifdef PHP_IRCG_COMPATIBLE
	return php_ircg_force_http_10(TSRMLS_C) 
		|| php_ircg_get_fd(fd TSRMLS_CC);
#else	
	return sapi_force_http_10(TSRMLS_C)
		|| sapi_get_fd(fd TSRMLS_CC);
#endif
}

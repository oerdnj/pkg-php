#!/usr/bin/perl
use warnings;
use strict;
use Debian::Debhelper::Dh_Lib;

insert_before("dh_auto_configure", "dh_phpize");
insert_before("dh_clean", "dh_phpize_clean");
insert_after("dh_install", "dh_php5");

1;

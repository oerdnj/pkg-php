--TEST--
Sybase-CT close not open
--SKIPIF--
<?php require('skipif.inc'); ?>
--FILE--
<?php
/* This file is part of PHP test framework for ext/sybase_ct
 *
 * $Id: test_close_notopen.phpt,v 1.1.2.1 2008/11/09 11:38:17 thekid Exp $ 
 */

  require('test.inc');

  sybase_close();
?>
--EXPECTF--

Warning: sybase_close(): Sybase:  No connection to close in %s on line %d

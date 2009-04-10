--TEST--
PDO OCI Bug #41996 (Problem accessing Oracle ROWID)
--SKIPIF--
<?php
/* $Id: bug41996.phpt,v 1.1.2.2 2008/07/21 17:35:50 pajoye Exp $ */
if (!extension_loaded('pdo') || !extension_loaded('pdo_oci')) die('skip not loaded');
require dirname(__FILE__).'/../../pdo/tests/pdo_test.inc';
PDOTest::skip();
?>
--FILE--
<?php
require 'ext/pdo/tests/pdo_test.inc';
$db = PDOTest::test_factory('ext/pdo_oci/tests/common.phpt');

$stmt = $db->prepare('SELECT rowid FROM dual');
$stmt->execute();
$row = $stmt->fetch();
var_dump(strlen($row[0]) > 0);
--EXPECTF--
bool(true)

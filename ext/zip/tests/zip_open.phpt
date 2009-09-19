--TEST--
zip_open() function
--SKIPIF--
<?php
/* $Id: zip_open.phpt 216983 2006-07-24 16:58:58Z pajoye $ */
if(!extension_loaded('zip')) die('skip');
?>
--FILE--
<?php
$zip = zip_open(dirname(__FILE__)."/test_procedural.zip");

echo is_resource($zip) ? "OK" : "Failure";

?>
--EXPECT--
OK

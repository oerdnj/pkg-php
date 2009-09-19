--TEST--
zip_close() function
--SKIPIF--
<?php
/* $Id: zip_close.phpt 216983 2006-07-24 16:58:58Z pajoye $ */
if(!extension_loaded('zip')) die('skip');
?>
--FILE--
<?php
$zip = zip_open(dirname(__FILE__)."/test_procedural.zip");
if (!is_resource($zip)) die("Failure");
zip_close($zip);
echo "OK";

?>
--EXPECT--
OK

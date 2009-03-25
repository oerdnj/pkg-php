--TEST--
zip_entry_open() function
--SKIPIF--
<?php
/* $Id: zip_entry_open.phpt,v 1.1 2006/07/24 16:58:58 pajoye Exp $ */
if(!extension_loaded('zip')) die('skip');
?>
--FILE--
<?php
$zip    = zip_open(dirname(__FILE__)."/test_procedural.zip");
$entry  = zip_read($zip);
echo zip_entry_open($zip, $entry, "r") ? "OK" : "Failure";
zip_close($zip);

?>
--EXPECT--
OK

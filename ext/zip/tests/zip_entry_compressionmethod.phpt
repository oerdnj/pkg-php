--TEST--
zip_entry_compressionmethod() function
--SKIPIF--
<?php
/* $Id: zip_entry_compressionmethod.phpt,v 1.1.4.1 2008/05/21 09:27:41 pajoye Exp $ */
if(!extension_loaded('zip')) die('skip');
?>
--FILE--
<?php
$zip = zip_open(dirname(__FILE__)."/test_procedural.zip");
if (!is_resource($zip)) die("Failure");
$entries = 0;
while ($entry = zip_read($zip)) {
  echo zip_entry_compressionmethod($entry)."\n";
}
zip_close($zip);

?>
--EXPECT--
stored
stored
stored
deflated


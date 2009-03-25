--TEST--
zip_read() function
--SKIPIF--
<?php
/* $Id: zip_read.phpt,v 1.1.4.1 2008/05/21 09:27:41 pajoye Exp $ */
if(!extension_loaded('zip')) die('skip');
?>
--FILE--
<?php
$zip = zip_open(dirname(__FILE__)."/test_procedural.zip");
if (!is_resource($zip)) die("Failure");
$entries = 0;
while ($entry = zip_read($zip)) {
  $entries++;
}
zip_close($zip);
echo "$entries entries";

?>
--EXPECT--
4 entries

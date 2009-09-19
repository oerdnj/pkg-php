--TEST--
Bug #47667 (ZipArchive::OVERWRITE seems to have no effect)
--SKIPIF--
<?php
/* $Id: bug47667.phpt 277254 2009-03-16 10:22:13Z mkoppanen $ */
if(!extension_loaded('zip')) die('skip');
?>
--FILE--
<?php
$thisdir = dirname(__FILE__);
$filename = $thisdir . "/bug47667.zip";

$zip = new ZipArchive();
if ($zip->open($filename, ZipArchive::CREATE) !== true) {
	exit("Unable to open the zip file");
} else {
	$zip->addFromString('foo.txt', 'foo bar foobar');
	$zip->close();
}

for ($i = 0; $i < 10; $i++) {
	$zip = new ZipArchive();
	if ($zip->open($filename, ZipArchive::OVERWRITE) !== true) {
		exit("Unable to open the zip file");
	}	
	$zip->addFromString("foo_{$i}.txt", 'foo bar foobar');
	$zip->close();
}

$zip = new ZipArchive();
if ($zip->open($filename, ZipArchive::CREATE) !== true) {
	exit("Unable to open the zip file");
}

echo "files: " , $zip->numFiles;

unlink($filename);

--EXPECT--
files: 1

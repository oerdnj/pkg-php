--TEST--
gzfile(), gzreadfile()
--SKIPIF--
<?php /* $Id: gzfilegzreadfile.phpt 158952 2004-05-19 08:45:46Z helly $ */
if (!extension_loaded("zlib")) print "skip"; ?>
--FILE--
<?php
$original = <<<EOD
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah

EOD;

$filename = tempnam("/tmp", "phpt");

$fp = gzopen($filename, "wb");
gzwrite($fp, $original);
var_dump(strlen($original));
fclose($fp);

readgzfile($filename);

echo "\n";

$lines = gzfile($filename);

unlink($filename);

foreach ($lines as $line) {
    echo $line;
}

?>
--EXPECT--
int(560)
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah

blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah
blah blah blah blah blah blah blah

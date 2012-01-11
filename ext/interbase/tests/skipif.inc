<?php /* $Id: skipif.inc 317169 2011-09-22 22:07:02Z tyrael $ */

if (!extension_loaded("interbase")) print "skip interbase extension not available";
require("interbase.inc");
if(!@ibase_connect($test_base)){
        die("skip cannot connnect");
}

?>

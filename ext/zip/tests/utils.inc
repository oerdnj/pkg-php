<?php
/* $Id: utils.inc,v 1.1.2.2 2006/10/02 14:17:47 bjori Exp $ */
function dump_entries_name($z) {
	for($i=0; $i<$z->numFiles; $i++) {
	    $sb = $z->statIndex($i);
	    echo $i . ' ' . $sb['name'] . "\n";
	}
}

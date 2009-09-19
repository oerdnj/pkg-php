--TEST--
Operator precedence
--FILE--
<?php /* $Id: zend_operators.phpt 152904 2004-03-04 10:58:49Z derick $ */

var_dump((object)1 instanceof stdClass);
var_dump(! (object)1 instanceof Exception);

?>
--EXPECT--
bool(true)
bool(true)

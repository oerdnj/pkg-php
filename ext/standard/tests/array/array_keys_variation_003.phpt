--TEST--
Test array_keys() function (variation - 3)
--FILE--
<?php

echo "*** Testing array_keys() on all the types other than arrays ***\n";
$types_arr = array(
  TRUE => TRUE,
  FALSE => FALSE,
  1 => 1,
  0 => 0,
  -1 => -1, 
  "1" => "1",
  "0" => "0",
  "-1" => "-1",
  NULL,
  array(),
  "php" => "php",
  "" => ""
);
$values = array(TRUE, FALSE, 1, 0, -1, "1", "0", "-1",  NULL, array(), "php", "");
foreach ($values as $value){
  var_dump(array_keys($types_arr, $value)); 
}

echo "Done\n";
?>
--EXPECTF--
*** Testing array_keys() on all the types other than arrays ***
array(3) {
  [0]=>
  int(1)
  [1]=>
  int(-1)
  [2]=>
  string(3) "php"
}
array(4) {
  [0]=>
  int(0)
  [1]=>
  int(2)
  [2]=>
  int(3)
  [3]=>
  string(0) ""
}
array(1) {
  [0]=>
  int(1)
}
array(4) {
  [0]=>
  int(0)
  [1]=>
  int(2)
  [2]=>
  string(3) "php"
  [3]=>
  string(0) ""
}
array(1) {
  [0]=>
  int(-1)
}
array(1) {
  [0]=>
  int(1)
}
array(1) {
  [0]=>
  int(0)
}
array(1) {
  [0]=>
  int(-1)
}
array(3) {
  [0]=>
  int(2)
  [1]=>
  int(3)
  [2]=>
  string(0) ""
}
array(2) {
  [0]=>
  int(2)
  [1]=>
  int(3)
}
array(1) {
  [0]=>
  string(3) "php"
}
array(2) {
  [0]=>
  int(2)
  [1]=>
  string(0) ""
}
Done

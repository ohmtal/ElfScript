<?php
function fib ( $n ) {
  if ( $n <= 1 ) return $n;
  return fib( $n - 1 ) + fib( $n - 2 );
}


$i = 33;
print ("running fib with number:".$i."\n");
print ("Fib" . $i . "=" . fib($i) . "\n");

?>

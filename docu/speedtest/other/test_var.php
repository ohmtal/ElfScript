<?php
$JLOOPS = 25;
$ILOOPS = 1000000;
$localX = 0;

for ($j = 0; $j < $JLOOPS; $j++) {
    for ($i = 0; $i < $ILOOPS; $i++) {
        $localX = $localX + 1;
    }
    echo "SUM (++) IS: " . $localX . "\n";

    for ($i = 0; $i < $ILOOPS; $i++) {
        $localX = $localX - 1;
    }
    echo "SUM (--) IS: " . $localX . "\n";

    $localX = 66;
    echo "set Sum to 66 == " . ($localX * 1) . "\n";

    for ($i = 0; $i < $ILOOPS; $i++) {
        $localX = $localX * ($i + 1);
        $localX = $localX / ($i + 1);
    }
    echo "SUM (*/ %i+1) IS: " . $localX . "\n";

    for ($i = 0; $i < ($ILOOPS / 2.0); $i++) {
        $ran = (mt_rand() / mt_getrandmax()) * $i;
        $localX = $localX - $ran;
        $localX = $localX + $ran;
    }
    echo "SUM (rand +-) IS: " . $localX . "\n";
}

$localX = $localX - 66.0;
echo "---------------------\n";
echo "---------------------\n";
echo "Final sum should be 0 == " . $localX . "\n";
echo "---------------------\n";
echo "---------------------\n";
?>

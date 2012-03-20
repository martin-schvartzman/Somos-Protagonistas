<?php
$array=array();
$array[0]=1;
$array[1]=2;
$array[2]=3;
$array[3]=4;

$r=array();
		$i=0;
foreach($array as $a){
	$r[++$i]=$a;
}
var_dump($r);

?>
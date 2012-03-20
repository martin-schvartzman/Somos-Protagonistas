<?php
session_start();
include("/packages/general.pck");
$sub="";
$array=explode(".",$_SERVER['HTTP_HOST']);
if(count($array) == 4 ){
$sub=$array[0];
}

if($sub=="www"){
Header( "HTTP/1.1 301 Moved Permanently" ); 
Header( "Location: http://somos-protagonistas.com.ar".$_SERVER['REQUEST_URI'] ); 
}

if($sub=="admin"){
include("/views/admin.php");
}else if($sub=="ajax"){
include("/views/ajax.php");
}else{
include("/views/index.php");
}

?>
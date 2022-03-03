<meta http-equiv="refresh" content="0.5">

<?php

$temp = file_get_contents("data.txt");

if($temp >= 32){
	$color="red";
	}else if($temp >=20 && $temp <32){
		$color="green";
	}else if($temp < 20){
		$color="blue";
	}

print "<h1 style='text-align:center;'>Arduino/Raspberry Pi Temp Web Device</h1>";
print"<br>";

print"<p style='text-align:center; font-size:200px; margin-top:10px; margin-bottom:10px; color:".$color.";'>".$temp."</p>";

?>

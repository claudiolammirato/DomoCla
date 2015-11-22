<?php
exec("cd python;python importfile.py");

?>

<!DOCTYPE html>
<META HTTP-EQUIV="CACHE-CONTROL" CONTENT="NO-CACHE">
<html>
<title>Temperature</title>
<head>
<meta charset="utf-8">
<script type="text/javascript" src="javascript/temperature.js?v=<?=filemtime('javascrip/temperature.js');?>"></script>
<script language="javascript" type="text/javascript" src="javascript/jquery-2.1.4.min.js"></script>
<script language="javascript" type="text/javascript" src="javascript/jquery.jqplot.min.js"></script>
<link rel="stylesheet" type="text/css" href="css/jquery.jqplot.min.css" />
<script>
	
</script>
</head>
<body>
<!--<input type="button" value="Retrieve Data"  onclick="yolla()">-->

<div id="Data"></div>
<div id="chartdiv" style="height:400px;width:300px; "></div>
</div>

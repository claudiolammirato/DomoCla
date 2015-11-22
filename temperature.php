<?php
//exec("cd python;python importfile.py");

?>

<!DOCTYPE html>
<META HTTP-EQUIV="CACHE-CONTROL" CONTENT="NO-CACHE">
<html>
<title>Temperature</title>
<head>
<meta charset="utf-8">
<script type="text/javascript" src="javascript/temperature.js?v=<?=filemtime('javascrip/temperature.js');?>"></script>
</head>
<body>
<input type="button" value="Retrieve Data"  onclick="yolla()">

<div id="Data"></div>

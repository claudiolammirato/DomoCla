<?php
exec("cd python;python importfile.py");

?>

<!DOCTYPE html>

<html>
<title>Temperature</title>
<head>
<meta charset="utf-8">
<script type="text/javascript">

var nesne ;
if(navigator.appName.search('Microsoft')>-1) { nesne = new ActiveXObject('MSXML2.XMLHTTP'); }
else { nesne = new XMLHttpRequest(); }

function yolla() {
nesne.open('get', 'python/datalog.txt', true);
nesne.onreadystatechange= cevap;
nesne.send(null);
}

function cevap() {
if(nesne.readyState==4) {
var el = document.getElementById('Data');
el.innerHTML = nesne.responseText;
}
}

</script>
</head>
<body>
<input type="button" value="Retrieve Data"  onclick="yolla()">

<div id="Data"></div>

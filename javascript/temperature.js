

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
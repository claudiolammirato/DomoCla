var request ;

if(navigator.appName.search('Microsoft')>-1) { request = new ActiveXObject('MSXML2.XMLHTTP'); }
else { request = new XMLHttpRequest(); }


request.open('get', 'python/datalog.txt', true);
request.onreadystatechange= plotgraph;
request.send(null);


function plotgraph() {
	if(request.readyState === 4) {
	//var myArr = JSON.parse(request.responseText);
	//var out = "";
    //var i;
    //for(i = 0; i < myArr.length; i++) {
    //    out += myArr[i].display;
    //}
    var str = request.responseText.split("\n");
    document.getElementById("Data").innerHTML = str[1];
    }
}

$(function(){
    $.jqplot('chartdiv', [[[1, 2],[3,5.12],[5,13.1],[7,33.6],[9,85.9],[11,219.9]]]);
});
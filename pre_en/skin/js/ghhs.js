function bgChange(){
 var lis= document.getElementById("hhbs").getElementsByTagName('li');
 lis[0].style.background = 'none';
 lis[0].style.fontSize = '14px';
 lis[0].style.textIndent = '0px';
 lis[0].style.fontWeight = 'bold';
 for(var i=1; i<lis.length; i+=2)
 lis[i].style.background = 'url(images/newsicons.png) 7px center no-repeat #004285';
}
window.onload = bgChange;
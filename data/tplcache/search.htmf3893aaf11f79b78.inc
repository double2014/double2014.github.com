<?php
$z[0]=Array("global","",264,290);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",331,360);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",400,458);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",967,1002);
$z[3][4]['filename']="head.htm";
$z[4]=Array("channel","\r\n            <li class=\"smallnav\"><a href=\"[field:typeurl/]#content\" title=\"[field:typename/]\"><span>&gt;</span>[field:typename/]</a></li>\r\n            ",1678,2020);
$z[4][4]['type']="son";
$z[4][4]['row']="10";
$z[4][4]['typeid']="2";
$z[4][4]['currentstyle']="<li class='hover'><a href='~typelink~#content' ~rel~><span>~typename~</span></a></li>";
$z[5]=Array("global","",2654,2709);
$z[5][4]['name']="keyword";
$z[5][4]['function']="RemoveXSS(@me)";
$z[6]=Array("list","\r\n          <li><a href=\"[field:arcurl/]#content\" title=\"[field:title/]\">[field:title/]</a><span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></li>\r\n          ",2814,3018);
$z[6][4]['perpage']="10";
$z[7]=Array("pagelist","",3104,3157);
$z[7][4]['listitem']="index,end,pre,next,pageno";
$z[8]=Array("include","",3272,3309);
$z[8][4]['filename']="footer.htm";

?>
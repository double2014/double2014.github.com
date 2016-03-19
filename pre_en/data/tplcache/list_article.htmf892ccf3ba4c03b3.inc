<?php
$z[0]=Array("field","",254,273);
$z[0][4]['name']="title";
$z[1]=Array("global","",274,300);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",341,370);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",410,468);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",835,870);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\r\n            <li class=\"smallnav\"><a href=\"[field:typeurl/]\" title=\"[field:typename/]\"><span>&gt;</span>[field:typename/]</a></li>\r\n            ",1692,2018);
$z[5][4]['type']="son";
$z[5][4]['row']="10";
$z[5][4]['typeid']="2";
$z[5][4]['currentstyle']="<li class='hover'><a href='~typelink~' ~rel~><span>~typename~</span></a></li>";
$z[6]=Array("field","",2591,2649);
$z[6][4]['name']="typeid";
$z[6][4]['function']="GetTopTypename(@me)";
$z[7]=Array("field","",2698,2727);
$z[7][4]['name']="position";
$z[8]=Array("list","\r\n          <li><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a><span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></li>\r\n          ",2814,3011);
$z[8][4]['pagesize']="10";
$z[9]=Array("pagelist","",3094,3147);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[10]=Array("include","",3260,3297);
$z[10][4]['filename']="footer.htm";

?>
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
$z[4]=Array("include","",844,879);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\r\n            <li class=\"smallnav\"><a href=\"/en[field:typeurl/]#content\" title=\"[field:typename/]\"><span>&gt;</span>[field:typename/]</a></li>\r\n            ",1723,2071);
$z[5][4]['type']="son";
$z[5][4]['row']="10";
$z[5][4]['typeid']="2";
$z[5][4]['currentstyle']="<li class='hover'><a href='/en~typelink~#content' ~rel~><span>~typename~</span></a></li>";
$z[6]=Array("field","",2680,2738);
$z[6][4]['name']="typeid";
$z[6][4]['function']="GetTopTypename(@me)";
$z[7]=Array("type","<a href=\"/en[field:typelink /]\">[field:typename /]</a>",2788,2865);
$z[8]=Array("list","\r\n          <li><a href=\"/en[field:arcurl/]#content\" title=\"[field:title/]\">[field:title/]</a><span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></li>\r\n          ",2951,3159);
$z[8][4]['pagesize']="12";
$z[9]=Array("pagelist","",3242,3295);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[10]=Array("include","",3408,3445);
$z[10][4]['filename']="footer.htm";

?>
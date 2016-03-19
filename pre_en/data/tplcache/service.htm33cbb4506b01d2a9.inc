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
$z[5]=Array("channel","\r\n            <li class=\"smallnav\"><a href=\"[field:typeurl/]#content\" title=\"[field:typename/]\"><span>&gt;</span>[field:typename/]</a></li>\r\n            ",1693,2035);
$z[5][4]['type']="son";
$z[5][4]['row']="10";
$z[5][4]['typeid']="2";
$z[5][4]['currentstyle']="<li class='hover'><a href='~typelink~#content' ~rel~><span>~typename~</span></a></li>";
$z[6]=Array("field","",2608,2666);
$z[6][4]['name']="typeid";
$z[6][4]['function']="GetTopTypename(@me)";
$z[7]=Array("type","<a href=\"[field:typelink /]\">[field:typename /]</a>",2715,2789);
$z[8]=Array("list","\r\n          <li> <a href=\"[field:arcurl/]#content\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" width=\"189\" height=\"135\"></a><a href=\"[field:arcurl/]#content\" title=\"[field:title/]\">[field:title/]</a>\r\n            <p>[field:description/]...</p>\r\n          </li>\r\n          ",2875,3188);
$z[8][4]['pagesize']="6";
$z[9]=Array("include","",3288,3325);
$z[9][4]['filename']="footer.htm";

?>
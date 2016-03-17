<?php
$z[0]=Array("field","",328,347);
$z[0][4]['name']="title";
$z[1]=Array("global","",348,374);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",415,444);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",484,542);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",909,944);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channelartlist","\r\n			<dt>\r\n				{dede:type}\r\n				 <h3><a href=\"[field:typelink /]\">[field:typename /]</a></h3>\r\n				{/dede:type}\r\n			</dt>\r\n\r\n			<dd>\r\n			{dede:channel type='son'}\r\n			 <a href='[field:typelink /]'>[field:typename/]</a><br>\r\n			{/dede:channel}\r\n			</dd>\r\n         ",1808,2125);
$z[5][4]['typeid']="2";
$z[6]=Array("field","",2235,2293);
$z[6][4]['name']="typeid";
$z[6][4]['function']="GetTopTypename(@me)";
$z[7]=Array("type","<a href=\"[field:typelink /]\">[field:typename /]</a>",2342,2416);
$z[8]=Array("list","\r\n          <li> <a href=\"[field:arcurl/]#content\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" width=\"189\" height=\"135\"></a><a href=\"[field:arcurl/]#content\" title=\"[field:title/]\">[field:title/]</a>\r\n            <p>[field:description/]...</p>\r\n          </li>\r\n          ",2502,2815);
$z[8][4]['pagesize']="6";
$z[9]=Array("include","",2915,2952);
$z[9][4]['filename']="footer.htm";

?>
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
$z[5]=Array("channelartlist","\r\n			<dt>\r\n				{dede:type}\r\n				 <h3><a href=\"[field:typelink /]\">[field:typename /]</a></h3>\r\n				{/dede:type}\r\n			</dt>\r\n\r\n			<dd>\r\n			{dede:channel type='son'}\r\n			 <a href='[field:typelink /]'>[field:typename/]</a><br>\r\n			{/dede:channel}\r\n			</dd>\r\n         ",1737,2054);
$z[5][4]['typeid']="2";
$z[6]=Array("field","",2174,2232);
$z[6][4]['name']="typeid";
$z[6][4]['function']="GetTopTypename(@me)";
$z[7]=Array("type","<a href=\"[field:typelink /]\">[field:typename /]</a>",2281,2355);
$z[8]=Array("list","\r\n          <li><a href=\"[field:arcurl/]#content\" title=\"[field:title/]\">[field:title/]</a><span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></li>\r\n          ",2441,2646);
$z[8][4]['pagesize']="12";
$z[9]=Array("pagelist","",2729,2782);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[10]=Array("include","",2894,2931);
$z[10][4]['filename']="footer.htm";

?>
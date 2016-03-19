<?php
$z[0]=Array("global","",338,364);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",405,434);
$z[1][4]['name']="keywords";
$z[2]=Array("field","",474,532);
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",1041,1076);
$z[3][4]['filename']="head.htm";
$z[4]=Array("channelartlist","\r\n			<dt>\r\n				{dede:type}\r\n				 <h3><a href=\"[field:typelink /]\">[field:typename /]</a></h3>\r\n				{/dede:type}\r\n			</dt>\r\n\r\n			<dd>\r\n			{dede:channel type='son'}\r\n			 <a href='[field:typelink /]'>[field:typename/]</a><br>\r\n			{/dede:channel}\r\n			</dd>\r\n         ",1787,2104);
$z[4][4]['typeid']="2";
$z[5]=Array("global","",2283,2338);
$z[5][4]['name']="keyword";
$z[5][4]['function']="RemoveXSS(@me)";
$z[6]=Array("list","\r\n          <li><a href=\"[field:arcurl/]#content\" title=\"[field:title/]\">[field:title/]</a><span>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></li>\r\n          ",2466,2670);
$z[6][4]['perpage']="10";
$z[7]=Array("pagelist","",2756,2809);
$z[7][4]['listitem']="index,end,pre,next,pageno";
$z[8]=Array("include","",2924,2961);
$z[8][4]['filename']="footer.htm";

?>
﻿window.onload = window.onresize = window.onscroll = function ()
{
 var oBox = document.getElementById("qqbox_zzjs");
 var oLine = document.getElementById("online_lanrenzhijia");
 var oMenu = document.getElementById("menu_zzjs_net");
 var iScrollTop = document.documentElement.scrollTop || document.body.scrollTop;
 setTimeout(function ()
 {
  clearInterval(oBox.timer);
  var iTop = parseInt((document.documentElement.clientHeight - oBox.offsetHeight)/2) + iScrollTop;
  oBox.timer = setInterval(function ()
  {
   var iSpeed = (iTop - oBox.offsetTop) / 8;
   iSpeed = iSpeed > 0 ? Math.ceil(iSpeed) : Math.floor(iSpeed);
   oBox.offsetTop == iTop ? clearInterval(oBox.timer) : (oBox.style.top = oBox.offsetTop + iSpeed + "px");
  }, 30)
 }, 100)
 oBox.onmouseover = function ()
 {
  this.style.width = 131 + "px";
  oLine.style.display = "block";
  oMenu.style.display = "none";
 };
 oBox.onmouseout = function ()
 {
  this.style.width = '';
  oLine.style.display = "none";
  oMenu.style.display = "block";
 };
};
document.write("<style>img{border:0;}ul,li{padding:0;margin:0;}.box_lanrenzhijia {z-index:99;right:0;width:128px;height:195px;position:absolute;}.box_lanrenzhijia .press{right:0;width:36px;cursor:pointer;position:absolute;height:128px;}.box_lanrenzhijia .zzjs_net_list{left:0;width:131px;position:absolute;height:195px;background:url(/skin/images/20120321lanrenzhijia_1.gif) no-repeat left center;}.box_lanrenzhijia .zzjs_net_list ul{padding:37px 0 0 21px;}.box_lanrenzhijia .zzjs_net_list li{height:26px;margin-bottom:3px;_margin-bottom:3px; list-style-type:none;}</style><div class=\"box_lanrenzhijia\" id=\"qqbox_zzjs\"><div class=\"zzjs_net_list\" id=\"online_lanrenzhijia\" style=\"display:none;\"><ul><li><a target=\"_blank\" href=\"http://shang.qq.com/wpa/qunwpa?idkey=23fea1bfb8db79156f7fb48227c0161edfd12ada2bf1448305607f81fed78236\"><img src=\"/skin/images/20111126lanrenzhijia_3.gif\" alt=\"一号客服\"></a></li><li><a target=\"_blank\" href=\"http://shang.qq.com/wpa/qunwpa?idkey=23fea1bfb8db79156f7fb48227c0161edfd12ada2bf1448305607f81fed78236\"><img src=\"/skin/images/20111126lanrenzhijia_3.gif\" alt=\"二号客服\"></a></li><li><a target=\"_blank\" href=\"http://shang.qq.com/wpa/qunwpa?idkey=23fea1bfb8db79156f7fb48227c0161edfd12ada2bf1448305607f81fed78236\"><img src=\"/skin/images/20111126lanrenzhijia_3.gif\" alt=\"三号客服\"></a></li><li><a target=\"_blank\" href=\"http://shang.qq.com/wpa/qunwpa?idkey=23fea1bfb8db79156f7fb48227c0161edfd12ada2bf1448305607f81fed78236\"><img src=\"/skin/images/20111126lanrenzhijia_3.gif\" alt=\"四号客服\"></a></li><li><a target=\"_blank\" href=\"http://shang.qq.com/wpa/qunwpa?idkey=23fea1bfb8db79156f7fb48227c0161edfd12ada2bf1448305607f81fed78236\"><img  target=\"_blank\" src=\"/skin/images/20111126lanrenzhijia_3.gif\" alt=\"五号客服\"></a></li></ul></div><div id=\"menu_zzjs_net\"><img  src=\"/skin/images/20111126lanrenzhijia_4.gif\" class=\"press\" alt=\"在线客服\"></div></div>");

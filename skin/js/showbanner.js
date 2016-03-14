/* 建议将这块放置于JS中 下面的部分几乎是不需要任何改动*/
				var nn=1;
				var key=0;
				function change_img(){
					if(key==0){
						key=1;
					}else if(document.all){
						document.getElementById('pic').filters[0].Apply();
						document.getElementById('pic').filters[0].Play(duration=2);
					}
					eval('document.getElementById("pic").src=img'+nn+'.src');
					eval('document.getElementById("url").href=url'+nn+'.src');
					eval('document.getElementById("url").title=title'+nn);
					for (var i=1;i<=counts;i++){
						document.getElementById('xxjdjj'+i).className='axx';
					}
					document.getElementById('xxjdjj'+nn).className='bxx';
					nn++;
					if(nn>counts){
						nn=1;
					}
					tt=setTimeout('change_img()',8000);
				}
				function changeimg(n){
					nn=n;
					window.clearInterval(tt);
					change_img();
				}
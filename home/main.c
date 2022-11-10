#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char *argc[])
{



printf("Content-type:text/html\n\n");

printf("<html lang='pt-br'>");
printf("<head>");

printf("<meta charset='UTF-8' />");
printf("<meta http-equiv='X-UA-Compatible' content='IE=edge' />");
printf("<meta name='viewport' content='width=device-width, initial-scale=1.0'/>");
printf("<link href='https://unpkg.com/aos@2.3.1/dist/aos.css' rel='stylesheet'>");
printf(" <link rel='shortcut icon' href='https://user-images.githubusercontent.com/108281436/197921902-2f98d2cc-027c-4a79-88ba-4a2ea65850ff.png' type='image/x-icon'>");
printf("<title>Δ Cripto</title>");

printf("<style>");
printf("*{margin:0;padding:0;box-sizing:border-box;font-family:Arial,Helvetica,sans-serif}body{background-color:#222}header{height:120px}nav{margin-top:10px;height:100%;display:flex;justify-content:space-between;align-items:center}#brand-main{margin-bottom:40px;}main{display:flex;flex-direction:column;align-items:center;justify-content:flex=start;height:80vh}.btn{text-shadow:0px 0px 5px rgba(59,241,244,.7137254902);font-size:20px;font-family:Arial,Helvetica,sans-serif;font-weight:bold;width:250px;height:50px;background-color:rgba(0,0,0,0);border:1px solid #3bf1f4;color:#3bf1f4;border-radius:20px;box-shadow:1px 1px 10px #3bf1f4}.btn:hover{box-shadow:1px 1px 20px #3bf1f4}#container-btn{display:flex;flex-direction:column;gap:40px}#brand{background-color:#3bf1f4;width:80px;height:80px;transform:rotate(45deg)}#container-brand{margin-left:40px}#content-brand{width:80px;height:80px;transform:rotate(45deg);background-color:#222;text-align:center;display:flex;align-items:center;justify-content:center}#text-brand{font-size:70px;font-weight:bold;color:#3bf1f4;transform:rotate(270deg);display:flex;align-items:center;justify-content:center;width:50px;height:50px}nav ul{list-style-type:none;font-size:20px;color:rgba(255,255,255,.507);margin-right:40px}nav ul li{display:inline-block;margin-left:25px}nav ul li:hover{color:#3bf1f4;text-shadow:0px 0px 5px #3bf1f4}a{text-decoration:none;color:rgba(255,255,255,.5)}");
printf("</style>");

printf("</head>");
printf("<body>");

printf("<header><nav><div id='container-brand'><div id='brand'><div id='content-brand'><div id='text-brand'>Δ</div></div></div></div><ul><a href='/cgi-bin/home/main.exe'><li>Home</li></a><a href='/cgi-bin/ajuda/main.exe'><li>Ajuda</li></a><a href='/cgi-bin/saibamais/main.exe'><li>Saiba Mais</li></a></ul></nav></header>");


printf("<main>");

printf("<div data-aos='zoom-in-down' data-aos-duration='2000'>");

printf("<img id='brand-main' src='https://user-images.githubusercontent.com/108281436/197286278-9a9ec9c8-668b-4e74-80ec-0c697c4b9bd0.png' />");

printf("</div>");



printf("<div id='container-btn'>");


printf("<div data-aos='zoom-in' data-aos-duration='2000'>");
printf("<a href='/cgi-bin/criptografar/main.exe'><button class='btn' type='button'>CRIPTOGRAFAR</button></a>");
printf("</div>");

printf("<div data-aos='zoom-in' data-aos-duration='2000'>");
printf("<a href='/cgi-bin/descriptografar/main.exe'><button class='btn' type='button'>DESCRIPTOGRAFAR</button></a>");
printf("</div>");


printf("</div>");



printf("</main>");
printf("<script src='https://unpkg.com/aos@2.3.1/dist/aos.js'></script> \n");
printf("<script> AOS.init(); </script>\n");
printf("</body>");
printf("</html>");




    return 0;


};

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
printf("<link href='https://cdn.jsdelivr.net/npm/bootstrap@5.2.2/dist/css/bootstrap.min.css' rel='stylesheet' integrity='sha384-Zenh87qX5JnK2Jl0vWa8Ck2rdkQ2Bzep5IDxbcnCeuOxjzrPF/et3URy9Bv1WTRi' crossorigin='anonymous'>");
printf(" <link rel='shortcut icon' href='https://user-images.githubusercontent.com/108281436/197921902-2f98d2cc-027c-4a79-88ba-4a2ea65850ff.png' type='image/x-icon'>");
printf("<title>Δ Cripto</title>");

printf("<style>");
printf("*{margin:0;padding:0;box-sizing:border-box;font-family:Arial,Helvetica,sans-serif}body{background-color:#222}header{height:120px}nav{margin-top:10px;height:100%;display:flex;justify-content:space-between;align-items:center}main{display:flex;align-items:center;justify-content:center;height:70vh}.btn{text-shadow:0px 0px 5px rgba(59,241,244,.7137254902);font-size:20px;font-family:Arial,Helvetica,sans-serif;font-weight:bold;width:250px;height:50px;background-color:rgba(0,0,0,0);border:1px solid #3bf1f4;color:#3bf1f4;border-radius:20px;box-shadow:1px 1px 10px #3bf1f4}.btn:hover{box-shadow:1px 1px 20px #3bf1f4}#container-btn{display:flex;flex-direction:column;gap:40px}#brand{background-color:#3bf1f4;width:80px;height:80px;transform:rotate(45deg)}#container-brand{margin-left:40px}#content-brand{width:80px;height:80px;transform:rotate(45deg);background-color:#222;text-align:center;display:flex;align-items:center;justify-content:center}#text-brand{font-size:70px;font-weight:bold;color:#3bf1f4;transform:rotate(270deg);display:flex;align-items:center;justify-content:center;width:50px;height:50px}ul{list-style-type:none;font-size:20px;color:rgba(255,255,255,.507);margin-right:40px}li{display:inline-block;margin-left:25px}li:hover{color:#3bf1f4;text-shadow:0px 0px 5px #3bf1f4}a{text-decoration:none;color:rgba(255,255,255,.5)!important;} a:hover{color:#3bf1f4 !important;text-shadow:0px 0px 5px #3bf1f4}");
printf("</style>");

printf("</head>");
printf("<body>");

printf("<header><nav><div id='container-brand'><div id='brand'><div id='content-brand'><div id='text-brand'>Δ</div></div></div></div><ul><a href='/cgi-bin/home/main.exe'><li>Home</li></a><a href='/cgi-bin/ajuda/main.exe'><li>Ajuda</li></a><a href='/cgi-bin/saibamais/main.exe'><li>Saiba Mais</li></a></ul></nav></header>");


printf("<main>");

printf("<div class='container'>");
printf("<div id='carouselExampleFade' class='carousel slide carousel-fade' data-bs-ride='carousel'>");
    printf("<div class='carousel-inner'>");
      printf("<div class='carousel-item active'>");
        printf("<img src='https://user-images.githubusercontent.com/108281436/197283128-b8eec26e-4efe-4ba0-a6eb-85e87dd87587.png' class='d-block w-100' alt='...'>");
     printf("</div>");
      printf("<div class='carousel-item'>");
        printf("<img src='https://user-images.githubusercontent.com/108281436/197283124-8c149d42-b41e-4226-8cf9-d578a420f0d1.png' class='d-block w-100' alt='...'>");
      printf("</div>");
      printf("<div class='carousel-item'>");
        printf("<img src='https://user-images.githubusercontent.com/108281436/197284051-50e7b104-ff98-4f6b-b0ea-0d538fbe1bf4.png' class='d-block w-100' alt='...'>");
      printf("</div>");
    printf("</div>");
    printf("<button class='carousel-control-prev' type='button' data-bs-target='#carouselExampleFade' data-bs-slide='prev'>");
      printf("<span class='carousel-control-prev-icon' aria-hidden='true'></span>");
      printf("<span class='visually-hidden'>Previous</span>");
    printf("</button>");
    printf("<button class='carousel-control-next' type='button' data-bs-target='#carouselExampleFade' data-bs-slide='next'>");
      printf("<span class='carousel-control-next-icon' aria-hidden='true'></span>");
      printf("<span class='visually-hidden'>Next</span>");
    printf("</button>");
  printf("</div>");
printf("</div>");
printf("</main>");


printf("<script src='https://cdn.jsdelivr.net/npm/bootstrap@5.2.2/dist/js/bootstrap.bundle.min.js' integrity='sha384-OERcA2EqjJCMA+/3y+gxIOqMEjwtxJY7qPCqsdltbNJuaOe923+mo//f6V8Qbsw3' crossorigin='anonymous'></script>");


printf("</body>");
printf("</html>");




    return 0;


};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char *argc[])
{

char mensagem[999];
char alfabeto[63] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ0123456789";

/* variavel para armazenar o conteudo da variavel de ambiente QUERY_STRING
   - o conteudo enviado pelo metodo GET */
char *dados;
int size, position;
char keyStr;
/* obtendo as variaveis enviadas */


dados = getenv("QUERY_STRING");

/* verifica se tem conteudo enviado, caso nao tenha e porque
   o formulario ainda nao foi enviado */
if (strcmp(dados,"") == 0)
{

printf("Content-type:text/html\n\n");

printf("<html lang='pt-br'>");
printf("<head>");

printf("<meta charset='UTF-8' />");
printf("<meta http-equiv='X-UA-Compatible' content='IE=edge' />");
printf("<meta name='viewport' content='width=device-width, initial-scale=1.0'/>");
printf(" <link rel='shortcut icon' href='https://user-images.githubusercontent.com/108281436/197921902-2f98d2cc-027c-4a79-88ba-4a2ea65850ff.png' type='image/x-icon'>");
printf("<title>Δ Cripto</title>");

printf("<style>");

printf("*{color='#fff';margin:0;padding:0;box-sizing:border-box;font-family:Arial,Helvetica,sans-serif}body{background-color:#222}header{height:120px}nav{margin-top:10px;height:100%;display:flex;justify-content:space-between;align-items:center}main{display:flex;align-items:center;justify-content:center;flex-direction:column;height:80vh}h1{color:#3bf1f4;margin-bottom:20px;text-shadow:0px 0px 5px rgba(59,241,244,.3647058824)}#brand{background-color:#3bf1f4;width:80px;height:80px;transform:rotate(45deg)}#container-brand{margin-left:40px}#content-brand{width:80px;height:80px;transform:rotate(45deg);background-color:#222;text-align:center;display:flex;align-items:center;justify-content:center}#text-brand{font-size:70px;font-weight:bold;color:#3bf1f4;transform:rotate(270deg);display:flex;align-items:center;justify-content:center;width:50px;height:50px}nav ul{list-style-type:none;font-size:20px;color:rgba(255,255,255,.507);margin-right:40px}nav ul li{display:inline-block;margin-left:25px}nav ul li:hover{color:#3bf1f4;text-shadow:0px 0px 5px #3bf1f4}#input-message{padding:10px;border-radius:10px;font-size:18px;margin-bottom:40px; outline:none; border:2px solid transparent;}#input-message:focus{border: 2px solid #3bf1f4}#input-key{padding:10px;border-radius:10px;margin-bottom:30px;outline:none;border:2px solid transparent;}#input-key:focus{border:2px solid #3bf1f4}#btn-criptografar{padding:10px;background-color:rgba(0,0,0,0);border-radius:10px;color:#3bf1f4;border:1px solid #3bf1f4;box-shadow:0px 0px 10px #3bf1f4}#btn-criptografar:hover{box-shadow:0px 0px 20px #3bf1f4}form{display:flex;align-items:center;flex-direction:column}label#text-key{font-weight:bold;color:rgba(255,255,255,.514)}a{text-decoration: none;color: rgba(255, 255, 255, 0.514);}");
printf("</style>");

printf("</head>");
printf("<body>");

printf("<header><nav><div id='container-brand'><div id='brand'><div id='content-brand'><div id='text-brand'>Δ</div></div></div></div><ul><a href='/cgi-bin/home/main.exe'><li>Home</li></a><a href='/cgi-bin/ajuda/main.exe'><li>Ajuda</li></a><a href='/cgi-bin/saibamais/main.exe'><li>Saiba Mais</li></a></ul></nav></header>");


printf("<main>");

printf("<a id='link-cripto' href='/cgi-bin/criptografar/main.exe'>");
printf("<h1>CRIPTOGRAFAR</h1>");
printf("</a>");

printf("<form  method='get' action='main.exe'>");
printf("<textarea name='mensagem' id='input-message' cols='60' rows='10' placeholder='Insira sua mensagem sem caracteres especiais exemplo: @#*/&$...' onchange='getValue()'></textarea>");
printf("<label id='text-key' for='input-key'>Chave</label>");
printf("<input id='input-key' type='number' min='1' max='999' name='key' value='000' onchange='getValueKey()'>");
printf("<input id='btn-criptografar' type='submit' value='CRIPTOGRAFAR'>");
printf("</form>");
printf("</main>");

printf("<script>");

printf("const inputText = document.getElementById('input-message'); \n");
printf("const inputKey = document.getElementById('input-key'); \n");
printf("const regex = /[^a-zA-Z 0-9]/g; \n");


printf("function getValueKey(){ \n");

printf("if(!inputKey.value){ \n");

printf("alert('Insira uma chave válida!') \n");
printf("inputKey.value = '000' \n");

printf("\n }");

printf("\n }");


printf("function getValue(){ \n");
printf("getValueKey() \n");
printf("   if(regex.test(inputText.value)){ \n");
printf("       inputText.value = '';  \n");
printf("       inputKey.value = '000';  \n");
printf("       inputText.style.borderColor = '#ff0000';  \n");
printf("       alert('Proibido o uso de caracteres especiais'); \n");
printf("setTimeout(()=>{  \n");
printf("inputText.style.borderColor = '#3bf1f4';  \n");
printf("},1000); \n");

printf("\n } \n");
printf("\n } \n");


printf("</script>");

printf("</body>");
printf("</html>");

}
else
{


sscanf(dados,"mensagem=%999s",&mensagem);


printf("Content-type:text/html\n\n");

printf("<html>");
printf("<head>");

printf("<meta charset='UTF-8' />");
printf("<meta http-equiv='X-UA-Compatible' content='IE=edge' />");
printf("<meta name='viewport' content='width=device-width, initial-scale=1.0'/>");
printf(" <link rel='shortcut icon' href='https://user-images.githubusercontent.com/108281436/197921902-2f98d2cc-027c-4a79-88ba-4a2ea65850ff.png' type='image/x-icon'>");
printf("<title>Cripto</title>");
printf("<style>");

printf("*{margin:0;padding:0;box-sizing:border-box;font-family:Arial,Helvetica,sans-serif}body{background-color:#222}header{height:120px}nav{margin-top:10px;height:100%;display:flex;justify-content:space-between;align-items:center}main{display:flex;align-items:center;justify-content:center;flex-direction:column;height:80vh}h1{color:#3bf1f4;margin-bottom:20px;text-shadow:0px 0px 5px rgba(59,241,244,.3647058824)}#brand{background-color:#3bf1f4;width:80px;height:80px;transform:rotate(45deg)}#container-brand{margin-left:40px}#content-brand{width:80px;height:80px;transform:rotate(45deg);background-color:#222;text-align:center;display:flex;align-items:center;justify-content:center}#text-brand{font-size:70px;font-weight:bold;color:#3bf1f4;transform:rotate(270deg);display:flex;align-items:center;justify-content:center;width:50px;height:50px}nav ul{list-style-type:none;font-size:20px;color:rgba(255,255,255,.507);margin-right:40px}nav ul li{display:inline-block;margin-left:25px}nav ul li:hover{color:#3bf1f4;text-shadow:0px 0px 5px #3bf1f4}#input-message{padding:10px;border-radius:10px;font-size:18px;margin-bottom:40px}#btn-criptografar{padding:10px;background-color:rgba(0,0,0,0);border-radius:10px;color:#3bf1f4;border:1px solid #3bf1f4;box-shadow:0px 0px 10px #3bf1f4}#btn-criptografar:hover{box-shadow:0px 0px 20px #3bf1f4}a{color:rgba(255,255,255,.514);text-decoration:none}");

printf("</style>");
printf("</head>");
printf("<body>");

printf("<header><nav><div id='container-brand'><div id='brand'><div id='content-brand'><div id='text-brand'>Δ</div></div></div></div><ul><a href='/cgi-bin/home/main.exe'><li>Home</li></a><a href='/cgi-bin/ajuda/main.exeajuda'><li>Ajuda</li></a><a href='/cgi-bin/saibamais/main.exe'><li>Saiba Mais</li></a></ul></nav></header>");

printf("<main>");

    /*Variavel que armazena tamanho da mensagem + a chave*/
    size = strlen(mensagem);

    int y;
    int keyNumDec;
    int keyNumUni;
    int keyNumCen;
    int keyNum;
    int keySize;
    /* La�o para pegar o valor da chave e numero de caracteres da mesma*/
    for(y = 1; mensagem[size - y] != '='; y++){

    /*condicao para pegar decimal e unidade da chave e transformar o valor string em inteiro*/
        if(y == 1){

            keyStr = mensagem[size - y];
            keyNumUni = keyStr - '0';

            keyNum = keyNumUni;
            keySize = 6;
        }else if(y == 2){

         keyStr = mensagem[size - y];
            keyNumDec = keyStr - '0';
         keyNum = (keyNumDec * 10) + keyNumUni;
         keySize = 7;
        }else if(y == 3){

            keyStr = mensagem[size - y];
                keyNumCen = keyStr - '0';
             keyNum = (keyNumCen * 100) + (keyNumDec * 10) + keyNumUni;
             keySize = 8;

        };

    };


    /*Variavel armazena o tamanho da chave mais a palavra key= para subtrair da string e nao mostrar na tela*/


     /*Laco percorrendo a string menos o tamanho da palavra key= e tamanho da chave */
    int i;
    int x;
    int mensagemSize = size - keySize;



printf("<h1>MENSAGEM CRIPTOGRAFADA</h1>");
printf("<textarea name='mensagem' id='input-message' cols='60' rows='10' onchange='getValue()'>");


        for(i = mensagemSize - 1 ; i >= 0 ; i--){


                if(mensagem[i] == '+'){

                    printf(" ");


                }else{

                        for(x = 0 ; x < 62 ; x++){

                            if(mensagem[i] == alfabeto[x]){

                                position = (x + keyNum)%62;


                                        if(position < 0){

                                            printf("%c",alfabeto[62 + position]);

                                        }else{

                                            printf("%c",alfabeto[position]);
                                        };



                            };

                        };

                };


        };



printf("</textarea>");

printf("<a href='/cgi-bin/home/main.exe'><input id='btn-criptografar' type='button' value='Home' /></a>");
printf("</main>");


printf("<script>");


    printf("let inputText = document.getElementById('input-message') \n");

    printf("function verifica(){ \n");

            printf("if(inputText.value.length == 0){ \n");
            printf(" alert('Opção inválida, verifique os dados e tente novamente!!');   \n");
            printf("let aElement = document.createElement('a') \n");
            printf("document.querySelector('body').appendChild(aElement) \n");
            printf("aElement.href='/cgi-bin/criptografar/main.exe' \n");
            printf("aElement.click() \n");
            printf("document.querySelector('body').removeChild(aElement) \n");


        printf("\n }");
    printf("\n }");

printf("verifica()");

printf("</script>");



printf("</body>");
printf("</html>");

}


return 0;
}

%option noyywrap

%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int fechacom=0;
char *com;


%}

%x C_COMMENT
%x C_STRING

RESERVADA ("else"|"if"|"int"|"string"|"return"|"void"|"while")
ELSE 	"else"
IF 		"if"
DIGIT [0-9]
ID [A-Za-z][A-Za-z]* 
WHITESPACE[\t\n\r ]
int_num ({DIGIT}+)

Comentario "/*" 
virg ","
acolc "["
fcolc "]"  
ptvirg ";" 
pontos2 ":"
achav "{" 
fchav "}"
apar "("
fpar ")"
atrib "="
igual "=="
menor "<"
maior ">"
menigual "<=" 
maiigual ">="
soma "+"
sub "-"
mult "*" 
div "/"

str(\"[^\n\"]*\")  
strerr(\"[^\n\"]*)


erroid [0-9]+[A-Za-z][A-Za-z]*
erroidb [A-Za-z][A-Za-z0-9]*[0-9]+[A-Za-z]*
erroidc [A-Za-z]+["_"]+[0-9]*[A-Za-z]*

erro .

%%
{virg}   {printf("Token virgula: %s\n", yytext); }
{acolc}   {printf("Token abre colchete: %s\n", yytext);}
{fcolc}   {printf("Token fecha colchete: %s\n", yytext);}
{ptvirg}   {printf("Token ponto e virgula: %s\n", yytext);}
{pontos2}   {printf("Token dois pontos: %s\n", yytext);}
{achav}   {printf("Token abre chave: %s\n", yytext);}
{fchav}   {printf("Token fecha colchete: %s\n", yytext);}
{apar}   {printf("Token abre parenteses: %s\n", yytext);}
{fpar}   {printf("Token fecha parenteses: %s\n", yytext);}
{atrib}   {printf("Token atribuicao: %s\n", yytext);}
{igual}   {printf("Token igual: %s\n", yytext);}
{menor}   {printf("Token menor: %s\n", yytext);}
{maior}   {printf("Token maior: %s\n", yytext);}
{menigual}   {printf("Token menor igual: %s\n", yytext);}
{soma}   {printf("Token soma: %s\n", yytext);}
{sub}   {printf("Token subtração: %s\n", yytext);}
{mult}   {printf("Token multiplicacao: %s\n", yytext);}
{div}   {printf("Token divisao: %s\n", yytext);}
{str} {printf("STRING: %s\n", yytext);}
{strerr} {printf("ERRO DE STRING: %s\n", yytext);}
{erroid} {printf("ERRO - SEQUENCIA DESCONHECIDA: %s\n", yytext);} 
{erroidb} {printf("ERRO - SEQUENCIA DESCONHECIDA: %s\n", yytext);} 
{erroidc} {printf("ERRO - SEQUENCIA DESCONHECIDA: %s\n", yytext);} 




"/*" {fechacom+=1; BEGIN(C_COMMENT); printf("COMENTARIO: /*");}

<C_COMMENT>"*/" { 
printf("*/");
	if(fechacom==1){
		BEGIN(INITIAL);
		printf("\n");
		fechacom-=1;
		
}

	else 
		fechacom-=1;
 }

<C_COMMENT>"/*" {fechacom+=1;printf("/*");}
<C_COMMENT>.    {printf("%s", yytext);}
<C_COMMENT><<EOF>>	{printf("\n ERRO DE COMENTARIO!"); BEGIN(INITIAL);}




{RESERVADA} { 
if(yytext=="else");
else if(yytext=="if");
else if(yytext=="int");
else if(yytext=="return");
else if(yytext=="void");
else if(yytext=="while");
printf("Reservada: %s\n", yytext);

}
{int_num} { printf( "Inteiro : %s\n" , yytext ); 

}


{ID} { 
printf("Identificador: %s\n", yytext);
}

{WHITESPACE}+ { }/* Elimina espaços em branco*/

%%

int main(){

int entrada;
while((entrada = yylex()) > 0)
{
if (1) ;

}
return 0;
}

%option noyywrap

%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int fechacom=0;


%}

%x C_COMMENT
%x C_STRING

RESERVADA ("char"|"else"|"float"|"if"|"int"|"string"|"new"|"return"|"void"|"while")
DIGIT [0-9]
ID [A-Za-z][A-Za-z0-9]* 
WHITESPACE[\t\n\r ]
int_num ({DIGIT}+)
real_num ({DIGIT}+"."{DIGIT}*)


Comentario "/*" 
virg ","
acolc "["
fcolc "]"  
ponto "."
ptvirg ";" 
pontos2 ":"
achav "{" 
fchav "}"
apar "("
fpar ")"
atrib "="
igual "=="
negacao "!"
menor "<"
maior ">"
menigual "<=" 
maiigual ">="
e "&&" 
ou "||"
soma "+"
sub "-"
mult "*" 
div "/"
str \"(\\.|[^EOL]|[^"])*\"


erro .

%%
{virg}   {printf("Token virgula: %s\n", yytext); }
{acolc}   {printf("Token abre colchete: %s\n", yytext);}
{fcolc}   {printf("Token fecha colchete: %s\n", yytext);}
{ponto}   {printf("Token ponto: %s\n", yytext);}
{ptvirg}   {printf("Token ponto e virgula: %s\n", yytext);}
{pontos2}   {printf("Token dois pontos: %s\n", yytext);}
{achav}   {printf("Token abre chave: %s\n", yytext);}
{fchav}   {printf("Token fecha colchete: %s\n", yytext);}
{apar}   {printf("Token abre parenteses: %s\n", yytext);}
{fpar}   {printf("Token fecha parenteses: %s\n", yytext);}
{atrib}   {printf("Token atribuicao: %s\n", yytext);}
{igual}   {printf("Token igual: %s\n", yytext);}
{negacao}   {printf("Token negacao: %s\n", yytext);}
{menor}   {printf("Token menor: %s\n", yytext);}
{maior}   {printf("Token maior: %s\n", yytext);}
{menigual}   {printf("Token menor igual: %s\n", yytext);}
{e}        {printf("Token e: %s\n", yytext);}
{ou}   {printf("Token ou: %s\n", yytext);}
{soma}   {printf("Token soma: %s\n", yytext);}
{sub}   {printf("Token subtração: %s\n", yytext);}
{mult}   {printf("Token multiplicacao: %s\n", yytext);}
{div}   {printf("Token divisao: %s\n", yytext);}
{str} {printf("STRING: %s\n", yytext);}



"/*" {fechacom+=1; BEGIN(C_COMMENT); printf("Comentário: ");}

<C_COMMENT>"*/" { 

	if(fechacom==1){
		BEGIN(INITIAL);
		fechacom-=1;
		printf("\n");
}

	else 
		fechacom-=1;
 }

<C_COMMENT>"/*" {fechacom+=1;}
<C_COMMENT>.    {printf("%s", yytext); }




{RESERVADA} { if(yytext=="char");
else if(yytext=="else");
else if(yytext=="float");
else if(yytext=="if");
else if(yytext=="int");
else if(yytext=="new");
else if(yytext=="return");
else if(yytext=="void");
else if(yytext=="while");
printf("Reservada: %s\n", yytext);

}
{int_num} { printf( "Inteiro : %s\n" , yytext ); 

}
{DIGIT}+"."{DIGIT}* { printf( "Real : %s\n" , yytext );
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

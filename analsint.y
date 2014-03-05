%{

#include "arvore.h"
#include "arvore.c"


void yyerror(char *s);


%}

%expect 1

%union {
int ival; char *sval; 
A_programa tprograma;
A_declaracao_lista tdeclaracao_lista;
A_declaracao tdeclaracao;
A_declaracao_variavel tdeclaracao_variavel;
A_declaracao_funcao tdeclaracao_funcao;
A_parametros tparametros;
A_parametro_lista tparametro_lista;
A_parametro tparametro;
A_composto_decl tcomposto_decl;
A_local_declaracoes tlocal_declaracoes;
A_statement_lista tstatement_lista;
A_statement tstatement;
A_expressao_declaracao texpressao_declaracao;
A_selecao_declaracao tselecao_declaracao;
A_iteracao_declaracao titeracao_declaracao;
A_retorno_declaracao tretorno_declaracao;
A_expressao texpressao;
A_var tvar;
A_simples_expressao tsimples_expressao;
A_soma_expressao tsoma_expressao;
A_termo ttermo;
A_fator tfator;
A_ativacao tativacao;
A_argumentos targumentos;
A_argumento_lista targumento_lista;
A_vazio tvazio;
A_soma tsoma;
A_mult tmult;
A_tipo_especificador ttipo_especificador;
A_relacional trelacional;

};

%token ELSE
%token IF
%token RETURN
%token WHILE 
%token ATRIBUI
%token PONTOEVIRGULA
%token VIRGULA 
%token ABREPARENTESE
%token FECHAPARENTESE
%token ABRECOLCHETE 
%token FECHACOLCHETE 
%token ABRECHAVE 
%token FECHACHAVE 
%token T_INT
%token T_VOID 
%token T_STRING
%token MAIS 
%token MENOS 
%token MULT 
%token DIV 
%token MENOR
%token MENORIGUAL
%token MAIOR
%token MAIORIGUAL
%token IGUAL 
%token DIFERENTE
%token <sval> STR 
%token <sval> ID 
%token <ival> NUM
%type <tprograma> programa
%type <tdeclaracao_lista> declaracao_lista
%type <tdeclaracao> declaracao
%type <tdeclaracao_variavel> declaracao_variavel
%type <tdeclaracao_funcao> declaracao_funcao
%type <tparametros> parametros
%type <tparametro_lista> parametro_lista
%type <tparametro> parametro
%type <tcomposto_decl> composto_decl
%type <tlocal_declaracoes> local_declaracoes
%type <tstatement_lista> statement_lista
%type <tstatement> statement
%type <texpressao_declaracao> expressao_declaracao
%type <tselecao_declaracao> selecao_declaracao
%type <titeracao_declaracao> iteracao_declaracao
%type <tretorno_declaracao> retorno_declaracao
%type <texpressao> expressao
%type <tvar> var
%type <tsimples_expressao> simples_expressao
%type <trelacional> relacional
%type <tsoma_expressao> soma_expressao
%type <tsoma> soma
%type <ttermo> termo
%type <tmult> mult
%type <tfator> fator
%type <tativacao> ativacao
%type <targumentos> argumentos
%type <targumento_lista> argumento_lista
%type <ttipo_especificador> tipo_especificador

%start programa

%%

programa :
		declaracao_lista
		{$$ = A_Programa($1);}
	 ;
	 
declaracao_lista :
		declaracao_lista declaracao
		{ $$ = A_ListaDeclaracao_lista($1,$2);}
	|	declaracao
		{$$ = A_DeclDeclaracao_lista($1);}
	 ;

declaracao : 
		declaracao_variavel
		{ $$ = A_VarDeclaracao($1);}
	|	declaracao_funcao
		{ $$ = A_FunDeclaracao($1);}
;

declaracao_variavel : 
		tipo_especificador ID PONTOEVIRGULA
		{ $$ = A_NormalDeclaracao_variavel($1,$2);}
	|	tipo_especificador ID ABRECOLCHETE NUM FECHACOLCHETE PONTOEVIRGULA
		{ $$ = A_VetorDeclaracao_variavel($1,$2,$4);}
;

tipo_especificador: T_INT {$$=A_int;}|
					T_VOID {$$=A_void;} |
					T_STRING {$$=A_string;}
				;


declaracao_funcao : 
		tipo_especificador ID ABREPARENTESE parametros FECHAPARENTESE composto_decl
		{ $$ = A_Declaracao_funcao($1,$2,$4,$6);}
;

parametros : 
		parametro_lista
		{ $$ = A_ListaParametros($1);}
	|	T_VOID { $$ = A_NadaParametros(A_void);}
;

parametro_lista : 
		parametro_lista VIRGULA parametro
		{ $$ = A_ListaParametro_lista($1,$3);}
	|	parametro
		{ $$ = A_ParamParametro_lista($1);}
;

parametro : 
		tipo_especificador ID
		{ $$ = A_NormalParametro($1,$2);}
	|	tipo_especificador ID ABRECOLCHETE FECHACOLCHETE
		{ $$ = A_VetorParametro($1,$2);}
;

composto_decl : 
		ABRECHAVE local_declaracoes statement_lista FECHACHAVE
		{ $$ = A_Composto_decl($2,$3);}
;

local_declaracoes : 
		local_declaracoes declaracao_variavel
		{ $$ = A_DeclLocal_declaracoes($1,$2);}
	|{ $$ = A_NadaLocal_declaracoes(A_Vazio());}
;

statement_lista : 
		statement_lista statement
		{ $$ = A_ListaStatement_lista($1,$2);}
	|{ $$ = A_NadaStatement_lista(A_Vazio());}
;

statement : 
		expressao_declaracao
		{ $$ = A_ExpStatement($1);}
	|	composto_decl
		{ $$ = A_DeclStatement($1);}
	|	selecao_declaracao
		{ $$ = A_SelStatement($1);}
	|	iteracao_declaracao
		{ $$ = A_IteraStatement($1);}
	|	retorno_declaracao
		{ $$ = A_RetornoStatement($1);}
;

expressao_declaracao : 
		expressao PONTOEVIRGULA
		{ $$ = A_ExpExpressao_declaracao($1);}
	|	PONTOEVIRGULA
		{ $$ = A_TokenExpressao_declaracao();}
;

selecao_declaracao : 
		IF ABREPARENTESE expressao FECHAPARENTESE statement
		{ $$ = A_NormalSelecao_declaracao($3,$5);}
	|	IF ABREPARENTESE expressao FECHAPARENTESE statement ELSE statement
		{ $$ = A_SenaoSelecao_declaracao($3,$5,$7);}
;

iteracao_declaracao : 
		WHILE ABREPARENTESE expressao FECHAPARENTESE statement
		{ $$ = A_Iteracao_declaracao($3,$5);}
;

retorno_declaracao:
		RETURN PONTOEVIRGULA {}|
		RETURN expressao PONTOEVIRGULA{}
;

expressao : 
		var ATRIBUI expressao
		{ $$ = A_ExpExpressao($1,$3);}
	|	simples_expressao
		{ $$ = A_NormalExpressao($1);}
;

var : 
		ID
		{ $$ = A_ReservadaID($1);}
	|	ID ABRECOLCHETE expressao FECHACOLCHETE
		{ $$ = A_ExpVar($1, $3);}
;

simples_expressao : 
		soma_expressao relacional soma_expressao{ $$ = A_RelSimples_expressao($1,$2,$3);}|	soma_expressao{ $$ = A_ExpSimples_expressao($1);}
;

relacional:
		MENORIGUAL{$$=A_menorigual;}
	|	MENOR{$$=A_menor;}
	|	MAIOR{$$=A_maior;}
	|	MAIORIGUAL{$$=A_maiorigual;}
	|	IGUAL{$$=A_igualigual;}
	|	DIFERENTE{$$=A_naoigual;}
;

soma_expressao : 
		soma_expressao soma termo
		{ $$ = A_SomaSoma_expressao($1,$2,$3);}
	|	termo
		{ $$ = A_TermoSoma_expressao($1);}
;

soma: 
		MAIS{$$=A_mais;}
	|	MENOS{$$=A_menos;}
;

termo : 
		termo mult fator
		{ $$ = A_ListaTermo($1,$2,$3);}
	|	fator
		{ $$ = A_NormalTermo($1);}
;

fator : 
		ABREPARENTESE expressao FECHAPARENTESE
		{ $$ = A_ExpFator($2);}
	|	var
		{ $$ = A_VariavelFator($1);}
	|	ativacao
		{ $$ = A_AtivFator($1);}
	|	NUM
		{ $$ = A_NumeroFator($1);}
	|   STR {}
;

mult:
		MULT{$$=A_multip;}
	|	DIV{$$=A_div;}
;

ativacao : 
		ID ABREPARENTESE argumentos FECHAPARENTESE 
		{ $$ = A_Ativacao($1, $3);}
;

argumentos : 
		argumento_lista
		{ $$ = A_ListaArgumentos($1);}
	|{ $$ = A_NadaArgumentos(A_Vazio());}
;

argumento_lista : 
		argumento_lista VIRGULA expressao
		{ $$ = A_ListaArgumento_lista($1,$3);}
	|	expressao
		{ $$ = A_ExpArgumento_lista($1);}
;

%%

#include <stdlib.h>
#include <stdio.h>

void yyerror(char *s){
	fprintf(stderr, "Erro\n");
	exit(0);

}

main(){
	yyparse();
	fprintf(stderr, "OK!\n");
	return 0;
}

#ifndef ARVORE_H
#define ARVORE_H


/*

programa:declaracao_lista;
declaracao_lista:declaracao_lista declaracao|declaracao
declaracao:declaracao_variavel|declaracao_funcao
declaracao_variavel:tipo_especificador ID ;|tipo_especificador ID [ NUM ] ';'
tipo_especificador:int|void 
declaracao_funcao:tipo_especificador ID ( parametros ) composto_decl
parametros:parametro_lista|void
parametro_lista:parametro_lista , parametro|parametro
parametro:tipo_especificador ID|tipo_especificador ID []
composto_decl:{ local_declaracoes statement_lista}
local_declaracoes:local_declaracoes declaracao_variavel|vazio
statement_lista:statement_lista statement|vazio
statement:expressao_declaracao|composto|selecao_declaracao|iteracao_declaracao|retorno_declaracao    
expressao_declaracao:expressao ';'|';'
selecao_declaracao:if ( expressao ) statement|if ( expressao ) statement else statement
iteracao_declaracao:while ( expressao ) statement
retorno_declaracao:return ';'|return expressao ';'
expressao:var = expressao|simples_expressao
var:ID|ID [ expressao ]
simples_expressao:soma_expressao relacional soma_expressao|soma_expressao
relacional:<=|<|>|>=|==|!=
soma_expressao:soma_expressao soma termo|termo
soma:+|-
termo:termo mult fator|fator
mult:*|/
fator:( expressao )|var|ativacao|NUM
ativacao:ID ( argumento ) 
argumentos:argumento_lista|vazio
argumento_lista:argumento_lista  expressao|expressao

*/

typedef char* string;
typedef struct A_programa_ *A_programa;
typedef struct A_declaracao_lista_ *A_declaracao_lista;
typedef struct A_declaracao_ *A_declaracao;
typedef struct A_declaracao_variavel_ *A_declaracao_variavel;
typedef struct A_declaracao_funcao_ *A_declaracao_funcao;
typedef struct A_parametros_ *A_parametros;
typedef struct A_parametro_lista_ *A_parametro_lista;
typedef struct A_parametro_ *A_parametro;
typedef struct A_composto_decl_ *A_composto_decl;
typedef struct A_local_declaracoes_ *A_local_declaracoes;
typedef struct A_statement_lista_ *A_statement_lista;
typedef struct A_statement_ *A_statement;
typedef struct A_expressao_declaracao_ *A_expressao_declaracao;
typedef struct A_selecao_declaracao_ *A_selecao_declaracao;
typedef struct A_iteracao_declaracao_ *A_iteracao_declaracao;
typedef struct A_retorno_declaracao_ *A_retorno_declaracao;
typedef struct A_expressao_ *A_expressao;
typedef struct A_var_ *A_var;
typedef struct A_simples_expressao_ *A_simples_expressao;
typedef struct A_soma_expressao_ *A_soma_expressao;
typedef struct A_termo_ *A_termo;
typedef struct A_fator_ *A_fator;
typedef struct A_ativacao_ *A_ativacao;
typedef struct A_argumentos_ *A_argumentos;
typedef struct A_argumento_lista_ *A_argumento_lista;
typedef struct A_vazio_ *A_vazio;

typedef enum {A_menorigual, A_menor, A_maior, A_maiorigual, A_igualigual, A_naoigual} A_relacional;
typedef enum {A_mais, A_menos} A_soma;
typedef enum {A_multip, A_div} A_mult;
typedef enum {A_int, A_void, A_string} A_tipo_especificador;

//programa:declaracao_lista;
struct A_programa_ {A_declaracao_lista declaracao_lista;};

A_programa A_Programa(A_declaracao_lista declaracao_lista);

//declaracao_lista:declaracao_lista declaracao|declaracao
struct A_declaracao_lista_ {

enum {A_listaDeclaracao_lista, A_declDeclaracao_lista} kind;

union { 

struct {A_declaracao_lista declaracao_lista; A_declaracao declaracao;} lista;

struct {A_declaracao declaracao;} decl;

} u;

};

A_declaracao_lista A_ListaDeclaracao_lista(A_declaracao_lista declaracao_lista, A_declaracao declaracao); 
A_declaracao_lista A_DeclDeclaracao_lista(A_declaracao declaracao); 

//declaracao:declaracao_variavel|declaracao_funcao
struct A_declaracao_ {

enum {A_varDeclaracao, A_funDeclaracao} kind;

union { 

struct {A_declaracao_variavel declaracao_variavel;} var;

struct {A_declaracao_funcao declaracao_funcao;} fun;

} u;

};


A_declaracao A_VarDeclaracao(A_declaracao_variavel declaracao_variavel); 
A_declaracao A_FunDeclaracao(A_declaracao_funcao declaracao_funcao); 

//declaracao_variavel:tipo_especificador ID ;|tipo_especificador ID [ NUM ] ';'
struct A_declaracao_variavel_ {

enum {A_normalDeclaracao_variavel, A_vetorDeclaracao_variavel} kind;

union { 

struct {A_tipo_especificador tipo_especificador; string ID;} normal;

struct {A_tipo_especificador tipo_especificador; string ID; int NUM;} vetor;

} u;

};


A_declaracao_variavel A_NormalDeclaracao_variavel(A_tipo_especificador tipo_especificador, string ID); 
A_declaracao_variavel A_VetorDeclaracao_variavel(A_tipo_especificador tipo_especificador, string ID, int NUM); 

//tipo_especificador:int|void 

//declaracao_funcao:tipo_especificador ID ( parametros ) composto_decl
struct A_declaracao_funcao_ {A_tipo_especificador tipo_especificador; string ID; A_parametros parametros; A_composto_decl composto_decl;};

A_declaracao_funcao A_Declaracao_funcao(A_tipo_especificador tipo_especificador, string ID, A_parametros parametros, A_composto_decl composto_decl);

//parametros:parametro_lista|vazio
struct A_parametros_ {

enum {A_listaParametros, A_nadaParametros} kind;

union { 

struct {A_parametro_lista parametro_lista;} lista;

struct {A_tipo_especificador tipo_especificador;} nada;

} u;

};


A_parametros A_ListaParametros(A_parametro_lista parametro_lista); 
A_parametros A_NadaParametros(A_tipo_especificador tipo_especificador); 

//parametro_lista:parametro_lista , parametro|parametro
struct A_parametro_lista_ {

enum {A_listaParametro_lista, A_paramParametro_lista} kind;

union { 

struct {A_parametro_lista parametro_lista; A_parametro parametro;} lista;

struct {A_parametro parametro;} param;

} u;

};


A_parametro_lista A_ListaParametro_lista(A_parametro_lista parametro_lista, A_parametro parametro); 
A_parametro_lista A_ParamParametro_lista(A_parametro parametro); 

//parametro:tipo_especificador ID|tipo_especificador ID []
struct A_parametro_ {

enum {A_normalParametro, A_vetorParametro} kind;

union { 

struct {A_tipo_especificador tipo_especificador; string ID;} normal;

struct {A_tipo_especificador tipo_especificador; string ID;} vetor;

} u;

};


A_parametro A_NormalParametro(A_tipo_especificador tipo_especificador, string ID); 
A_parametro A_VetorParametro(A_tipo_especificador tipo_especificador, string ID); 

//composto_decl:{ local_declaracoes statement_lista }
struct A_composto_decl_ {A_local_declaracoes local_declaracoes; A_statement_lista statement_lista;};

A_composto_decl A_Composto_decl(A_local_declaracoes local_declaracoes, A_statement_lista statement_lista);

//local_declaracoes:local_declaracoes declaracao_variavel|vazio
struct A_local_declaracoes_ {

enum {A_ddeclLocal_declaracoes, A_nnadaLocal_declaracoes} kind;

union { 

struct {A_local_declaracoes local_declaracoes; A_declaracao_variavel declaracao_variavel;} decl;

struct {A_vazio vazio;} nada;

} u;

};


A_local_declaracoes A_DeclLocal_declaracoes(A_local_declaracoes local_declaracoes, A_declaracao_variavel declaracao_variavel); 
A_local_declaracoes A_NadaLocal_declaracoes(A_vazio vazio); 

//statement_lista:statement_lista statement|vazio
struct A_statement_lista_ {

enum {A_listaStatement_lista, A_nadaStatement_lista} kind;

union { 

struct {A_statement_lista statement_lista; A_statement statement;} lista;

struct {A_vazio vazio;} nada;

} u;

};


A_statement_lista A_ListaStatement_lista(A_statement_lista statement_lista, A_statement statement); 
A_statement_lista A_NadaStatement_lista(A_vazio vazio); 

//statement:expressao_declaracao|composto_decl|selecao_declaracao|iteracao_declaracao|retorno_declaracao
struct A_statement_ {

enum {A_expStatement, A_declStatement, A_selStatement, A_iteraStatement, A_retornoStatement} kind;

union { 

struct {A_expressao_declaracao expressao_declaracao;} exp;

struct {A_composto_decl composto_decl;} decl;

struct {A_selecao_declaracao selecao_declaracao;} sel;

struct {A_iteracao_declaracao iteracao_declaracao;} itera;

struct {A_retorno_declaracao retorno_declaracao;} retorno;

} u;

};


A_statement A_ExpStatement(A_expressao_declaracao expressao_declaracao); 
A_statement A_DeclStatement(A_composto_decl composto_decl); 
A_statement A_SelStatement(A_selecao_declaracao selecao_declaracao); 
A_statement A_IteraStatement(A_iteracao_declaracao iteracao_declaracao); 
A_statement A_RetornoStatement(A_retorno_declaracao retorno_declaracao); 

//expressao_declaracao:expressao;|;
struct A_expressao_declaracao_ {

enum {A_expExpressao_declaracao, A_tokenExpressao_declaracao} kind;

union { 

struct {A_expressao expressao;} exp;

struct {A_vazio ptovirg;} token;

} u;

};


A_expressao_declaracao A_ExpExpressao_declaracao(A_expressao expressao); 
A_expressao_declaracao A_TokenExpressao_declaracao(); 

//selecao_declaracao:if ( expressao ) statement|if ( expressao ) statement else statement
struct A_selecao_declaracao_ {

enum {A_normalSelecao_declaracao, A_senaoSelecao_declaracao} kind;

union { 

struct {A_expressao expressao; A_statement statement;} normal;

struct {A_expressao expressao; A_statement statement1; A_statement statement2;} senao;

} u;

};


A_selecao_declaracao A_NormalSelecao_declaracao(A_expressao expressao, A_statement statement); 
A_selecao_declaracao A_SenaoSelecao_declaracao(A_expressao expressao, A_statement statement1, A_statement statement2); 

//iteracao_declaracao:while ( expressao ) statement
struct A_iteracao_declaracao_ {A_expressao expressao; A_statement statement;};

A_iteracao_declaracao A_Iteracao_declaracao(A_expressao expressao, A_statement statement);

//retorno_decl:return ;|return expressão;

struct A_retorno_declaracao_ {
enum {A_simplesRetorno_decl, A_expRetorno_decl} kind;

union {

struct {A_vazio vazio;} simples;

struct {A_expressao expressao;} exp;

} u;

};
A_retorno_declaracao A_SimplesRetorno_decl();
A_retorno_declaracao A_ExpRetorno_decl(A_expressao expressao);

//expressao:var = expressao|simples_expressao
struct A_expressao_ {

enum {A_expExpressao, A_normalExpressao} kind;

union { 

struct {A_var var; A_expressao expressao;} exp;

struct {A_simples_expressao simples_expressao;} normal;

} u;

};


A_expressao A_ExpExpressao(A_var var, A_expressao expressao); 
A_expressao A_NormalExpressao(A_simples_expressao simples_expressao); 

//var:ID|ID [ expressao ]
struct A_var_ {

enum {A_reservadaID, A_expreExpressao} kind;

union {

struct {string ID;} reservada;

struct {string ID; A_expressao expressao;} exp;

} u;

};

A_var A_ReservadaID(string ID);
A_var A_ExpVar(string ID, A_expressao expressao);


//simples_expressao:soma_expressao relacional soma_expressao|soma_expressao
struct A_simples_expressao_ {

enum {A_relSimples_expressao, A_expSimples_expressao} kind;

union { 

struct {A_soma_expressao soma_expressao1; A_relacional relacional; A_soma_expressao soma_expressao2;} rel;

struct {A_soma_expressao soma_expressao;} exp;

} u;

};


A_simples_expressao A_RelSimples_expressao(A_soma_expressao soma_expressao1, A_relacional relacional, A_soma_expressao soma_expressao2); 
A_simples_expressao A_ExpSimples_expressao(A_soma_expressao soma_expressao); 

//soma_expressao:soma_expressao soma termo|termo
struct A_soma_expressao_ {

enum {A_somaSoma_expressao, A_termoSoma_expressao} kind;

union { 

struct {A_soma_expressao soma_expressao; A_soma soma; A_termo termo;} soma;

struct {A_termo termo;} termo;

} u;

};


A_soma_expressao A_SomaSoma_expressao(A_soma_expressao soma_expressao, A_soma soma, A_termo termo); 
A_soma_expressao A_TermoSoma_expressao(A_termo termo); 

//termo:termo mult fator|fator
struct A_termo_ {

enum {A_listaTermo, A_normalTermo} kind;

union { 

struct {A_termo termo; A_mult mult; A_fator fator;} lista;

struct {A_fator fator;} normal;

} u;

};


A_termo A_ListaTermo(A_termo termo, A_mult mult, A_fator fator); 
A_termo A_NormalTermo(A_fator fator); 

//fator:( expressao )|var|ativacao|NUM
struct A_fator_ {

enum {A_expFator, A_variavelFator, A_ativFator, A_numeroFator, A_stringFator} kind;

union { 

struct {A_expressao expressao;} exp;

struct {A_var var;} variavel;

struct {A_ativacao ativacao;} ativ;

struct {int NUM;} numero;

struct {string str;} str;

} u;

};


A_fator A_ExpFator(A_expressao expressao); 
A_fator A_VariavelFator(A_var var); 
A_fator A_AtivFator(A_ativacao ativacao); 
A_fator A_NumeroFator(int NUM); 
A_fator A_StrFator(string str); 

//ativacao:ID ( argumento ) 
struct A_ativacao_ {string ID; A_argumentos argumentos;};

A_ativacao A_Ativacao(string ID, A_argumentos argumentos);

//argumentos:argumento_lista|vazio
struct A_argumentos_ {

enum {A_listaArgumentos, A_nadaArgumentos} kind;

union { 

struct {A_argumento_lista argumento_lista;} lista;

struct {A_vazio vazio;} nada;

} u;

};


A_argumentos A_ListaArgumentos(A_argumento_lista argumento_lista); 
A_argumentos A_NadaArgumentos(A_vazio vazio); 

//argumento_lista:argumento_lista  expressao|expressao
struct A_argumento_lista_ {

enum {A_listaArgumento_lista, A_expArgumento_lista} kind;

union { 

struct {A_argumento_lista argumento_lista; A_expressao expressao;} lista;

struct {A_expressao expressao;} exp;

} u;

};


A_argumento_lista A_ListaArgumento_lista(A_argumento_lista argumento_lista, A_expressao expressao); 
A_argumento_lista A_ExpArgumento_lista(A_expressao expressao); 

struct A_vazio_{};
A_vazio A_Vazio();

#endif

#include <stdlib.h>
#include "arvore.h"


//programa:declaracao_lista;

A_programa A_Programa(A_declaracao_lista declaracao_lista){
A_programa p = malloc(sizeof(*p));
p->declaracao_lista = declaracao_lista; 
return p;
}
		 
//declaracao_lista:declaracao_lista declaracao|declaracao

A_declaracao_lista A_ListaDeclaracao_lista(A_declaracao_lista declaracao_lista, A_declaracao declaracao){
A_declaracao_lista d = malloc(sizeof(*d));
d->u.lista.declaracao_lista = declaracao_lista; 
d->u.lista.declaracao = declaracao; 
d->kind = A_listaDeclaracao_lista; 
return d;
}

A_declaracao_lista A_DeclDeclaracao_lista(A_declaracao declaracao){
A_declaracao_lista d = malloc(sizeof(*d));
d->u.decl.declaracao = declaracao; 
d->kind = A_declDeclaracao_lista; 
return d;
}

//declaracao:declaracao_variavel|declaracao_funcao

A_declaracao A_VarDeclaracao(A_declaracao_variavel declaracao_variavel){
A_declaracao d = malloc(sizeof(*d));
d->u.var.declaracao_variavel = declaracao_variavel; 
d->kind = A_varDeclaracao; 
return d;
}

A_declaracao A_FunDeclaracao(A_declaracao_funcao declaracao_funcao){
A_declaracao d = malloc(sizeof(*d));
d->u.fun.declaracao_funcao = declaracao_funcao; 
d->kind = A_funDeclaracao; 
return d;
}

//declaracao_variavel:tipo_especificador ID ;|tipo_especificador ID [ NUM ] ;
//declaracao_variavel:tipo_especificador ID|tipo_especificador ID NUM

A_declaracao_variavel A_NormalDeclaracao_variavel(A_tipo_especificador tipo_especificador, string ID){
A_declaracao_variavel d = malloc(sizeof(*d));
d->u.normal.tipo_especificador = tipo_especificador; 
d->u.normal.ID = ID; 
d->kind = A_normalDeclaracao_variavel; 
return d;
}

A_declaracao_variavel A_VetorDeclaracao_variavel(A_tipo_especificador tipo_especificador, string ID, int NUM){
A_declaracao_variavel d = malloc(sizeof(*d));
d->u.vetor.tipo_especificador = tipo_especificador; 
d->u.vetor.ID = ID; 
d->u.vetor.NUM = NUM; 
d->kind = A_vetorDeclaracao_variavel; 
return d;
}

//declaracao_funcao:tipo_especificador ID ( parametros ) composto_decl

A_declaracao_funcao A_Declaracao_funcao(A_tipo_especificador tipo_especificador, string ID, A_parametros parametros, A_composto_decl composto_decl){
A_declaracao_funcao d = malloc(sizeof(*d));
d->tipo_especificador = tipo_especificador; 
d->ID = ID; 
d->parametros = parametros; 
d->composto_decl = composto_decl; 
return d;
}

//parametros:parametro_lista|vazio
A_parametros A_ListaParametros(A_parametro_lista parametro_lista){
A_parametros p = malloc(sizeof(*p));
p->u.lista.parametro_lista = parametro_lista; 
p->kind = A_listaParametros; 
return p;
}

A_parametros A_NadaParametros(A_tipo_especificador tipo_especificador){
A_parametros p = malloc(sizeof(*p));
p->u.nada.tipo_especificador = tipo_especificador; 
p->kind = A_nadaParametros; 
return p;
}

//parametro_lista:parametro_lista , parametro|parametro

A_parametro_lista A_ListaParametro_lista(A_parametro_lista parametro_lista, A_parametro parametro){
A_parametro_lista p = malloc(sizeof(*p));
p->u.lista.parametro_lista = parametro_lista; 
p->u.lista.parametro = parametro; 
p->kind = A_listaParametro_lista; 
return p;
}

A_parametro_lista A_ParamParametro_lista(A_parametro parametro){
A_parametro_lista p = malloc(sizeof(*p));
p->u.param.parametro = parametro; 
p->kind = A_paramParametro_lista; 
return p;
}

//parametro:tipo_especificador ID|tipo_especificador ID []

A_parametro A_NormalParametro(A_tipo_especificador tipo_especificador, string ID){
A_parametro p = malloc(sizeof(*p));
p->u.normal.tipo_especificador = tipo_especificador; 
p->u.normal.ID = ID; 
p->kind = A_normalParametro; 
return p;
}

A_parametro A_VetorParametro(A_tipo_especificador tipo_especificador, string ID){
A_parametro p = malloc(sizeof(*p));
p->u.vetor.tipo_especificador = tipo_especificador; 
p->u.vetor.ID = ID; 
p->kind = A_vetorParametro; 
return p;
}

//composto_decl:{ local_declaracoes statement_lista }

A_composto_decl A_Composto_decl(A_local_declaracoes local_declaracoes, A_statement_lista statement_lista){
A_composto_decl c = malloc(sizeof(*c));
c->local_declaracoes = local_declaracoes; 
c->statement_lista = statement_lista; 
return c;
}

//local_declaracoes:local_declaracoes declaracao_variavel|vazio

A_local_declaracoes A_DeclLocal_declaracoes(A_local_declaracoes local_declaracoes, A_declaracao_variavel declaracao_variavel){
A_local_declaracoes l = malloc(sizeof(*l));
l->u.decl.local_declaracoes = local_declaracoes; 
l->u.decl.declaracao_variavel = declaracao_variavel; 
l->kind = A_ddeclLocal_declaracoes; 
return l;
}
A_local_declaracoes A_NadaLocal_declaracoes(A_vazio vazio){
A_local_declaracoes l = malloc(sizeof(*l));
l->u.nada.vazio = vazio; 
l->kind = A_nnadaLocal_declaracoes; 
return l;
}

//statement_lista:statement_lista statement|vazio

A_statement_lista A_ListaStatement_lista(A_statement_lista statement_lista, A_statement statement){
A_statement_lista s = malloc(sizeof(*s));
s->u.lista.statement_lista = statement_lista; 
s->u.lista.statement = statement; 
s->kind = A_listaStatement_lista; 
return s;
}

A_statement_lista A_NadaStatement_lista(A_vazio vazio){
A_statement_lista s = malloc(sizeof(*s));
s->u.nada.vazio = vazio; 
s->kind = A_nadaStatement_lista; 
return s;
}

//statement:expressao_declaracao|composto_decl|selecao_declaracao|iteracao_declaracao|retorno_declaracao


A_statement A_ExpStatement(A_expressao_declaracao expressao_declaracao){
A_statement s = malloc(sizeof(*s));
s->u.exp.expressao_declaracao = expressao_declaracao; 
return s;
}

A_statement A_DeclStatement(A_composto_decl composto_decl){
A_statement s = malloc(sizeof(*s));
s->u.decl.composto_decl = composto_decl; 
return s;
}

A_statement A_SelStatement(A_selecao_declaracao selecao_declaracao){
A_statement s = malloc(sizeof(*s));
s->u.sel.selecao_declaracao = selecao_declaracao; 
return s;
}

A_statement A_IteraStatement(A_iteracao_declaracao iteracao_declaracao){
A_statement s = malloc(sizeof(*s));
s->u.itera.iteracao_declaracao= iteracao_declaracao; 
return s;
}

A_statement A_RetornoStatement(A_retorno_declaracao retorno_declaracao){
A_statement s = malloc(sizeof(*s));
s->u.retorno.retorno_declaracao = retorno_declaracao; 
return s;
}

//expressao_declaracao:expressao;|;

A_expressao_declaracao A_ExpExpressao_declaracao(A_expressao expressao){
A_expressao_declaracao e = malloc(sizeof(*e));
e->u.exp.expressao = expressao; 
e->kind = A_expExpressao_declaracao; 
return e;
}
A_expressao_declaracao A_TokenExpressao_declaracao(){
A_expressao_declaracao e = malloc(sizeof(*e));
e->u.token.ptovirg = A_Vazio(); 
e->kind = A_tokenExpressao_declaracao; 
return e;
}

//selecao_declaracao:if ( expressao ) statement|if ( expressao ) statement else statement


A_selecao_declaracao A_NormalSelecao_declaracao(A_expressao expressao, A_statement statement){
A_selecao_declaracao s = malloc(sizeof(*s));
s->u.normal.expressao = expressao; 
s->u.normal.statement = statement; 
s->kind = A_normalSelecao_declaracao; 
return s;
}

A_selecao_declaracao A_SenaoSelecao_declaracao(A_expressao expressao, A_statement statement1, A_statement statement2){
A_selecao_declaracao s = malloc(sizeof(*s));
s->u.senao.expressao = expressao; 
s->u.senao.statement1 = statement1; 
s->u.senao.statement2 = statement2; 
s->kind = A_senaoSelecao_declaracao; 
return s;
}

//iteracao_declaracao:while ( expressao ) statement

A_iteracao_declaracao A_Iteracao_declaracao(A_expressao expressao, A_statement statement){
A_iteracao_declaracao i = malloc(sizeof(*i));
i->expressao = expressao; 
i->statement = statement; 
return i;
}

//retorno_decl:return ;|return expressão;

A_retorno_declaracao A_SimplesRetorno_decl(){
    A_retorno_declaracao r = malloc(sizeof(*r));
    r->u.simples.vazio = A_Vazio();
    r->kind = A_simplesRetorno_decl;       
    return r;
 
}

A_retorno_declaracao A_ExpRetorno_decl(A_expressao expressao){
    A_retorno_declaracao r = malloc(sizeof(*r));
    r->u.exp.expressao = expressao;
    r->kind = A_expRetorno_decl;       
    return r;
 
}
 

//expressao:var = expressao|simples_expressao

A_expressao A_ExpExpressao(A_var var, A_expressao expressao){
A_expressao e = malloc(sizeof(*e));
e->u.exp.var = var; 
e->u.exp.expressao = expressao; 
e->kind = A_expExpressao; 
return e;
}

A_expressao A_NormalExpressao(A_simples_expressao simples_expressao){
A_expressao e = malloc(sizeof(*e));
e->u.normal.simples_expressao = simples_expressao; 
e->kind = A_normalExpressao; 
return e;
}

//var:ID|ID [ expressao ]
A_var A_ReservadaID(string ID){
A_var v = malloc(sizeof(*v));
v->u.reservada.ID = ID;
v->kind = A_reservadaID; 
return v;
}

A_var A_ExpVar(string ID, A_expressao expressao){
A_var v = malloc(sizeof(*v));
v->u.exp.ID = ID;
v->u.exp.expressao = expressao;
v->kind = A_expExpressao; 
return v;
}

//simples_expressao:soma_expressao relacional soma_expressao|soma_expressao

A_simples_expressao A_RelSimples_expressao(A_soma_expressao soma_expressao1, A_relacional relacional, A_soma_expressao soma_expressao2){
A_simples_expressao s = malloc(sizeof(*s));
s->u.rel.soma_expressao1 = soma_expressao1; 
s->u.rel.relacional = relacional; 
s->u.rel.soma_expressao2 = soma_expressao2; 
s->kind = A_relSimples_expressao; 
return s;
}

A_simples_expressao A_ExpSimples_expressao(A_soma_expressao soma_expressao){
A_simples_expressao s = malloc(sizeof(*s));
s->u.exp.soma_expressao = soma_expressao; 
s->kind = A_expSimples_expressao; 
return s;
}

//soma_expressao:soma_expressao soma termo|termo


A_soma_expressao A_SomaSoma_expressao(A_soma_expressao soma_expressao, A_soma soma, A_termo termo){
A_soma_expressao s = malloc(sizeof(*s));
s->u.soma.soma_expressao = soma_expressao; 
s->u.soma.soma = soma; 
s->u.soma.termo = termo; 
s->kind = A_somaSoma_expressao; 
return s;
}

A_soma_expressao A_TermoSoma_expressao(A_termo termo){
A_soma_expressao s = malloc(sizeof(*s));
s->u.termo.termo = termo; 
s->kind = A_termoSoma_expressao; 
return s;
}

//termo:termo mult fator|fator

A_termo A_ListaTermo(A_termo termo, A_mult mult, A_fator fator){
A_termo t = malloc(sizeof(*t));
t->u.lista.termo = termo; 
t->u.lista.mult = mult; 
t->u.lista.fator = fator; 
t->kind = A_listaTermo; 
return t;
}
A_termo A_NormalTermo(A_fator fator){
A_termo t = malloc(sizeof(*t));
t->u.normal.fator = fator; 
t->kind = A_normalTermo; 
return t;
}

//fator:( expressao )|var|ativacao|NUM

A_fator A_ExpFator(A_expressao expressao){
A_fator f = malloc(sizeof(*f));
f->u.exp.expressao = expressao; 
f->kind = A_expFator; 
return f;
}

A_fator A_VariavelFator(A_var var){
A_fator f = malloc(sizeof(*f));
f->u.variavel.var = var; 
f->kind = A_variavelFator; 
return f;
}

A_fator A_AtivFator(A_ativacao ativacao){
A_fator f = malloc(sizeof(*f));
f->u.ativ.ativacao = ativacao; 
f->kind = A_ativFator; 
return f;
}

A_fator A_NumeroFator(int NUM){
A_fator f = malloc(sizeof(*f));
f->u.numero.NUM = NUM; 
f->kind = A_numeroFator; 
return f;
}

A_fator A_StrFator(string str){
A_fator f = malloc(sizeof(*f));
f->u.str.str = str; 
f->kind = A_stringFator; 
return f;
}

//ativacao:ID ( argumento ) 

A_ativacao A_Ativacao(string ID, A_argumentos argumentos){
A_ativacao a = malloc(sizeof(*a));
a->ID = ID; 
a->argumentos = argumentos; 
return a;
}

//argumentos:argumento_lista|vazio

A_argumentos A_ListaArgumentos(A_argumento_lista argumento_lista){
A_argumentos a = malloc(sizeof(*a));
a->u.lista.argumento_lista = argumento_lista; 
a->kind = A_listaArgumentos; 
return a;
}

A_argumentos A_NadaArgumentos(A_vazio vazio){
A_argumentos a = malloc(sizeof(*a));
a->u.nada.vazio = vazio; 
a->kind = A_nadaArgumentos; 
return a;
}

//argumento_lista:argumento_lista  expressao|expressao


A_argumento_lista A_ListaArgumento_lista(A_argumento_lista argumento_lista, A_expressao expressao){
A_argumento_lista a = malloc(sizeof(*a));
a->u.lista.argumento_lista = argumento_lista; 
a->u.lista.expressao = expressao; 
a->kind = A_listaArgumento_lista; 
return a;
}

A_argumento_lista A_ExpArgumento_lista(A_expressao expressao){
A_argumento_lista a = malloc(sizeof(*a));
a->u.exp.expressao = expressao; 
a->kind = A_expArgumento_lista; 
return a;
}

A_vazio A_Vazio(){
A_vazio v = malloc(sizeof(*v));
return v;
}

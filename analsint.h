/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_ANALSINT_H_INCLUDED
# define YY_YY_ANALSINT_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ELSE = 258,
     IF = 259,
     RETURN = 260,
     WHILE = 261,
     ATRIBUI = 262,
     PONTOEVIRGULA = 263,
     VIRGULA = 264,
     ABREPARENTESE = 265,
     FECHAPARENTESE = 266,
     ABRECOLCHETE = 267,
     FECHACOLCHETE = 268,
     ABRECHAVE = 269,
     FECHACHAVE = 270,
     T_INT = 271,
     T_VOID = 272,
     T_STRING = 273,
     MAIS = 274,
     MENOS = 275,
     MULT = 276,
     DIV = 277,
     MENOR = 278,
     MENORIGUAL = 279,
     MAIOR = 280,
     MAIORIGUAL = 281,
     IGUAL = 282,
     DIFERENTE = 283,
     STR = 284,
     ID = 285,
     NUM = 286
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2053 of yacc.c  */
#line 14 "analsint.y"

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



/* Line 2053 of yacc.c  */
#line 124 "analsint.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_ANALSINT_H_INCLUDED  */

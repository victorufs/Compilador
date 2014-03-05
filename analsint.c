/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "analsint.y"


#include "arvore.h"
#include "arvore.c"


void yyerror(char *s);



/* Line 371 of yacc.c  */
#line 79 "analsint.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "analsint.h".  */
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
/* Line 387 of yacc.c  */
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



/* Line 387 of yacc.c  */
#line 189 "analsint.c"
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 217 "analsint.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   101

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  104

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    25,
      27,    29,    31,    38,    40,    42,    46,    48,    51,    56,
      61,    64,    65,    68,    69,    71,    73,    75,    77,    79,
      82,    84,    90,    98,   104,   107,   111,   115,   117,   119,
     124,   128,   130,   132,   134,   136,   138,   140,   142,   146,
     148,   150,   152,   156,   158,   162,   164,   166,   168,   170,
     172,   174,   179,   181,   182,   186
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      33,     0,    -1,    34,    -1,    34,    35,    -1,    35,    -1,
      36,    -1,    38,    -1,    37,    30,     8,    -1,    37,    30,
      12,    31,    13,     8,    -1,    16,    -1,    17,    -1,    18,
      -1,    37,    30,    10,    39,    11,    42,    -1,    40,    -1,
      17,    -1,    40,     9,    41,    -1,    41,    -1,    37,    30,
      -1,    37,    30,    12,    13,    -1,    14,    43,    44,    15,
      -1,    43,    36,    -1,    -1,    44,    45,    -1,    -1,    46,
      -1,    42,    -1,    47,    -1,    48,    -1,    49,    -1,    50,
       8,    -1,     8,    -1,     4,    10,    50,    11,    45,    -1,
       4,    10,    50,    11,    45,     3,    45,    -1,     6,    10,
      50,    11,    45,    -1,     5,     8,    -1,     5,    50,     8,
      -1,    51,     7,    50,    -1,    52,    -1,    30,    -1,    30,
      12,    50,    13,    -1,    54,    53,    54,    -1,    54,    -1,
      24,    -1,    23,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    54,    55,    56,    -1,    56,    -1,    19,    -1,
      20,    -1,    56,    58,    57,    -1,    57,    -1,    10,    50,
      11,    -1,    51,    -1,    59,    -1,    31,    -1,    29,    -1,
      21,    -1,    22,    -1,    30,    10,    60,    11,    -1,    61,
      -1,    -1,    61,     9,    50,    -1,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   113,   113,   118,   120,   125,   127,   132,   134,   138,
     139,   140,   145,   150,   152,   156,   158,   163,   165,   170,
     175,   177,   181,   183,   187,   189,   191,   193,   195,   200,
     202,   207,   209,   214,   219,   220,   224,   226,   231,   233,
     238,   238,   242,   243,   244,   245,   246,   247,   251,   253,
     258,   259,   263,   265,   270,   272,   274,   276,   278,   282,
     283,   287,   292,   294,   298,   300
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ELSE", "IF", "RETURN", "WHILE",
  "ATRIBUI", "PONTOEVIRGULA", "VIRGULA", "ABREPARENTESE", "FECHAPARENTESE",
  "ABRECOLCHETE", "FECHACOLCHETE", "ABRECHAVE", "FECHACHAVE", "T_INT",
  "T_VOID", "T_STRING", "MAIS", "MENOS", "MULT", "DIV", "MENOR",
  "MENORIGUAL", "MAIOR", "MAIORIGUAL", "IGUAL", "DIFERENTE", "STR", "ID",
  "NUM", "$accept", "programa", "declaracao_lista", "declaracao",
  "declaracao_variavel", "tipo_especificador", "declaracao_funcao",
  "parametros", "parametro_lista", "parametro", "composto_decl",
  "local_declaracoes", "statement_lista", "statement",
  "expressao_declaracao", "selecao_declaracao", "iteracao_declaracao",
  "retorno_declaracao", "expressao", "var", "simples_expressao",
  "relacional", "soma_expressao", "soma", "termo", "fator", "mult",
  "ativacao", "argumentos", "argumento_lista", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    36,    37,
      37,    37,    38,    39,    39,    40,    40,    41,    41,    42,
      43,    43,    44,    44,    45,    45,    45,    45,    45,    46,
      46,    47,    47,    48,    49,    49,    50,    50,    51,    51,
      52,    52,    53,    53,    53,    53,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    58,
      58,    59,    60,    60,    61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       1,     1,     6,     1,     1,     3,     1,     2,     4,     4,
       2,     0,     2,     0,     1,     1,     1,     1,     1,     2,
       1,     5,     7,     5,     2,     3,     3,     1,     1,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     1,     0,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,    10,    11,     0,     2,     4,     5,     0,     6,
       1,     3,     0,     7,     0,     0,    10,     0,     0,    13,
      16,     0,    17,     0,     0,     0,     0,    21,    12,    15,
       8,    18,    23,    20,     0,     0,     0,     0,     0,     0,
      30,     0,    19,    58,    38,    57,    25,    22,    24,    26,
      27,    28,     0,    55,    37,    41,    49,    53,    56,     0,
      34,     0,     0,     0,    63,     0,    29,     0,    50,    51,
      43,    42,    44,    45,    46,    47,     0,     0,    59,    60,
       0,     0,    35,     0,    54,    65,     0,    62,     0,    36,
      55,    40,    48,    52,     0,     0,    61,     0,    39,    31,
      33,    64,     0,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,     9,    18,    19,    20,
      46,    32,    35,    47,    48,    49,    50,    51,    52,    53,
      54,    76,    55,    77,    56,    57,    80,    58,    86,    87
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -78
static const yytype_int8 yypact[] =
{
      39,   -78,   -78,   -78,    10,    39,   -78,   -78,   -29,   -78,
     -78,   -78,    42,   -78,    65,     2,     8,     4,    32,    37,
     -78,    38,    41,    44,    39,    60,    56,   -78,   -78,   -78,
     -78,   -78,    39,   -78,    48,     1,    -4,    69,    34,    74,
     -78,    18,   -78,   -78,    28,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,    77,    79,   -78,    47,    -8,   -78,   -78,    18,
     -78,    80,    18,    76,    18,    18,   -78,    18,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,    18,    18,   -78,   -78,
      18,    78,   -78,    81,   -78,   -78,    82,    85,    83,   -78,
     -78,     3,    -8,   -78,    31,    31,   -78,    18,   -78,    87,
     -78,   -78,    31,   -78
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -78,   -78,   -78,    86,    63,   -12,   -78,   -78,   -78,    73,
      75,   -78,   -78,   -77,   -78,   -78,   -78,   -78,   -38,     0,
     -78,   -78,    23,   -78,    24,    20,   -78,   -78,   -78,   -78
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -15
static const yytype_int8 yytable[] =
{
      61,    12,    17,    63,    13,    37,    38,    39,    15,    40,
      10,    41,    17,    78,    79,    27,    42,    99,   100,   -14,
      34,    81,    68,    69,    83,   103,    85,    88,    41,    89,
      43,    44,    45,    21,    22,    37,    38,    39,    64,    40,
      65,    41,    60,    23,    41,    27,    24,    43,    44,    45,
      13,    25,    14,    26,    15,     1,     2,     3,    27,   101,
      43,    44,    45,    43,    44,    45,    68,    69,    30,    31,
      70,    71,    72,    73,    74,    75,    90,    90,    36,    59,
      90,     1,    16,     3,    62,    66,    67,    84,    82,    94,
     102,    11,    95,    96,    97,    33,    98,    29,    28,    91,
      93,    92
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-78)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      38,    30,    14,    41,     8,     4,     5,     6,    12,     8,
       0,    10,    24,    21,    22,    14,    15,    94,    95,    11,
      32,    59,    19,    20,    62,   102,    64,    65,    10,    67,
      29,    30,    31,    31,    30,     4,     5,     6,    10,     8,
      12,    10,     8,    11,    10,    14,     9,    29,    30,    31,
       8,    13,    10,    12,    12,    16,    17,    18,    14,    97,
      29,    30,    31,    29,    30,    31,    19,    20,     8,    13,
      23,    24,    25,    26,    27,    28,    76,    77,    30,    10,
      80,    16,    17,    18,    10,     8,     7,    11,     8,    11,
       3,     5,    11,    11,     9,    32,    13,    24,    23,    76,
      80,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    17,    18,    33,    34,    35,    36,    37,    38,
       0,    35,    30,     8,    10,    12,    17,    37,    39,    40,
      41,    31,    30,    11,     9,    13,    12,    14,    42,    41,
       8,    13,    43,    36,    37,    44,    30,     4,     5,     6,
       8,    10,    15,    29,    30,    31,    42,    45,    46,    47,
      48,    49,    50,    51,    52,    54,    56,    57,    59,    10,
       8,    50,    10,    50,    10,    12,     8,     7,    19,    20,
      23,    24,    25,    26,    27,    28,    53,    55,    21,    22,
      58,    50,     8,    50,    11,    50,    60,    61,    50,    50,
      51,    54,    56,    57,    11,    11,    11,     9,    13,    45,
      45,    50,     3,    45
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1787 of yacc.c  */
#line 114 "analsint.y"
    {(yyval.tprograma) = A_Programa((yyvsp[(1) - (1)].tdeclaracao_lista));}
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 119 "analsint.y"
    { (yyval.tdeclaracao_lista) = A_ListaDeclaracao_lista((yyvsp[(1) - (2)].tdeclaracao_lista),(yyvsp[(2) - (2)].tdeclaracao));}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 121 "analsint.y"
    {(yyval.tdeclaracao_lista) = A_DeclDeclaracao_lista((yyvsp[(1) - (1)].tdeclaracao));}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 126 "analsint.y"
    { (yyval.tdeclaracao) = A_VarDeclaracao((yyvsp[(1) - (1)].tdeclaracao_variavel));}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 128 "analsint.y"
    { (yyval.tdeclaracao) = A_FunDeclaracao((yyvsp[(1) - (1)].tdeclaracao_funcao));}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 133 "analsint.y"
    { (yyval.tdeclaracao_variavel) = A_NormalDeclaracao_variavel((yyvsp[(1) - (3)].ttipo_especificador),(yyvsp[(2) - (3)].sval));}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 135 "analsint.y"
    { (yyval.tdeclaracao_variavel) = A_VetorDeclaracao_variavel((yyvsp[(1) - (6)].ttipo_especificador),(yyvsp[(2) - (6)].sval),(yyvsp[(4) - (6)].ival));}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 138 "analsint.y"
    {(yyval.ttipo_especificador)=A_int;}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 139 "analsint.y"
    {(yyval.ttipo_especificador)=A_void;}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 140 "analsint.y"
    {(yyval.ttipo_especificador)=A_string;}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 146 "analsint.y"
    { (yyval.tdeclaracao_funcao) = A_Declaracao_funcao((yyvsp[(1) - (6)].ttipo_especificador),(yyvsp[(2) - (6)].sval),(yyvsp[(4) - (6)].tparametros),(yyvsp[(6) - (6)].tcomposto_decl));}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 151 "analsint.y"
    { (yyval.tparametros) = A_ListaParametros((yyvsp[(1) - (1)].tparametro_lista));}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 152 "analsint.y"
    { (yyval.tparametros) = A_NadaParametros(A_void);}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 157 "analsint.y"
    { (yyval.tparametro_lista) = A_ListaParametro_lista((yyvsp[(1) - (3)].tparametro_lista),(yyvsp[(3) - (3)].tparametro));}
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 159 "analsint.y"
    { (yyval.tparametro_lista) = A_ParamParametro_lista((yyvsp[(1) - (1)].tparametro));}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 164 "analsint.y"
    { (yyval.tparametro) = A_NormalParametro((yyvsp[(1) - (2)].ttipo_especificador),(yyvsp[(2) - (2)].sval));}
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 166 "analsint.y"
    { (yyval.tparametro) = A_VetorParametro((yyvsp[(1) - (4)].ttipo_especificador),(yyvsp[(2) - (4)].sval));}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 171 "analsint.y"
    { (yyval.tcomposto_decl) = A_Composto_decl((yyvsp[(2) - (4)].tlocal_declaracoes),(yyvsp[(3) - (4)].tstatement_lista));}
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 176 "analsint.y"
    { (yyval.tlocal_declaracoes) = A_DeclLocal_declaracoes((yyvsp[(1) - (2)].tlocal_declaracoes),(yyvsp[(2) - (2)].tdeclaracao_variavel));}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 177 "analsint.y"
    { (yyval.tlocal_declaracoes) = A_NadaLocal_declaracoes(A_Vazio());}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 182 "analsint.y"
    { (yyval.tstatement_lista) = A_ListaStatement_lista((yyvsp[(1) - (2)].tstatement_lista),(yyvsp[(2) - (2)].tstatement));}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 183 "analsint.y"
    { (yyval.tstatement_lista) = A_NadaStatement_lista(A_Vazio());}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 188 "analsint.y"
    { (yyval.tstatement) = A_ExpStatement((yyvsp[(1) - (1)].texpressao_declaracao));}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 190 "analsint.y"
    { (yyval.tstatement) = A_DeclStatement((yyvsp[(1) - (1)].tcomposto_decl));}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 192 "analsint.y"
    { (yyval.tstatement) = A_SelStatement((yyvsp[(1) - (1)].tselecao_declaracao));}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 194 "analsint.y"
    { (yyval.tstatement) = A_IteraStatement((yyvsp[(1) - (1)].titeracao_declaracao));}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 196 "analsint.y"
    { (yyval.tstatement) = A_RetornoStatement((yyvsp[(1) - (1)].tretorno_declaracao));}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 201 "analsint.y"
    { (yyval.texpressao_declaracao) = A_ExpExpressao_declaracao((yyvsp[(1) - (2)].texpressao));}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 203 "analsint.y"
    { (yyval.texpressao_declaracao) = A_TokenExpressao_declaracao();}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 208 "analsint.y"
    { (yyval.tselecao_declaracao) = A_NormalSelecao_declaracao((yyvsp[(3) - (5)].texpressao),(yyvsp[(5) - (5)].tstatement));}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 210 "analsint.y"
    { (yyval.tselecao_declaracao) = A_SenaoSelecao_declaracao((yyvsp[(3) - (7)].texpressao),(yyvsp[(5) - (7)].tstatement),(yyvsp[(7) - (7)].tstatement));}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 215 "analsint.y"
    { (yyval.titeracao_declaracao) = A_Iteracao_declaracao((yyvsp[(3) - (5)].texpressao),(yyvsp[(5) - (5)].tstatement));}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 219 "analsint.y"
    {}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 220 "analsint.y"
    {}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 225 "analsint.y"
    { (yyval.texpressao) = A_ExpExpressao((yyvsp[(1) - (3)].tvar),(yyvsp[(3) - (3)].texpressao));}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 227 "analsint.y"
    { (yyval.texpressao) = A_NormalExpressao((yyvsp[(1) - (1)].tsimples_expressao));}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 232 "analsint.y"
    { (yyval.tvar) = A_ReservadaID((yyvsp[(1) - (1)].sval));}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 234 "analsint.y"
    { (yyval.tvar) = A_ExpVar((yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].texpressao));}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 238 "analsint.y"
    { (yyval.tsimples_expressao) = A_RelSimples_expressao((yyvsp[(1) - (3)].tsoma_expressao),(yyvsp[(2) - (3)].trelacional),(yyvsp[(3) - (3)].tsoma_expressao));}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 238 "analsint.y"
    { (yyval.tsimples_expressao) = A_ExpSimples_expressao((yyvsp[(1) - (1)].tsoma_expressao));}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 242 "analsint.y"
    {(yyval.trelacional)=A_menorigual;}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 243 "analsint.y"
    {(yyval.trelacional)=A_menor;}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 244 "analsint.y"
    {(yyval.trelacional)=A_maior;}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 245 "analsint.y"
    {(yyval.trelacional)=A_maiorigual;}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 246 "analsint.y"
    {(yyval.trelacional)=A_igualigual;}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 247 "analsint.y"
    {(yyval.trelacional)=A_naoigual;}
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 252 "analsint.y"
    { (yyval.tsoma_expressao) = A_SomaSoma_expressao((yyvsp[(1) - (3)].tsoma_expressao),(yyvsp[(2) - (3)].tsoma),(yyvsp[(3) - (3)].ttermo));}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 254 "analsint.y"
    { (yyval.tsoma_expressao) = A_TermoSoma_expressao((yyvsp[(1) - (1)].ttermo));}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 258 "analsint.y"
    {(yyval.tsoma)=A_mais;}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 259 "analsint.y"
    {(yyval.tsoma)=A_menos;}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 264 "analsint.y"
    { (yyval.ttermo) = A_ListaTermo((yyvsp[(1) - (3)].ttermo),(yyvsp[(2) - (3)].tmult),(yyvsp[(3) - (3)].tfator));}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 266 "analsint.y"
    { (yyval.ttermo) = A_NormalTermo((yyvsp[(1) - (1)].tfator));}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 271 "analsint.y"
    { (yyval.tfator) = A_ExpFator((yyvsp[(2) - (3)].texpressao));}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 273 "analsint.y"
    { (yyval.tfator) = A_VariavelFator((yyvsp[(1) - (1)].tvar));}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 275 "analsint.y"
    { (yyval.tfator) = A_AtivFator((yyvsp[(1) - (1)].tativacao));}
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 277 "analsint.y"
    { (yyval.tfator) = A_NumeroFator((yyvsp[(1) - (1)].ival));}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 278 "analsint.y"
    {}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 282 "analsint.y"
    {(yyval.tmult)=A_multip;}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 283 "analsint.y"
    {(yyval.tmult)=A_div;}
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 288 "analsint.y"
    { (yyval.tativacao) = A_Ativacao((yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].targumentos));}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 293 "analsint.y"
    { (yyval.targumentos) = A_ListaArgumentos((yyvsp[(1) - (1)].targumento_lista));}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 294 "analsint.y"
    { (yyval.targumentos) = A_NadaArgumentos(A_Vazio());}
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 299 "analsint.y"
    { (yyval.targumento_lista) = A_ListaArgumento_lista((yyvsp[(1) - (3)].targumento_lista),(yyvsp[(3) - (3)].texpressao));}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 301 "analsint.y"
    { (yyval.targumento_lista) = A_ExpArgumento_lista((yyvsp[(1) - (1)].texpressao));}
    break;


/* Line 1787 of yacc.c  */
#line 1889 "analsint.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 304 "analsint.y"


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

%{

#include <stdio.h>

%}

%union {
	char *str;
	int numint;
	double numreal;
}



%token 			ESPACOO_
%token 			COMENTARIO_
/*%token <str>	        STRINGSTART_*/
%token 			ID_
%token 			CHARR_
%token 			ELSEE_
%token 			FLOATT_
%token 			IFF_
%token 			INTT_
%token 			NEWW_
%token 			RETURNN_
%token 			VOIDD_
%token 			WHILEE_
%token 			DIGIT_
%token <numint>		NINT_
//%token <numint>		NHEX_
%token <numreal>		NREAL_
%token 			ABREP_
%token 			FECHAP_
%token 			SOMA_
%token 			SUB_
%token 			MUL_
%token 			DIVI_
%token 			MENOR_
%token 			MAIOR_
%token 			EXCLAM_
%token 			IGUALATRIB_
%token 			EE_
%token 			OUOU_
%token 			IGUAL_
%token 			MENORI_
%token 			MAIORI_
%token 			VIRGULA_
%token 			IDENT_
%token 			PONTOVIRGULA_
%token 			ABRECOLCH_
%token 			FECHACOLCH_
%token 			ABRECHAVES_
%token 			FECHACHAVES_

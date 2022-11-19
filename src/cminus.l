%option noyywrap yylineno nodefault
%{

/* yylineno    - variable to track line numbers 
// nodefault   - do not add a default rule at the end of the scanner 
               that copies otherwise unmatched input to yyout. */

#include <stdio.h>
#include "token.h"
#include<string.h>


/***************** INSERIR modificações nos padrões ******************/
/* Por exemplo, usar os nomes de tokens definidos em cminus.y */

%}

%%

"//".*                      { /* no action */ }

int                         { return TOKEN_INT; }
void                        { return TOKEN_VOID;}
	/* MODIFICAR para incluir todas as keywords */

do 			    								{ return TOKEN_DO; }
else                        { return TOKEN_ELSE; }
if                          { return TOKEN_IF; }
return                      { return TOKEN_RETURN; }
while                       { return TOKEN_WHILE; }

[A-Za-z]([A-Za-z_]|[0-9])*  { 
	char * teste = malloc(sizeof(yytext));
	strcpy(teste,yytext);
	yylval.str = teste;
	return TOKEN_ID;  }
[0-9]+                      { yylval.intval = atoi(yytext);
	return TOKEN_NUM; }

"+"			    { return TOKEN_ADDITION; }
"-" 				{ return TOKEN_SUBTRACTION; }
"*"			    { return TOKEN_MULTIPLICATION;  }
"/"			    { return TOKEN_DIVISION; }

	/* MODIFICAR: separar simbolos para retornar token específico */
 
"=" { return TOKEN_ASSIGNMENT; }
"<" { return TOKEN_LESS; }
">" { return TOKEN_GREATER; }
"<=" { return TOKEN_LE; }
">=" { return TOKEN_GE; }
"==" { return TOKEN_EQUAL_COMP; }
"!=" { return TOKEN_NEQUAL_COMP; }
";" { return TOKEN_DOT_COMMA; }
"," { return TOKEN_COMMA; }
"(" { return TOKEN_OPENP; }
")" { return TOKEN_CLOSEP; }
"[" { return TOKEN_OPENK; }
"]" { return TOKEN_CLOSEK; }
"{" { return TOKEN_OPENC; }
"}" { return TOKEN_CLOSEC;  }

[ \t\n]                     { /* no action */ }
.                           { return TOKEN_ERROR; }


%%


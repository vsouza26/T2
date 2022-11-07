%{
/* cminus.y */

#include <stdio.h>
#include "src/ast.h"

void yyerror(const char* msg) {
   fprintf(stderr, "%s\n", msg);
}

struct decl *parser_result;
extern int yylex();
%}

%token TOKEN_INT

/***** COMPLETAR *****/

%token TOKEN_EQ

%token TOKEN_ERROR

%start program

%%

program
: /* completar */
;

/***** COMPLETAR *****/

%%



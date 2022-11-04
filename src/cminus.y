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

%token TOKEN_ERROR

%type <decl> program

%start program

%%

program
: /* completar */
;

/***** COMPLETAR *****/

%%



%option noyywrap yylineno nodefault
%{

// yylineno    - variable to track line numbers 
// nodefault   - do not add a default rule at the end of the scanner 
//               that copies otherwise unmatched input to yyout.

#include <stdio.h>
#include "token.h"

/***************** INSERIR modificações nos padrões ******************/
/* Por exemplo, usar os nomes de tokens definidos em cminus.y */

%}

%%

"//".*                      { /* no action */ }

int                         { return TOKEN_INT; }
void                        { return ... }

/* MODIFICAR para incluir todas as keywords */

do 			    { return TOKEN_DO; }
else                        { return  }
if                          { return  }
return                      { return  }
while                       { return ... }

[A-Za-z]([A-Za-z_]|[0-9])*  { return TOKEN_ID; }
[0-9]+                      { return TOKEN_NUM; }

"+"			    { return TOKEN_ADD; }
"-" 			    { return TOKEN_MINUS; }
"*"			    { return ... }
"/"			    { return ... }

/* MODIFICAR para retornar token específico */
 
("="|"<"|">")               { return SYM; }
("<="|">="|"=="|"!=")       { return SYM; }
(";"|",")                   { return SYM; }
("("|")"|"["|"]"|"{"|"}")   { return SYM; }

[ \t\n]                     { /* no action */ }
.                           { return TOKEN_ERROR; }

%%

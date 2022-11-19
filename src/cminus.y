%{
/* cminus.y */

#include <stdio.h>
#include "src/ast.h"

void yyerror(const char* msg) {
   fprintf(stderr, "%s\n", msg);
}

struct decl *parser_result;
extern int yylex();
extern char* yytext;
%}

%union {
  int intval;
  char * str;
	struct expr * exp;
	struct stmt * smt;
	struct type * typ;
	struct decl * dec;
	struct param_list * par;
	int ext;
}

%type <dec> declaration declaration_list var_declaration fun_declaration local_declarations

%type <smt> compound_stmt statement_list statement expression_stmt selection_stmt iteration_stmt return_stmt

%type <typ> type_specifier

%type <par> param_list params param

%type <exp> expression simple_expression factor var call arg_list args additive_expression term

%type <ext> relop addop mulop

%token TOKEN_INT

%token TOKEN_VOID

%token TOKEN_DECL_LIST

%token TOKEN_DECL

%token TOKEN_VAR_DECL

%token TOKEN_FUN_DECL

%token TOKEN_TYPE_SPECIFIER

%token TOKEN_PARAMS

%token <str> TOKEN_ID

%token TOKEN_COMPOUND_STMT

%token TOKEN_PARAM_LIST

%token TOKEN_PARAM

%token TOKEN_LOCAL_DECLARATION

%token TOKEN_STMT_LIST

%token TOKEN_STMT

%token TOKEN_EXPR_STMT

%token TOKEN_SELECTION_STMT

%token TOKEN_ITERARION_STMT

%token TOKEN_RETURN_STMT

%token TOKEN_EXPR

%token TOKEN_VAR

%token TOKEN_SIMPLE_EXPR

%token TOKEN_ADDITIVE_EXPR

%token TOKEN_RELOP

%token TOKEN_ADD_OP

%token TOKEN_TERM

%token TOKEN_MULOP

%token TOKEN_FACTOR

%token TOKEN_CALL

%token TOKEN_ARGS

%token TOKEN_ARG_LIST

%token TOKEN_DO

%token TOKEN_WHILE

%token TOKEN_ADDITION

%token TOKEN_SUBTRACTION

%token TOKEN_MULTIPLICATION

%token TOKEN_DIVISION

%token TOKEN_IF

%token TOKEN_ELSE

%token TOKEN_EQ

%token TOKEN_ERROR

%token <intval> TOKEN_NUM

%token TOKEN_EQUAL

%token TOKEN_ASSIGNMENT

%token TOKEN_LESS

%token TOKEN_GREATER

%token TOKEN_LE

%token TOKEN_GE

%token TOKEN_EQUAL_COMP

%token TOKEN_NEQUAL_COMP

%token TOKEN_DOT_COMMA

%token TOKEN_COMMA

%token TOKEN_OPENP

%token TOKEN_CLOSEP

%token TOKEN_OPENK

%token TOKEN_CLOSEK

%token TOKEN_OPENC

%token TOKEN_CLOSEC

%start program

%token TOKEN_RETURN

%%

program: declaration_list { parser_result = $1; };

declaration_list:
							 	declaration_list declaration { $$ = insert_decl($1,$2); } | 
								declaration;

declaration: var_declaration |
					 fun_declaration;

var_declaration: type_specifier TOKEN_ID TOKEN_DOT_COMMA { $$ = var_decl_create($2, $1); } | 
							 type_specifier TOKEN_ID TOKEN_OPENK TOKEN_NUM TOKEN_CLOSEK TOKEN_DOT_COMMA { $$ = array_decl_create($2, $1, $4); 
							 };

type_specifier: TOKEN_INT { $$ = type_create(TYPE_INTEGER, 0,0); } |
							TOKEN_VOID { $$ = type_create(TYPE_VOID, 0,0); } ;

fun_declaration: type_specifier TOKEN_ID TOKEN_OPENP params TOKEN_CLOSEP compound_stmt { $$ = func_decl_create($2,$1,$4,$6); };

params: param_list |
			TOKEN_VOID { $$ = NULL; } ;

param_list: param_list TOKEN_COMMA param { $$ = insert_param($1,$3); } |
					param;

param: type_specifier TOKEN_ID { $$ = param_create ($2,$1); } |
		 type_specifier TOKEN_ID TOKEN_OPENK TOKEN_CLOSEK { $$ = param_array_create ($2,$1);};

compound_stmt: TOKEN_OPENC local_declarations statement_list TOKEN_CLOSEC { $$ = compound_stmt_create(STMT_BLOCK,$2,$3); };

local_declarations: local_declarations var_declaration { $$ = insert_decl($1,$2); } |
									var_declaration |
									%empty { $$ = NULL; };

statement_list: statement_list statement { $$ = insert_stmt($1,$2); }
							| statement
							| %empty { $$ = NULL; };

statement: expression_stmt |
					compound_stmt |
					selection_stmt |
					iteration_stmt |
					return_stmt;

expression_stmt: expression TOKEN_DOT_COMMA { $$ = stmt_create(STMT_EXPR, NULL, NULL, $1, NULL, NULL, NULL, NULL); }|
							 TOKEN_DOT_COMMA;

selection_stmt: TOKEN_IF TOKEN_OPENP expression TOKEN_CLOSEP statement { $$ = if_create($3,$5); } |
								TOKEN_IF TOKEN_OPENP expression TOKEN_CLOSEP statement TOKEN_ELSE statement { $$ = if_else_create($3,$5,$7); };

iteration_stmt: TOKEN_WHILE TOKEN_OPENP expression TOKEN_CLOSEP TOKEN_DO statement { $$ = while_create($3,$6); };

return_stmt: TOKEN_RETURN TOKEN_DOT_COMMA { $$ = stmt_create(STMT_RETURN,NULL,NULL,NULL,NULL,NULL,NULL,NULL);} |
					 TOKEN_RETURN expression TOKEN_DOT_COMMA { $$ = stmt_create(STMT_RETURN, NULL, NULL,$2, NULL, NULL, NULL, NULL); };

expression: var TOKEN_ASSIGNMENT expression { $$ = expr_create(EXPR_ASSIGN, $1, $3); } | 
					simple_expression;

var: TOKEN_ID { $$ = expr_create_var($1); } |
	 TOKEN_ID TOKEN_OPENK expression TOKEN_CLOSEK;

simple_expression: additive_expression relop additive_expression { $$ = expr_create($2,$1,$3); }|
								 additive_expression;

relop: TOKEN_LE { $$ =  EXPR_LTEQ; }|
			TOKEN_LESS { $$ = EXPR_LT; }|
			TOKEN_GREATER { $$ = EXPR_GT; }|
			TOKEN_GE { $$ = EXPR_GTEQ; }|
			TOKEN_EQUAL_COMP { $$ = EXPR_EQ; }|
			TOKEN_NEQUAL_COMP { $$ = EXPR_NEQ; };

additive_expression: additive_expression addop term { $$ = expr_create($2, $1, $3); }|
									 term;

addop: TOKEN_ADDITION { $$ = EXPR_ADD; }|
		 TOKEN_SUBTRACTION { $$ = EXPR_SUB; };

term: term mulop factor { $$ = expr_create($2, $1, $3); }|
		factor;

mulop: TOKEN_MULTIPLICATION { $$ = EXPR_MUL; } |
		 TOKEN_DIVISION { $$ = EXPR_DIV; };

factor: TOKEN_OPENP expression TOKEN_CLOSEP { $$ = $2; }|
			var |
			call |
			TOKEN_NUM { $$ = expr_create_integer($1); };

call: TOKEN_ID TOKEN_OPENP args TOKEN_CLOSEP { $$ = expr_create_call($1, $3); };

args: arg_list |
		%empty { $$ = NULL; };

arg_list: arg_list TOKEN_COMMA expression {$$ = expr_create_arg($3,$1); } |
				expression;

%%



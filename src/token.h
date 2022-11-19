/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TOKEN_H_INCLUDED
# define YY_YY_TOKEN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOKEN_INT = 258,               /* TOKEN_INT  */
    TOKEN_VOID = 259,              /* TOKEN_VOID  */
    TOKEN_DECL_LIST = 260,         /* TOKEN_DECL_LIST  */
    TOKEN_DECL = 261,              /* TOKEN_DECL  */
    TOKEN_VAR_DECL = 262,          /* TOKEN_VAR_DECL  */
    TOKEN_FUN_DECL = 263,          /* TOKEN_FUN_DECL  */
    TOKEN_TYPE_SPECIFIER = 264,    /* TOKEN_TYPE_SPECIFIER  */
    TOKEN_PARAMS = 265,            /* TOKEN_PARAMS  */
    TOKEN_ID = 266,                /* TOKEN_ID  */
    TOKEN_COMPOUND_STMT = 267,     /* TOKEN_COMPOUND_STMT  */
    TOKEN_PARAM_LIST = 268,        /* TOKEN_PARAM_LIST  */
    TOKEN_PARAM = 269,             /* TOKEN_PARAM  */
    TOKEN_LOCAL_DECLARATION = 270, /* TOKEN_LOCAL_DECLARATION  */
    TOKEN_STMT_LIST = 271,         /* TOKEN_STMT_LIST  */
    TOKEN_STMT = 272,              /* TOKEN_STMT  */
    TOKEN_EXPR_STMT = 273,         /* TOKEN_EXPR_STMT  */
    TOKEN_SELECTION_STMT = 274,    /* TOKEN_SELECTION_STMT  */
    TOKEN_ITERARION_STMT = 275,    /* TOKEN_ITERARION_STMT  */
    TOKEN_RETURN_STMT = 276,       /* TOKEN_RETURN_STMT  */
    TOKEN_EXPR = 277,              /* TOKEN_EXPR  */
    TOKEN_VAR = 278,               /* TOKEN_VAR  */
    TOKEN_SIMPLE_EXPR = 279,       /* TOKEN_SIMPLE_EXPR  */
    TOKEN_ADDITIVE_EXPR = 280,     /* TOKEN_ADDITIVE_EXPR  */
    TOKEN_RELOP = 281,             /* TOKEN_RELOP  */
    TOKEN_ADD_OP = 282,            /* TOKEN_ADD_OP  */
    TOKEN_TERM = 283,              /* TOKEN_TERM  */
    TOKEN_MULOP = 284,             /* TOKEN_MULOP  */
    TOKEN_FACTOR = 285,            /* TOKEN_FACTOR  */
    TOKEN_CALL = 286,              /* TOKEN_CALL  */
    TOKEN_ARGS = 287,              /* TOKEN_ARGS  */
    TOKEN_ARG_LIST = 288,          /* TOKEN_ARG_LIST  */
    TOKEN_DO = 289,                /* TOKEN_DO  */
    TOKEN_WHILE = 290,             /* TOKEN_WHILE  */
    TOKEN_ADDITION = 291,          /* TOKEN_ADDITION  */
    TOKEN_SUBTRACTION = 292,       /* TOKEN_SUBTRACTION  */
    TOKEN_MULTIPLICATION = 293,    /* TOKEN_MULTIPLICATION  */
    TOKEN_DIVISION = 294,          /* TOKEN_DIVISION  */
    TOKEN_IF = 295,                /* TOKEN_IF  */
    TOKEN_ELSE = 296,              /* TOKEN_ELSE  */
    TOKEN_EQ = 297,                /* TOKEN_EQ  */
    TOKEN_ERROR = 298,             /* TOKEN_ERROR  */
    TOKEN_NUM = 299,               /* TOKEN_NUM  */
    TOKEN_EQUAL = 300,             /* TOKEN_EQUAL  */
    TOKEN_ASSIGNMENT = 301,        /* TOKEN_ASSIGNMENT  */
    TOKEN_LESS = 302,              /* TOKEN_LESS  */
    TOKEN_GREATER = 303,           /* TOKEN_GREATER  */
    TOKEN_LE = 304,                /* TOKEN_LE  */
    TOKEN_GE = 305,                /* TOKEN_GE  */
    TOKEN_EQUAL_COMP = 306,        /* TOKEN_EQUAL_COMP  */
    TOKEN_NEQUAL_COMP = 307,       /* TOKEN_NEQUAL_COMP  */
    TOKEN_DOT_COMMA = 308,         /* TOKEN_DOT_COMMA  */
    TOKEN_COMMA = 309,             /* TOKEN_COMMA  */
    TOKEN_OPENP = 310,             /* TOKEN_OPENP  */
    TOKEN_CLOSEP = 311,            /* TOKEN_CLOSEP  */
    TOKEN_OPENK = 312,             /* TOKEN_OPENK  */
    TOKEN_CLOSEK = 313,            /* TOKEN_CLOSEK  */
    TOKEN_OPENC = 314,             /* TOKEN_OPENC  */
    TOKEN_CLOSEC = 315,            /* TOKEN_CLOSEC  */
    TOKEN_RETURN = 316             /* TOKEN_RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "src/cminus.y"

  int intval;
  char * str;
	struct expr * exp;
	struct stmt * smt;
	struct type * typ;
	struct decl * dec;
	struct param_list * par;
	int ext;

#line 136 "token.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TOKEN_H_INCLUDED  */

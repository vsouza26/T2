/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/cminus.y"

/* cminus.y */

#include <stdio.h>
#include "src/ast.h"

void yyerror(const char* msg) {
   fprintf(stderr, "%s\n", msg);
}

struct decl *parser_result;
extern int yylex();
extern char* yytext;

#line 86 "cminus.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "token.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_INT = 3,                  /* TOKEN_INT  */
  YYSYMBOL_TOKEN_VOID = 4,                 /* TOKEN_VOID  */
  YYSYMBOL_TOKEN_DECL_LIST = 5,            /* TOKEN_DECL_LIST  */
  YYSYMBOL_TOKEN_DECL = 6,                 /* TOKEN_DECL  */
  YYSYMBOL_TOKEN_VAR_DECL = 7,             /* TOKEN_VAR_DECL  */
  YYSYMBOL_TOKEN_FUN_DECL = 8,             /* TOKEN_FUN_DECL  */
  YYSYMBOL_TOKEN_TYPE_SPECIFIER = 9,       /* TOKEN_TYPE_SPECIFIER  */
  YYSYMBOL_TOKEN_PARAMS = 10,              /* TOKEN_PARAMS  */
  YYSYMBOL_TOKEN_ID = 11,                  /* TOKEN_ID  */
  YYSYMBOL_TOKEN_COMPOUND_STMT = 12,       /* TOKEN_COMPOUND_STMT  */
  YYSYMBOL_TOKEN_PARAM_LIST = 13,          /* TOKEN_PARAM_LIST  */
  YYSYMBOL_TOKEN_PARAM = 14,               /* TOKEN_PARAM  */
  YYSYMBOL_TOKEN_LOCAL_DECLARATION = 15,   /* TOKEN_LOCAL_DECLARATION  */
  YYSYMBOL_TOKEN_STMT_LIST = 16,           /* TOKEN_STMT_LIST  */
  YYSYMBOL_TOKEN_STMT = 17,                /* TOKEN_STMT  */
  YYSYMBOL_TOKEN_EXPR_STMT = 18,           /* TOKEN_EXPR_STMT  */
  YYSYMBOL_TOKEN_SELECTION_STMT = 19,      /* TOKEN_SELECTION_STMT  */
  YYSYMBOL_TOKEN_ITERARION_STMT = 20,      /* TOKEN_ITERARION_STMT  */
  YYSYMBOL_TOKEN_RETURN_STMT = 21,         /* TOKEN_RETURN_STMT  */
  YYSYMBOL_TOKEN_EXPR = 22,                /* TOKEN_EXPR  */
  YYSYMBOL_TOKEN_VAR = 23,                 /* TOKEN_VAR  */
  YYSYMBOL_TOKEN_SIMPLE_EXPR = 24,         /* TOKEN_SIMPLE_EXPR  */
  YYSYMBOL_TOKEN_ADDITIVE_EXPR = 25,       /* TOKEN_ADDITIVE_EXPR  */
  YYSYMBOL_TOKEN_RELOP = 26,               /* TOKEN_RELOP  */
  YYSYMBOL_TOKEN_ADD_OP = 27,              /* TOKEN_ADD_OP  */
  YYSYMBOL_TOKEN_TERM = 28,                /* TOKEN_TERM  */
  YYSYMBOL_TOKEN_MULOP = 29,               /* TOKEN_MULOP  */
  YYSYMBOL_TOKEN_FACTOR = 30,              /* TOKEN_FACTOR  */
  YYSYMBOL_TOKEN_CALL = 31,                /* TOKEN_CALL  */
  YYSYMBOL_TOKEN_ARGS = 32,                /* TOKEN_ARGS  */
  YYSYMBOL_TOKEN_ARG_LIST = 33,            /* TOKEN_ARG_LIST  */
  YYSYMBOL_TOKEN_DO = 34,                  /* TOKEN_DO  */
  YYSYMBOL_TOKEN_WHILE = 35,               /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_ADDITION = 36,            /* TOKEN_ADDITION  */
  YYSYMBOL_TOKEN_SUBTRACTION = 37,         /* TOKEN_SUBTRACTION  */
  YYSYMBOL_TOKEN_MULTIPLICATION = 38,      /* TOKEN_MULTIPLICATION  */
  YYSYMBOL_TOKEN_DIVISION = 39,            /* TOKEN_DIVISION  */
  YYSYMBOL_TOKEN_IF = 40,                  /* TOKEN_IF  */
  YYSYMBOL_TOKEN_ELSE = 41,                /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_EQ = 42,                  /* TOKEN_EQ  */
  YYSYMBOL_TOKEN_ERROR = 43,               /* TOKEN_ERROR  */
  YYSYMBOL_TOKEN_NUM = 44,                 /* TOKEN_NUM  */
  YYSYMBOL_TOKEN_EQUAL = 45,               /* TOKEN_EQUAL  */
  YYSYMBOL_TOKEN_ASSIGNMENT = 46,          /* TOKEN_ASSIGNMENT  */
  YYSYMBOL_TOKEN_LESS = 47,                /* TOKEN_LESS  */
  YYSYMBOL_TOKEN_GREATER = 48,             /* TOKEN_GREATER  */
  YYSYMBOL_TOKEN_LE = 49,                  /* TOKEN_LE  */
  YYSYMBOL_TOKEN_GE = 50,                  /* TOKEN_GE  */
  YYSYMBOL_TOKEN_EQUAL_COMP = 51,          /* TOKEN_EQUAL_COMP  */
  YYSYMBOL_TOKEN_NEQUAL_COMP = 52,         /* TOKEN_NEQUAL_COMP  */
  YYSYMBOL_TOKEN_DOT_COMMA = 53,           /* TOKEN_DOT_COMMA  */
  YYSYMBOL_TOKEN_COMMA = 54,               /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_OPENP = 55,               /* TOKEN_OPENP  */
  YYSYMBOL_TOKEN_CLOSEP = 56,              /* TOKEN_CLOSEP  */
  YYSYMBOL_TOKEN_OPENK = 57,               /* TOKEN_OPENK  */
  YYSYMBOL_TOKEN_CLOSEK = 58,              /* TOKEN_CLOSEK  */
  YYSYMBOL_TOKEN_OPENC = 59,               /* TOKEN_OPENC  */
  YYSYMBOL_TOKEN_CLOSEC = 60,              /* TOKEN_CLOSEC  */
  YYSYMBOL_TOKEN_RETURN = 61,              /* TOKEN_RETURN  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_declaration_list = 64,          /* declaration_list  */
  YYSYMBOL_declaration = 65,               /* declaration  */
  YYSYMBOL_var_declaration = 66,           /* var_declaration  */
  YYSYMBOL_type_specifier = 67,            /* type_specifier  */
  YYSYMBOL_fun_declaration = 68,           /* fun_declaration  */
  YYSYMBOL_params = 69,                    /* params  */
  YYSYMBOL_param_list = 70,                /* param_list  */
  YYSYMBOL_param = 71,                     /* param  */
  YYSYMBOL_compound_stmt = 72,             /* compound_stmt  */
  YYSYMBOL_local_declarations = 73,        /* local_declarations  */
  YYSYMBOL_statement_list = 74,            /* statement_list  */
  YYSYMBOL_statement = 75,                 /* statement  */
  YYSYMBOL_expression_stmt = 76,           /* expression_stmt  */
  YYSYMBOL_selection_stmt = 77,            /* selection_stmt  */
  YYSYMBOL_iteration_stmt = 78,            /* iteration_stmt  */
  YYSYMBOL_return_stmt = 79,               /* return_stmt  */
  YYSYMBOL_expression = 80,                /* expression  */
  YYSYMBOL_var = 81,                       /* var  */
  YYSYMBOL_simple_expression = 82,         /* simple_expression  */
  YYSYMBOL_relop = 83,                     /* relop  */
  YYSYMBOL_additive_expression = 84,       /* additive_expression  */
  YYSYMBOL_addop = 85,                     /* addop  */
  YYSYMBOL_term = 86,                      /* term  */
  YYSYMBOL_mulop = 87,                     /* mulop  */
  YYSYMBOL_factor = 88,                    /* factor  */
  YYSYMBOL_call = 89,                      /* call  */
  YYSYMBOL_args = 90,                      /* args  */
  YYSYMBOL_arg_list = 91                   /* arg_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   115

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  105

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   161,   161,   164,   165,   167,   168,   170,   171,   174,
     175,   177,   179,   180,   182,   183,   185,   186,   188,   190,
     191,   192,   194,   195,   196,   198,   199,   200,   201,   202,
     204,   205,   207,   208,   210,   212,   213,   215,   216,   218,
     219,   221,   222,   224,   225,   226,   227,   228,   229,   231,
     232,   234,   235,   237,   238,   240,   241,   243,   244,   245,
     246,   248,   250,   251,   253,   254
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_INT",
  "TOKEN_VOID", "TOKEN_DECL_LIST", "TOKEN_DECL", "TOKEN_VAR_DECL",
  "TOKEN_FUN_DECL", "TOKEN_TYPE_SPECIFIER", "TOKEN_PARAMS", "TOKEN_ID",
  "TOKEN_COMPOUND_STMT", "TOKEN_PARAM_LIST", "TOKEN_PARAM",
  "TOKEN_LOCAL_DECLARATION", "TOKEN_STMT_LIST", "TOKEN_STMT",
  "TOKEN_EXPR_STMT", "TOKEN_SELECTION_STMT", "TOKEN_ITERARION_STMT",
  "TOKEN_RETURN_STMT", "TOKEN_EXPR", "TOKEN_VAR", "TOKEN_SIMPLE_EXPR",
  "TOKEN_ADDITIVE_EXPR", "TOKEN_RELOP", "TOKEN_ADD_OP", "TOKEN_TERM",
  "TOKEN_MULOP", "TOKEN_FACTOR", "TOKEN_CALL", "TOKEN_ARGS",
  "TOKEN_ARG_LIST", "TOKEN_DO", "TOKEN_WHILE", "TOKEN_ADDITION",
  "TOKEN_SUBTRACTION", "TOKEN_MULTIPLICATION", "TOKEN_DIVISION",
  "TOKEN_IF", "TOKEN_ELSE", "TOKEN_EQ", "TOKEN_ERROR", "TOKEN_NUM",
  "TOKEN_EQUAL", "TOKEN_ASSIGNMENT", "TOKEN_LESS", "TOKEN_GREATER",
  "TOKEN_LE", "TOKEN_GE", "TOKEN_EQUAL_COMP", "TOKEN_NEQUAL_COMP",
  "TOKEN_DOT_COMMA", "TOKEN_COMMA", "TOKEN_OPENP", "TOKEN_CLOSEP",
  "TOKEN_OPENK", "TOKEN_CLOSEK", "TOKEN_OPENC", "TOKEN_CLOSEC",
  "TOKEN_RETURN", "$accept", "program", "declaration_list", "declaration",
  "var_declaration", "type_specifier", "fun_declaration", "params",
  "param_list", "param", "compound_stmt", "local_declarations",
  "statement_list", "statement", "expression_stmt", "selection_stmt",
  "iteration_stmt", "return_stmt", "expression", "var",
  "simple_expression", "relop", "additive_expression", "addop", "term",
  "mulop", "factor", "call", "args", "arg_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-62)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-14)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      29,   -62,   -62,    11,    29,   -62,   -62,     3,   -62,   -62,
     -62,   -45,   -62,    46,   -27,   -29,    24,   -17,   -13,   -62,
     -14,     7,   -12,    29,     9,    10,    29,   -62,   -62,   -62,
     -62,   -62,    59,     2,   -28,   -31,    16,    18,   -62,   -62,
      -4,   -10,   -62,   -62,    25,   -62,   -62,   -62,   -62,   -62,
      21,    33,   -62,    52,    14,   -62,   -62,    -4,    -4,    -4,
      -4,    19,   -62,    23,   -62,   -62,   -62,    -4,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,    -4,    -4,   -62,   -62,
      -4,   -62,    26,    39,    36,    27,    31,   -62,   -62,   -62,
     -62,    30,    14,   -62,   -62,    -4,   -62,    57,    37,   -62,
      37,    54,   -62,    37,   -62
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     9,    10,     0,     2,     4,     5,     0,     6,     1,
       3,     0,     7,     0,     0,    10,     0,     0,    12,    15,
       0,    16,     0,     0,     0,     0,    21,    11,    14,     8,
      17,    20,     0,    24,     0,    39,     0,     0,    60,    31,
       0,     0,    19,    26,     0,    23,    25,    27,    28,    29,
       0,    58,    38,    42,    50,    54,    59,    63,     0,     0,
       0,     0,    35,     0,    18,    22,    30,     0,    51,    52,
      44,    45,    43,    46,    47,    48,     0,     0,    55,    56,
       0,    65,     0,    62,     0,     0,     0,    57,    36,    37,
      58,    41,    49,    53,    61,     0,    40,     0,     0,    64,
       0,    32,    34,     0,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -62,   -62,   -62,    93,   -24,     5,   -62,   -62,   -62,    82,
      84,   -62,   -62,   -44,   -62,   -62,   -62,   -62,   -37,   -61,
     -62,   -62,    32,   -62,    34,   -62,    35,   -62,   -62,   -62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,     7,     8,    17,    18,    19,
      43,    33,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    76,    53,    77,    54,    80,    55,    56,    82,    83
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      65,    35,    31,    61,    63,     1,     2,    35,    12,    42,
      13,     9,    14,    35,    11,    90,    90,    20,    16,    90,
      81,    84,    85,    86,    57,    12,    58,   -13,    16,    14,
      89,    32,     1,     2,    38,    21,    35,    36,    32,    22,
      38,    23,    37,    62,    24,    40,    38,    26,    35,     1,
      15,    40,    78,    79,   101,    39,   102,    40,    99,   104,
      36,    26,    29,    41,    25,    37,    68,    69,    30,    38,
      34,    59,    36,    60,    66,    87,    88,    37,    39,    67,
      40,    38,    94,    97,    26,    64,    41,    98,    68,    69,
      39,   100,    40,    95,    96,   103,    26,    10,    41,    70,
      71,    72,    73,    74,    75,    28,    27,     0,    91,     0,
       0,    92,     0,     0,     0,    93
};

static const yytype_int8 yycheck[] =
{
      44,    11,    26,    40,    41,     3,     4,    11,    53,    33,
      55,     0,    57,    11,    11,    76,    77,    44,    13,    80,
      57,    58,    59,    60,    55,    53,    57,    56,    23,    57,
      67,    26,     3,     4,    44,    11,    11,    35,    33,    56,
      44,    54,    40,    53,    58,    55,    44,    59,    11,     3,
       4,    55,    38,    39,    98,    53,   100,    55,    95,   103,
      35,    59,    53,    61,    57,    40,    36,    37,    58,    44,
      11,    55,    35,    55,    53,    56,    53,    40,    53,    46,
      55,    44,    56,    56,    59,    60,    61,    56,    36,    37,
      53,    34,    55,    54,    58,    41,    59,     4,    61,    47,
      48,    49,    50,    51,    52,    23,    22,    -1,    76,    -1,
      -1,    77,    -1,    -1,    -1,    80
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,    63,    64,    65,    66,    67,    68,     0,
      65,    11,    53,    55,    57,     4,    67,    69,    70,    71,
      44,    11,    56,    54,    58,    57,    59,    72,    71,    53,
      58,    66,    67,    73,    11,    11,    35,    40,    44,    53,
      55,    61,    66,    72,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    84,    86,    88,    89,    55,    57,    55,
      55,    80,    53,    80,    60,    75,    53,    46,    36,    37,
      47,    48,    49,    50,    51,    52,    83,    85,    38,    39,
      87,    80,    90,    91,    80,    80,    80,    56,    53,    80,
      81,    84,    86,    88,    56,    54,    58,    56,    56,    80,
      34,    75,    75,    41,    75
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    69,    69,    70,    70,    71,    71,    72,    73,
      73,    73,    74,    74,    74,    75,    75,    75,    75,    75,
      76,    76,    77,    77,    78,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    83,    83,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      88,    89,    90,    90,    91,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       1,     6,     1,     1,     3,     1,     2,     4,     4,     2,
       1,     0,     2,     1,     0,     1,     1,     1,     1,     1,
       2,     1,     5,     7,     6,     2,     3,     3,     1,     1,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     4,     1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: declaration_list  */
#line 161 "src/cminus.y"
                          { parser_result = (yyvsp[0].dec); }
#line 1251 "cminus.tab.c"
    break;

  case 3: /* declaration_list: declaration_list declaration  */
#line 164 "src/cminus.y"
                                                                                             { (yyval.dec) = insert_decl((yyvsp[-1].dec),(yyvsp[0].dec)); }
#line 1257 "cminus.tab.c"
    break;

  case 7: /* var_declaration: type_specifier TOKEN_ID TOKEN_DOT_COMMA  */
#line 170 "src/cminus.y"
                                                         { (yyval.dec) = var_decl_create((yyvsp[-1].str), (yyvsp[-2].typ)); }
#line 1263 "cminus.tab.c"
    break;

  case 8: /* var_declaration: type_specifier TOKEN_ID TOKEN_OPENK TOKEN_NUM TOKEN_CLOSEK TOKEN_DOT_COMMA  */
#line 171 "src/cminus.y"
                                                                                                                                    { (yyval.dec) = array_decl_create((yyvsp[-4].str), (yyvsp[-5].typ), (yyvsp[-2].intval)); 
							 }
#line 1270 "cminus.tab.c"
    break;

  case 9: /* type_specifier: TOKEN_INT  */
#line 174 "src/cminus.y"
                          { (yyval.typ) = type_create(TYPE_INTEGER, 0,0); }
#line 1276 "cminus.tab.c"
    break;

  case 10: /* type_specifier: TOKEN_VOID  */
#line 175 "src/cminus.y"
                                                                   { (yyval.typ) = type_create(TYPE_VOID, 0,0); }
#line 1282 "cminus.tab.c"
    break;

  case 11: /* fun_declaration: type_specifier TOKEN_ID TOKEN_OPENP params TOKEN_CLOSEP compound_stmt  */
#line 177 "src/cminus.y"
                                                                                       { (yyval.dec) = func_decl_create((yyvsp[-4].str),(yyvsp[-5].typ),(yyvsp[-2].par),(yyvsp[0].smt)); }
#line 1288 "cminus.tab.c"
    break;

  case 13: /* params: TOKEN_VOID  */
#line 180 "src/cminus.y"
                                   { (yyval.par) = NULL; }
#line 1294 "cminus.tab.c"
    break;

  case 14: /* param_list: param_list TOKEN_COMMA param  */
#line 182 "src/cminus.y"
                                         { (yyval.par) = insert_param((yyvsp[-2].par),(yyvsp[0].par)); }
#line 1300 "cminus.tab.c"
    break;

  case 16: /* param: type_specifier TOKEN_ID  */
#line 185 "src/cminus.y"
                               { (yyval.par) = param_create ((yyvsp[0].str),(yyvsp[-1].typ)); }
#line 1306 "cminus.tab.c"
    break;

  case 17: /* param: type_specifier TOKEN_ID TOKEN_OPENK TOKEN_CLOSEK  */
#line 186 "src/cminus.y"
                                                                  { (yyval.par) = param_array_create ((yyvsp[-2].str),(yyvsp[-3].typ));}
#line 1312 "cminus.tab.c"
    break;

  case 18: /* compound_stmt: TOKEN_OPENC local_declarations statement_list TOKEN_CLOSEC  */
#line 188 "src/cminus.y"
                                                                          { (yyval.smt) = compound_stmt_create(STMT_BLOCK,(yyvsp[-2].dec),(yyvsp[-1].smt)); }
#line 1318 "cminus.tab.c"
    break;

  case 19: /* local_declarations: local_declarations var_declaration  */
#line 190 "src/cminus.y"
                                                       { (yyval.dec) = insert_decl((yyvsp[-1].dec),(yyvsp[0].dec)); }
#line 1324 "cminus.tab.c"
    break;

  case 21: /* local_declarations: %empty  */
#line 192 "src/cminus.y"
                                                                               { (yyval.dec) = NULL; }
#line 1330 "cminus.tab.c"
    break;

  case 22: /* statement_list: statement_list statement  */
#line 194 "src/cminus.y"
                                         { (yyval.smt) = insert_stmt((yyvsp[-1].smt),(yyvsp[0].smt)); }
#line 1336 "cminus.tab.c"
    break;

  case 24: /* statement_list: %empty  */
#line 196 "src/cminus.y"
                                                                 { (yyval.smt) = NULL; }
#line 1342 "cminus.tab.c"
    break;

  case 30: /* expression_stmt: expression TOKEN_DOT_COMMA  */
#line 204 "src/cminus.y"
                                            { (yyval.smt) = stmt_create(STMT_EXPR, NULL, NULL, (yyvsp[-1].exp), NULL, NULL, NULL, NULL); }
#line 1348 "cminus.tab.c"
    break;

  case 32: /* selection_stmt: TOKEN_IF TOKEN_OPENP expression TOKEN_CLOSEP statement  */
#line 207 "src/cminus.y"
                                                                       { (yyval.smt) = if_create((yyvsp[-2].exp),(yyvsp[0].smt)); }
#line 1354 "cminus.tab.c"
    break;

  case 33: /* selection_stmt: TOKEN_IF TOKEN_OPENP expression TOKEN_CLOSEP statement TOKEN_ELSE statement  */
#line 208 "src/cminus.y"
                                                                                                                                            { (yyval.smt) = if_else_create((yyvsp[-4].exp),(yyvsp[-2].smt),(yyvsp[0].smt)); }
#line 1360 "cminus.tab.c"
    break;

  case 34: /* iteration_stmt: TOKEN_WHILE TOKEN_OPENP expression TOKEN_CLOSEP TOKEN_DO statement  */
#line 210 "src/cminus.y"
                                                                                   { (yyval.smt) = while_create((yyvsp[-3].exp),(yyvsp[0].smt)); }
#line 1366 "cminus.tab.c"
    break;

  case 35: /* return_stmt: TOKEN_RETURN TOKEN_DOT_COMMA  */
#line 212 "src/cminus.y"
                                          { (yyval.smt) = stmt_create(STMT_RETURN,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
#line 1372 "cminus.tab.c"
    break;

  case 36: /* return_stmt: TOKEN_RETURN expression TOKEN_DOT_COMMA  */
#line 213 "src/cminus.y"
                                                                                 { (yyval.smt) = stmt_create(STMT_RETURN, NULL, NULL,(yyvsp[-1].exp), NULL, NULL, NULL, NULL); }
#line 1378 "cminus.tab.c"
    break;

  case 37: /* expression: var TOKEN_ASSIGNMENT expression  */
#line 215 "src/cminus.y"
                                            { (yyval.exp) = expr_create(EXPR_ASSIGN, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1384 "cminus.tab.c"
    break;

  case 39: /* var: TOKEN_ID  */
#line 218 "src/cminus.y"
              { (yyval.exp) = expr_create_var((yyvsp[0].str)); }
#line 1390 "cminus.tab.c"
    break;

  case 41: /* simple_expression: additive_expression relop additive_expression  */
#line 221 "src/cminus.y"
                                                                 { (yyval.exp) = expr_create((yyvsp[-1].ext),(yyvsp[-2].exp),(yyvsp[0].exp)); }
#line 1396 "cminus.tab.c"
    break;

  case 43: /* relop: TOKEN_LE  */
#line 224 "src/cminus.y"
                { (yyval.ext) =  EXPR_LTEQ; }
#line 1402 "cminus.tab.c"
    break;

  case 44: /* relop: TOKEN_LESS  */
#line 225 "src/cminus.y"
                                   { (yyval.ext) = EXPR_LT; }
#line 1408 "cminus.tab.c"
    break;

  case 45: /* relop: TOKEN_GREATER  */
#line 226 "src/cminus.y"
                                      { (yyval.ext) = EXPR_GT; }
#line 1414 "cminus.tab.c"
    break;

  case 46: /* relop: TOKEN_GE  */
#line 227 "src/cminus.y"
                                 { (yyval.ext) = EXPR_GTEQ; }
#line 1420 "cminus.tab.c"
    break;

  case 47: /* relop: TOKEN_EQUAL_COMP  */
#line 228 "src/cminus.y"
                                         { (yyval.ext) = EXPR_EQ; }
#line 1426 "cminus.tab.c"
    break;

  case 48: /* relop: TOKEN_NEQUAL_COMP  */
#line 229 "src/cminus.y"
                                          { (yyval.ext) = EXPR_NEQ; }
#line 1432 "cminus.tab.c"
    break;

  case 49: /* additive_expression: additive_expression addop term  */
#line 231 "src/cminus.y"
                                                    { (yyval.exp) = expr_create((yyvsp[-1].ext), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1438 "cminus.tab.c"
    break;

  case 51: /* addop: TOKEN_ADDITION  */
#line 234 "src/cminus.y"
                      { (yyval.ext) = EXPR_ADD; }
#line 1444 "cminus.tab.c"
    break;

  case 52: /* addop: TOKEN_SUBTRACTION  */
#line 235 "src/cminus.y"
                                   { (yyval.ext) = EXPR_SUB; }
#line 1450 "cminus.tab.c"
    break;

  case 53: /* term: term mulop factor  */
#line 237 "src/cminus.y"
                        { (yyval.exp) = expr_create((yyvsp[-1].ext), (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1456 "cminus.tab.c"
    break;

  case 55: /* mulop: TOKEN_MULTIPLICATION  */
#line 240 "src/cminus.y"
                            { (yyval.ext) = EXPR_MUL; }
#line 1462 "cminus.tab.c"
    break;

  case 56: /* mulop: TOKEN_DIVISION  */
#line 241 "src/cminus.y"
                                { (yyval.ext) = EXPR_DIV; }
#line 1468 "cminus.tab.c"
    break;

  case 57: /* factor: TOKEN_OPENP expression TOKEN_CLOSEP  */
#line 243 "src/cminus.y"
                                            { (yyval.exp) = (yyvsp[-1].exp); }
#line 1474 "cminus.tab.c"
    break;

  case 60: /* factor: TOKEN_NUM  */
#line 246 "src/cminus.y"
                                  { (yyval.exp) = expr_create_integer((yyvsp[0].intval)); }
#line 1480 "cminus.tab.c"
    break;

  case 61: /* call: TOKEN_ID TOKEN_OPENP args TOKEN_CLOSEP  */
#line 248 "src/cminus.y"
                                             { (yyval.exp) = expr_create_call((yyvsp[-3].str), (yyvsp[-1].exp)); }
#line 1486 "cminus.tab.c"
    break;

  case 63: /* args: %empty  */
#line 251 "src/cminus.y"
                       { (yyval.exp) = NULL; }
#line 1492 "cminus.tab.c"
    break;

  case 64: /* arg_list: arg_list TOKEN_COMMA expression  */
#line 253 "src/cminus.y"
                                          {(yyval.exp) = expr_create_arg((yyvsp[0].exp),(yyvsp[-2].exp)); }
#line 1498 "cminus.tab.c"
    break;


#line 1502 "cminus.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 256 "src/cminus.y"




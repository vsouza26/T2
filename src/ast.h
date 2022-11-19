/* ast.h
 * Adaptação de partes do código do livro de Compiladores
 * de Douglas Thain para a disciplina MATA61-UFBA
 * Christina von Flach (github: christinaflach)
 * 2020
 */

#include <string.h>

typedef enum {
    TYPE_VOID,
    TYPE_INTEGER,
    TYPE_ARRAY,
    TYPE_FUNCTION,
} type_t;

typedef enum {
    STMT_EXPR,
    STMT_IF_ELSE,
    STMT_WHILE,
    STMT_PRINT,
    STMT_RETURN,
    STMT_BLOCK
} stmt_t;

typedef enum {
    EXPR_ASSIGN,
    EXPR_ADD,
    EXPR_SUB,
    EXPR_MUL,
    EXPR_DIV,
    EXPR_EQ,
    EXPR_NEQ,
    EXPR_LT,
    EXPR_GT,
    EXPR_LTEQ,
    EXPR_GTEQ,
    EXPR_VAR,
    EXPR_ARRAY,
    EXPR_FUN,
    EXPR_CALL,
    EXPR_ARG,
    EXPR_NAME,
    EXPR_INTEGER_LITERAL,
} expr_t;

/* nodes in the abstract syntax tree */

struct decl {
    struct type *type;
    char *name;
    struct expr *expr;
    struct stmt *code;
    struct decl *next;
};

struct type {
    type_t kind;
    struct type *subtype;
    struct param_list *params;
};

struct stmt {
    stmt_t kind;
    struct decl *decl;
    struct expr *init_expr;
    struct expr *expr;
    struct expr *next_expr;
    struct stmt *body;
    struct stmt *else_body;
    struct stmt *next;
};

struct expr {
    expr_t kind;
    struct expr *left;
    struct expr *right;
    char *name;
    int integer_value;
};

struct param_list {
    char *name;
    struct type *type;
    struct param_list *next;
};

/* prototypes */

struct decl * decl_create(char *name,
    struct type *type, struct expr *expr, struct stmt *code,
    struct decl *next );

struct decl * insert_decl(struct decl *head, struct decl *elem);

struct stmt * stmt_create(stmt_t kind, struct decl *decl,
    struct expr *init_expr, struct expr *expr, struct expr *next_expr,
    struct stmt *body, struct stmt *else_body,
    struct stmt *next );

struct stmt * insert_stmt(struct stmt *head, struct stmt *elem);

struct param_list * insert_param(struct param_list *head,
    struct param_list *elem);

struct stmt * compound_stmt_create(stmt_t kind,
    struct decl *localdecl, struct stmt *body);

struct stmt * if_create(struct expr *expr, struct stmt *body);

struct stmt * if_else_create(struct expr *expr,
    struct stmt *body, struct stmt *else_body);

struct stmt * while_create(struct expr *expr, struct stmt *body);

struct expr * expression_create(expr_t kind, 
    struct expr *, struct expr *, char *, int);

struct expr * expr_create(expr_t kind, struct expr *l, struct expr *r);

struct expr * expr_create_name(char *name);
struct expr * expr_create_var(char *name);
struct expr * expr_create_integer(int i);
struct expr * expr_create_array(char *name, struct expr *index);
struct expr * expr_create_call(char *name, struct expr *expr);
struct expr * expr_create_arg(struct expr *, struct expr *);

struct type * type_create(type_t kind, 
    struct type *subtype, struct param_list *params);

struct decl * var_decl_create(char *name, struct type *type);
struct decl * array_decl_create(char *name, struct type *type, int i);
struct decl * func_decl_create(char *name , struct type *type, 
    struct param_list *pl, struct stmt *body);

struct param_list * param_create(char *name, struct type *type);
struct param_list * param_array_create(char *name, struct type *type);

void print_decl(struct decl *d);
void print_stmt(struct stmt *st);
void print_type(struct type *type);
void print_params(struct param_list *pl);
void print_var(struct decl *var);
void print_array(struct decl *array);
void print_func(struct decl *f);
void print_bexpr(char *c, struct expr *l, struct expr *r);
void print_expr(struct expr *e);
void print_name(char *name);
void bracket(struct decl *program);

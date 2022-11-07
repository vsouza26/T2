/* main.c */

#include <stdio.h>
#include <stdlib.h>

extern struct decl* parser_result;
extern int yyparse();
extern void bracket(struct decl* program);

int main(int argc, char **argv) {

    extern FILE *yyin;
    FILE *yyout;

    if (argc > 2) {
        if(!(yyin = fopen(argv[1], "r"))) {
            fprintf(stderr,"Erro na abertura do arquivo de entrada %s\n",argv[1]);
            return (1);
        }
        if(!(yyout = fopen(argv[2], "w"))) {
            fprintf(stderr,"Erro na criacao do arquivo de saida %s\n",argv[2]);
            return (1);
        }
    }
    else {
        fprintf(stderr,"Erro no número de argumentos passados para cminus\n");
        return (1);
    }

    int result = yyparse();
    if (!result)
	bracket(parser_result);
    return result;
} 

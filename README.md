# Projeto de um Compilador

## Trabalho 2 (T2): Análise Sintática

Analisador sintático bottom-up para C-

Nesta parte do projeto, você irá implementar um analisador sintático _bottom-up_ para a [linguagem C-](./cminus/cminus-02.md) com
construção da árvore sintática abstrata (AST - Abstract Syntax Tree) para programas C- corretos.
O trabalho prático T2 (TP2) inclui a implementação de um analisador sintático, construído com a ferramenta _Bison_, 
funções auxiliares para a construção da AST durante o processo de análise, 
uma função de _prettyprint_ para gerar uma representação externa para AST 
e o programa principal (detalhes a seguir).

<img src="./figs/ast-parsetree.png" width="400">

O analisador sintático gerado pelo Bison, _yyparse()_, deve receber uma sequência de _tokens_ 
enviados pelo analisador léxico _yylex()_, e determinar se um programa C- segue ou não a especificação definida por sua gramática.
Em caso de sucesso, 
o analisador sintático deve gerar uma AST para o programa de entrada analisado 
e disponibilizar uma referência para a raiz da AST construída, para ser usada pela função _prettyprint_.
Em caso de erro sintático detectado, 
apenas uma mensagem de erro deverá ser reportada e a análise sintática deve ser interrompida.

Funções auxiliares para a criação e manipulação da AST e
para a geração de uma representação usando a notação de _labelled bracketing_
(explicada mais adiante) para a AST retornada também fazem parte do T2.

Antes de iniciar a sua implementação, recomendamos como leitura complementar os capítulos 5 e 6
do livro "Introduction to Compilers and Language Design" de Douglas Thain.
Apesar da sintaxe de C- ser um pouco diferente da usada no livro acima, 
os exemplos de código e o material são úteis.
Outra consulta interessante é uma [especificação yacc para ANSI C](https://www.lysator.liu.se/c/ANSI-C-grammar-y.html)
feita no século passado (década de 80).

O analisador sintático para C- deverá ser desenvolvido com Bison, com base na
[especificação sintática de C-](./cminus/cminus-02.md)
e integrado com uma nova versão do analisador léxico para C- desenvolvido com Flex no T1.

### Notação para a Árvore Sintática Abstrata (Abstract Syntax Tree - AST)

Há diversas formas para representar árvores sintáticas corretas geradas para um programa C-.
Em nosso projeto de compilador, é importante definir e usar um formato único para representar
a AST, que seja independente de qualquer linguagem específica, seja fonte ou objeto.

Em nosso compilador, 
o analisador sintático construirá uma AST para programas C- sem erros léxicos e sem sintáticos.
O trabalho T2 deve incluir uma função _main_ para chamar a função _yyparse()_ gerada pelo Bison. 
Para mostrar a AST criada, 
a função _main_ deve chamar a função _prettyprint_, tendo como argumento a raiz da AST,
para percorrer e gerar uma representação da AST
na notação de _labelled bracketing_.

A notação de _labelled bracketing_
define listas aninhadas de _prefix expressions_ (operadores antes dos operandos), 
usando colchetes para organizá-las.
Por exemplo, a expressão ``` 2 * 7 + 3``` mostrada acima,
é representada como ```[+ [* [2] [7]] [3]]``` na notação de _labelled bracketing_.
Cada número inteiro NUM, é representado como ```[NUM]```, por exemplo, ```[2] e [7]```,
e a operação de multiplicação entre dois números, como ```[* [2] [7]]```.

__Formato Geral__:
```
[operator [operand1] ... [operandN]]
```

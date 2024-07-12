%{
#include <stdio.h>
#include <stdlib.h>

extern int yylex();
void yyerror(const char *s);
extern FILE *yyin;
extern FILE *yyout;
extern int lineno;
extern int yylex();
%}

%token SWITCH CASE DEFAULT BREAK NUMBER

%left '+' '-'
%left '*' '/'
%right UMINUS

%%

program:
    switch_statement
    ;

switch_statement:
    SWITCH '(' expression ')' '{' case_list '}'
    ;

case_list:
    case_list case_statement
    | case_statement
    ;

case_statement:
    CASE NUMBER ':' statement_list BREAK ';'
    | DEFAULT ':' statement_list BREAK ';'
    ;

statement_list:
    statement_list statement
    | statement
    ;

statement:
    expression ';'
    ;

expression:
    NUMBER
    | expression '+' expression
    | expression '-' expression
    | expression '*' expression
    | expression '/' expression
    | '(' expression ')'
    | '-' expression %prec UMINUS
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(int argc, char *argv[]) {
    int flag;
    yyin = fopen(argv[1], "r");
    flag = yyparse();
    return flag;
}
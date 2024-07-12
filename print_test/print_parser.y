%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
extern FILE *yyin;
extern FILE *yyout;
extern int lineno;
extern int yylex();
void yyerror();

void my_print(const char *format, ...);

%}

%union {
    char *str;
    int intval;
    float floatval;
    char charval;
}

%token <str> STRING
%token <intval> INTEGER CHAR
%token <floatval> FLOAT
%token PRINT LPAREN RPAREN COMMA

%type <str> statement
%type <str> expr_list
%type <str> expr

%%

program:
    program statement
    | statement
    ;

statement:
    PRINT LPAREN expr_list RPAREN   { my_print($3); free($3); }
    ;

expr_list:
    expr                          { $$ = $1; }
    | expr_list COMMA expr        {
                                    char *new_format;
                                    asprintf(&new_format, "%s %s", $1, $3);
                                    $$ = new_format;
                                    free($1);
                                    free($3);
                                  }
    ;

expr:
    STRING                         { $$ = $1; }
    | INTEGER                      {
                                    char *new_format;
                                    asprintf(&new_format, "%d", $1);
                                    $$ = new_format;
                                  }
    | FLOAT                        {
                                    // get the string and convert it to a float
                                    char *new_format;
                                    asprintf(&new_format, "%f", $1);
                                    $$ = new_format;
                                  }
    | CHAR                         {
                                    char *new_format;
                                    asprintf(&new_format, "%c", $1);
                                    $$ = new_format;
                                  }
;

%%

void my_print(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%' && *(format + 1) == 'd') {
            int i = va_arg(args, int);
            printf("%d", i);
            format += 2;
        } else if (*format == '%' && *(format + 1) == 'f') {
            double f = va_arg(args, double);
            printf("%f", f);
            format += 2;
        } else if (*format == '%' && *(format + 1) == 'c') {
            int c = va_arg(args, int); // Note: `char` is promoted to `int` in variadic functions
            printf("%c", c);
            format += 2;
        } else if (*format == '%') {
            putchar('%');
            format++;
        } else {
            putchar(*format);
            format++;
        }
    }

    va_end(args);
    printf("\n");
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(int argc, char *argv[]) {
    int flag;
    yyin = fopen(argv[1], "r");
    flag = yyparse();
    return flag;
}

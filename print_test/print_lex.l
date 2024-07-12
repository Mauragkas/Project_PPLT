%{
#include "print_parser.tab.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern int yylex();
extern int yyparse();
extern void yyerror(const char *s);

%}

%%

"out.print"          { return PRINT; }
"("                  { return LPAREN; }
")"                  { return RPAREN; }
","                  { return COMMA; }
"\""([^\"\n])*"\""   { yylval.str = strdup(yytext + 1); yylval.str[strlen(yylval.str) - 1] = '\0'; return STRING; }
[0-9]+               { yylval.intval = atoi(yytext); return INTEGER; }
[0-9]+\.[0-9]+[dD][0-9a-zA-Z]* {
    if (yytext[strlen(yytext) - 1] == 'd' && isdigit(yytext[strlen(yytext) - 2])) { // Check if the last character is 'd' and the second last character is a digit
        yylval.floatval = atof(yytext);  // Convert the matched text to a float
        return FLOAT;  // Return the token type
    } else {
        return 0;  // Return 0 if the last character is not 'd'
    }
}
\'[^\']\'            { yylval.charval = yytext[1]; return CHAR; }
[ \t\n]+             { /* ignore whitespace */ }
.                    { /* skip unrecognized characters */ }

%%

int yywrap() {
    return 1;
}

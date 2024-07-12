%{
#include "parser.tab.h"
extern int yylval;
%}

%%

"switch"       { printf("switch "); return SWITCH; }
"case"         { printf("case "); return CASE; }
"default"      { printf("default "); return DEFAULT; }
"break"      { printf("break "); return BREAK; }
"{"          { printf("{ "); return '{'; }
"}"          { printf("} "); return '}'; }
":"          { printf(": "); return ':'; }
";"          { printf("; "); return ';'; }
[0-9]+       { yylval = atoi(yytext); return NUMBER; }
[ \t\n]      { /* ignore */ }
.            { return yytext[0]; }

%%

int yywrap() {
    return 1;
}


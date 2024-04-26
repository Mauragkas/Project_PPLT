%option noyywrap

%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "symtab.h"
	#include "test.tab.h"
	extern FILE *yyin;
	extern FILE *yyout;
	
	int lineno = 1; // initialize to 1
	void ret_print(char *token_type);
	void yyerror();
%}

%x ML_COMMENT

alpha 		[a-zA-Z]
digit 		[0-9]
alnum 		{alpha}|{digit}
print		[ -~]

ID 			{alpha}+{alnum}*
ICONST		"0"|[0-9]{digit}*
FCONST		"0"|{digit}*"."{digit}+
CCONST		(\'{print}\')|(\'\\[nftrbv]\')
STRING		\"{print}*\"

%%

"//".*					{ printf("Sxolio mias grammis! %d\n", lineno); } 

"/*"					{ printf("Sxolia pollaplon grammon  %d ", lineno); BEGIN(ML_COMMENT); }
<ML_COMMENT>"*/" 		{ printf("Sxolia pollaplon grammon %d\n", lineno); BEGIN(INITIAL); }
<ML_COMMENT>[^*\n]+		
<ML_COMMENT>"*"			
<ML_COMMENT>"\n"		{ lineno += 1; }

"print"|"PRINT"			{ return PRINT; }
"char"|"CHAR"       	{ return CHAR; }
"int"|"INT"				{ return INT; }
"float"|"FLOAT"			{ return FLOAT; }
"double"|"DOUBLE"		{ return DOUBLE; }
"boolean"|"BOOLEAN"		{ return BOOLEAN; } 
"string"|"STRING"       { return STRING; }
"class"|"CLASS"         { return CLASS; }
"new"|"NEW"             { return NEW; }
"true"|"TRUE"           { return TRUE; }
"false"|"FALSE"         { return FALSE; }
"public"|"PUBLIC"       { return PUBLIC; }
"private"|"PRIVATE"     { return PRIVATE; }
"if"|"IF"				{ return IF; }
"else"|"ELSE"			{ return ELSE; }
"do"|"DO"				{ return DO; }
"while"|"WHILE"			{ return WHILE; }
"for"|"FOR"				{ return FOR; }
"continue"|"CONTINUE"	{ return CONTINUE; }
"break"|"BREAK"			{ return BREAK; }
"switch"|"SWITCH"       { return SWITCH; }
"case"|"CASE"           { return CASE; }
"default"|"DEFAULT"     { return DEFAULT; }
"void"|"VOID"			{ return VOID; }
"return"|"RETURN"		{ return RETURN; }
"extends"|"EXTENDS"		{ return EXTENDS; }
"implements"|"IMPLEMENTS"	{ return IMPLEMENTS; }
"this"|"THIS"			{ return THIS; }
"super"|"SUPER"			{ return SUPER; }


"+"|"-"					{ return ADDOP; }
"*"						{ return MULOP; }
"/"						{ return DIVOP; }
"++"|"--"				{ return INCR; }
"||"					{ return OROP; }
"&&"					{ return ANDOP; }
"!"						{ return NOTOP; }
"=="|"!="				{ return EQUOP; }
">"|"<"|">="|"<="		{ return RELOP; }


"("				{ return LPAREN; }
")"				{ return RPAREN; }
"]"				{ return LBRACK; }
"["				{ return RBRACK; }
"{"				{ return LBRACE; }
"}"				{ return RBRACE; }
";"				{ return SEMI; }
"."				{ return DOT; }
","				{ return COMMA; }
":"             { return COLON; }
"="				{ return ASSIGN; }
"&"				{ return REFER; }

"\""			{ return DQUOTE; }
"\'"			{ return SQUOTE; }

{ID} 			{
					// insert identifier into symbol table
					insert(yytext, strlen(yytext), UNDEF, lineno);
					return ID;
				}
{ICONST} 		{ return ICONST; }
{FCONST} 		{ return FCONST; }
{CCONST} 		{ return CCONST; }
{STRING} 		{ return STRING; }


"\n"			{ lineno += 1; }
[ \t\r\f]+			/* eat up whitespace */

.				{ yyerror("Unrecognized character"); }

%%
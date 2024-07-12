%{
	#include "symtab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	extern FILE *yyin;
	extern FILE *yyout;
	extern int lineno;
	extern int yylex();
	void yyerror();
%}

/* token definition */
%token CHAR INT FLOAT DOUBLE IF ELSE WHILE DO FOR CONTINUE BREAK VOID RETURN SWITCH CASE DEFAULT
%token ADDOP MULOP DIVOP INCR OROP ANDOP NOTOP EQUOP RELOP
%token LPAREN RPAREN LBRACK RBRACK LBRACE RBRACE SEMI DOT COMMA COLON ASSIGN REFER
%token ID ICONST FCONST CCONST STRING BOOLEAN TRUE FALSE 

%token CLASS NEW PUBLIC PRIVATE EXTENDS THIS SUPER IMPLEMENTS

%token DQUOTE SQUOTE PRINT

%start program

/* expression priorities and rules */

%%

program: declarations statements | statements | declarations | /* empty */ ;

declarations: declarations declaration | declaration;

declaration: type names SEMI | type names_assign SEMI | class | class_assignment SEMI;

type: INT | CHAR | FLOAT | DOUBLE | VOID | BOOLEAN;

names: variable | names COMMA variable;

names_assign: variable ASSIGN expression | names_assign COMMA variable ASSIGN expression;


variable: ID |
    pointer ID |
    ID array;

pointer: pointer MULOP | MULOP ;

array: array RBRACK ICONST LBRACK | RBRACK ICONST LBRACK ;

statements: statements statement | statement;

statement:
	if_statement | for_statement | do_while_statement | switch_statement | assigment | class_things | 
	CONTINUE SEMI | BREAK SEMI | RETURN SEMI | RETURN expression SEMI | print_statement
;

print_statement: PRINT LPAREN STRING RPAREN SEMI { printf("Output: %s\n", $3); } ;

if_statement: IF LPAREN condition RPAREN tail else_if_part else_part ;

else_if_part: 
	else_if_part ELSE IF LPAREN expression RPAREN tail |
	ELSE IF LPAREN condition RPAREN tail  |
	/* empty */
; 
else_part: ELSE tail | /* empty */ ; 

initialization: reference variable ASSIGN expression | INT variable ASSIGN constant | /* empty */ ;

condition: expression OROP expression | 
			expression ANDOP expression | 
			expression EQUOP expression | 
			expression RELOP expression |
			/* empty */ ;

iteration_expression: expression | assigment | /* empty */ ;

for_statement: FOR LPAREN initialization SEMI condition SEMI iteration_expression RPAREN tail ;

do_while_statement: DO LBRACE program RBRACE WHILE LPAREN condition RPAREN SEMI ;

switch_statement: SWITCH LPAREN expression RPAREN LBRACE case_part default_part RBRACE; 
case_part: case_part CASE expression COLON statement | CASE expression COLON statement;
default_part: DEFAULT COLON statement | DEFAULT COLON;

tail: statement SEMI | LBRACE statements RBRACE ;

expression:
    expression ADDOP expression |
    expression MULOP expression |
    expression DIVOP expression |
    expression INCR |
    INCR expression |
    expression OROP expression |
    expression ANDOP expression |
    NOTOP expression |
    expression EQUOP expression |
    expression RELOP expression |
    LPAREN expression RPAREN |
    variable |
	constant
;

sign: ADDOP | /* empty */ ; 

constant: ICONST | FCONST | CCONST ;

assigment: reference variable ASSIGN expression SEMI ; 

reference: REFER | /* empty */ ;

// class instantiation
class_instantiation: NEW ID LPAREN formal_parameters RPAREN | NEW ID LPAREN RPAREN ;

// class assignment
class_assignment: ID ID ASSIGN class_instantiation ;

// class member access
class_member_access: primary_access
                   | class_member_access DOT ID 
                   | class_member_access LBRACK expression RBRACK  

primary_access: ID 
             | THIS 
             | SUPER

class_things: class_member_access SEMI | class_member_variable_access SEMI | class_member_variable_assignment SEMI | class_member_function_call SEMI;

// class member function call
class_member_function_call: class_member_access LPAREN expression RPAREN | class_member_access LPAREN RPAREN ;

// class member variable access
class_member_variable_access: class_member_access | class_member_access LBRACK expression RBRACK ;

// class member variable assignment
class_member_variable_assignment: class_member_access ASSIGN expression ; 

// class member variable declaration
class_member_variable_declaration: access_modifier type ID SEMI | access_modifier type ID ASSIGN expression SEMI ;

// class member function declaration
class_member_function_declaration: access_modifier type ID LPAREN formal_parameters RPAREN LBRACE program RBRACE | access_modifier type ID LPAREN RPAREN LBRACE program RBRACE ;

// class member
class_member: class_member_variable_declaration | class_member_function_declaration ;

// class body
class_body: class_body class_member | class_member | /* empty */ ;

// class definition
class: CLASS ID LBRACE class_body RBRACE | CLASS ID EXTENDS ID LBRACE class_body RBRACE ;

access_modifier: PUBLIC | PRIVATE | /* empty */ ;

formal_parameters: formal_parameters COMMA formal_parameter | formal_parameter | /* empty */ ;

formal_parameter: type ID | type pointer ID | type array ID ;

%%

void yyerror ()
{
  fprintf(stderr, "Syntax error at line %d\n", lineno);
  exit(1);
}

int main (int argc, char *argv[]){

	// initialize symbol table
	init_hash_table();

	// parsing
	int flag;
	yyin = fopen(argv[1], "r");
	flag = yyparse();
	fclose(yyin);
	
	// symbol table dump
	yyout = fopen("symtab_dump.out", "w");
	symtab_dump(yyout);
	fclose(yyout);	
	
	return flag;
}
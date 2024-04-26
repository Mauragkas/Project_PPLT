/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TEST_TAB_H_INCLUDED
# define YY_YY_TEST_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CHAR = 258,                    /* CHAR  */
    INT = 259,                     /* INT  */
    FLOAT = 260,                   /* FLOAT  */
    DOUBLE = 261,                  /* DOUBLE  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    WHILE = 264,                   /* WHILE  */
    DO = 265,                      /* DO  */
    FOR = 266,                     /* FOR  */
    CONTINUE = 267,                /* CONTINUE  */
    BREAK = 268,                   /* BREAK  */
    VOID = 269,                    /* VOID  */
    RETURN = 270,                  /* RETURN  */
    SWITCH = 271,                  /* SWITCH  */
    CASE = 272,                    /* CASE  */
    DEFAULT = 273,                 /* DEFAULT  */
    ADDOP = 274,                   /* ADDOP  */
    MULOP = 275,                   /* MULOP  */
    DIVOP = 276,                   /* DIVOP  */
    INCR = 277,                    /* INCR  */
    OROP = 278,                    /* OROP  */
    ANDOP = 279,                   /* ANDOP  */
    NOTOP = 280,                   /* NOTOP  */
    EQUOP = 281,                   /* EQUOP  */
    RELOP = 282,                   /* RELOP  */
    LPAREN = 283,                  /* LPAREN  */
    RPAREN = 284,                  /* RPAREN  */
    LBRACK = 285,                  /* LBRACK  */
    RBRACK = 286,                  /* RBRACK  */
    LBRACE = 287,                  /* LBRACE  */
    RBRACE = 288,                  /* RBRACE  */
    SEMI = 289,                    /* SEMI  */
    DOT = 290,                     /* DOT  */
    COMMA = 291,                   /* COMMA  */
    COLON = 292,                   /* COLON  */
    ASSIGN = 293,                  /* ASSIGN  */
    REFER = 294,                   /* REFER  */
    ID = 295,                      /* ID  */
    ICONST = 296,                  /* ICONST  */
    FCONST = 297,                  /* FCONST  */
    CCONST = 298,                  /* CCONST  */
    STRING = 299,                  /* STRING  */
    BOOLEAN = 300,                 /* BOOLEAN  */
    TRUE = 301,                    /* TRUE  */
    FALSE = 302,                   /* FALSE  */
    CLASS = 303,                   /* CLASS  */
    NEW = 304,                     /* NEW  */
    PUBLIC = 305,                  /* PUBLIC  */
    PRIVATE = 306,                 /* PRIVATE  */
    EXTENDS = 307,                 /* EXTENDS  */
    THIS = 308,                    /* THIS  */
    SUPER = 309,                   /* SUPER  */
    IMPLEMENTS = 310,              /* IMPLEMENTS  */
    DQUOTE = 311,                  /* DQUOTE  */
    SQUOTE = 312,                  /* SQUOTE  */
    PRINT = 313                    /* PRINT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TEST_TAB_H_INCLUDED  */

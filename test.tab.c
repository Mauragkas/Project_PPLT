/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "test.y"

	#include "symtab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	extern FILE *yyin;
	extern FILE *yyout;
	extern int lineno;
	extern int yylex();
	void yyerror();

#line 83 "test.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "test.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHAR = 3,                       /* CHAR  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 6,                     /* DOUBLE  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_FOR = 11,                       /* FOR  */
  YYSYMBOL_CONTINUE = 12,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 13,                     /* BREAK  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_SWITCH = 16,                    /* SWITCH  */
  YYSYMBOL_CASE = 17,                      /* CASE  */
  YYSYMBOL_DEFAULT = 18,                   /* DEFAULT  */
  YYSYMBOL_ADDOP = 19,                     /* ADDOP  */
  YYSYMBOL_MULOP = 20,                     /* MULOP  */
  YYSYMBOL_DIVOP = 21,                     /* DIVOP  */
  YYSYMBOL_INCR = 22,                      /* INCR  */
  YYSYMBOL_OROP = 23,                      /* OROP  */
  YYSYMBOL_ANDOP = 24,                     /* ANDOP  */
  YYSYMBOL_NOTOP = 25,                     /* NOTOP  */
  YYSYMBOL_EQUOP = 26,                     /* EQUOP  */
  YYSYMBOL_RELOP = 27,                     /* RELOP  */
  YYSYMBOL_LPAREN = 28,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 29,                    /* RPAREN  */
  YYSYMBOL_LBRACK = 30,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 31,                    /* RBRACK  */
  YYSYMBOL_LBRACE = 32,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 33,                    /* RBRACE  */
  YYSYMBOL_SEMI = 34,                      /* SEMI  */
  YYSYMBOL_DOT = 35,                       /* DOT  */
  YYSYMBOL_COMMA = 36,                     /* COMMA  */
  YYSYMBOL_COLON = 37,                     /* COLON  */
  YYSYMBOL_ASSIGN = 38,                    /* ASSIGN  */
  YYSYMBOL_REFER = 39,                     /* REFER  */
  YYSYMBOL_ID = 40,                        /* ID  */
  YYSYMBOL_ICONST = 41,                    /* ICONST  */
  YYSYMBOL_FCONST = 42,                    /* FCONST  */
  YYSYMBOL_CCONST = 43,                    /* CCONST  */
  YYSYMBOL_STRING = 44,                    /* STRING  */
  YYSYMBOL_BOOLEAN = 45,                   /* BOOLEAN  */
  YYSYMBOL_TRUE = 46,                      /* TRUE  */
  YYSYMBOL_FALSE = 47,                     /* FALSE  */
  YYSYMBOL_CLASS = 48,                     /* CLASS  */
  YYSYMBOL_NEW = 49,                       /* NEW  */
  YYSYMBOL_PUBLIC = 50,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 51,                   /* PRIVATE  */
  YYSYMBOL_EXTENDS = 52,                   /* EXTENDS  */
  YYSYMBOL_THIS = 53,                      /* THIS  */
  YYSYMBOL_SUPER = 54,                     /* SUPER  */
  YYSYMBOL_IMPLEMENTS = 55,                /* IMPLEMENTS  */
  YYSYMBOL_DQUOTE = 56,                    /* DQUOTE  */
  YYSYMBOL_SQUOTE = 57,                    /* SQUOTE  */
  YYSYMBOL_PRINT = 58,                     /* PRINT  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_declarations = 61,              /* declarations  */
  YYSYMBOL_declaration = 62,               /* declaration  */
  YYSYMBOL_type = 63,                      /* type  */
  YYSYMBOL_names = 64,                     /* names  */
  YYSYMBOL_names_assign = 65,              /* names_assign  */
  YYSYMBOL_variable = 66,                  /* variable  */
  YYSYMBOL_pointer = 67,                   /* pointer  */
  YYSYMBOL_array = 68,                     /* array  */
  YYSYMBOL_statements = 69,                /* statements  */
  YYSYMBOL_statement = 70,                 /* statement  */
  YYSYMBOL_print_statement = 71,           /* print_statement  */
  YYSYMBOL_if_statement = 72,              /* if_statement  */
  YYSYMBOL_else_if_part = 73,              /* else_if_part  */
  YYSYMBOL_else_part = 74,                 /* else_part  */
  YYSYMBOL_initialization = 75,            /* initialization  */
  YYSYMBOL_condition = 76,                 /* condition  */
  YYSYMBOL_iteration_expression = 77,      /* iteration_expression  */
  YYSYMBOL_for_statement = 78,             /* for_statement  */
  YYSYMBOL_do_while_statement = 79,        /* do_while_statement  */
  YYSYMBOL_switch_statement = 80,          /* switch_statement  */
  YYSYMBOL_case_part = 81,                 /* case_part  */
  YYSYMBOL_default_part = 82,              /* default_part  */
  YYSYMBOL_tail = 83,                      /* tail  */
  YYSYMBOL_expression = 84,                /* expression  */
  YYSYMBOL_constant = 85,                  /* constant  */
  YYSYMBOL_assigment = 86,                 /* assigment  */
  YYSYMBOL_reference = 87,                 /* reference  */
  YYSYMBOL_class_instantiation = 88,       /* class_instantiation  */
  YYSYMBOL_class_assignment = 89,          /* class_assignment  */
  YYSYMBOL_class_member_access = 90,       /* class_member_access  */
  YYSYMBOL_primary_access = 91,            /* primary_access  */
  YYSYMBOL_class_things = 92,              /* class_things  */
  YYSYMBOL_class_member_function_call = 93, /* class_member_function_call  */
  YYSYMBOL_class_member_variable_access = 94, /* class_member_variable_access  */
  YYSYMBOL_class_member_variable_assignment = 95, /* class_member_variable_assignment  */
  YYSYMBOL_class_member_variable_declaration = 96, /* class_member_variable_declaration  */
  YYSYMBOL_class_member_function_declaration = 97, /* class_member_function_declaration  */
  YYSYMBOL_class_member = 98,              /* class_member  */
  YYSYMBOL_class_body = 99,                /* class_body  */
  YYSYMBOL_class = 100,                    /* class  */
  YYSYMBOL_access_modifier = 101,          /* access_modifier  */
  YYSYMBOL_formal_parameters = 102,        /* formal_parameters  */
  YYSYMBOL_formal_parameter = 103          /* formal_parameter  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   481

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  254

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    29,    29,    29,    31,    31,    33,    33,
      33,    33,    35,    35,    35,    35,    35,    35,    37,    37,
      39,    39,    42,    43,    44,    46,    46,    48,    48,    50,
      50,    53,    53,    53,    53,    53,    53,    54,    54,    54,
      54,    54,    57,    59,    62,    63,    63,    66,    66,    68,
      68,    68,    70,    71,    72,    73,    73,    76,    76,    76,
      78,    80,    82,    83,    83,    84,    84,    86,    86,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   106,   106,   106,   108,   110,   110,   113,   113,
     116,   119,   120,   121,   123,   124,   125,   127,   127,   127,
     127,   130,   130,   133,   133,   136,   139,   139,   142,   142,
     145,   145,   148,   148,   148,   151,   151,   153,   153,   153,
     155,   155,   155,   157,   157,   157
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CHAR", "INT", "FLOAT",
  "DOUBLE", "IF", "ELSE", "WHILE", "DO", "FOR", "CONTINUE", "BREAK",
  "VOID", "RETURN", "SWITCH", "CASE", "DEFAULT", "ADDOP", "MULOP", "DIVOP",
  "INCR", "OROP", "ANDOP", "NOTOP", "EQUOP", "RELOP", "LPAREN", "RPAREN",
  "LBRACK", "RBRACK", "LBRACE", "RBRACE", "SEMI", "DOT", "COMMA", "COLON",
  "ASSIGN", "REFER", "ID", "ICONST", "FCONST", "CCONST", "STRING",
  "BOOLEAN", "TRUE", "FALSE", "CLASS", "NEW", "PUBLIC", "PRIVATE",
  "EXTENDS", "THIS", "SUPER", "IMPLEMENTS", "DQUOTE", "SQUOTE", "PRINT",
  "$accept", "program", "declarations", "declaration", "type", "names",
  "names_assign", "variable", "pointer", "array", "statements",
  "statement", "print_statement", "if_statement", "else_if_part",
  "else_part", "initialization", "condition", "iteration_expression",
  "for_statement", "do_while_statement", "switch_statement", "case_part",
  "default_part", "tail", "expression", "constant", "assigment",
  "reference", "class_instantiation", "class_assignment",
  "class_member_access", "primary_access", "class_things",
  "class_member_function_call", "class_member_variable_access",
  "class_member_variable_assignment", "class_member_variable_declaration",
  "class_member_function_declaration", "class_member", "class_body",
  "class", "access_modifier", "formal_parameters", "formal_parameter", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-174)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,  -174,  -174,  -174,  -174,   -12,    24,    30,    48,    59,
    -174,   282,    44,  -174,    57,  -174,    81,  -174,  -174,   108,
     137,    20,  -174,     8,   107,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,     8,   110,   115,  -174,  -174,   114,   117,   118,
    -174,   320,    20,    11,  -174,  -174,  -174,   320,   320,   320,
    -174,   111,  -174,  -174,  -174,  -174,    22,   354,  -174,   320,
     120,    23,   119,  -174,  -174,   107,   -16,    94,   121,  -174,
    -174,   124,  -174,   286,   320,  -174,   127,   320,  -174,  -174,
    -174,   126,   445,   131,     8,   134,     8,   454,   454,   401,
     129,   139,  -174,  -174,   320,   320,   320,  -174,   320,   320,
     320,   320,  -174,   412,   123,    56,   135,   147,  -174,     8,
    -174,     8,   320,   320,  -174,   423,   388,  -174,   454,   173,
     320,   320,   320,   320,   169,   141,   320,   143,  -174,   151,
     146,   454,   454,   454,   454,   454,   454,   454,   158,   155,
    -174,  -174,  -174,  -174,  -174,  -174,    54,     7,   159,   163,
    -174,   160,   454,   370,  -174,  -174,   281,   165,   194,   454,
     454,   454,   454,   175,    38,   170,   320,  -174,   177,   189,
     181,  -174,  -174,   174,    56,  -174,   320,  -174,   222,  -174,
     203,   207,   320,  -174,   316,   454,  -174,   320,    98,    95,
     101,    75,   454,  -174,   188,   232,  -174,   191,   193,   454,
    -174,   230,   320,   180,   185,  -174,   -11,   -22,  -174,   128,
    -174,   320,  -174,   320,   195,  -174,   190,   173,   281,   345,
     107,  -174,  -174,    37,    13,  -174,     7,   196,    18,   379,
     201,   320,  -174,  -174,  -174,   281,  -174,  -174,  -174,  -174,
      20,   204,  -174,   173,   434,  -174,   208,    20,  -174,   173,
    -174,   213,  -174,  -174
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,    13,    12,    14,    15,     0,     0,     0,     0,     0,
      16,     0,     0,    86,    94,    17,     0,    95,    96,     0,
       0,     4,     7,     0,     3,    30,    41,    31,    32,    33,
      34,    35,     0,     0,     0,    91,    36,     0,     0,     0,
      10,    56,     5,    87,    37,    38,    26,     0,     0,     0,
      39,    22,    82,    83,    84,    80,     0,     0,    81,     0,
       0,     0,     0,     1,     6,     2,     0,     0,    18,    94,
      29,     0,    11,     0,     0,    97,     0,     0,   100,    98,
      99,     0,     0,     0,     0,     0,     0,    73,    76,     0,
       0,    24,    25,    23,     0,     0,     0,    72,     0,     0,
       0,     0,    40,     0,     0,   114,     0,     0,     8,     0,
       9,     0,     0,     0,   102,     0,     0,    92,   105,    87,
       0,     0,     0,     0,     0,     0,    56,     0,    79,     0,
       0,    69,    70,    71,    74,    75,    77,    78,     0,     0,
      90,   117,   118,   110,   111,   113,   119,     0,     0,     0,
      19,     0,    20,     0,   101,    93,    87,     0,    46,    52,
      53,    54,    55,     0,     0,     0,     0,    28,     0,     0,
       0,   115,   112,     0,   114,    42,     0,    85,    87,    67,
       0,    48,    56,    50,    59,    49,    27,     0,     0,   122,
       0,   119,    21,    68,     0,    87,    43,     0,     0,    57,
      58,     0,     0,     0,     0,    89,     0,     0,   121,   122,
     106,     0,   116,    56,     0,    47,     0,    87,    87,     0,
      66,    62,   123,     0,     0,    88,     0,     0,     0,     0,
       0,    56,    61,    60,    64,    87,    65,   124,   125,   120,
       5,     0,   107,    87,     0,    63,     0,     5,    45,    87,
     109,     0,    44,   108
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,   -40,  -174,   219,  -143,  -174,  -174,   -15,    52,    53,
     -18,   -24,  -174,  -174,  -174,  -174,  -174,  -121,  -174,  -174,
    -174,  -174,  -174,  -174,  -173,   -10,    96,    79,   223,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -140,
      91,  -174,  -174,    60,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    20,    21,    22,    23,    66,    67,    55,    56,    91,
      24,    25,    26,    27,   181,   196,    85,    81,   198,    28,
      29,    30,   188,   204,   158,    82,    58,    31,    32,   140,
      33,    34,    35,    36,    37,    38,    39,   143,   144,   145,
     146,    40,   147,   207,   208
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    57,    83,    65,   173,   165,   172,   225,    68,    46,
       1,     2,     3,     4,   226,    84,    41,    71,   108,    90,
     109,    10,   215,     1,     2,     3,     4,     5,    46,   222,
       6,     7,     8,     9,    10,    11,    12,    87,    88,    89,
     -87,    70,    92,   130,   233,   -51,   206,   241,    51,   103,
      13,   172,    15,   238,   226,   105,    42,    92,    43,    13,
      14,   197,    93,   115,   116,    15,   206,   118,    16,   125,
     248,   127,    59,    17,    18,   106,   252,   237,    19,    52,
      53,    54,    44,   206,   131,   132,   133,   171,   134,   135,
     136,   137,   230,    45,   150,   157,   151,    60,     1,     2,
       3,     4,   152,   153,   141,   142,   141,   142,   212,    10,
     159,   160,   161,   162,     5,   202,   203,     6,     7,     8,
       9,    61,    11,    12,   205,   141,   142,   -87,   110,   209,
     111,     1,     2,     3,     4,   210,    62,    63,   178,   211,
      15,    90,    10,    73,    72,    74,    13,    69,    78,    75,
      76,    79,    80,    77,    70,   119,   185,   227,   104,   112,
      17,    18,   113,   107,   124,    19,   192,   117,   126,   130,
     129,   157,   139,    15,   199,   148,   149,   201,   163,   164,
       5,   166,   167,     6,     7,     8,     9,   168,    11,    12,
     169,   174,   219,   157,   234,   170,   236,   175,   176,   179,
     246,   229,   180,   182,   184,   156,   187,   251,   186,   189,
     194,   245,    13,    69,   190,   195,   213,   220,   221,   157,
     216,   244,   217,   231,   232,   157,    17,    18,   240,     5,
     243,    19,     6,     7,     8,     9,   247,    11,    12,   214,
      64,   250,     6,     7,     8,     9,   253,    11,    12,    94,
      95,    96,    97,    98,    99,   193,   100,   101,   223,   224,
     183,    13,    69,   200,   156,   191,    86,   218,   239,   228,
       0,    13,    69,     0,     0,    17,    18,     0,     0,     0,
      19,     0,     0,     0,     0,    17,    18,     0,     5,     0,
      19,     6,     7,     8,     9,     0,    11,    12,     0,     0,
       0,     0,    46,     0,    47,     0,    46,    48,    47,     0,
      49,    48,     0,     0,    49,   114,    50,     0,     0,     0,
      13,    69,    51,    52,    53,    54,    51,    52,    53,    54,
       0,     0,     0,     0,    17,    18,    46,     0,    47,    19,
      46,    48,    47,     0,    49,    48,     0,     0,    49,     0,
       0,     0,     0,     0,     0,    13,    51,    52,    53,    54,
      51,    52,    53,    54,    94,    95,    96,    97,    98,    99,
       0,   100,   101,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   235,     0,     0,     0,     0,     0,   102,    94,
      95,    96,    97,    98,    99,     0,   100,   101,    94,    95,
      96,    97,    98,    99,   177,   100,   101,    94,    95,    96,
      97,    98,    99,   242,   100,   101,     0,     0,     0,   155,
      94,    95,    96,    97,    98,    99,     0,   100,   101,     0,
     128,    94,    95,    96,    97,    98,    99,     0,   100,   101,
       0,   138,    94,    95,    96,    97,    98,    99,     0,   100,
     101,     0,   154,    94,    95,    96,    97,   120,   121,     0,
     122,   123,     0,   249,    94,    95,    96,    97,   120,   121,
       0,   122,   123,    94,    95,    96,    97,    98,    99,     0,
     100,   101
};

static const yytype_int16 yycheck[] =
{
      24,    11,    42,    21,   147,   126,   146,    29,    23,    20,
       3,     4,     5,     6,    36,     4,    28,    32,    34,    30,
      36,    14,   195,     3,     4,     5,     6,     7,    20,    40,
      10,    11,    12,    13,    14,    15,    16,    47,    48,    49,
      20,    65,    20,    30,   217,    34,   189,    29,    40,    59,
      39,   191,    45,    40,    36,    32,    32,    20,    28,    39,
      40,   182,    40,    73,    74,    45,   209,    77,    48,    84,
     243,    86,    28,    53,    54,    52,   249,    40,    58,    41,
      42,    43,    34,   226,    94,    95,    96,    33,    98,    99,
     100,   101,   213,    34,   109,   119,   111,    40,     3,     4,
       5,     6,   112,   113,    50,    51,    50,    51,    33,    14,
     120,   121,   122,   123,     7,    17,    18,    10,    11,    12,
      13,    40,    15,    16,    29,    50,    51,    20,    34,    28,
      36,     3,     4,     5,     6,    34,    28,     0,   156,    38,
      45,    30,    14,    28,    34,    30,    39,    40,    34,    34,
      35,    34,    34,    38,   178,    29,   166,    29,    38,    38,
      53,    54,    38,    44,    33,    58,   176,    40,    34,    30,
      41,   195,    49,    45,   184,    40,    29,   187,     9,    38,
       7,    38,    31,    10,    11,    12,    13,    41,    15,    16,
      32,    32,   202,   217,   218,    40,   220,    34,    38,    34,
     240,   211,     8,    28,    34,    32,    17,   247,    31,    28,
       7,   235,    39,    40,    40,     8,    28,    37,    33,   243,
      29,   231,    29,    28,    34,   249,    53,    54,    32,     7,
      29,    58,    10,    11,    12,    13,    32,    15,    16,     7,
      21,    33,    10,    11,    12,    13,    33,    15,    16,    19,
      20,    21,    22,    23,    24,    33,    26,    27,   206,   206,
     164,    39,    40,   184,    32,   174,    43,    37,   226,   209,
      -1,    39,    40,    -1,    -1,    53,    54,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    53,    54,    -1,     7,    -1,
      58,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    20,    25,    22,    -1,
      28,    25,    -1,    -1,    28,    29,    34,    -1,    -1,    -1,
      39,    40,    40,    41,    42,    43,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    53,    54,    20,    -1,    22,    58,
      20,    25,    22,    -1,    28,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      40,    41,    42,    43,    19,    20,    21,    22,    23,    24,
      -1,    26,    27,    19,    20,    21,    22,    23,    24,    -1,
      26,    27,    37,    -1,    -1,    -1,    -1,    -1,    34,    19,
      20,    21,    22,    23,    24,    -1,    26,    27,    19,    20,
      21,    22,    23,    24,    34,    26,    27,    19,    20,    21,
      22,    23,    24,    34,    26,    27,    -1,    -1,    -1,    31,
      19,    20,    21,    22,    23,    24,    -1,    26,    27,    -1,
      29,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
      -1,    29,    19,    20,    21,    22,    23,    24,    -1,    26,
      27,    -1,    29,    19,    20,    21,    22,    23,    24,    -1,
      26,    27,    -1,    29,    19,    20,    21,    22,    23,    24,
      -1,    26,    27,    19,    20,    21,    22,    23,    24,    -1,
      26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    11,    12,    13,
      14,    15,    16,    39,    40,    45,    48,    53,    54,    58,
      60,    61,    62,    63,    69,    70,    71,    72,    78,    79,
      80,    86,    87,    89,    90,    91,    92,    93,    94,    95,
     100,    28,    32,    28,    34,    34,    20,    22,    25,    28,
      34,    40,    41,    42,    43,    66,    67,    84,    85,    28,
      40,    40,    28,     0,    62,    69,    64,    65,    66,    40,
      70,    66,    34,    28,    30,    34,    35,    38,    34,    34,
      34,    76,    84,    60,     4,    75,    87,    84,    84,    84,
      30,    68,    20,    40,    19,    20,    21,    22,    23,    24,
      26,    27,    34,    84,    38,    32,    52,    44,    34,    36,
      34,    36,    38,    38,    29,    84,    84,    40,    84,    29,
      23,    24,    26,    27,    33,    66,    34,    66,    29,    41,
      30,    84,    84,    84,    84,    84,    84,    84,    29,    49,
      88,    50,    51,    96,    97,    98,    99,   101,    40,    29,
      66,    66,    84,    84,    29,    31,    32,    70,    83,    84,
      84,    84,    84,     9,    38,    76,    38,    31,    41,    32,
      40,    33,    98,    63,    32,    34,    38,    34,    69,    34,
       8,    73,    28,    85,    34,    84,    31,    17,    81,    28,
      40,    99,    84,    33,     7,     8,    74,    76,    77,    84,
      86,    84,    17,    18,    82,    29,    63,   102,   103,    28,
      34,    38,    33,    28,     7,    83,    29,    29,    37,    84,
      37,    33,    40,    67,    68,    29,    36,    29,   102,    84,
      76,    28,    34,    83,    70,    37,    70,    40,    40,   103,
      32,    29,    34,    29,    84,    70,    60,    32,    83,    29,
      33,    60,    83,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    60,    60,    60,    61,    61,    62,    62,
      62,    62,    63,    63,    63,    63,    63,    63,    64,    64,
      65,    65,    66,    66,    66,    67,    67,    68,    68,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    72,    73,    73,    73,    74,    74,    75,
      75,    75,    76,    76,    76,    76,    76,    77,    77,    77,
      78,    79,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    85,    85,    85,    86,    87,    87,    88,    88,
      89,    90,    90,    90,    91,    91,    91,    92,    92,    92,
      92,    93,    93,    94,    94,    95,    96,    96,    97,    97,
      98,    98,    99,    99,    99,   100,   100,   101,   101,   101,
     102,   102,   102,   103,   103,   103
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     0,     2,     1,     3,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     5,     1,     2,     2,     2,     1,     4,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       3,     1,     5,     7,     7,     6,     0,     2,     0,     4,
       4,     0,     3,     3,     3,     3,     0,     1,     1,     0,
       9,     9,     8,     5,     4,     3,     2,     2,     3,     3,
       3,     3,     2,     2,     3,     3,     2,     3,     3,     3,
       1,     1,     1,     1,     1,     5,     1,     0,     5,     4,
       4,     1,     3,     4,     1,     1,     1,     2,     2,     2,
       2,     4,     3,     1,     4,     3,     4,     6,     9,     8,
       1,     1,     2,     1,     0,     5,     7,     1,     1,     0,
       3,     1,     0,     2,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 42: /* print_statement: PRINT LPAREN STRING RPAREN SEMI  */
#line 57 "test.y"
                                                 { printf("Output: %s\n", yyvsp[-2]); }
#line 1398 "test.tab.c"
    break;


#line 1402 "test.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 159 "test.y"


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

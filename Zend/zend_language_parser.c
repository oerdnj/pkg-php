/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse zendparse
#define yylex   zendlex
#define yyerror zenderror
#define yylval  zendlval
#define yychar  zendchar
#define yydebug zenddebug
#define yynerrs zendnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_CONTINUE = 332,
     T_FUNCTION = 333,
     T_CONST = 334,
     T_RETURN = 335,
     T_TRY = 336,
     T_CATCH = 337,
     T_THROW = 338,
     T_USE = 339,
     T_GLOBAL = 340,
     T_PUBLIC = 341,
     T_PROTECTED = 342,
     T_PRIVATE = 343,
     T_FINAL = 344,
     T_ABSTRACT = 345,
     T_STATIC = 346,
     T_VAR = 347,
     T_UNSET = 348,
     T_ISSET = 349,
     T_EMPTY = 350,
     T_HALT_COMPILER = 351,
     T_CLASS = 352,
     T_INTERFACE = 353,
     T_EXTENDS = 354,
     T_IMPLEMENTS = 355,
     T_OBJECT_OPERATOR = 356,
     T_DOUBLE_ARROW = 357,
     T_LIST = 358,
     T_ARRAY = 359,
     T_CLASS_C = 360,
     T_METHOD_C = 361,
     T_FUNC_C = 362,
     T_LINE = 363,
     T_FILE = 364,
     T_COMMENT = 365,
     T_DOC_COMMENT = 366,
     T_OPEN_TAG = 367,
     T_OPEN_TAG_WITH_ECHO = 368,
     T_CLOSE_TAG = 369,
     T_WHITESPACE = 370,
     T_START_HEREDOC = 371,
     T_END_HEREDOC = 372,
     T_DOLLAR_OPEN_CURLY_BRACES = 373,
     T_CURLY_OPEN = 374,
     T_PAAMAYIM_NEKUDOTAYIM = 375
   };
#endif
/* Tokens.  */
#define T_REQUIRE_ONCE 258
#define T_REQUIRE 259
#define T_EVAL 260
#define T_INCLUDE_ONCE 261
#define T_INCLUDE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_SR_EQUAL 267
#define T_SL_EQUAL 268
#define T_XOR_EQUAL 269
#define T_OR_EQUAL 270
#define T_AND_EQUAL 271
#define T_MOD_EQUAL 272
#define T_CONCAT_EQUAL 273
#define T_DIV_EQUAL 274
#define T_MUL_EQUAL 275
#define T_MINUS_EQUAL 276
#define T_PLUS_EQUAL 277
#define T_BOOLEAN_OR 278
#define T_BOOLEAN_AND 279
#define T_IS_NOT_IDENTICAL 280
#define T_IS_IDENTICAL 281
#define T_IS_NOT_EQUAL 282
#define T_IS_EQUAL 283
#define T_IS_GREATER_OR_EQUAL 284
#define T_IS_SMALLER_OR_EQUAL 285
#define T_SR 286
#define T_SL 287
#define T_INSTANCEOF 288
#define T_UNSET_CAST 289
#define T_BOOL_CAST 290
#define T_OBJECT_CAST 291
#define T_ARRAY_CAST 292
#define T_STRING_CAST 293
#define T_DOUBLE_CAST 294
#define T_INT_CAST 295
#define T_DEC 296
#define T_INC 297
#define T_CLONE 298
#define T_NEW 299
#define T_EXIT 300
#define T_IF 301
#define T_ELSEIF 302
#define T_ELSE 303
#define T_ENDIF 304
#define T_LNUMBER 305
#define T_DNUMBER 306
#define T_STRING 307
#define T_STRING_VARNAME 308
#define T_VARIABLE 309
#define T_NUM_STRING 310
#define T_INLINE_HTML 311
#define T_CHARACTER 312
#define T_BAD_CHARACTER 313
#define T_ENCAPSED_AND_WHITESPACE 314
#define T_CONSTANT_ENCAPSED_STRING 315
#define T_ECHO 316
#define T_DO 317
#define T_WHILE 318
#define T_ENDWHILE 319
#define T_FOR 320
#define T_ENDFOR 321
#define T_FOREACH 322
#define T_ENDFOREACH 323
#define T_DECLARE 324
#define T_ENDDECLARE 325
#define T_AS 326
#define T_SWITCH 327
#define T_ENDSWITCH 328
#define T_CASE 329
#define T_DEFAULT 330
#define T_BREAK 331
#define T_CONTINUE 332
#define T_FUNCTION 333
#define T_CONST 334
#define T_RETURN 335
#define T_TRY 336
#define T_CATCH 337
#define T_THROW 338
#define T_USE 339
#define T_GLOBAL 340
#define T_PUBLIC 341
#define T_PROTECTED 342
#define T_PRIVATE 343
#define T_FINAL 344
#define T_ABSTRACT 345
#define T_STATIC 346
#define T_VAR 347
#define T_UNSET 348
#define T_ISSET 349
#define T_EMPTY 350
#define T_HALT_COMPILER 351
#define T_CLASS 352
#define T_INTERFACE 353
#define T_EXTENDS 354
#define T_IMPLEMENTS 355
#define T_OBJECT_OPERATOR 356
#define T_DOUBLE_ARROW 357
#define T_LIST 358
#define T_ARRAY 359
#define T_CLASS_C 360
#define T_METHOD_C 361
#define T_FUNC_C 362
#define T_LINE 363
#define T_FILE 364
#define T_COMMENT 365
#define T_DOC_COMMENT 366
#define T_OPEN_TAG 367
#define T_OPEN_TAG_WITH_ECHO 368
#define T_CLOSE_TAG 369
#define T_WHITESPACE 370
#define T_START_HEREDOC 371
#define T_END_HEREDOC 372
#define T_DOLLAR_OPEN_CURLY_BRACES 373
#define T_CURLY_OPEN 374
#define T_PAAMAYIM_NEKUDOTAYIM 375




/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2006 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        | 
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id: zend_language_parser.y,v 1.160.2.4 2006/03/12 16:52:18 iliaa Exp $ */

/* 
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangeling elseif/else ambiguity.  Solved by shift.
 * - 1 shift/reduce conflict due to arrays within encapsulated strings. Solved by shift. 
 * - 1 shift/reduce conflict due to objects within encapsulated strings.  Solved by shift.
 * 
 */


#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"


#define YYERROR_VERBOSE
#define YYSTYPE znode
#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */


#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4041

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  150
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  170
/* YYNRULES -- Number of rules.  */
#define YYNRULES  424
/* YYNRULES -- Number of states.  */
#define YYNSTATES  787

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   375

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   147,     2,   145,    47,    31,   148,
     140,   141,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   142,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   149,    30,     2,   146,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   143,    29,   144,    50,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    15,    17,
      22,    23,    27,    28,    30,    32,    34,    39,    41,    45,
      46,    47,    57,    58,    59,    72,    73,    74,    82,    83,
      84,    94,    95,    96,    97,   110,   111,   118,   121,   125,
     128,   132,   135,   139,   143,   147,   151,   155,   157,   160,
     164,   170,   171,   172,   173,   185,   186,   187,   188,   200,
     201,   208,   210,   211,   212,   213,   214,   215,   234,   238,
     240,   241,   243,   246,   247,   248,   259,   261,   265,   267,
     269,   273,   275,   277,   278,   280,   281,   282,   294,   295,
     304,   305,   313,   315,   318,   321,   322,   325,   327,   328,
     331,   332,   335,   337,   341,   342,   345,   347,   350,   352,
     357,   359,   364,   366,   371,   375,   381,   385,   390,   395,
     401,   402,   403,   410,   411,   417,   419,   421,   423,   428,
     429,   430,   438,   439,   440,   449,   450,   453,   454,   458,
     460,   461,   464,   468,   474,   479,   484,   490,   498,   505,
     506,   508,   510,   512,   513,   515,   517,   520,   524,   528,
     533,   537,   539,   541,   544,   549,   553,   559,   561,   565,
     568,   569,   570,   575,   578,   579,   580,   591,   593,   597,
     599,   601,   602,   604,   606,   609,   611,   613,   615,   617,
     619,   621,   625,   631,   633,   637,   643,   648,   652,   654,
     655,   657,   658,   663,   665,   666,   674,   678,   683,   684,
     692,   693,   698,   701,   705,   709,   713,   717,   721,   725,
     729,   733,   737,   741,   745,   748,   751,   754,   757,   758,
     763,   764,   769,   770,   775,   776,   781,   785,   789,   793,
     797,   801,   805,   809,   813,   817,   821,   825,   829,   832,
     835,   838,   841,   845,   849,   853,   857,   861,   865,   869,
     873,   877,   881,   882,   883,   891,   893,   896,   899,   902,
     905,   908,   911,   914,   917,   918,   922,   924,   929,   933,
     936,   937,   943,   944,   952,   953,   961,   962,   968,   970,
     972,   974,   975,   976,   983,   985,   988,   989,   992,   993,
     996,  1000,  1001,  1005,  1007,  1009,  1011,  1013,  1015,  1017,
    1019,  1021,  1023,  1025,  1028,  1031,  1036,  1038,  1042,  1044,
    1046,  1048,  1050,  1054,  1058,  1062,  1063,  1066,  1067,  1069,
    1075,  1079,  1083,  1085,  1087,  1089,  1091,  1092,  1095,  1096,
    1099,  1100,  1101,  1109,  1111,  1114,  1115,  1116,  1121,  1122,
    1127,  1128,  1130,  1133,  1137,  1139,  1141,  1143,  1146,  1148,
    1153,  1158,  1160,  1162,  1167,  1168,  1170,  1172,  1173,  1176,
    1181,  1186,  1188,  1190,  1194,  1196,  1199,  1203,  1205,  1207,
    1208,  1214,  1215,  1216,  1219,  1225,  1229,  1233,  1235,  1242,
    1247,  1252,  1255,  1258,  1261,  1264,  1267,  1270,  1273,  1276,
    1279,  1282,  1285,  1288,  1289,  1291,  1292,  1298,  1302,  1306,
    1313,  1317,  1319,  1321,  1323,  1328,  1333,  1336,  1339,  1344,
    1347,  1350,  1352,  1353,  1358
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     151,     0,    -1,   152,    -1,    -1,   152,   153,   154,    -1,
      -1,   158,    -1,   192,    -1,   193,    -1,   115,   140,   141,
     142,    -1,    -1,   155,   156,   157,    -1,    -1,   158,    -1,
     192,    -1,   193,    -1,   115,   140,   141,   142,    -1,   159,
      -1,   143,   155,   144,    -1,    -1,    -1,    65,   140,   281,
     141,   160,   158,   161,   219,   223,    -1,    -1,    -1,    65,
     140,   281,   141,    26,   162,   155,   163,   221,   224,    68,
     142,    -1,    -1,    -1,    82,   140,   164,   281,   141,   165,
     218,    -1,    -1,    -1,    81,   166,   158,    82,   140,   167,
     281,   141,   142,    -1,    -1,    -1,    -1,    84,   140,   246,
     142,   168,   246,   142,   169,   246,   141,   170,   209,    -1,
      -1,    91,   140,   281,   141,   171,   213,    -1,    95,   142,
      -1,    95,   281,   142,    -1,    96,   142,    -1,    96,   281,
     142,    -1,    99,   142,    -1,    99,   249,   142,    -1,    99,
     287,   142,    -1,   104,   230,   142,    -1,   110,   232,   142,
      -1,    80,   245,   142,    -1,    75,    -1,   281,   142,    -1,
     103,   191,   142,    -1,   112,   140,   189,   141,   142,    -1,
      -1,    -1,    -1,    86,   140,   287,   172,    90,   173,   208,
     207,   141,   174,   210,    -1,    -1,    -1,    -1,    86,   140,
     249,   175,    90,   176,   287,   207,   141,   177,   210,    -1,
      -1,    88,   178,   140,   212,   141,   211,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   179,   143,   155,   144,
     101,   140,   180,   265,   181,    73,   141,   182,   143,   155,
     144,   183,   184,    -1,   102,   281,   142,    -1,   185,    -1,
      -1,   186,    -1,   185,   186,    -1,    -1,    -1,   101,   140,
     265,   187,    73,   141,   188,   143,   155,   144,    -1,   190,
      -1,   189,     8,   190,    -1,   287,    -1,    79,    -1,   140,
      79,   141,    -1,   195,    -1,   198,    -1,    -1,    31,    -1,
      -1,    -1,    97,   196,   194,    71,   197,   140,   225,   141,
     143,   155,   144,    -1,    -1,   201,    71,   202,   199,   205,
     143,   233,   144,    -1,    -1,   203,    71,   200,   204,   143,
     233,   144,    -1,   116,    -1,   109,   116,    -1,   108,   116,
      -1,    -1,   118,   265,    -1,   117,    -1,    -1,   118,   206,
      -1,    -1,   119,   206,    -1,   265,    -1,   206,     8,   265,
      -1,    -1,   121,   208,    -1,   287,    -1,    31,   287,    -1,
     158,    -1,    26,   155,    85,   142,    -1,   158,    -1,    26,
     155,    87,   142,    -1,   158,    -1,    26,   155,    89,   142,
      -1,    71,    13,   275,    -1,   212,     8,    71,    13,   275,
      -1,   143,   214,   144,    -1,   143,   142,   214,   144,    -1,
      26,   214,    92,   142,    -1,    26,   142,   214,    92,   142,
      -1,    -1,    -1,   214,    93,   281,   217,   215,   155,    -1,
      -1,   214,    94,   217,   216,   155,    -1,    26,    -1,   142,
      -1,   158,    -1,    26,   155,    83,   142,    -1,    -1,    -1,
     219,    66,   140,   281,   141,   220,   158,    -1,    -1,    -1,
     221,    66,   140,   281,   141,    26,   222,   155,    -1,    -1,
      67,   158,    -1,    -1,    67,    26,   155,    -1,   226,    -1,
      -1,   227,    73,    -1,   227,    31,    73,    -1,   227,    31,
      73,    13,   275,    -1,   227,    73,    13,   275,    -1,   226,
       8,   227,    73,    -1,   226,     8,   227,    31,    73,    -1,
     226,     8,   227,    31,    73,    13,   275,    -1,   226,     8,
     227,    73,    13,   275,    -1,    -1,    71,    -1,   123,    -1,
     229,    -1,    -1,   249,    -1,   287,    -1,    31,   283,    -1,
     229,     8,   249,    -1,   229,     8,   287,    -1,   229,     8,
      31,   283,    -1,   230,     8,   231,    -1,   231,    -1,    73,
      -1,   145,   282,    -1,   145,   143,   281,   144,    -1,   232,
       8,    73,    -1,   232,     8,    73,    13,   275,    -1,    73,
      -1,    73,    13,   275,    -1,   233,   234,    -1,    -1,    -1,
     239,   235,   243,   142,    -1,   244,   142,    -1,    -1,    -1,
     240,    97,   236,   194,    71,   237,   140,   225,   141,   238,
      -1,   142,    -1,   143,   155,   144,    -1,   241,    -1,   111,
      -1,    -1,   241,    -1,   242,    -1,   241,   242,    -1,   105,
      -1,   106,    -1,   107,    -1,   110,    -1,   109,    -1,   108,
      -1,   243,     8,    73,    -1,   243,     8,    73,    13,   275,
      -1,    73,    -1,    73,    13,   275,    -1,   244,     8,    71,
      13,   275,    -1,    98,    71,    13,   275,    -1,   245,     8,
     281,    -1,   281,    -1,    -1,   247,    -1,    -1,   247,     8,
     248,   281,    -1,   281,    -1,    -1,   122,   140,   250,   307,
     141,    13,   281,    -1,   287,    13,   281,    -1,   287,    13,
      31,   287,    -1,    -1,   287,    13,    31,    63,   266,   251,
     273,    -1,    -1,    63,   266,   252,   273,    -1,    62,   281,
      -1,   287,    24,   281,    -1,   287,    23,   281,    -1,   287,
      22,   281,    -1,   287,    21,   281,    -1,   287,    20,   281,
      -1,   287,    19,   281,    -1,   287,    18,   281,    -1,   287,
      17,   281,    -1,   287,    16,   281,    -1,   287,    15,   281,
      -1,   287,    14,   281,    -1,   285,    60,    -1,    60,   285,
      -1,   285,    59,    -1,    59,   285,    -1,    -1,   281,    27,
     253,   281,    -1,    -1,   281,    28,   254,   281,    -1,    -1,
     281,     9,   255,   281,    -1,    -1,   281,    11,   256,   281,
      -1,   281,    10,   281,    -1,   281,    29,   281,    -1,   281,
      31,   281,    -1,   281,    30,   281,    -1,   281,    44,   281,
      -1,   281,    42,   281,    -1,   281,    43,   281,    -1,   281,
      45,   281,    -1,   281,    46,   281,    -1,   281,    47,   281,
      -1,   281,    41,   281,    -1,   281,    40,   281,    -1,    42,
     281,    -1,    43,   281,    -1,    48,   281,    -1,    50,   281,
      -1,   281,    33,   281,    -1,   281,    32,   281,    -1,   281,
      35,   281,    -1,   281,    34,   281,    -1,   281,    36,   281,
      -1,   281,    39,   281,    -1,   281,    37,   281,    -1,   281,
      38,   281,    -1,   281,    49,   266,    -1,   140,   281,   141,
      -1,    -1,    -1,   281,    25,   257,   281,    26,   258,   281,
      -1,   316,    -1,    58,   281,    -1,    57,   281,    -1,    56,
     281,    -1,    55,   281,    -1,    54,   281,    -1,    53,   281,
      -1,    52,   281,    -1,    64,   272,    -1,    -1,    51,   259,
     281,    -1,   277,    -1,   123,   140,   310,   141,    -1,   146,
     312,   146,    -1,    12,   281,    -1,    -1,    71,   140,   261,
     228,   141,    -1,    -1,   265,   139,    71,   140,   262,   228,
     141,    -1,    -1,   265,   139,   295,   140,   263,   228,   141,
      -1,    -1,   295,   140,   264,   228,   141,    -1,    71,    -1,
      71,    -1,   267,    -1,    -1,    -1,   298,   120,   268,   302,
     269,   270,    -1,   298,    -1,   270,   271,    -1,    -1,   120,
     302,    -1,    -1,   140,   141,    -1,   140,   281,   141,    -1,
      -1,   140,   228,   141,    -1,    69,    -1,    70,    -1,    79,
      -1,   127,    -1,   128,    -1,   124,    -1,   125,    -1,   126,
      -1,   274,    -1,    71,    -1,    42,   275,    -1,    43,   275,
      -1,   123,   140,   278,   141,    -1,   276,    -1,    71,   139,
      71,    -1,    71,    -1,    72,    -1,   319,    -1,   274,    -1,
     147,   312,   147,    -1,   148,   312,   148,    -1,   135,   312,
     136,    -1,    -1,   280,   279,    -1,    -1,     8,    -1,   280,
       8,   275,   121,   275,    -1,   280,     8,   275,    -1,   275,
     121,   275,    -1,   275,    -1,   282,    -1,   249,    -1,   287,
      -1,    -1,   287,   284,    -1,    -1,   287,   286,    -1,    -1,
      -1,   297,   120,   288,   302,   289,   293,   290,    -1,   297,
      -1,   290,   291,    -1,    -1,    -1,   120,   302,   292,   293,
      -1,    -1,   140,   294,   228,   141,    -1,    -1,   299,    -1,
     306,   299,    -1,   265,   139,   295,    -1,   298,    -1,   260,
      -1,   299,    -1,   306,   299,    -1,   296,    -1,   299,    61,
     301,   149,    -1,   299,   143,   281,   144,    -1,   300,    -1,
      73,    -1,   145,   143,   281,   144,    -1,    -1,   281,    -1,
     304,    -1,    -1,   295,   303,    -1,   304,    61,   301,   149,
      -1,   304,   143,   281,   144,    -1,   305,    -1,    71,    -1,
     143,   281,   144,    -1,   145,    -1,   306,   145,    -1,   307,
       8,   308,    -1,   308,    -1,   287,    -1,    -1,   122,   140,
     309,   307,   141,    -1,    -1,    -1,   311,   279,    -1,   311,
       8,   281,   121,   281,    -1,   311,     8,   281,    -1,   281,
     121,   281,    -1,   281,    -1,   311,     8,   281,   121,    31,
     283,    -1,   311,     8,    31,   283,    -1,   281,   121,    31,
     283,    -1,    31,   283,    -1,   312,   313,    -1,   312,    71,
      -1,   312,    74,    -1,   312,    78,    -1,   312,    76,    -1,
     312,    77,    -1,   312,    61,    -1,   312,   149,    -1,   312,
     143,    -1,   312,   144,    -1,   312,   120,    -1,    -1,    73,
      -1,    -1,    73,    61,   314,   315,   149,    -1,    73,   120,
      71,    -1,   137,   281,   144,    -1,   137,    72,    61,   281,
     149,   144,    -1,   138,   287,   144,    -1,    71,    -1,    74,
      -1,    73,    -1,   113,   140,   317,   141,    -1,   114,   140,
     287,   141,    -1,     7,   281,    -1,     6,   281,    -1,     5,
     140,   281,   141,    -1,     4,   281,    -1,     3,   281,    -1,
     287,    -1,    -1,   317,     8,   318,   287,    -1,   265,   139,
      71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   152,   152,   156,   156,   157,   162,   163,   164,   165,
     170,   170,   171,   176,   177,   178,   179,   184,   188,   189,
     189,   189,   190,   190,   190,   191,   191,   191,   192,   192,
     192,   196,   198,   200,   193,   202,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   217,   221,   222,   223,   221,   225,
     225,   226,   227,   228,   229,   230,   231,   227,   233,   238,
     239,   243,   244,   249,   249,   249,   254,   255,   259,   263,
     264,   269,   273,   278,   279,   284,   284,   284,   290,   289,
     296,   295,   305,   306,   307,   311,   312,   316,   319,   321,
     324,   326,   330,   331,   335,   336,   341,   342,   346,   347,
     352,   353,   358,   359,   364,   365,   370,   371,   372,   373,
     378,   379,   379,   380,   380,   385,   386,   391,   392,   397,
     399,   399,   403,   405,   405,   409,   411,   415,   417,   422,
     423,   428,   429,   430,   431,   432,   433,   434,   435,   440,
     441,   442,   447,   448,   453,   454,   455,   456,   457,   458,
     462,   463,   468,   469,   470,   475,   476,   477,   478,   484,
     485,   490,   490,   491,   492,   492,   492,   498,   499,   503,
     504,   508,   509,   513,   514,   518,   519,   520,   521,   522,
     523,   527,   528,   529,   530,   534,   535,   539,   540,   545,
     546,   550,   550,   551,   555,   555,   556,   557,   558,   558,
     559,   559,   560,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   576,
     577,   577,   578,   578,   579,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   606,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   618,   619,   620,   621,   622,
     626,   626,   629,   629,   632,   632,   635,   635,   641,   645,
     646,   651,   652,   651,   654,   659,   660,   665,   669,   670,
     671,   676,   677,   682,   683,   684,   685,   686,   687,   688,
     689,   694,   695,   696,   697,   698,   699,   703,   707,   708,
     709,   710,   711,   712,   713,   718,   719,   722,   724,   728,
     729,   730,   731,   735,   736,   741,   746,   746,   751,   751,
     756,   757,   756,   759,   763,   764,   769,   769,   773,   773,
     777,   781,   782,   786,   791,   792,   797,   798,   799,   803,
     804,   805,   810,   811,   815,   816,   821,   822,   822,   826,
     827,   828,   832,   833,   837,   838,   842,   843,   848,   849,
     849,   850,   855,   856,   860,   861,   862,   863,   864,   865,
     866,   867,   871,   872,   873,   874,   875,   876,   877,   878,
     879,   880,   881,   882,   889,   890,   890,   891,   892,   893,
     894,   899,   900,   901,   906,   907,   908,   909,   910,   911,
     912,   916,   917,   917,   921
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL", "T_SL_EQUAL",
  "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'['", "T_CLONE",
  "T_NEW", "T_EXIT", "T_IF", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER",
  "T_DNUMBER", "T_STRING", "T_STRING_VARNAME", "T_VARIABLE",
  "T_NUM_STRING", "T_INLINE_HTML", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING", "T_ECHO",
  "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR", "T_ENDFOR", "T_FOREACH",
  "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE", "T_AS", "T_SWITCH",
  "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_CONTINUE",
  "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY", "T_CATCH", "T_THROW",
  "T_USE", "T_GLOBAL", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL",
  "T_ABSTRACT", "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY",
  "T_HALT_COMPILER", "T_CLASS", "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS",
  "T_OBJECT_OPERATOR", "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY", "T_CLASS_C",
  "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG",
  "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_PAAMAYIM_NEKUDOTAYIM",
  "'('", "')'", "';'", "'{'", "'}'", "'$'", "'`'", "'\"'", "'''", "']'",
  "$accept", "start", "top_statement_list", "@1", "top_statement",
  "inner_statement_list", "@2", "inner_statement", "statement",
  "unticked_statement", "@3", "@4", "@5", "@6", "@7", "@8", "@9", "@10",
  "@11", "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19", "@20",
  "@21", "@22", "@23", "@24", "@25", "@26", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "@27", "@28",
  "unset_variables", "unset_variable", "use_filename",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "@29", "@30",
  "unticked_class_declaration_statement", "@31", "@32", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "@33", "@34", "case_separator", "while_statement", "elseif_list", "@35",
  "new_elseif_list", "@36", "else_single", "new_else_single",
  "parameter_list", "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "@37", "@38", "@39",
  "method_body", "variable_modifiers", "method_modifiers",
  "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "@40",
  "expr_without_variable", "@41", "@42", "@43", "@44", "@45", "@46", "@47",
  "@48", "@49", "@50", "function_call", "@51", "@52", "@53", "@54",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "@55", "@56",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "ctor_arguments",
  "common_scalar", "static_scalar", "static_class_constant", "scalar",
  "static_array_pair_list", "possible_comma",
  "non_empty_static_array_pair_list", "expr", "r_variable", "w_variable",
  "@57", "rw_variable", "@58", "variable", "@59", "@60",
  "variable_properties", "variable_property", "@61", "method_or_not",
  "@62", "variable_without_objects", "static_member",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "@63", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "@64", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "@65",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "@66", "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
      40,    41,    59,   123,   125,    36,    96,    34,    39,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   150,   151,   153,   152,   152,   154,   154,   154,   154,
     156,   155,   155,   157,   157,   157,   157,   158,   159,   160,
     161,   159,   162,   163,   159,   164,   165,   159,   166,   167,
     159,   168,   169,   170,   159,   171,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   172,   173,   174,   159,   175,   176,   177,   159,   178,
     159,   159,   179,   180,   181,   182,   183,   159,   159,   184,
     184,   185,   185,   187,   188,   186,   189,   189,   190,   191,
     191,   192,   193,   194,   194,   196,   197,   195,   199,   198,
     200,   198,   201,   201,   201,   202,   202,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   210,   211,   211,   212,   212,   213,   213,   213,   213,
     214,   215,   214,   216,   214,   217,   217,   218,   218,   219,
     220,   219,   221,   222,   221,   223,   223,   224,   224,   225,
     225,   226,   226,   226,   226,   226,   226,   226,   226,   227,
     227,   227,   228,   228,   229,   229,   229,   229,   229,   229,
     230,   230,   231,   231,   231,   232,   232,   232,   232,   233,
     233,   235,   234,   234,   236,   237,   234,   238,   238,   239,
     239,   240,   240,   241,   241,   242,   242,   242,   242,   242,
     242,   243,   243,   243,   243,   244,   244,   245,   245,   246,
     246,   248,   247,   247,   250,   249,   249,   249,   251,   249,
     252,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   253,   249,
     254,   249,   255,   249,   256,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   257,   258,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   259,   249,   249,   249,   249,   249,
     261,   260,   262,   260,   263,   260,   264,   260,   265,   266,
     266,   268,   269,   267,   267,   270,   270,   271,   272,   272,
     272,   273,   273,   274,   274,   274,   274,   274,   274,   274,
     274,   275,   275,   275,   275,   275,   275,   276,   277,   277,
     277,   277,   277,   277,   277,   278,   278,   279,   279,   280,
     280,   280,   280,   281,   281,   282,   284,   283,   286,   285,
     288,   289,   287,   287,   290,   290,   292,   291,   294,   293,
     293,   295,   295,   296,   297,   297,   298,   298,   298,   299,
     299,   299,   300,   300,   301,   301,   302,   303,   302,   304,
     304,   304,   305,   305,   306,   306,   307,   307,   308,   309,
     308,   308,   310,   310,   311,   311,   311,   311,   311,   311,
     311,   311,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   313,   314,   313,   313,   313,   313,
     313,   315,   315,   315,   316,   316,   316,   316,   316,   316,
     316,   317,   318,   317,   319
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     1,     1,     4,
       0,     3,     0,     1,     1,     1,     4,     1,     3,     0,
       0,     9,     0,     0,    12,     0,     0,     7,     0,     0,
       9,     0,     0,     0,    12,     0,     6,     2,     3,     2,
       3,     2,     3,     3,     3,     3,     3,     1,     2,     3,
       5,     0,     0,     0,    11,     0,     0,     0,    11,     0,
       6,     1,     0,     0,     0,     0,     0,    18,     3,     1,
       0,     1,     2,     0,     0,    10,     1,     3,     1,     1,
       3,     1,     1,     0,     1,     0,     0,    11,     0,     8,
       0,     7,     1,     2,     2,     0,     2,     1,     0,     2,
       0,     2,     1,     3,     0,     2,     1,     2,     1,     4,
       1,     4,     1,     4,     3,     5,     3,     4,     4,     5,
       0,     0,     6,     0,     5,     1,     1,     1,     4,     0,
       0,     7,     0,     0,     8,     0,     2,     0,     3,     1,
       0,     2,     3,     5,     4,     4,     5,     7,     6,     0,
       1,     1,     1,     0,     1,     1,     2,     3,     3,     4,
       3,     1,     1,     2,     4,     3,     5,     1,     3,     2,
       0,     0,     4,     2,     0,     0,    10,     1,     3,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     5,     1,     3,     5,     4,     3,     1,     0,
       1,     0,     4,     1,     0,     7,     3,     4,     0,     7,
       0,     4,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     4,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     0,     0,     7,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     0,     3,     1,     4,     3,     2,
       0,     5,     0,     7,     0,     7,     0,     5,     1,     1,
       1,     0,     0,     6,     1,     2,     0,     2,     0,     2,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     1,     3,     1,     1,
       1,     1,     3,     3,     3,     0,     2,     0,     1,     5,
       3,     3,     1,     1,     1,     1,     0,     2,     0,     2,
       0,     0,     7,     1,     2,     0,     0,     4,     0,     4,
       0,     1,     2,     3,     1,     1,     1,     2,     1,     4,
       4,     1,     1,     4,     0,     1,     1,     0,     2,     4,
       4,     1,     1,     3,     1,     2,     3,     1,     1,     0,
       5,     0,     0,     2,     5,     3,     3,     1,     6,     4,
       4,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     1,     0,     5,     3,     3,     6,
       3,     1,     1,     1,     4,     4,     2,     2,     4,     2,
       2,     1,     0,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   298,     0,   303,
     304,   318,   319,   362,    47,   305,     0,    28,     0,     0,
       0,    59,     0,     0,     0,    85,     0,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    97,
       0,     0,   308,   309,   310,   306,   307,   403,     0,    61,
      12,   374,   403,   403,   403,     4,     6,    17,     7,     8,
      81,    82,     0,     0,   334,   355,     0,   321,   276,     0,
     333,     0,   335,     0,   358,   343,   354,   356,   361,     0,
     265,   320,   420,   419,     0,   417,   416,   279,   248,   249,
     250,   251,     0,   272,   271,   270,   269,   268,   267,   266,
     288,     0,   227,   338,   225,   212,   289,     0,   210,   290,
     294,   356,     0,     0,   273,     0,   280,     0,   198,     0,
      25,   199,     0,     0,     0,    37,     0,    39,     0,    83,
      41,   334,     0,   335,     0,     0,    79,     0,     0,   162,
       0,     0,   161,    94,    93,   167,     0,     0,     0,     0,
       0,   204,   382,     0,     0,    10,     0,     0,     0,     0,
      95,    90,     0,   232,     0,   234,   262,   228,   230,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
     226,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   339,   286,   340,   364,     0,   375,
     357,     0,   275,     0,     0,   301,   291,   357,   299,     0,
       0,   153,     0,    46,     0,     0,     0,   200,   203,   334,
     335,     0,     0,    38,    40,    84,     0,    42,    43,    12,
      68,     0,    49,     0,   163,   335,     0,    44,     0,     0,
      45,     0,    76,    78,   421,     0,     0,     0,   381,     0,
     387,     0,   327,   398,   393,   404,   394,   396,   397,   395,
     402,   324,     0,     0,   400,   401,   399,   392,   261,    18,
       0,     0,   278,   322,   323,     0,    88,    98,   424,   353,
     351,     0,     0,   236,     0,     0,     0,     0,   237,   239,
     238,   253,   252,   255,   254,   256,   258,   259,   257,   247,
     246,   241,   242,   240,   243,   244,   245,   260,     0,   206,
     223,   222,   221,   220,   219,   218,   217,   216,   215,   214,
     213,   153,     0,   365,     0,     0,   418,     0,   353,   153,
     211,     0,   300,    19,     0,     0,   152,   334,   335,   197,
       0,     0,    31,   201,     0,     0,     0,     0,    35,    86,
      10,    80,     0,   160,     0,     0,   312,     0,   311,   168,
     316,   165,     0,     0,   422,   414,   415,     9,     0,   378,
       0,   377,   391,   336,     0,   277,   328,   383,   405,     0,
     319,     0,     0,     0,    11,    13,    14,    15,   363,   288,
      96,   100,     0,     0,   282,   284,   352,   233,   235,     0,
     229,   231,     0,   207,     0,   372,     0,   367,   341,   366,
     371,   359,   360,     0,   292,    22,     0,   156,   281,     0,
      29,    26,   199,     0,    56,    52,     0,     0,     0,     0,
       0,     0,   164,   313,   314,     0,   325,     0,    77,    50,
       0,   379,   381,     0,   337,     0,   386,     0,   385,     0,
     407,     0,   408,   410,     0,     0,     0,    99,   102,   170,
     153,   153,   263,   208,   287,     0,   368,   350,   364,     0,
     302,   296,    12,    20,     0,   334,   335,     0,     0,     0,
     202,     0,     0,   114,     0,    12,   112,    60,   120,   120,
      36,   149,     0,   317,   332,     0,   327,   166,   423,   381,
     376,     0,   390,   389,     0,   411,   413,   412,     0,     0,
       0,   101,   170,     0,   181,     0,     0,     0,   301,   373,
     348,   345,     0,     0,   293,    10,   129,   159,     0,    12,
     127,    27,    32,   104,     0,   104,   106,     0,    10,   120,
       0,   120,     0,   150,   151,     0,   139,     0,    63,     0,
     315,   328,   326,     0,   205,     0,   384,   406,     0,    16,
     181,   103,     0,   185,   186,   187,   190,   189,   188,   180,
      91,   169,   171,     0,   179,   183,     0,   283,   285,   264,
     209,   153,   342,   369,   370,     0,   295,   132,   135,     0,
      10,   199,     0,     0,   107,     0,   115,     0,     0,     0,
       0,     0,     0,   116,     0,   149,     0,   141,     0,   331,
     330,   380,   388,   409,    89,     0,     0,   174,   184,     0,
     173,     0,     0,   344,   297,   137,     0,     0,    21,    30,
       0,     0,   105,    57,    53,   113,     0,   118,     0,   125,
     126,   123,   117,    12,     0,   142,     0,    64,     0,     0,
     193,     0,    83,     0,   349,   346,     0,     0,     0,     0,
     136,   128,    33,     0,     0,   119,   121,    12,    10,     0,
     145,     0,   144,     0,   329,   196,     0,     0,   172,     0,
       0,   350,     0,    12,     0,     0,     0,    12,   110,    58,
      54,    12,    10,    87,   146,     0,   143,     0,   194,   191,
     175,   195,   347,     0,    10,    24,   130,    12,   108,    34,
      10,    10,     0,   148,    65,     0,     0,     0,     0,    10,
       0,   147,     0,   192,   149,   133,   131,     0,   111,    12,
       0,    12,   109,    10,     0,    10,    66,   177,    12,   176,
      70,    10,     0,    67,    69,    71,   178,     0,    72,    73,
       0,     0,    74,     0,    12,    10,    75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    75,   175,   300,   414,   718,    77,
     446,   556,   502,   617,   245,   508,   139,   507,   452,   621,
     716,   459,   375,   512,   694,   374,   511,   693,   143,   154,
     638,   703,   752,   770,   773,   774,   775,   780,   783,   271,
     272,   158,    78,    79,   256,    80,   149,   460,    81,   421,
     307,    82,   306,    83,   423,   486,   487,   623,   565,   739,
     719,   517,   377,   520,   570,   721,   697,   671,   561,   618,
     748,   655,   761,   658,   688,   575,   576,   577,   365,   366,
     161,   162,   166,   544,   601,   646,   682,   746,   769,   602,
     603,   604,   605,   681,   606,   137,   246,   247,   453,    84,
     278,   548,   235,   316,   317,   312,   314,   315,   547,   112,
      85,   241,   490,   491,   351,    86,   128,   129,   361,   501,
     554,   616,   134,   360,    87,   389,   390,    88,   525,   407,
     526,    89,    90,   402,   474,    91,   224,    92,   352,   497,
     612,   653,   711,   551,   611,    93,    94,    95,    96,    97,
      98,   354,   438,   496,   439,   440,    99,   400,   401,   529,
     281,   282,   173,   297,   479,   538,   100,   275,   470,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -447
static const yytype_int16 yypact[] =
{
    -447,    55,    78,  -447,   820,  3088,  3088,   -78,  3088,  3088,
    3088,  3088,  3088,  3088,  3088,  -447,  3088,  3088,  3088,  3088,
    3088,  3088,  3088,    49,    49,  3088,    99,   -75,   -58,  -447,
    -447,   -89,  -447,  -447,  -447,  -447,  3088,  -447,   -44,     2,
      23,  -447,    34,  1702,  1828,  -447,  1954,  -447,  3088,   110,
     -27,    43,    60,   127,   114,   141,   155,   170,  -447,  -447,
     171,   174,  -447,  -447,  -447,  -447,  -447,  -447,  3088,  -447,
    -447,   156,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,    69,   247,  -447,  -447,   182,  -447,  -447,  3341,
    -447,    -2,   762,   184,  -447,   207,  -447,    -9,  -447,    56,
    -447,  -447,  2766,  2766,  3088,  2766,  2766,  3141,   239,   239,
     293,  -447,  3088,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
     191,   211,  -447,  -447,  -447,  -447,   213,   214,  -447,  -447,
     223,    22,    56,  2080,  -447,  3088,  -447,    -1,  2766,  1576,
    -447,  3088,  3088,   215,  3088,  -447,  3386,  -447,  3427,   326,
    -447,   218,  2766,   963,   227,  3468,  -447,   309,   236,  -447,
     -54,     1,  -447,  -447,  -447,   381,     5,    49,    49,    49,
     256,  -447,  2206,   202,  3509,   262,  3088,   252,   669,  1088,
     289,  -447,   100,  -447,  3088,  -447,  -447,  -447,  -447,  3088,
    3088,  3088,  3088,  3088,  3088,  3088,  3088,  3088,  3088,  3088,
    3088,  3088,  3088,  3088,  3088,  3088,  3088,  3088,    99,  -447,
    -447,  -447,  2332,  3088,  3088,  3088,  3088,  3088,  3088,  3088,
    3088,  3088,  3088,  3088,  -447,  -447,  -447,  3088,  3088,   156,
      26,  3550,  -447,   126,    57,   260,  -447,    22,  -447,  3591,
    3632,  2458,  3088,  -447,   328,  3088,   269,   410,  2766,   330,
    1341,   350,  3673,  -447,  -447,  -447,   351,  -447,  -447,  -447,
    -447,   284,  -447,  3088,  -447,  -447,   -27,  -447,   501,   355,
    -447,    16,  -447,  -447,  -447,    19,   290,   288,   -55,    49,
      70,   291,   415,  -447,  -447,   137,  -447,  -447,  -447,  -447,
    -447,  -447,  3214,    49,  -447,  -447,  -447,  -447,  -447,  -447,
     946,  1884,  -447,  -447,  -447,   362,  -447,   316,   295,   296,
      22,    56,  3088,  3017,  3088,  3088,  3088,  3088,  3992,  1568,
    1693,  1819,  1819,  1819,  1819,  1441,  1441,  1441,  1441,   319,
     319,   239,   239,   239,   293,   293,   293,  -447,    62,  3141,
    3141,  3141,  3141,  3141,  3141,  3141,  3141,  3141,  3141,  3141,
    3141,  2458,    50,  2766,   294,  2010,  -447,   295,  -447,  2458,
    -447,    50,  -447,   411,    49,   297,   431,    27,   664,  2766,
     300,  3714,  -447,  -447,   352,   354,   432,    39,  -447,  -447,
     304,  -447,  2136,  -447,   501,   501,   311,   313,  -447,  -447,
    -447,   438,    49,   317,  -447,  -447,  -447,  -447,   315,  -447,
      40,  -447,  -447,  -447,  2584,  -447,  2710,  -447,  -447,   389,
     400,  2262,   320,   323,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,   346,   362,   324,  -447,  -447,    22,  2891,  3141,  2640,
    3951,  3972,    99,  -447,   325,  -447,  3088,  -447,  -447,    24,
    -447,  -447,  -447,   327,  -447,  -447,  1576,  -447,  -447,  2836,
    -447,  -447,  3088,  3088,  -447,  -447,   501,   403,  1072,   -15,
     335,   378,  -447,  -447,  -447,   409,   501,   501,  -447,  -447,
      49,  -447,   -55,   469,  -447,    49,  2766,    49,  3878,   216,
    -447,  3088,  -447,  -447,   342,   362,   341,   477,  -447,  -447,
    2458,  2458,  -447,  -447,  -447,  2388,  -447,   347,  3088,  3088,
    -447,  -447,  -447,  -447,    49,    41,   828,  3088,  1198,   348,
    2766,    49,    13,  -447,   479,  -447,  -447,  -447,   353,   358,
    -447,    65,   356,  -447,   372,   361,   486,  -447,  -447,   -55,
    -447,  3088,  -447,  -447,  2962,  -447,  -447,  -447,   360,  1759,
     363,   477,  -447,   362,   275,   366,   371,  3088,   260,  -447,
    -447,  -447,   364,  2514,   377,   241,  -447,  -447,  3755,  -447,
    -447,  -447,  -447,   382,    49,   382,  -447,   501,   425,  -447,
     282,  -447,   173,  -447,  -447,   375,   496,   243,  -447,   501,
    -447,   501,  -447,    45,  3141,    49,  2766,  -447,   373,  -447,
     593,  -447,   450,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,   428,   -36,  -447,     6,  -447,  -447,  3911,
    -447,  2458,   402,  -447,  -447,    50,  -447,  -447,     9,   384,
     445,  3088,    13,   388,  -447,   391,  -447,   392,   299,   394,
    3088,   -16,   204,  -447,   387,    67,   460,   524,   362,  -447,
     419,  -447,  -447,  -447,  -447,   532,   473,  -447,  -447,   476,
    -447,   408,    50,  -447,  -447,   235,   416,  1576,  -447,  -447,
     418,   420,  -447,  -447,  -447,  -447,   421,  -447,  3270,  -447,
    -447,  -447,  -447,  -447,   246,   537,   501,  -447,   501,   501,
     544,     7,   326,   551,  -447,  -447,   426,   539,   500,  3088,
    -447,  -447,  -447,  1324,  1324,  -447,  -447,  -447,   429,   502,
     556,   501,  -447,   503,  -447,  -447,   501,   505,  -447,   510,
     501,   347,  3088,  -447,   440,  3796,  1450,  -447,  -447,  -447,
    -447,  -447,   159,  -447,   561,   501,  -447,   443,  -447,   572,
    -447,  -447,  -447,  3837,   519,  -447,  -447,  -447,  -447,  -447,
     504,   200,   501,  -447,  -447,   501,   448,   563,  1576,   507,
     451,  -447,   447,  -447,    65,  -447,  -447,   452,  -447,  -447,
     454,  -447,  -447,   453,   -50,   336,  -447,  -447,  -447,  -447,
     497,   456,   461,  -447,   497,  -447,  -447,   362,  -447,  -447,
     530,   464,  -447,   463,  -447,   467,  -447
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -447,  -447,  -447,  -447,  -447,  -182,  -447,  -447,     0,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -167,  -447,  -447,  -447,
     221,  -447,   308,   314,   -66,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,   132,    53,    10,  -447,
     -74,  -447,  -447,  -447,  -311,  -447,  -447,   -47,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -132,  -447,   -12,  -339,  -447,
    -447,   367,  -447,    88,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,    30,  -447,  -447,  -447,  -446,  -447,  -447,     8,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,   -23,  -186,  -447,  -447,  -447,
    -447,  -447,  -447,    87,    86,    92,  -447,  -447,  -447,   112,
    -447,    20,   480,  -321,  -447,   281,  -447,   245,  -447,  -447,
    -447,  -447,  -447,   -72,  -447,  -174,  -447,  -447,   -24,    -5,
    -447,   138,  -356,  -447,  -447,  -447,    -3,   113,   172,  -447,
    -447,  -447,   343,  -447,  -447,  -447,  -447,  -447,  -447,  -447
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -353
static const yytype_int16 yytable[] =
{
     121,   121,   130,   127,    76,   444,   509,   242,   309,   266,
     669,   518,   434,   269,   649,   707,   120,   120,    33,    33,
     443,   131,   337,   132,   392,   102,   103,   394,   105,   106,
     107,   108,   109,   110,   111,  -154,   113,   114,   115,   116,
     117,   118,   119,   447,   564,   125,   159,   457,   472,  -157,
    -288,   136,   227,   472,   151,     3,   138,   210,   211,   309,
     358,  -182,   104,   146,   148,   133,   152,   398,   155,   593,
     594,   595,   596,   597,   598,   656,   657,   380,    -2,   183,
     184,   185,   135,   227,   120,   498,    33,   227,   174,   263,
      71,    71,   767,   768,   230,   186,   140,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   160,   208,
     120,   435,    33,    33,   231,   432,   670,   237,   519,    33,
      33,  -351,   232,   120,   228,    33,   573,   121,   573,   244,
     180,   243,   141,   267,   121,   121,   121,   270,   650,   708,
     249,   545,   546,   239,   532,   240,   533,   393,    71,   163,
     395,   248,   152,   142,   252,   228,  -352,   499,  -154,   228,
     126,   308,    33,    33,   144,   661,   164,   310,   437,   311,
     458,   473,  -157,   557,   130,   127,   641,   437,   574,   156,
     574,   404,   280,   436,    71,    71,   301,   357,   408,    33,
     165,   229,    71,   131,   313,   132,  -140,    71,   572,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   310,   310,
     311,   311,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,    71,    71,   493,   353,   355,   367,
     157,  -124,  -124,  -124,   167,   121,   121,   409,   628,   654,
     632,   152,   369,   283,   642,   371,   630,   631,   123,   123,
     121,    71,   651,   284,   636,   285,   286,   699,   287,   288,
     289,   168,   420,   382,   205,   206,   207,   535,   208,   536,
     537,   153,  -122,  -122,  -122,   169,   685,   630,   631,   176,
     415,   686,   687,  -124,   122,   124,   426,   -23,   -23,   -23,
     170,   171,   411,   283,   172,   121,   637,   633,   181,   700,
     555,   182,   290,   284,   225,   285,   286,   226,   287,   288,
     289,   136,   427,   568,   428,   429,   430,   431,   291,   292,
     293,   121,   208,   236,  -122,   294,   295,   310,   672,   311,
     233,   296,  -288,   234,   388,   251,   310,   255,   311,   367,
     257,   202,   203,   204,   205,   206,   207,   367,   208,   121,
     259,   152,   290,   592,   629,   630,   631,   620,   262,   152,
     593,   594,   595,   596,   597,   598,   599,   250,   261,   292,
     293,   666,   630,   631,   268,   294,   295,   277,   302,   488,
     359,   296,  -134,  -134,  -134,   265,   299,   305,   130,   127,
     370,   372,   273,   274,   276,   177,   178,   179,   373,   600,
     -55,   376,   379,   406,   476,   381,   478,   131,   391,   132,
     397,   396,   405,   419,   422,   424,   425,   445,   448,   449,
     450,   437,   454,   441,   455,   456,   503,   121,   461,   121,
     465,   467,   121,   466,   121,   471,   495,   505,   516,   469,
     480,   481,   488,   484,   483,   485,   494,   489,   500,   152,
     388,   388,   248,   510,   514,   521,   463,   464,   437,   522,
     523,   121,   531,   540,   542,   543,   368,   550,   121,   121,
     562,   698,   567,   579,   581,   569,   578,   615,   367,   367,
     571,   539,   580,   622,   635,   589,   121,   607,   560,   587,
     152,   152,   608,   613,   627,   722,   634,   643,   353,   553,
     591,   645,   652,   399,   403,   647,   659,   558,   660,   663,
     673,   734,   664,   675,   665,   740,   667,   676,   412,   741,
     678,   121,   388,   384,   385,   679,   680,   683,   513,   684,
     701,   584,   388,   388,   586,   749,   689,   706,   524,   527,
     691,   692,   121,   695,   710,   713,   712,   609,   714,   725,
      29,    30,   386,   723,   742,   724,   727,   763,   729,   765,
      35,   730,   735,   433,   744,   745,   771,  -138,   754,   755,
     759,   750,   757,   758,   762,   764,   368,   766,   772,   121,
     776,   777,   785,   781,   368,   782,   784,   778,   416,   403,
     310,   786,   311,   468,   417,   677,   709,   541,   625,   367,
     720,   696,   760,   674,   387,    62,    63,    64,    65,    66,
     590,   152,   662,   383,   648,   610,   552,   273,   582,   732,
     264,   248,   583,     0,   530,     0,     0,   310,     0,   311,
     668,     0,     0,   388,     0,     0,     0,   690,     0,   626,
       0,     0,     0,     0,     0,   388,     0,   388,     0,     0,
       0,   639,  -155,   640,     0,     0,     0,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,     0,
       0,   592,     0,     0,   506,     0,     0,     0,   593,   594,
     595,   596,   597,   598,   599,     0,     0,     0,     0,   715,
       0,     0,     0,     0,     0,   528,   738,   399,     0,     0,
     403,     0,   403,  -338,  -338,     0,     0,     0,     0,     0,
     283,     0,   733,     0,     0,   368,   368,   644,     0,     0,
     284,     0,   285,   286,     0,   287,   288,   289,   756,   403,
       0,     0,     0,     0,   779,     0,   563,   566,     0,     0,
       0,     0,   388,     0,   388,   388,     0,     0,   702,     0,
     704,   705,     0,     0,   399,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   388,     0,   290,
       0,     0,   388,   726,     0,     0,   388,     0,   728,     0,
       0,     0,   731,     0,     0,  -155,   292,   293,     0,   624,
       0,   388,   294,   295,     0,     0,   303,   743,   296,     0,
       0,  -338,  -338,     5,     6,     7,     8,     9,   388,     0,
     403,   388,    10,     0,   751,     0,  -158,   753,     0,     0,
       0,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,     0,     0,     0,   368,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,   566,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,  -338,  -338,    29,
      30,    31,    32,    33,     0,    34,     0,     0,     0,    35,
      36,    37,    38,     0,    39,     0,    40,     0,    41,     0,
       0,    42,     0,     0,     0,    43,    44,    45,     0,    46,
      47,     0,    48,    49,    50,     0,     0,     0,    51,    52,
      53,     0,    54,    55,    56,    57,    58,    59,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     5,
       6,     7,     8,     9,     0,    67,     0,     0,    10,     0,
      68,     0,    69,    70,     0,    71,    72,    73,    74,  -158,
       0,     0,     0,     0,     0,     0,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,     0,     0,    29,    30,    31,    32,    33,
       0,    34,  -338,  -338,     0,    35,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,     0,    46,    47,     0,    48,    49,
      50,     0,     0,     0,    51,    52,    53,     0,    54,    55,
      56,   413,    58,    59,     0,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     5,     6,     7,     8,     9,
       0,    67,     0,     0,    10,     0,    68,     0,    69,    70,
       0,    71,    72,    73,    74,     0,     0,     0,   515,     0,
       0,     0,     0,     0,     0,   258,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,     0,
       0,    29,    30,    31,    32,    33,     0,    34,     0,   283,
       0,    35,    36,    37,    38,     0,    39,     0,    40,   284,
      41,   285,   286,    42,   287,   288,   289,    43,    44,     0,
       0,    46,    47,     0,    48,    49,    50,     0,     0,     0,
       0,     0,    53,     0,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     5,     6,     7,     8,     9,     0,    67,   290,     0,
      10,     0,    68,     0,    69,    70,     0,    71,    72,    73,
      74,     0,     0,     0,   559,   292,   293,     0,     0,     0,
       0,   294,   295,     0,     0,     0,   304,   296,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,     0,     0,    29,    30,    31,
      32,    33,     0,    34,     0,     0,     0,    35,    36,    37,
      38,     0,    39,     0,    40,     0,    41,     0,     0,    42,
       0,     0,     0,    43,    44,     0,     0,    46,    47,     0,
      48,    49,    50,     0,     0,     0,     0,     0,    53,     0,
      54,    55,    56,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     5,     6,     7,
       8,     9,     0,    67,     0,     0,    10,     0,    68,     0,
      69,    70,     0,    71,    72,    73,    74,     0,     0,     0,
     717,     0,     0,     0,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
       0,     0,     0,    29,    30,    31,    32,    33,     0,    34,
    -338,  -338,     0,    35,    36,    37,    38,     0,    39,     0,
      40,     0,    41,     0,     0,    42,     0,     0,     0,    43,
      44,     0,     0,    46,    47,     0,    48,    49,    50,     0,
       0,   -51,     0,     0,    53,     0,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     5,     6,     7,     8,     9,     0,    67,
       0,     0,    10,     0,    68,     0,    69,    70,     0,    71,
      72,    73,    74,     0,     0,     0,   737,  -353,  -353,  -353,
    -353,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,     0,     0,    29,
      30,    31,    32,    33,     0,    34,     0,     0,     0,    35,
      36,    37,    38,     0,    39,     0,    40,     0,    41,     0,
       0,    42,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,    50,     0,     0,     0,     0,     0,
      53,     0,    54,    55,    56,     0,     0,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     5,
       6,     7,     8,     9,     0,    67,     0,     0,    10,     0,
      68,     0,    69,    70,     0,    71,    72,    73,    74,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,     0,     0,    29,    30,    31,    32,    33,
       0,    34,     0,     0,     0,    35,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
      50,     0,     0,     0,     0,     0,    53,     0,    54,    55,
      56,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     5,     6,     7,     8,     9,
       0,    67,     0,     0,    10,     0,    68,     0,    69,    70,
       0,    71,    72,    73,    74,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,     0,   183,   184,
     185,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,    35,     0,     0,   186,     0,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
       0,     0,     0,     0,     0,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     5,     6,     7,     8,     9,     0,    67,     0,     0,
      10,     0,    68,     0,   145,     0,     0,    71,    72,    73,
      74,  -353,  -353,  -353,  -353,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,   183,   184,   185,     0,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,    35,   588,   186,
       0,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   208,     0,     0,     0,     0,     0,     0,
       0,    55,    56,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     5,     6,     7,
       8,     9,     0,    67,     0,     0,    10,     0,    68,     0,
     147,     0,     0,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,   183,
     184,   185,     0,    29,    30,    31,    32,    33,   418,     0,
       0,     0,     0,    35,     0,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
       0,     0,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     5,     6,     7,     8,     9,     0,    67,
       0,     0,    10,     0,    68,     0,   150,     0,     0,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,   183,   184,   185,     0,    29,
      30,    31,    32,    33,   442,     0,     0,     0,     0,    35,
       0,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,   208,     0,     0,     0,     0,
       0,     0,     0,    55,    56,     0,     0,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     5,
       6,     7,     8,     9,     0,    67,     0,     0,    10,     0,
      68,   238,     0,     0,     0,    71,    72,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,   279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,   183,   184,   185,     0,    29,    30,    31,    32,    33,
     462,     0,     0,     0,     0,    35,     0,   186,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,     0,     0,     0,     0,     0,     0,     0,    55,
      56,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     5,     6,     7,     8,     9,
       0,    67,     0,     0,    10,     0,    68,     0,     0,     0,
       0,    71,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,   338,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,   183,   184,   185,
       0,    29,    30,    31,    32,    33,   482,     0,     0,     0,
       0,    35,     0,   186,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,     0,     0,
       0,     0,     0,     0,     0,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     5,     6,     7,     8,     9,     0,    67,     0,     0,
      10,     0,    68,     0,     0,     0,     0,    71,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,   364,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,   183,   184,   185,     0,    29,    30,    31,
      32,    33,   549,     0,     0,     0,     0,    35,     0,   186,
       0,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   208,     0,     0,     0,     0,     0,     0,
       0,    55,    56,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     5,     6,     7,
       8,     9,     0,    67,     0,     0,    10,     0,    68,     0,
       0,     0,     0,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,   475,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,   183,
     184,   185,     0,    29,    30,    31,    32,    33,   614,     0,
       0,     0,     0,    35,     0,   186,   492,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
       0,     0,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     5,     6,     7,     8,     9,     0,    67,
       0,     0,    10,     0,    68,     0,     0,     0,     0,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,   477,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,   183,   184,   185,     0,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,    35,
       0,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,   208,     0,     0,     0,     0,
       0,     0,     0,    55,    56,     0,     0,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     5,
       6,     7,     8,     9,     0,    67,     0,     0,    10,     0,
      68,     0,     0,     0,     0,    71,    72,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,   504,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,   184,   185,     0,     0,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,    35,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,     0,     0,     0,     0,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     5,     6,     7,     8,     9,
       0,    67,     0,     0,    10,     0,    68,     0,     0,     0,
       0,    71,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,   585,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,     0,   185,     0,
       0,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,    35,   186,     0,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     5,     6,     7,     8,     9,     0,    67,     0,     0,
      10,     0,    68,     0,     0,     0,     0,    71,    72,    73,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,     0,     0,     0,     0,    29,    30,    31,
      32,    33,     0,     0,     0,     0,   186,    35,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,     0,     0,     0,     0,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     5,     6,     7,
       8,     9,     0,    67,     0,     0,    10,     0,    68,     0,
       0,     0,     0,    71,    72,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,   183,
     184,   185,     0,    29,    30,    31,   410,    33,     0,     0,
       0,     0,     0,    35,     0,   186,   669,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
       0,     0,     0,     0,     0,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,    67,
     183,   184,   185,     0,    68,     0,     0,     0,     0,    71,
      72,    73,    74,     0,     0,     0,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,     0,     0,     0,     0,   183,   184,   185,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   186,   670,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,   208,   183,   184,   185,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   186,     0,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,   183,   184,   185,
       0,     0,     0,   209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   186,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,   183,   184,
     185,     0,     0,     0,     0,     0,     0,     0,   253,     0,
       0,     0,     0,     0,   186,     0,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,   183,
     184,   185,     0,     0,     0,     0,     0,     0,     0,   254,
       0,     0,     0,     0,     0,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
     183,   184,   185,     0,     0,     0,     0,     0,     0,     0,
     260,     0,     0,     0,     0,     0,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,   183,   184,   185,     0,     0,     0,     0,     0,     0,
     298,     0,     0,     0,     0,     0,     0,   186,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,   183,   184,   185,     0,     0,     0,     0,     0,
       0,   356,     0,     0,     0,     0,     0,     0,   186,     0,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,   183,   184,   185,     0,     0,     0,     0,
       0,     0,   362,     0,     0,     0,     0,     0,     0,   186,
       0,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   208,   183,   184,   185,     0,     0,     0,
       0,     0,     0,   363,     0,     0,     0,     0,     0,     0,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,   183,   184,   185,     0,     0,
       0,     0,     0,     0,   378,     0,     0,     0,     0,     0,
       0,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,   208,   183,   184,   185,     0,
       0,     0,     0,     0,     0,   451,     0,     0,     0,     0,
       0,     0,   186,     0,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,   183,   184,   185,
       0,     0,     0,     0,     0,     0,   619,     0,     0,     0,
       0,     0,     0,   186,     0,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   736,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   747,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   534,
     208,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208
};

static const yytype_int16 yycheck[] =
{
      23,    24,    26,    26,     4,   361,   452,     8,   182,     8,
      26,    26,   351,     8,     8,     8,    71,    71,    73,    73,
     359,    26,   208,    26,     8,     5,     6,     8,     8,     9,
      10,    11,    12,    13,    14,     8,    16,    17,    18,    19,
      20,    21,    22,   364,    31,    25,    73,     8,     8,     8,
     139,   140,    61,     8,    46,     0,    36,    59,    60,   233,
     234,    97,   140,    43,    44,   140,    46,   122,    48,   105,
     106,   107,   108,   109,   110,    66,    67,   259,     0,     9,
      10,    11,   140,    61,    71,    61,    73,    61,    68,   143,
     145,   145,   142,   143,    99,    25,   140,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   145,    49,
      71,    71,    73,    73,   104,    63,   142,   132,   143,    73,
      73,   140,   112,    71,   143,    73,    71,   160,    71,   139,
      71,   142,   140,   142,   167,   168,   169,   142,   142,   142,
     142,   490,   491,   133,   475,   135,   477,   141,   145,   116,
     141,   141,   142,   140,   144,   143,   140,   143,   141,   143,
      71,    71,    73,    73,   140,   621,   116,   182,   352,   182,
     141,   141,   141,   504,   208,   208,   141,   361,   123,    79,
     123,   121,   172,   143,   145,   145,   176,    71,    61,    73,
      73,   145,   145,   208,   184,   208,   141,   145,   519,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   233,   234,
     233,   234,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   145,   145,   432,   227,   228,   241,
     140,    92,    93,    94,   140,   278,   279,   120,   569,   615,
     571,   241,   242,    61,   585,   245,    93,    94,    23,    24,
     293,   145,   611,    71,    31,    73,    74,    31,    76,    77,
      78,   140,   305,   263,    45,    46,    47,    71,    49,    73,
      74,    46,    92,    93,    94,   140,   652,    93,    94,   143,
     300,    66,    67,   144,    23,    24,   311,    66,    67,    68,
     140,   140,   292,    61,   140,   338,    73,   144,    71,    73,
     502,   139,   120,    71,   140,    73,    74,   120,    76,    77,
      78,   140,   312,   515,   314,   315,   316,   317,   136,   137,
     138,   364,    49,   120,   144,   143,   144,   352,   144,   352,
     139,   149,   139,   139,   268,   140,   361,    31,   361,   351,
     142,    42,    43,    44,    45,    46,    47,   359,    49,   392,
     143,   351,   120,    98,    92,    93,    94,   559,   142,   359,
     105,   106,   107,   108,   109,   110,   111,   142,    79,   137,
     138,    92,    93,    94,    13,   143,   144,   141,   146,   422,
     140,   149,    66,    67,    68,   160,   144,   118,   432,   432,
      82,   142,   167,   168,   169,    72,    73,    74,     8,   144,
      90,    71,    71,     8,   404,   141,   406,   432,    73,   432,
     142,   141,   141,    71,   118,   140,   140,    26,   141,     8,
     140,   615,    90,   149,    90,    13,   446,   470,   144,   472,
     139,    13,   475,   140,   477,   140,   436,   449,   458,   142,
      71,    61,   485,   140,   144,   119,   141,   143,   141,   449,
     384,   385,   452,   453,    71,   140,   384,   385,   652,   101,
      71,   504,    13,   141,   143,     8,   241,   140,   511,   512,
     142,   673,    13,   121,     8,   142,   140,   120,   490,   491,
     142,   481,   141,   121,     8,   142,   529,   141,   508,   149,
     490,   491,   141,   149,    89,   697,   141,   144,   498,   499,
     543,    71,   120,   278,   279,    97,   142,   507,    83,   141,
     143,   713,   141,    73,   142,   717,   142,    13,   293,   721,
     121,   564,   456,    42,    43,    13,    73,    71,   456,   141,
      13,   531,   466,   467,   534,   737,   140,    13,   466,   467,
     142,   141,   585,   142,    13,    26,   140,   547,    68,    13,
      69,    70,    71,   144,    13,    73,    73,   759,    73,   761,
      79,    71,   142,   338,   141,    13,   768,    68,   140,    26,
     143,    87,    85,   142,   142,   141,   351,   144,   101,   622,
     144,   140,   784,    73,   359,   141,   143,   774,   300,   364,
     615,   144,   615,   392,   300,   638,   682,   485,   565,   611,
     694,   668,   754,   635,   123,   124,   125,   126,   127,   128,
     542,   611,   622,   266,   604,   548,   498,   392,   526,   711,
     160,   621,   529,    -1,   472,    -1,    -1,   652,    -1,   652,
     630,    -1,    -1,   567,    -1,    -1,    -1,   657,    -1,   567,
      -1,    -1,    -1,    -1,    -1,   579,    -1,   581,    -1,    -1,
      -1,   579,     8,   581,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    98,    -1,    -1,   449,    -1,    -1,    -1,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,    -1,   689,
      -1,    -1,    -1,    -1,    -1,   470,   716,   472,    -1,    -1,
     475,    -1,   477,    59,    60,    -1,    -1,    -1,    -1,    -1,
      61,    -1,   712,    -1,    -1,   490,   491,   144,    -1,    -1,
      71,    -1,    73,    74,    -1,    76,    77,    78,   748,   504,
      -1,    -1,    -1,    -1,   777,    -1,   511,   512,    -1,    -1,
      -1,    -1,   676,    -1,   678,   679,    -1,    -1,   676,    -1,
     678,   679,    -1,    -1,   529,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   701,    -1,   120,
      -1,    -1,   706,   701,    -1,    -1,   710,    -1,   706,    -1,
      -1,    -1,   710,    -1,    -1,   141,   137,   138,    -1,   564,
      -1,   725,   143,   144,    -1,    -1,   147,   725,   149,    -1,
      -1,    59,    60,     3,     4,     5,     6,     7,   742,    -1,
     585,   745,    12,    -1,   742,    -1,     8,   745,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,   611,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,   622,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    59,    60,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    -1,    99,
     100,    -1,   102,   103,   104,    -1,    -1,    -1,   108,   109,
     110,    -1,   112,   113,   114,   115,   116,   117,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,    -1,    -1,    12,    -1,
     140,    -1,   142,   143,    -1,   145,   146,   147,   148,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    59,    60,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    -1,    99,   100,    -1,   102,   103,
     104,    -1,    -1,    -1,   108,   109,   110,    -1,   112,   113,
     114,   115,   116,   117,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,    -1,    -1,    12,    -1,   140,    -1,   142,   143,
      -1,   145,   146,   147,   148,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    61,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    71,
      88,    73,    74,    91,    76,    77,    78,    95,    96,    -1,
      -1,    99,   100,    -1,   102,   103,   104,    -1,    -1,    -1,
      -1,    -1,   110,    -1,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,   120,    -1,
      12,    -1,   140,    -1,   142,   143,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    26,   137,   138,    -1,    -1,    -1,
      -1,   143,   144,    -1,    -1,    -1,   148,   149,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    -1,    -1,    99,   100,    -1,
     102,   103,   104,    -1,    -1,    -1,    -1,    -1,   110,    -1,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,    -1,    -1,    12,    -1,   140,    -1,
     142,   143,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    75,
      59,    60,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    -1,    -1,    99,   100,    -1,   102,   103,   104,    -1,
      -1,    90,    -1,    -1,   110,    -1,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
      -1,    -1,    12,    -1,   140,    -1,   142,   143,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    26,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    -1,    -1,    99,
     100,    -1,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
     110,    -1,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,    -1,    -1,    12,    -1,
     140,    -1,   142,   143,    -1,   145,   146,   147,   148,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    -1,    -1,    99,   100,    -1,   102,   103,
     104,    -1,    -1,    -1,    -1,    -1,   110,    -1,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,    -1,    -1,    12,    -1,   140,    -1,   142,   143,
      -1,   145,   146,   147,   148,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    -1,     9,    10,
      11,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,    -1,    -1,
      12,    -1,   140,    -1,   142,    -1,    -1,   145,   146,   147,
     148,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,     9,    10,    11,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,   149,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,    -1,    -1,    12,    -1,   140,    -1,
     142,    -1,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,     9,
      10,    11,    -1,    69,    70,    71,    72,    73,   144,    -1,
      -1,    -1,    -1,    79,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
      -1,    -1,    12,    -1,   140,    -1,   142,    -1,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,     9,    10,    11,    -1,    69,
      70,    71,    72,    73,   144,    -1,    -1,    -1,    -1,    79,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,    -1,    -1,    12,    -1,
     140,   141,    -1,    -1,    -1,   145,   146,   147,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,     9,    10,    11,    -1,    69,    70,    71,    72,    73,
     144,    -1,    -1,    -1,    -1,    79,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,    -1,    -1,    12,    -1,   140,    -1,    -1,    -1,
      -1,   145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,     9,    10,    11,
      -1,    69,    70,    71,    72,    73,   144,    -1,    -1,    -1,
      -1,    79,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,    -1,    -1,
      12,    -1,   140,    -1,    -1,    -1,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,     9,    10,    11,    -1,    69,    70,    71,
      72,    73,   144,    -1,    -1,    -1,    -1,    79,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,    -1,    -1,    12,    -1,   140,    -1,
      -1,    -1,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,     9,
      10,    11,    -1,    69,    70,    71,    72,    73,   144,    -1,
      -1,    -1,    -1,    79,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
      -1,    -1,    12,    -1,   140,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,     9,    10,    11,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,    -1,    -1,    12,    -1,
     140,    -1,    -1,    -1,    -1,   145,   146,   147,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    10,    11,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,    -1,    -1,    12,    -1,   140,    -1,    -1,    -1,
      -1,   145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    -1,    11,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,    -1,    -1,
      12,    -1,   140,    -1,    -1,    -1,    -1,   145,   146,   147,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    25,    79,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,    -1,    -1,    12,    -1,   140,    -1,
      -1,    -1,    -1,   145,   146,   147,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,     9,
      10,    11,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,   135,
       9,    10,    11,    -1,   140,    -1,    -1,    -1,    -1,   145,
     146,   147,   148,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   142,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   121,
      49,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   151,   152,     0,   153,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    69,
      70,    71,    72,    73,    75,    79,    80,    81,    82,    84,
      86,    88,    91,    95,    96,    97,    99,   100,   102,   103,
     104,   108,   109,   110,   112,   113,   114,   115,   116,   117,
     122,   123,   124,   125,   126,   127,   128,   135,   140,   142,
     143,   145,   146,   147,   148,   154,   158,   159,   192,   193,
     195,   198,   201,   203,   249,   260,   265,   274,   277,   281,
     282,   285,   287,   295,   296,   297,   298,   299,   300,   306,
     316,   319,   281,   281,   140,   281,   281,   281,   281,   281,
     281,   281,   259,   281,   281,   281,   281,   281,   281,   281,
      71,   265,   285,   287,   285,   281,    71,   265,   266,   267,
     298,   299,   306,   140,   272,   140,   140,   245,   281,   166,
     140,   140,   140,   178,   140,   142,   281,   142,   281,   196,
     142,   249,   281,   287,   179,   281,    79,   140,   191,    73,
     145,   230,   231,   116,   116,    73,   232,   140,   140,   140,
     140,   140,   140,   312,   281,   155,   143,   312,   312,   312,
      71,    71,   139,     9,    10,    11,    25,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    49,   142,
      59,    60,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   286,   140,   120,    61,   143,   145,
     299,   281,   281,   139,   139,   252,   120,   299,   141,   281,
     281,   261,     8,   142,   158,   164,   246,   247,   281,   249,
     287,   140,   281,   142,   142,    31,   194,   142,   142,   143,
     142,    79,   142,   143,   282,   287,     8,   142,    13,     8,
     142,   189,   190,   287,   287,   317,   287,   141,   250,    31,
     281,   310,   311,    61,    71,    73,    74,    76,    77,    78,
     120,   136,   137,   138,   143,   144,   149,   313,   141,   144,
     156,   281,   146,   147,   148,   118,   202,   200,    71,   295,
     299,   306,   255,   281,   256,   257,   253,   254,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   266,    31,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   264,   288,   281,   301,   281,   141,    71,   295,   140,
     273,   268,   141,   141,    31,   228,   229,   249,   287,   281,
      82,   281,   142,     8,   175,   172,    71,   212,   141,    71,
     155,   141,   281,   231,    42,    43,    71,   123,   274,   275,
     276,    73,     8,   141,     8,   141,   141,   142,   122,   287,
     307,   308,   283,   287,   121,   141,     8,   279,    61,   120,
      72,   281,   287,   115,   157,   158,   192,   193,   144,    71,
     265,   199,   118,   204,   140,   140,   299,   281,   281,   281,
     281,   281,    63,   287,   228,    71,   143,   295,   302,   304,
     305,   149,   144,   228,   302,    26,   160,   283,   141,     8,
     140,   141,   168,   248,    90,    90,    13,     8,   141,   171,
     197,   144,   144,   275,   275,   139,   140,    13,   190,   142,
     318,   140,     8,   141,   284,    31,   281,    31,   281,   314,
      71,    61,   144,   144,   140,   119,   205,   206,   265,   143,
     262,   263,    26,   266,   141,   281,   303,   289,    61,   143,
     141,   269,   162,   158,    31,   249,   287,   167,   165,   246,
     281,   176,   173,   275,    71,    26,   158,   211,    26,   143,
     213,   140,   101,    71,   275,   278,   280,   275,   287,   309,
     308,    13,   283,   283,   121,    71,    73,    74,   315,   281,
     141,   206,   143,     8,   233,   228,   228,   258,   251,   144,
     140,   293,   301,   281,   270,   155,   161,   283,   281,    26,
     158,   218,   142,   287,    31,   208,   287,    13,   155,   142,
     214,   142,   214,    71,   123,   225,   226,   227,   140,   121,
     141,     8,   279,   307,   281,    31,   281,   149,   149,   142,
     233,   265,    98,   105,   106,   107,   108,   109,   110,   111,
     144,   234,   239,   240,   241,   242,   244,   141,   141,   281,
     273,   294,   290,   149,   144,   120,   271,   163,   219,   141,
     155,   169,   121,   207,   287,   207,   275,    89,   214,    92,
      93,    94,   214,   144,   141,     8,    31,    73,   180,   275,
     275,   141,   283,   144,   144,    71,   235,    97,   242,     8,
     142,   228,   120,   291,   302,   221,    66,    67,   223,   142,
      83,   246,   208,   141,   141,   142,    92,   142,   281,    26,
     142,   217,   144,   143,   227,    73,    13,   265,   121,    13,
      73,   243,   236,    71,   141,   302,    66,    67,   224,   140,
     158,   142,   141,   177,   174,   142,   217,   216,   155,    31,
      73,    13,   275,   181,   275,   275,    13,     8,   142,   194,
      13,   292,   140,    26,    68,   281,   170,    26,   158,   210,
     210,   215,   155,   144,    73,    13,   275,    73,   275,    73,
      71,   275,   293,   281,   155,   142,   141,    26,   158,   209,
     155,   155,    13,   275,   141,    13,   237,   141,   220,   155,
      87,   275,   182,   275,   140,    26,   158,    85,   142,   143,
     225,   222,   142,   155,   141,   155,   144,   142,   143,   238,
     183,   155,   101,   184,   185,   186,   144,   140,   186,   265,
     187,    73,   141,   188,   143,   155,   144
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

    { HANDLE_INTERACTIVE(); }
    break;

  case 7:

    { zend_do_early_binding(TSRMLS_C); }
    break;

  case 8:

    { zend_do_early_binding(TSRMLS_C); }
    break;

  case 9:

    { REGISTER_MAIN_LONG_CONSTANT("__COMPILER_HALT_OFFSET__", zend_get_scanned_file_offset(TSRMLS_C), CONST_CS); YYACCEPT; }
    break;

  case 10:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 11:

    { HANDLE_INTERACTIVE(); }
    break;

  case 16:

    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 17:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 19:

    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 20:

    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 21:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 22:

    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 23:

    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 24:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 25:

    { (yyvsp[(1) - (2)]).u.opline_num = get_next_op_number(CG(active_op_array));  }
    break;

  case 26:

    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 27:

    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 28:

    { (yyvsp[(1) - (1)]).u.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 29:

    { (yyvsp[(5) - (5)]).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 30:

    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 31:

    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 32:

    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 33:

    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 34:

    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 35:

    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 36:

    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 37:

    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 38:

    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 39:

    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 40:

    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 41:

    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 42:

    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 43:

    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 47:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 48:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 49:

    { zend_error(E_COMPILE_ERROR,"use: Not yet supported. Please use include_once() or require_once()");  zval_dtor(&(yyvsp[(2) - (3)]).u.constant); }
    break;

  case 51:

    { zend_do_foreach_begin(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]), 1 TSRMLS_CC); }
    break;

  case 52:

    { zend_do_foreach_fetch(&(yyvsp[(1) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 53:

    { zend_do_foreach_cont(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]), &(yyvsp[(8) - (9)]) TSRMLS_CC); }
    break;

  case 54:

    { zend_do_foreach_end(&(yyvsp[(1) - (11)]), &(yyvsp[(5) - (11)]) TSRMLS_CC); }
    break;

  case 55:

    { zend_do_foreach_begin(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 56:

    { zend_do_foreach_fetch(&(yyvsp[(1) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 57:

    { zend_check_writable_variable(&(yyvsp[(7) - (9)])); zend_do_foreach_cont(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]), &(yyvsp[(8) - (9)]) TSRMLS_CC); }
    break;

  case 58:

    { zend_do_foreach_end(&(yyvsp[(1) - (11)]), &(yyvsp[(5) - (11)]) TSRMLS_CC); }
    break;

  case 59:

    { (yyvsp[(1) - (1)]).u.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 60:

    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 62:

    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 63:

    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 64:

    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 65:

    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), 1 TSRMLS_CC); }
    break;

  case 66:

    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 67:

    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 68:

    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 69:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 70:

    { (yyval).u.opline_num = -1; }
    break;

  case 71:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 72:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 73:

    { (yyval).u.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 74:

    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), 0 TSRMLS_CC); }
    break;

  case 75:

    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 78:

    { zend_do_end_variable_parse(BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 79:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 80:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 81:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 82:

    { zend_do_ticks(TSRMLS_C); }
    break;

  case 83:

    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 84:

    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 85:

    { (yyvsp[(1) - (1)]).u.opline_num = CG(zend_lineno); }
    break;

  case 86:

    { zend_do_begin_function_declaration(&(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).op_type, NULL TSRMLS_CC); }
    break;

  case 87:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 88:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 89:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]) TSRMLS_CC); }
    break;

  case 90:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 91:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 92:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = 0; }
    break;

  case 93:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 94:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_FINAL_CLASS; }
    break;

  case 95:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 96:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 97:

    { (yyval).u.opline_num = CG(zend_lineno); (yyval).u.EA.type = ZEND_ACC_INTERFACE; }
    break;

  case 102:

    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 103:

    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 104:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 105:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 106:

    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 107:

    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).u.EA.type |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 114:

    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 115:

    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 116:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 117:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 118:

    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 119:

    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 120:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 121:

    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 122:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 123:

    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 124:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 130:

    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 131:

    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 133:

    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 134:

    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 141:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; (yyval).u.constant.value.lval=1; (yyval).u.constant.type=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 142:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; (yyval).u.constant.value.lval=1; (yyval).u.constant.type=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 1 TSRMLS_CC); }
    break;

  case 143:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; (yyval).u.constant.value.lval=1; (yyval).u.constant.type=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 144:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); (yyval).op_type = IS_CONST; (yyval).u.constant.value.lval=1; (yyval).u.constant.type=IS_LONG; INIT_PZVAL(&(yyval).u.constant); zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 145:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (4)]); (yyval).u.constant.value.lval++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 146:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (5)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (5)]); (yyval).u.constant.value.lval++; zend_do_receive_arg(ZEND_RECV, &tmp, &(yyval), NULL, &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), 1 TSRMLS_CC); }
    break;

  case 147:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(5) - (7)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (7)]); (yyval).u.constant.value.lval++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), &(yyvsp[(5) - (7)]), 1 TSRMLS_CC); }
    break;

  case 148:

    { znode tmp;  fetch_simple_variable(&tmp, &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (6)]); (yyval).u.constant.value.lval++; zend_do_receive_arg(ZEND_RECV_INIT, &tmp, &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(4) - (6)]), 0 TSRMLS_CC); }
    break;

  case 149:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 150:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 151:

    { (yyval).op_type = IS_CONST; (yyval).u.constant.type=IS_NULL;}
    break;

  case 152:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 153:

    { (yyval).u.constant.value.lval = 0; }
    break;

  case 154:

    { (yyval).u.constant.value.lval = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, (yyval).u.constant.value.lval TSRMLS_CC); }
    break;

  case 155:

    { (yyval).u.constant.value.lval = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, (yyval).u.constant.value.lval TSRMLS_CC); }
    break;

  case 156:

    { (yyval).u.constant.value.lval = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, (yyval).u.constant.value.lval TSRMLS_CC); }
    break;

  case 157:

    { (yyval).u.constant.value.lval=(yyvsp[(1) - (3)]).u.constant.value.lval+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, (yyval).u.constant.value.lval TSRMLS_CC); }
    break;

  case 158:

    { (yyval).u.constant.value.lval=(yyvsp[(1) - (3)]).u.constant.value.lval+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, (yyval).u.constant.value.lval TSRMLS_CC); }
    break;

  case 159:

    { (yyval).u.constant.value.lval=(yyvsp[(1) - (4)]).u.constant.value.lval+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, (yyval).u.constant.value.lval TSRMLS_CC); }
    break;

  case 160:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 161:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 162:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 163:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 164:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 165:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 166:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 167:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 168:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 171:

    { CG(access_type) = (yyvsp[(1) - (1)]).u.constant.value.lval; }
    break;

  case 174:

    { (yyvsp[(2) - (2)]).u.opline_num = CG(zend_lineno); }
    break;

  case 175:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]), 1, (yyvsp[(4) - (5)]).op_type, &(yyvsp[(1) - (5)]) TSRMLS_CC); }
    break;

  case 176:

    { zend_do_abstract_method(&(yyvsp[(5) - (10)]), &(yyvsp[(1) - (10)]), &(yyvsp[(10) - (10)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (10)]) TSRMLS_CC); }
    break;

  case 177:

    { (yyval).u.constant.value.lval = ZEND_ACC_ABSTRACT; }
    break;

  case 178:

    { (yyval).u.constant.value.lval = 0;	}
    break;

  case 179:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 180:

    { (yyval).u.constant.value.lval = ZEND_ACC_PUBLIC; }
    break;

  case 181:

    { (yyval).u.constant.value.lval = ZEND_ACC_PUBLIC; }
    break;

  case 182:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!((yyval).u.constant.value.lval & ZEND_ACC_PPP_MASK)) { (yyval).u.constant.value.lval |= ZEND_ACC_PUBLIC; } }
    break;

  case 183:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 184:

    { (yyval).u.constant.value.lval = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 185:

    { (yyval).u.constant.value.lval = ZEND_ACC_PUBLIC; }
    break;

  case 186:

    { (yyval).u.constant.value.lval = ZEND_ACC_PROTECTED; }
    break;

  case 187:

    { (yyval).u.constant.value.lval = ZEND_ACC_PRIVATE; }
    break;

  case 188:

    { (yyval).u.constant.value.lval = ZEND_ACC_STATIC; }
    break;

  case 189:

    { (yyval).u.constant.value.lval = ZEND_ACC_ABSTRACT; }
    break;

  case 190:

    { (yyval).u.constant.value.lval = ZEND_ACC_FINAL; }
    break;

  case 191:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 192:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 193:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 194:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 195:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 196:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 197:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 198:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 199:

    { (yyval).op_type = IS_CONST;  (yyval).u.constant.type = IS_BOOL;  (yyval).u.constant.value.lval = 1; }
    break;

  case 200:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 201:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 202:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 203:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 204:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 205:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 206:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 207:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 208:

    { zend_error(E_STRICT, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 209:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 210:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 211:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 212:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 213:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 214:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 215:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 216:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 217:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 218:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 219:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 220:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 221:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 222:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 223:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 224:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 225:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 226:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 227:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 228:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 229:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 230:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 231:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 232:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 233:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 234:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 235:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 236:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 237:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 238:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 239:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 240:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 241:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 242:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 243:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 244:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 245:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 246:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 247:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 248:

    { (yyvsp[(1) - (2)]).u.constant.value.lval=0; (yyvsp[(1) - (2)]).u.constant.type=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 249:

    { (yyvsp[(1) - (2)]).u.constant.value.lval=0; (yyvsp[(1) - (2)]).u.constant.type=IS_LONG; (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 250:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 251:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 252:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 253:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 254:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 255:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 256:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 257:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 258:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 259:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 260:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 261:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 262:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 263:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 264:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 265:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 266:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 267:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 268:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 269:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 270:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 271:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 272:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 273:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 274:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 275:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 276:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 277:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 278:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 279:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 280:

    { (yyvsp[(2) - (2)]).u.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 281:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 282:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 283:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 284:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 285:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 286:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 287:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 288:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 289:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 290:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 291:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 292:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 293:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 294:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 297:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); zend_do_declare_implicit_property(TSRMLS_C); }
    break;

  case 298:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 299:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 300:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 301:

    { (yyval).u.constant.value.lval=0; }
    break;

  case 302:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 303:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 304:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 305:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 306:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 307:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 308:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 309:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 310:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 311:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 312:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT TSRMLS_CC); }
    break;

  case 313:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 314:

    { zval minus_one;  minus_one.type = IS_LONG; minus_one.value.lval = -1;  mul_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant, &minus_one TSRMLS_CC);  (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 315:

    { (yyval) = (yyvsp[(3) - (4)]); (yyval).u.constant.type = IS_CONSTANT_ARRAY; }
    break;

  case 316:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 317:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT TSRMLS_CC); }
    break;

  case 318:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT TSRMLS_CC); }
    break;

  case 319:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 320:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 321:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 322:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 323:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 324:

    { (yyval) = (yyvsp[(2) - (3)]); zend_do_end_heredoc(TSRMLS_C); }
    break;

  case 325:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 326:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 329:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 330:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 331:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 332:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 333:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 334:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 335:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 336:

    { zend_do_end_variable_parse(BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 337:

    { zend_check_writable_variable(&(yyvsp[(1) - (2)])); }
    break;

  case 338:

    { zend_do_end_variable_parse(BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 339:

    { zend_check_writable_variable(&(yyvsp[(1) - (2)])); }
    break;

  case 340:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 341:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 342:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = (yyvsp[(1) - (7)]).u.EA.type | ((yyvsp[(7) - (7)]).u.EA.type ? (yyvsp[(7) - (7)]).u.EA.type : (yyvsp[(6) - (7)]).u.EA.type); }
    break;

  case 343:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 344:

    { (yyval).u.EA.type = (yyvsp[(2) - (2)]).u.EA.type; }
    break;

  case 345:

    { (yyval).u.EA.type = 0; }
    break;

  case 346:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 347:

    { (yyval).u.EA.type = (yyvsp[(4) - (4)]).u.EA.type; }
    break;

  case 348:

    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 349:

    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);
			  zend_do_push_object(&(yyval) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_METHOD_CALL; }
    break;

  case 350:

    { zend_do_declare_implicit_property(TSRMLS_C); (yyval).u.EA.type = ZEND_PARSED_MEMBER; }
    break;

  case 351:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 352:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 353:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 354:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 355:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 356:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 357:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).u.EA.type = ZEND_PARSED_VARIABLE; }
    break;

  case 358:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).u.EA.type = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 359:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 360:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 361:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 362:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 363:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 364:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 365:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 366:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 367:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 368:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 369:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 370:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 371:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 372:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 373:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 374:

    { (yyval).u.constant.value.lval = 1; }
    break;

  case 375:

    { (yyval).u.constant.value.lval++; }
    break;

  case 378:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 379:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 380:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 381:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 382:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 383:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 384:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 385:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 386:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 387:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 388:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 389:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 390:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 391:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 392:

    { zend_do_end_variable_parse(BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 393:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 394:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 395:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 396:

    { zend_do_add_char(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 397:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 398:

    { (yyvsp[(2) - (2)]).u.constant.value.lval = (long) '['; zend_do_add_char(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 399:

    { (yyvsp[(2) - (2)]).u.constant.value.lval = (long) ']'; zend_do_add_char(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 400:

    { (yyvsp[(2) - (2)]).u.constant.value.lval = (long) '{'; zend_do_add_char(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 401:

    { (yyvsp[(2) - (2)]).u.constant.value.lval = (long) '}'; zend_do_add_char(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 402:

    { znode tmp;  (yyvsp[(2) - (2)]).u.constant.value.lval = (long) '-';  zend_do_add_char(&tmp, &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC);  (yyvsp[(2) - (2)]).u.constant.value.lval = (long) '>'; zend_do_add_char(&(yyval), &tmp, &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 403:

    { zend_do_init_string(&(yyval) TSRMLS_CC); }
    break;

  case 404:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 405:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 406:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 407:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 408:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 409:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 410:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 411:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 412:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 413:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 414:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 415:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 416:

    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 417:

    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 418:

    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 419:

    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 420:

    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 421:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 422:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 423:

    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 424:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT TSRMLS_CC); }
    break;


/* Line 1267 of yacc.c.  */

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */



/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yylval          zendlval
#define yychar          zendchar
#define yydebug         zenddebug
#define yynerrs         zendnerrs


/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2014 Zend Technologies Ltd. (http://www.zend.com) |
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

/* $Id$ */

/*
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangling elseif/else ambiguity. Solved by shift.
 *
 */


#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE znode




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

/* "%code requires" blocks.  */


#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif




/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_YIELD = 267,
     T_POW_EQUAL = 268,
     T_SR_EQUAL = 269,
     T_SL_EQUAL = 270,
     T_XOR_EQUAL = 271,
     T_OR_EQUAL = 272,
     T_AND_EQUAL = 273,
     T_MOD_EQUAL = 274,
     T_CONCAT_EQUAL = 275,
     T_DIV_EQUAL = 276,
     T_MUL_EQUAL = 277,
     T_MINUS_EQUAL = 278,
     T_PLUS_EQUAL = 279,
     T_BOOLEAN_OR = 280,
     T_BOOLEAN_AND = 281,
     T_IS_NOT_IDENTICAL = 282,
     T_IS_IDENTICAL = 283,
     T_IS_NOT_EQUAL = 284,
     T_IS_EQUAL = 285,
     T_IS_GREATER_OR_EQUAL = 286,
     T_IS_SMALLER_OR_EQUAL = 287,
     T_SR = 288,
     T_SL = 289,
     T_INSTANCEOF = 290,
     T_UNSET_CAST = 291,
     T_BOOL_CAST = 292,
     T_OBJECT_CAST = 293,
     T_ARRAY_CAST = 294,
     T_STRING_CAST = 295,
     T_DOUBLE_CAST = 296,
     T_INT_CAST = 297,
     T_DEC = 298,
     T_INC = 299,
     T_POW = 300,
     T_CLONE = 301,
     T_NEW = 302,
     T_EXIT = 303,
     T_IF = 304,
     T_ELSEIF = 305,
     T_ELSE = 306,
     T_ENDIF = 307,
     T_LNUMBER = 308,
     T_DNUMBER = 309,
     T_STRING = 310,
     T_STRING_VARNAME = 311,
     T_VARIABLE = 312,
     T_NUM_STRING = 313,
     T_INLINE_HTML = 314,
     T_CHARACTER = 315,
     T_BAD_CHARACTER = 316,
     T_ENCAPSED_AND_WHITESPACE = 317,
     T_CONSTANT_ENCAPSED_STRING = 318,
     T_ECHO = 319,
     T_DO = 320,
     T_WHILE = 321,
     T_ENDWHILE = 322,
     T_FOR = 323,
     T_ENDFOR = 324,
     T_FOREACH = 325,
     T_ENDFOREACH = 326,
     T_DECLARE = 327,
     T_ENDDECLARE = 328,
     T_AS = 329,
     T_SWITCH = 330,
     T_ENDSWITCH = 331,
     T_CASE = 332,
     T_DEFAULT = 333,
     T_BREAK = 334,
     T_CONTINUE = 335,
     T_GOTO = 336,
     T_FUNCTION = 337,
     T_CONST = 338,
     T_RETURN = 339,
     T_TRY = 340,
     T_CATCH = 341,
     T_FINALLY = 342,
     T_THROW = 343,
     T_USE = 344,
     T_INSTEADOF = 345,
     T_GLOBAL = 346,
     T_PUBLIC = 347,
     T_PROTECTED = 348,
     T_PRIVATE = 349,
     T_FINAL = 350,
     T_ABSTRACT = 351,
     T_STATIC = 352,
     T_VAR = 353,
     T_UNSET = 354,
     T_ISSET = 355,
     T_EMPTY = 356,
     T_HALT_COMPILER = 357,
     T_CLASS = 358,
     T_TRAIT = 359,
     T_INTERFACE = 360,
     T_EXTENDS = 361,
     T_IMPLEMENTS = 362,
     T_OBJECT_OPERATOR = 363,
     T_DOUBLE_ARROW = 364,
     T_LIST = 365,
     T_ARRAY = 366,
     T_CALLABLE = 367,
     T_CLASS_C = 368,
     T_TRAIT_C = 369,
     T_METHOD_C = 370,
     T_FUNC_C = 371,
     T_LINE = 372,
     T_FILE = 373,
     T_COMMENT = 374,
     T_DOC_COMMENT = 375,
     T_OPEN_TAG = 376,
     T_OPEN_TAG_WITH_ECHO = 377,
     T_CLOSE_TAG = 378,
     T_WHITESPACE = 379,
     T_START_HEREDOC = 380,
     T_END_HEREDOC = 381,
     T_DOLLAR_OPEN_CURLY_BRACES = 382,
     T_CURLY_OPEN = 383,
     T_PAAMAYIM_NEKUDOTAYIM = 384,
     T_NAMESPACE = 385,
     T_NS_C = 386,
     T_DIR = 387,
     T_NS_SEPARATOR = 388,
     T_ELLIPSIS = 389
   };
#endif
/* Tokens.  */
#define END 0
#define T_REQUIRE_ONCE 258
#define T_REQUIRE 259
#define T_EVAL 260
#define T_INCLUDE_ONCE 261
#define T_INCLUDE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_YIELD 267
#define T_POW_EQUAL 268
#define T_SR_EQUAL 269
#define T_SL_EQUAL 270
#define T_XOR_EQUAL 271
#define T_OR_EQUAL 272
#define T_AND_EQUAL 273
#define T_MOD_EQUAL 274
#define T_CONCAT_EQUAL 275
#define T_DIV_EQUAL 276
#define T_MUL_EQUAL 277
#define T_MINUS_EQUAL 278
#define T_PLUS_EQUAL 279
#define T_BOOLEAN_OR 280
#define T_BOOLEAN_AND 281
#define T_IS_NOT_IDENTICAL 282
#define T_IS_IDENTICAL 283
#define T_IS_NOT_EQUAL 284
#define T_IS_EQUAL 285
#define T_IS_GREATER_OR_EQUAL 286
#define T_IS_SMALLER_OR_EQUAL 287
#define T_SR 288
#define T_SL 289
#define T_INSTANCEOF 290
#define T_UNSET_CAST 291
#define T_BOOL_CAST 292
#define T_OBJECT_CAST 293
#define T_ARRAY_CAST 294
#define T_STRING_CAST 295
#define T_DOUBLE_CAST 296
#define T_INT_CAST 297
#define T_DEC 298
#define T_INC 299
#define T_POW 300
#define T_CLONE 301
#define T_NEW 302
#define T_EXIT 303
#define T_IF 304
#define T_ELSEIF 305
#define T_ELSE 306
#define T_ENDIF 307
#define T_LNUMBER 308
#define T_DNUMBER 309
#define T_STRING 310
#define T_STRING_VARNAME 311
#define T_VARIABLE 312
#define T_NUM_STRING 313
#define T_INLINE_HTML 314
#define T_CHARACTER 315
#define T_BAD_CHARACTER 316
#define T_ENCAPSED_AND_WHITESPACE 317
#define T_CONSTANT_ENCAPSED_STRING 318
#define T_ECHO 319
#define T_DO 320
#define T_WHILE 321
#define T_ENDWHILE 322
#define T_FOR 323
#define T_ENDFOR 324
#define T_FOREACH 325
#define T_ENDFOREACH 326
#define T_DECLARE 327
#define T_ENDDECLARE 328
#define T_AS 329
#define T_SWITCH 330
#define T_ENDSWITCH 331
#define T_CASE 332
#define T_DEFAULT 333
#define T_BREAK 334
#define T_CONTINUE 335
#define T_GOTO 336
#define T_FUNCTION 337
#define T_CONST 338
#define T_RETURN 339
#define T_TRY 340
#define T_CATCH 341
#define T_FINALLY 342
#define T_THROW 343
#define T_USE 344
#define T_INSTEADOF 345
#define T_GLOBAL 346
#define T_PUBLIC 347
#define T_PROTECTED 348
#define T_PRIVATE 349
#define T_FINAL 350
#define T_ABSTRACT 351
#define T_STATIC 352
#define T_VAR 353
#define T_UNSET 354
#define T_ISSET 355
#define T_EMPTY 356
#define T_HALT_COMPILER 357
#define T_CLASS 358
#define T_TRAIT 359
#define T_INTERFACE 360
#define T_EXTENDS 361
#define T_IMPLEMENTS 362
#define T_OBJECT_OPERATOR 363
#define T_DOUBLE_ARROW 364
#define T_LIST 365
#define T_ARRAY 366
#define T_CALLABLE 367
#define T_CLASS_C 368
#define T_TRAIT_C 369
#define T_METHOD_C 370
#define T_FUNC_C 371
#define T_LINE 372
#define T_FILE 373
#define T_COMMENT 374
#define T_DOC_COMMENT 375
#define T_OPEN_TAG 376
#define T_OPEN_TAG_WITH_ECHO 377
#define T_CLOSE_TAG 378
#define T_WHITESPACE 379
#define T_START_HEREDOC 380
#define T_END_HEREDOC 381
#define T_DOLLAR_OPEN_CURLY_BRACES 382
#define T_CURLY_OPEN 383
#define T_PAAMAYIM_NEKUDOTAYIM 384
#define T_NAMESPACE 385
#define T_NS_C 386
#define T_DIR 387
#define T_NS_SEPARATOR 388
#define T_ELLIPSIS 389




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  227
/* YYNRULES -- Number of rules.  */
#define YYNRULES  592
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1093

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   389

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,   162,     2,   159,    49,    33,     2,
     154,   155,    47,    44,     8,    45,    46,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    28,   156,
      38,    14,    39,    27,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,   160,    32,     2,   161,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   157,    31,   158,    52,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      29,    30,    34,    35,    36,    37,    40,    41,    42,    43,
      51,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    56,
      61,    64,    68,    70,    72,    76,    79,    84,    88,    90,
      92,    96,    99,   104,   108,   110,   112,   116,   119,   124,
     130,   135,   136,   140,   141,   143,   145,   147,   152,   154,
     157,   161,   162,   163,   171,   172,   173,   184,   185,   186,
     192,   193,   194,   202,   203,   204,   205,   218,   219,   224,
     227,   231,   234,   238,   241,   245,   249,   252,   256,   260,
     264,   266,   269,   275,   276,   277,   288,   289,   290,   301,
     302,   309,   311,   312,   313,   322,   326,   330,   331,   332,
     333,   334,   335,   349,   350,   351,   357,   359,   360,   362,
     365,   366,   367,   378,   380,   384,   386,   388,   390,   391,
     393,   394,   396,   397,   408,   409,   418,   419,   427,   429,
     432,   434,   437,   438,   441,   443,   444,   447,   448,   451,
     453,   457,   458,   461,   463,   466,   467,   473,   475,   480,
     482,   487,   489,   494,   498,   504,   508,   513,   518,   524,
     525,   526,   533,   534,   540,   542,   544,   546,   551,   552,
     553,   559,   560,   561,   568,   569,   572,   573,   577,   579,
     580,   582,   586,   591,   598,   599,   601,   603,   605,   608,
     612,   616,   618,   622,   624,   626,   629,   632,   636,   638,
     640,   643,   648,   652,   658,   660,   664,   667,   668,   669,
     674,   677,   679,   680,   690,   694,   696,   700,   702,   706,
     707,   709,   711,   714,   717,   720,   724,   726,   730,   732,
     734,   738,   743,   747,   748,   750,   752,   756,   758,   760,
     761,   763,   765,   768,   770,   772,   774,   776,   778,   780,
     784,   790,   792,   796,   802,   807,   811,   813,   814,   816,
     817,   822,   824,   827,   829,   834,   838,   839,   843,   845,
     847,   848,   849,   852,   853,   858,   859,   867,   871,   876,
     877,   885,   888,   892,   896,   900,   904,   908,   912,   916,
     920,   924,   928,   932,   936,   939,   942,   945,   948,   949,
     954,   955,   960,   961,   966,   967,   972,   976,   980,   984,
     988,   992,   996,  1000,  1004,  1008,  1012,  1016,  1020,  1024,
    1027,  1030,  1033,  1036,  1040,  1044,  1048,  1052,  1056,  1060,
    1064,  1068,  1072,  1074,  1076,  1077,  1083,  1084,  1085,  1093,
    1094,  1100,  1102,  1105,  1108,  1111,  1114,  1117,  1120,  1123,
    1126,  1127,  1131,  1133,  1135,  1137,  1141,  1144,  1146,  1147,
    1158,  1159,  1171,  1174,  1177,  1182,  1187,  1192,  1197,  1202,
    1207,  1211,  1213,  1214,  1219,  1223,  1228,  1230,  1233,  1234,
    1238,  1239,  1245,  1246,  1251,  1252,  1258,  1259,  1265,  1266,
    1272,  1273,  1279,  1280,  1284,  1286,  1288,  1292,  1295,  1297,
    1301,  1304,  1306,  1308,  1309,  1310,  1317,  1319,  1322,  1323,
    1326,  1327,  1330,  1332,  1333,  1335,  1337,  1338,  1340,  1342,
    1344,  1346,  1348,  1350,  1352,  1354,  1356,  1358,  1360,  1364,
    1367,  1371,  1373,  1375,  1377,  1379,  1383,  1386,  1391,  1395,
    1397,  1399,  1401,  1406,  1410,  1414,  1418,  1422,  1426,  1430,
    1433,  1436,  1440,  1444,  1448,  1452,  1456,  1460,  1464,  1468,
    1472,  1476,  1480,  1484,  1488,  1492,  1496,  1500,  1504,  1508,
    1512,  1517,  1523,  1526,  1529,  1533,  1535,  1537,  1539,  1541,
    1545,  1548,  1550,  1554,  1558,  1560,  1561,  1564,  1565,  1567,
    1573,  1577,  1581,  1583,  1585,  1587,  1591,  1595,  1597,  1599,
    1601,  1602,  1603,  1611,  1613,  1616,  1617,  1618,  1623,  1628,
    1633,  1634,  1637,  1639,  1641,  1642,  1644,  1647,  1651,  1655,
    1657,  1662,  1663,  1669,  1671,  1673,  1675,  1677,  1680,  1682,
    1687,  1692,  1694,  1696,  1701,  1702,  1704,  1706,  1707,  1710,
    1715,  1720,  1722,  1724,  1728,  1730,  1733,  1737,  1739,  1741,
    1742,  1748,  1749,  1750,  1753,  1759,  1763,  1767,  1769,  1776,
    1781,  1786,  1789,  1792,  1795,  1797,  1800,  1802,  1803,  1809,
    1813,  1817,  1824,  1828,  1830,  1832,  1834,  1839,  1844,  1849,
    1852,  1855,  1860,  1863,  1866,  1868,  1869,  1874,  1876,  1878,
    1882,  1886,  1890
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     164,     0,    -1,   165,    -1,    -1,   165,   166,   168,    -1,
      -1,    74,    -1,   167,   152,    74,    -1,   181,    -1,   216,
      -1,   217,    -1,   121,   154,   155,   156,    -1,   149,   167,
     156,    -1,    -1,   149,   167,   157,   169,   165,   158,    -1,
      -1,   149,   157,   170,   165,   158,    -1,   108,   171,   156,
      -1,   108,   101,   173,   156,    -1,   108,   102,   175,   156,
      -1,   177,   156,    -1,   171,     8,   172,    -1,   172,    -1,
     167,    -1,   167,    93,    74,    -1,   152,   167,    -1,   152,
     167,    93,    74,    -1,   173,     8,   174,    -1,   174,    -1,
     167,    -1,   167,    93,    74,    -1,   152,   167,    -1,   152,
     167,    93,    74,    -1,   175,     8,   176,    -1,   176,    -1,
     167,    -1,   167,    93,    74,    -1,   152,   167,    -1,   152,
     167,    93,    74,    -1,   177,     8,    74,    14,   337,    -1,
     102,    74,    14,   337,    -1,    -1,   178,   179,   180,    -1,
      -1,   181,    -1,   216,    -1,   217,    -1,   121,   154,   155,
     156,    -1,   182,    -1,    74,    28,    -1,   157,   178,   158,
      -1,    -1,    -1,    68,   345,   183,   181,   184,   244,   248,
      -1,    -1,    -1,    68,   345,    28,   185,   178,   186,   246,
     249,    71,   156,    -1,    -1,    -1,    85,   187,   345,   188,
     243,    -1,    -1,    -1,    84,   189,   181,    85,   190,   345,
     156,    -1,    -1,    -1,    -1,    87,   154,   284,   156,   191,
     284,   156,   192,   284,   155,   193,   234,    -1,    -1,    94,
     345,   194,   238,    -1,    98,   156,    -1,    98,   344,   156,
      -1,    99,   156,    -1,    99,   344,   156,    -1,   103,   156,
      -1,   103,   295,   156,    -1,   103,   349,   156,    -1,   309,
     156,    -1,   110,   257,   156,    -1,   116,   259,   156,    -1,
      83,   283,   156,    -1,    78,    -1,   344,   156,    -1,   118,
     154,   214,   155,   156,    -1,    -1,    -1,    89,   154,   349,
      93,   195,   232,   231,   155,   196,   235,    -1,    -1,    -1,
      89,   154,   295,    93,   197,   232,   231,   155,   198,   235,
      -1,    -1,    91,   199,   154,   237,   155,   236,    -1,   156,
      -1,    -1,    -1,   104,   200,   157,   178,   158,   202,   201,
     207,    -1,   107,   344,   156,    -1,   100,    74,   156,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   154,   203,   325,   204,
      76,   155,   205,   157,   178,   158,   206,   209,    -1,    -1,
      -1,   106,   208,   157,   178,   158,    -1,   210,    -1,    -1,
     211,    -1,   210,   211,    -1,    -1,    -1,   105,   154,   325,
     212,    76,   155,   213,   157,   178,   158,    -1,   215,    -1,
     214,     8,   215,    -1,   349,    -1,   220,    -1,   222,    -1,
      -1,    33,    -1,    -1,   153,    -1,    -1,   312,   218,    74,
     221,   154,   250,   155,   157,   178,   158,    -1,    -1,   225,
      74,   226,   223,   229,   157,   260,   158,    -1,    -1,   227,
      74,   224,   228,   157,   260,   158,    -1,   122,    -1,   115,
     122,    -1,   123,    -1,   114,   122,    -1,    -1,   125,   325,
      -1,   124,    -1,    -1,   125,   230,    -1,    -1,   126,   230,
      -1,   325,    -1,   230,     8,   325,    -1,    -1,   128,   232,
      -1,   349,    -1,    33,   349,    -1,    -1,   129,   154,   233,
     374,   155,    -1,   181,    -1,    28,   178,    88,   156,    -1,
     181,    -1,    28,   178,    90,   156,    -1,   181,    -1,    28,
     178,    92,   156,    -1,    74,    14,   337,    -1,   237,     8,
      74,    14,   337,    -1,   157,   239,   158,    -1,   157,   156,
     239,   158,    -1,    28,   239,    95,   156,    -1,    28,   156,
     239,    95,   156,    -1,    -1,    -1,   239,    96,   344,   242,
     240,   178,    -1,    -1,   239,    97,   242,   241,   178,    -1,
      28,    -1,   156,    -1,   181,    -1,    28,   178,    86,   156,
      -1,    -1,    -1,   244,    69,   345,   245,   181,    -1,    -1,
      -1,   246,    69,   345,    28,   247,   178,    -1,    -1,    70,
     181,    -1,    -1,    70,    28,   178,    -1,   251,    -1,    -1,
     252,    -1,   251,     8,   252,    -1,   253,   218,   219,    76,
      -1,   253,   218,   219,    76,    14,   337,    -1,    -1,   130,
      -1,   131,    -1,   325,    -1,   154,   155,    -1,   154,   255,
     155,    -1,   154,   309,   155,    -1,   256,    -1,   255,     8,
     256,    -1,   295,    -1,   349,    -1,    33,   347,    -1,   153,
     344,    -1,   257,     8,   258,    -1,   258,    -1,    76,    -1,
     159,   346,    -1,   159,   157,   344,   158,    -1,   259,     8,
      76,    -1,   259,     8,    76,    14,   337,    -1,    76,    -1,
      76,    14,   337,    -1,   260,   261,    -1,    -1,    -1,   277,
     262,   281,   156,    -1,   282,   156,    -1,   264,    -1,    -1,
     278,   312,   218,    74,   263,   154,   250,   155,   276,    -1,
     108,   265,   266,    -1,   325,    -1,   265,     8,   325,    -1,
     156,    -1,   157,   267,   158,    -1,    -1,   268,    -1,   269,
      -1,   268,   269,    -1,   270,   156,    -1,   274,   156,    -1,
     273,   109,   271,    -1,   325,    -1,   271,     8,   325,    -1,
      74,    -1,   273,    -1,   325,   148,    74,    -1,   272,    93,
     275,    74,    -1,   272,    93,   280,    -1,    -1,   280,    -1,
     156,    -1,   157,   178,   158,    -1,   279,    -1,   117,    -1,
      -1,   279,    -1,   280,    -1,   279,   280,    -1,   111,    -1,
     112,    -1,   113,    -1,   116,    -1,   115,    -1,   114,    -1,
     281,     8,    76,    -1,   281,     8,    76,    14,   337,    -1,
      76,    -1,    76,    14,   337,    -1,   282,     8,    74,    14,
     337,    -1,   102,    74,    14,   337,    -1,   283,     8,   344,
      -1,   344,    -1,    -1,   285,    -1,    -1,   285,     8,   286,
     344,    -1,   344,    -1,   287,   353,    -1,   353,    -1,   288,
      64,   368,   160,    -1,    64,   368,   160,    -1,    -1,   288,
     290,   287,    -1,   288,    -1,   287,    -1,    -1,    -1,   292,
     289,    -1,    -1,    66,   326,   294,   334,    -1,    -1,   129,
     154,   296,   374,   155,    14,   344,    -1,   349,    14,   344,
      -1,   349,    14,    33,   349,    -1,    -1,   349,    14,    33,
      66,   326,   297,   334,    -1,    65,   344,    -1,   349,    26,
     344,    -1,   349,    25,   344,    -1,   349,    24,   344,    -1,
     349,    15,   344,    -1,   349,    23,   344,    -1,   349,    22,
     344,    -1,   349,    21,   344,    -1,   349,    20,   344,    -1,
     349,    19,   344,    -1,   349,    18,   344,    -1,   349,    17,
     344,    -1,   349,    16,   344,    -1,   348,    62,    -1,    62,
     348,    -1,   348,    61,    -1,    61,   348,    -1,    -1,   344,
      29,   298,   344,    -1,    -1,   344,    30,   299,   344,    -1,
      -1,   344,     9,   300,   344,    -1,    -1,   344,    11,   301,
     344,    -1,   344,    10,   344,    -1,   344,    31,   344,    -1,
     344,    33,   344,    -1,   344,    32,   344,    -1,   344,    46,
     344,    -1,   344,    44,   344,    -1,   344,    45,   344,    -1,
     344,    47,   344,    -1,   344,    63,   344,    -1,   344,    48,
     344,    -1,   344,    49,   344,    -1,   344,    43,   344,    -1,
     344,    42,   344,    -1,    44,   344,    -1,    45,   344,    -1,
      50,   344,    -1,    52,   344,    -1,   344,    35,   344,    -1,
     344,    34,   344,    -1,   344,    37,   344,    -1,   344,    36,
     344,    -1,   344,    38,   344,    -1,   344,    41,   344,    -1,
     344,    39,   344,    -1,   344,    40,   344,    -1,   344,    51,
     326,    -1,   345,    -1,   293,    -1,    -1,   154,   293,   155,
     302,   291,    -1,    -1,    -1,   344,    27,   303,   344,    28,
     304,   344,    -1,    -1,   344,    27,    28,   305,   344,    -1,
     383,    -1,    60,   344,    -1,    59,   344,    -1,    58,   344,
      -1,    57,   344,    -1,    56,   344,    -1,    55,   344,    -1,
      54,   344,    -1,    67,   332,    -1,    -1,    53,   306,   344,
      -1,   340,    -1,   310,    -1,   311,    -1,   161,   333,   161,
      -1,    12,   344,    -1,    13,    -1,    -1,   312,   218,   307,
     154,   250,   155,   313,   157,   178,   158,    -1,    -1,   116,
     312,   218,   308,   154,   250,   155,   313,   157,   178,   158,
      -1,    13,   295,    -1,    13,   349,    -1,    13,   344,   128,
     295,    -1,    13,   344,   128,   349,    -1,   311,    64,   368,
     160,    -1,   310,    64,   368,   160,    -1,    82,    64,   368,
     160,    -1,   130,   154,   377,   155,    -1,    64,   377,   160,
      -1,   101,    -1,    -1,   108,   154,   314,   155,    -1,   314,
       8,    76,    -1,   314,     8,    33,    76,    -1,    76,    -1,
      33,    76,    -1,    -1,   167,   316,   254,    -1,    -1,   149,
     152,   167,   317,   254,    -1,    -1,   152,   167,   318,   254,
      -1,    -1,   324,   148,   372,   319,   254,    -1,    -1,   324,
     148,   359,   320,   254,    -1,    -1,   361,   148,   372,   321,
     254,    -1,    -1,   361,   148,   359,   322,   254,    -1,    -1,
     359,   323,   254,    -1,   116,    -1,   167,    -1,   149,   152,
     167,    -1,   152,   167,    -1,   167,    -1,   149,   152,   167,
      -1,   152,   167,    -1,   324,    -1,   327,    -1,    -1,    -1,
     365,   127,   328,   369,   329,   330,    -1,   365,    -1,   330,
     331,    -1,    -1,   127,   369,    -1,    -1,   154,   155,    -1,
     345,    -1,    -1,    81,    -1,   379,    -1,    -1,   254,    -1,
      72,    -1,    73,    -1,    82,    -1,   136,    -1,   137,    -1,
     151,    -1,   133,    -1,   134,    -1,   135,    -1,   150,    -1,
     144,    81,   145,    -1,   144,   145,    -1,   324,   148,    74,
      -1,   338,    -1,   335,    -1,   388,    -1,   167,    -1,   149,
     152,   167,    -1,   152,   167,    -1,   130,   154,   341,   155,
      -1,    64,   341,   160,    -1,   336,    -1,   132,    -1,   339,
      -1,   338,    64,   338,   160,    -1,   338,    44,   338,    -1,
     338,    45,   338,    -1,   338,    47,   338,    -1,   338,    63,
     338,    -1,   338,    48,   338,    -1,   338,    49,   338,    -1,
      50,   338,    -1,    52,   338,    -1,   338,    31,   338,    -1,
     338,    33,   338,    -1,   338,    32,   338,    -1,   338,    43,
     338,    -1,   338,    42,   338,    -1,   338,    46,   338,    -1,
     338,    10,   338,    -1,   338,    11,   338,    -1,   338,     9,
     338,    -1,   338,    30,   338,    -1,   338,    29,   338,    -1,
     338,    35,   338,    -1,   338,    34,   338,    -1,   338,    37,
     338,    -1,   338,    36,   338,    -1,   338,    38,   338,    -1,
     338,    39,   338,    -1,   338,    41,   338,    -1,   338,    40,
     338,    -1,   338,    27,    28,   338,    -1,   338,    27,   338,
      28,   338,    -1,    44,   338,    -1,    45,   338,    -1,   154,
     338,   155,    -1,    75,    -1,   389,    -1,   387,    -1,   167,
      -1,   149,   152,   167,    -1,   152,   167,    -1,   335,    -1,
     162,   379,   162,    -1,   144,   379,   145,    -1,   132,    -1,
      -1,   343,   342,    -1,    -1,     8,    -1,   343,     8,   338,
     128,   338,    -1,   343,     8,   338,    -1,   338,   128,   338,
      -1,   338,    -1,   346,    -1,   295,    -1,   154,   344,   155,
      -1,   154,   309,   155,    -1,   349,    -1,   349,    -1,   349,
      -1,    -1,    -1,   364,   127,   350,   369,   351,   358,   352,
      -1,   364,    -1,   352,   353,    -1,    -1,    -1,   127,   369,
     354,   358,    -1,   355,    64,   368,   160,    -1,   356,    64,
     368,   160,    -1,    -1,   357,   254,    -1,   356,    -1,   355,
      -1,    -1,   366,    -1,   373,   366,    -1,   324,   148,   359,
      -1,   361,   148,   359,    -1,   366,    -1,   362,    64,   368,
     160,    -1,    -1,   315,   363,    64,   368,   160,    -1,   365,
      -1,   362,    -1,   315,    -1,   366,    -1,   373,   366,    -1,
     360,    -1,   366,    64,   368,   160,    -1,   366,   157,   344,
     158,    -1,   367,    -1,    76,    -1,   159,   157,   344,   158,
      -1,    -1,   344,    -1,   371,    -1,    -1,   359,   370,    -1,
     371,    64,   368,   160,    -1,   371,   157,   344,   158,    -1,
     372,    -1,    74,    -1,   157,   344,   158,    -1,   159,    -1,
     373,   159,    -1,   374,     8,   375,    -1,   375,    -1,   349,
      -1,    -1,   129,   154,   376,   374,   155,    -1,    -1,    -1,
     378,   342,    -1,   378,     8,   344,   128,   344,    -1,   378,
       8,   344,    -1,   344,   128,   344,    -1,   344,    -1,   378,
       8,   344,   128,    33,   347,    -1,   378,     8,    33,   347,
      -1,   344,   128,    33,   347,    -1,    33,   347,    -1,   379,
     380,    -1,   379,    81,    -1,   380,    -1,    81,   380,    -1,
      76,    -1,    -1,    76,    64,   381,   382,   160,    -1,    76,
     127,    74,    -1,   146,   344,   158,    -1,   146,    75,    64,
     344,   160,   158,    -1,   147,   349,   158,    -1,    74,    -1,
      77,    -1,    76,    -1,   119,   154,   384,   155,    -1,   120,
     154,   349,   155,    -1,   120,   154,   295,   155,    -1,     7,
     344,    -1,     6,   344,    -1,     5,   154,   344,   155,    -1,
       4,   344,    -1,     3,   344,    -1,   386,    -1,    -1,   384,
       8,   385,   386,    -1,   349,    -1,   295,    -1,   324,   148,
      74,    -1,   361,   148,    74,    -1,   324,   148,   122,    -1,
     324,   148,   122,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   223,   223,   227,   227,   228,   232,   233,   237,   238,
     239,   240,   241,   242,   242,   244,   244,   246,   247,   248,
     249,   253,   254,   258,   259,   260,   261,   265,   266,   270,
     271,   272,   273,   277,   278,   282,   283,   284,   285,   289,
     290,   294,   294,   295,   300,   301,   302,   303,   308,   309,
     313,   314,   314,   314,   315,   315,   315,   316,   316,   316,
     317,   317,   317,   321,   323,   325,   318,   327,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   343,   344,   342,   347,   348,   346,   350,
     350,   351,   352,   353,   352,   355,   356,   360,   361,   362,
     363,   364,   361,   368,   369,   369,   373,   374,   378,   379,
     383,   383,   383,   387,   388,   392,   396,   400,   404,   405,
     409,   410,   414,   414,   421,   420,   427,   426,   436,   437,
     438,   439,   443,   444,   448,   451,   453,   456,   458,   462,
     463,   467,   468,   472,   473,   474,   474,   478,   479,   484,
     485,   490,   491,   496,   497,   502,   503,   504,   505,   510,
     511,   511,   512,   512,   517,   518,   523,   524,   529,   531,
     531,   535,   537,   537,   541,   543,   547,   549,   554,   555,
     560,   561,   565,   567,   573,   574,   575,   576,   581,   582,
     583,   588,   589,   593,   594,   595,   596,   600,   601,   606,
     607,   608,   613,   614,   615,   616,   622,   623,   628,   628,
     629,   630,   631,   631,   637,   641,   642,   646,   647,   650,
     652,   656,   657,   661,   662,   666,   670,   671,   675,   676,
     680,   684,   685,   689,   690,   694,   695,   699,   700,   704,
     705,   709,   710,   714,   715,   716,   717,   718,   719,   723,
     724,   725,   726,   730,   731,   735,   736,   741,   742,   746,
     746,   747,   751,   752,   756,   757,   761,   761,   762,   763,
     767,   768,   768,   773,   773,   777,   777,   778,   779,   780,
     780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,   792,   793,   794,   795,   796,   797,   798,   798,
     799,   799,   800,   800,   801,   801,   802,   803,   804,   805,
     806,   807,   808,   809,   810,   811,   812,   813,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   825,
     826,   827,   828,   829,   830,   830,   831,   832,   831,   834,
     834,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   845,   846,   847,   848,   849,   850,   851,   852,   852,
     855,   855,   861,   862,   863,   864,   868,   869,   870,   873,
     874,   877,   880,   882,   886,   887,   888,   889,   893,   893,
     895,   895,   897,   897,   899,   899,   901,   901,   903,   903,
     905,   905,   907,   907,   912,   913,   914,   915,   919,   920,
     921,   927,   928,   933,   934,   933,   936,   941,   942,   947,
     951,   952,   953,   957,   958,   959,   964,   965,   970,   971,
     972,   973,   974,   975,   976,   977,   978,   979,   980,   981,
     985,   989,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,
    1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,
    1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,
    1034,  1035,  1036,  1037,  1038,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1057,  1058,  1061,  1063,  1067,
    1068,  1069,  1070,  1074,  1075,  1079,  1080,  1085,  1090,  1095,
    1100,  1101,  1100,  1103,  1107,  1108,  1113,  1113,  1117,  1118,
    1122,  1122,  1127,  1128,  1129,  1133,  1134,  1138,  1139,  1144,
    1148,  1149,  1149,  1154,  1155,  1156,  1161,  1162,  1163,  1167,
    1168,  1169,  1174,  1175,  1179,  1180,  1185,  1186,  1186,  1190,
    1191,  1192,  1196,  1197,  1201,  1202,  1206,  1207,  1212,  1213,
    1213,  1214,  1219,  1220,  1224,  1225,  1226,  1227,  1228,  1229,
    1230,  1231,  1235,  1236,  1237,  1238,  1244,  1245,  1245,  1246,
    1247,  1248,  1249,  1254,  1255,  1256,  1261,  1262,  1263,  1264,
    1265,  1266,  1267,  1268,  1272,  1273,  1273,  1277,  1278,  1282,
    1283,  1287,  1291
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"require (T_REQUIRE)\"",
  "\"eval (T_EVAL)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"include (T_INCLUDE)\"", "','", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "\"yield (T_YIELD)\"", "'='",
  "\"**= (T_POW_EQUAL)\"", "\">>= (T_SR_EQUAL)\"", "\"<<= (T_SL_EQUAL)\"",
  "\"^= (T_XOR_EQUAL)\"", "\"|= (T_OR_EQUAL)\"", "\"&= (T_AND_EQUAL)\"",
  "\"%= (T_MOD_EQUAL)\"", "\".= (T_CONCAT_EQUAL)\"",
  "\"/= (T_DIV_EQUAL)\"", "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"+= (T_PLUS_EQUAL)\"", "'?'", "':'", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"== (T_IS_EQUAL)\"", "'<'", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<= (T_IS_SMALLER_OR_EQUAL)\"",
  "\">> (T_SR)\"", "\"<< (T_SL)\"", "'+'", "'-'", "'.'", "'*'", "'/'",
  "'%'", "'!'", "\"instanceof (T_INSTANCEOF)\"", "'~'", "'@'",
  "\"(unset) (T_UNSET_CAST)\"", "\"(bool) (T_BOOL_CAST)\"",
  "\"(object) (T_OBJECT_CAST)\"", "\"(array) (T_ARRAY_CAST)\"",
  "\"(string) (T_STRING_CAST)\"", "\"(double) (T_DOUBLE_CAST)\"",
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"",
  "\"** (T_POW)\"", "'['", "\"clone (T_CLONE)\"", "\"new (T_NEW)\"",
  "\"exit (T_EXIT)\"", "\"if (T_IF)\"", "\"elseif (T_ELSEIF)\"",
  "\"else (T_ELSE)\"", "\"endif (T_ENDIF)\"",
  "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"variable (T_VARIABLE)\"",
  "\"number (T_NUM_STRING)\"", "T_INLINE_HTML", "T_CHARACTER",
  "T_BAD_CHARACTER",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"finally (T_FINALLY)\"", "\"throw (T_THROW)\"", "\"use (T_USE)\"",
  "\"insteadof (T_INSTEADOF)\"", "\"global (T_GLOBAL)\"",
  "\"public (T_PUBLIC)\"", "\"protected (T_PROTECTED)\"",
  "\"private (T_PRIVATE)\"", "\"final (T_FINAL)\"",
  "\"abstract (T_ABSTRACT)\"", "\"static (T_STATIC)\"", "\"var (T_VAR)\"",
  "\"unset (T_UNSET)\"", "\"isset (T_ISSET)\"", "\"empty (T_EMPTY)\"",
  "\"__halt_compiler (T_HALT_COMPILER)\"", "\"class (T_CLASS)\"",
  "\"trait (T_TRAIT)\"", "\"interface (T_INTERFACE)\"",
  "\"extends (T_EXTENDS)\"", "\"implements (T_IMPLEMENTS)\"",
  "\"-> (T_OBJECT_OPERATOR)\"", "\"=> (T_DOUBLE_ARROW)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"__DIR__ (T_DIR)\"",
  "\"\\\\ (T_NS_SEPARATOR)\"", "\"... (T_ELLIPSIS)\"", "'('", "')'", "';'",
  "'{'", "'}'", "'$'", "']'", "'`'", "'\"'", "$accept", "start",
  "top_statement_list", "$@1", "namespace_name", "top_statement", "$@2",
  "$@3", "use_declarations", "use_declaration",
  "use_function_declarations", "use_function_declaration",
  "use_const_declarations", "use_const_declaration",
  "constant_declaration", "inner_statement_list", "$@4", "inner_statement",
  "statement", "unticked_statement", "$@5", "$@6", "$@7", "$@8", "$@9",
  "@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18",
  "$@19", "$@20", "$@21", "$@22", "$@23", "catch_statement", "$@24",
  "$@25", "$@26", "$@27", "finally_statement", "$@28",
  "additional_catches", "non_empty_additional_catches", "additional_catch",
  "@29", "$@30", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "is_variadic", "unticked_function_declaration_statement",
  "$@31", "unticked_class_declaration_statement", "$@32", "$@33",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "$@34", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@35", "$@36", "case_separator",
  "while_statement", "elseif_list", "$@37", "new_elseif_list", "$@38",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "parameter", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "function_call_parameter", "global_var_list", "global_var",
  "static_var_list", "class_statement_list", "class_statement", "$@39",
  "$@40", "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "$@41",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "$@42", "instance_call", "$@43", "new_expr",
  "$@44", "expr_without_variable", "$@45", "$@46", "$@47", "$@48", "$@49",
  "$@50", "@51", "$@52", "$@53", "$@54", "$@55", "@56", "@57",
  "yield_expr", "combined_scalar_offset", "combined_scalar", "function",
  "lexical_vars", "lexical_var_list", "function_call", "@58", "@59", "@60",
  "@61", "$@62", "$@63", "$@64", "$@65", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@66", "$@67",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_class_constant",
  "static_scalar", "static_scalar_value", "static_operation", "scalar",
  "static_array_pair_list", "possible_comma",
  "non_empty_static_array_pair_list", "expr", "parenthesis_expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@68", "$@69",
  "variable_properties", "variable_property", "$@70",
  "array_method_dereference", "method", "@71", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "$@72",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@73", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@74", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@75",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@76", "isset_variable", "class_constant", "static_class_name_scalar",
  "class_name_scalar", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,   267,    61,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,    63,    58,   280,
     281,   124,    94,    38,   282,   283,   284,   285,    60,    62,
     286,   287,   288,   289,    43,    45,    46,    42,    47,    37,
      33,   290,   126,    64,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,    91,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,    40,    41,    59,   123,   125,    36,
      93,    96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   163,   164,   166,   165,   165,   167,   167,   168,   168,
     168,   168,   168,   169,   168,   170,   168,   168,   168,   168,
     168,   171,   171,   172,   172,   172,   172,   173,   173,   174,
     174,   174,   174,   175,   175,   176,   176,   176,   176,   177,
     177,   179,   178,   178,   180,   180,   180,   180,   181,   181,
     182,   183,   184,   182,   185,   186,   182,   187,   188,   182,
     189,   190,   182,   191,   192,   193,   182,   194,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   195,   196,   182,   197,   198,   182,   199,
     182,   182,   200,   201,   182,   182,   182,   202,   203,   204,
     205,   206,   202,   207,   208,   207,   209,   209,   210,   210,
     212,   213,   211,   214,   214,   215,   216,   217,   218,   218,
     219,   219,   221,   220,   223,   222,   224,   222,   225,   225,
     225,   225,   226,   226,   227,   228,   228,   229,   229,   230,
     230,   231,   231,   232,   232,   233,   232,   234,   234,   235,
     235,   236,   236,   237,   237,   238,   238,   238,   238,   239,
     240,   239,   241,   239,   242,   242,   243,   243,   244,   245,
     244,   246,   247,   246,   248,   248,   249,   249,   250,   250,
     251,   251,   252,   252,   253,   253,   253,   253,   254,   254,
     254,   255,   255,   256,   256,   256,   256,   257,   257,   258,
     258,   258,   259,   259,   259,   259,   260,   260,   262,   261,
     261,   261,   263,   261,   264,   265,   265,   266,   266,   267,
     267,   268,   268,   269,   269,   270,   271,   271,   272,   272,
     273,   274,   274,   275,   275,   276,   276,   277,   277,   278,
     278,   279,   279,   280,   280,   280,   280,   280,   280,   281,
     281,   281,   281,   282,   282,   283,   283,   284,   284,   286,
     285,   285,   287,   287,   288,   288,   290,   289,   289,   289,
     291,   292,   291,   294,   293,   296,   295,   295,   295,   297,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   298,   295,
     299,   295,   300,   295,   301,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   302,   295,   303,   304,   295,   305,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     306,   295,   295,   295,   295,   295,   295,   295,   307,   295,
     308,   295,   309,   309,   309,   309,   310,   310,   310,   311,
     311,   312,   313,   313,   314,   314,   314,   314,   316,   315,
     317,   315,   318,   315,   319,   315,   320,   315,   321,   315,
     322,   315,   323,   315,   324,   324,   324,   324,   325,   325,
     325,   326,   326,   328,   329,   327,   327,   330,   330,   331,
     332,   332,   332,   333,   333,   333,   334,   334,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     336,   337,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   341,   341,   342,   342,   343,
     343,   343,   343,   344,   344,   345,   345,   346,   347,   348,
     350,   351,   349,   349,   352,   352,   354,   353,   355,   355,
     357,   356,   358,   358,   358,   359,   359,   360,   360,   361,
     362,   363,   362,   364,   364,   364,   365,   365,   365,   366,
     366,   366,   367,   367,   368,   368,   369,   370,   369,   371,
     371,   371,   372,   372,   373,   373,   374,   374,   375,   376,
     375,   375,   377,   377,   378,   378,   378,   378,   378,   378,
     378,   378,   379,   379,   379,   379,   380,   381,   380,   380,
     380,   380,   380,   382,   382,   382,   383,   383,   383,   383,
     383,   383,   383,   383,   384,   385,   384,   386,   386,   387,
     387,   388,   389
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     4,     4,
       2,     3,     1,     1,     3,     2,     4,     3,     1,     1,
       3,     2,     4,     3,     1,     1,     3,     2,     4,     5,
       4,     0,     3,     0,     1,     1,     1,     4,     1,     2,
       3,     0,     0,     7,     0,     0,    10,     0,     0,     5,
       0,     0,     7,     0,     0,     0,    12,     0,     4,     2,
       3,     2,     3,     2,     3,     3,     2,     3,     3,     3,
       1,     2,     5,     0,     0,    10,     0,     0,    10,     0,
       6,     1,     0,     0,     8,     3,     3,     0,     0,     0,
       0,     0,    13,     0,     0,     5,     1,     0,     1,     2,
       0,     0,    10,     1,     3,     1,     1,     1,     0,     1,
       0,     1,     0,    10,     0,     8,     0,     7,     1,     2,
       1,     2,     0,     2,     1,     0,     2,     0,     2,     1,
       3,     0,     2,     1,     2,     0,     5,     1,     4,     1,
       4,     1,     4,     3,     5,     3,     4,     4,     5,     0,
       0,     6,     0,     5,     1,     1,     1,     4,     0,     0,
       5,     0,     0,     6,     0,     2,     0,     3,     1,     0,
       1,     3,     4,     6,     0,     1,     1,     1,     2,     3,
       3,     1,     3,     1,     1,     2,     2,     3,     1,     1,
       2,     4,     3,     5,     1,     3,     2,     0,     0,     4,
       2,     1,     0,     9,     3,     1,     3,     1,     3,     0,
       1,     1,     2,     2,     2,     3,     1,     3,     1,     1,
       3,     4,     3,     0,     1,     1,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     3,     5,     4,     3,     1,     0,     1,     0,
       4,     1,     2,     1,     4,     3,     0,     3,     1,     1,
       0,     0,     2,     0,     4,     0,     7,     3,     4,     0,
       7,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     4,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     0,     5,     0,     0,     7,     0,
       5,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       0,     3,     1,     1,     1,     3,     2,     1,     0,    10,
       0,    11,     2,     2,     4,     4,     4,     4,     4,     4,
       3,     1,     0,     4,     3,     4,     1,     2,     0,     3,
       0,     5,     0,     4,     0,     5,     0,     5,     0,     5,
       0,     5,     0,     3,     1,     1,     3,     2,     1,     3,
       2,     1,     1,     0,     0,     6,     1,     2,     0,     2,
       0,     2,     1,     0,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     1,     1,     1,     1,     3,     2,     4,     3,     1,
       1,     1,     4,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     5,     2,     2,     3,     1,     1,     1,     1,     3,
       2,     1,     3,     3,     1,     0,     2,     0,     1,     5,
       3,     3,     1,     1,     1,     3,     3,     1,     1,     1,
       0,     0,     7,     1,     2,     0,     0,     4,     4,     4,
       0,     2,     1,     1,     0,     1,     2,     3,     3,     1,
       4,     0,     5,     1,     1,     1,     1,     2,     1,     4,
       4,     1,     1,     4,     0,     1,     1,     0,     2,     4,
       4,     1,     1,     3,     1,     2,     3,     1,     1,     0,
       5,     0,     0,     2,     5,     3,     3,     1,     6,     4,
       4,     2,     2,     2,     1,     2,     1,     0,     5,     3,
       3,     6,     3,     1,     1,     1,     4,     4,     4,     2,
       2,     4,     2,     2,     1,     0,     4,     1,     1,     3,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,   357,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   552,     0,     0,   410,
       0,   418,   419,     6,   475,   532,    80,   420,     0,    60,
      57,     0,     0,    89,     0,     0,     0,     0,   371,     0,
       0,    92,     0,     0,     0,     0,     0,   394,     0,     0,
       0,     0,   128,   130,   134,     0,     0,   484,   424,   425,
     426,   421,   422,     0,     0,   427,   423,     0,     0,    91,
      43,   544,   413,     0,   478,     4,     0,     8,    48,     9,
      10,   116,   117,     0,     0,   333,   494,     0,   353,   354,
     118,   525,     0,   481,   352,     0,   332,   493,     0,   497,
     392,   528,     0,   524,   503,   523,   526,   531,     0,   341,
     477,   476,   357,     6,   394,     0,   118,   583,   582,     0,
     580,   579,   356,   494,     0,   497,   319,   320,   321,   322,
       0,   348,   347,   346,   345,   344,   343,   342,   394,     0,
       0,   378,     0,   297,   499,     0,   295,     0,   557,     0,
     487,   281,     0,     0,   395,   401,   273,   402,     0,   406,
     526,     0,     0,   349,   412,     0,    51,    49,   534,     0,
     256,     0,     0,   257,     0,     0,    67,    69,     0,    71,
       0,     0,     0,    73,   494,     0,   497,     0,     0,     0,
       0,     0,    23,     0,    22,   199,     0,     0,   198,   131,
     129,   204,     0,   118,     0,     0,     0,     0,   275,   552,
     566,     0,   429,     0,     0,     0,   564,     0,    15,     0,
     480,   333,     0,     0,    41,     0,   414,     0,   415,     0,
       0,     0,     0,     0,    20,   132,   126,    76,   534,   534,
     119,   358,     0,     0,   302,     0,   304,   336,   298,   300,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,   296,   294,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   534,
     500,   534,     0,   545,   527,   358,     0,     0,   351,     0,
     382,     0,     0,   561,   498,     0,   370,   488,   553,     0,
     397,     0,   416,     0,   403,   527,   411,    54,     0,   535,
       0,     0,    79,     0,    58,     0,   258,   261,   494,   497,
       0,     0,    70,    72,    96,     0,    74,    75,    43,    95,
       0,    29,     0,    28,     0,    35,     0,    34,    25,     0,
       0,    17,     0,   200,   497,     0,    77,     0,     0,    78,
     360,     0,   113,   115,   494,   497,     0,   584,   494,   497,
       0,   551,     0,   567,     0,   428,   565,   475,     0,     0,
     563,   483,   562,   479,     5,    12,    13,     0,   334,   496,
     495,    50,     0,     0,   355,   482,     7,     0,   379,     0,
       0,   124,   135,     0,     0,   122,     0,   534,   589,   592,
       0,   517,   515,   384,     0,     0,   306,     0,   339,     0,
       0,     0,   307,   309,   308,   324,   323,   326,   325,   327,
     329,   330,   328,   318,   317,   311,   312,   310,   313,   315,
     316,   331,   314,     0,   277,   285,   293,   292,   291,   290,
     289,   288,   287,   286,   284,   283,   282,   393,   590,   518,
     388,     0,     0,     0,     0,   581,   494,   497,   380,   542,
       0,   556,     0,   555,   396,   517,   417,   274,   518,     0,
      43,    52,   368,   255,    61,     0,    63,   259,    86,    83,
       0,     0,   159,   159,    68,     0,     0,     0,     0,   485,
     420,     0,   440,     0,     0,     0,     0,   434,     0,   432,
     439,    40,   431,   441,   433,    41,    31,     0,     0,    18,
      37,     0,     0,    19,     0,    24,    21,     0,   197,   205,
     202,     0,     0,     0,   585,   576,   578,   577,    11,     0,
     548,     0,   547,   369,     0,   569,     0,   570,   572,     0,
       3,     5,   383,   270,     0,    42,    44,    45,    46,   533,
       0,     0,   188,     0,   191,   494,     0,   497,     0,     0,
       0,   398,   133,   137,     0,     0,   367,   366,     0,   184,
       0,     0,     0,     0,   516,   303,   305,     0,     0,   299,
     301,     0,   278,     0,     0,   520,   537,   501,   536,   541,
     529,   530,   560,   559,     0,   404,    41,   168,     0,    43,
     166,    59,   257,     0,     0,     0,     0,     0,     0,   159,
       0,   159,     0,   472,   473,   449,   450,   492,     0,   487,
     485,     0,     0,   436,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,    30,    27,     0,    36,    33,
      26,   201,     0,   184,   114,    82,     0,   549,   551,     0,
     573,   575,   574,     0,     0,   381,    16,     3,   335,     0,
       0,   195,   196,     0,   189,   190,    39,     0,   400,     0,
       0,   136,   139,   207,   184,   185,   186,     0,   178,   180,
     118,   187,   522,   543,   387,   385,   340,   337,   279,   391,
     389,   538,   514,   534,     0,     0,   554,   408,   171,   174,
       0,    41,     0,   260,     0,     0,   141,   143,   141,   153,
       0,    43,   151,    90,     0,     0,     0,     0,     0,   155,
       0,   438,   488,   486,     0,   435,   474,   430,   591,   459,
     457,   458,     0,     0,   461,   460,   451,   453,   452,   463,
     462,   465,   464,   466,   467,   469,   468,   455,   454,   443,
     444,   456,   445,   447,   448,   446,     0,     0,    93,    32,
      38,   203,     0,   586,   551,   546,     0,   568,     0,    14,
     534,     0,   269,   268,   272,   263,     0,   192,   399,   138,
     207,     0,   239,     0,   372,   184,   120,     0,   416,   513,
     512,     0,   505,     0,     0,   558,   405,   176,     0,     0,
      53,    62,     0,    64,   144,   145,     0,     0,     0,     0,
      41,     0,   157,     0,   164,   165,   162,   156,   491,   490,
     437,   470,     0,   442,    98,   103,   372,     0,   276,   571,
       0,   506,   262,   534,     0,    47,   239,   140,     0,     0,
     243,   244,   245,   248,   247,   246,   238,   127,   206,   211,
     208,     0,   237,   241,     0,     0,     0,     0,   181,   121,
       0,   338,   280,   534,   534,   511,   502,   539,   540,     0,
     407,     0,     0,     0,   169,   175,   167,   257,   551,   142,
      87,    84,   154,     0,   158,   160,    43,     0,   471,     0,
     104,    94,     0,   550,   265,   514,     0,   267,   125,     0,
       0,   215,     0,   118,   242,     0,   210,    43,     0,    43,
     182,     0,     0,   504,   409,     0,    43,     0,     0,     0,
       0,     0,     0,   152,    43,    41,   489,    99,     0,    43,
     507,   264,     0,     0,   217,   219,   214,   251,     0,     0,
       0,    41,     0,   376,     0,    41,     0,   508,   509,   172,
      41,    56,   170,    65,   146,    43,   149,    88,    85,    41,
       0,    43,    41,   254,   216,     6,     0,   220,   221,     0,
       0,   229,     0,     0,     0,     0,   209,   212,     0,   123,
     377,     0,   373,   359,   183,    43,     0,    41,     0,    41,
     361,   218,   222,   223,   233,     0,   224,     0,   252,   249,
       0,   253,     0,   374,    41,    43,   147,    66,     0,   100,
     105,     0,   232,   225,   226,   230,     0,   184,   375,    41,
     150,     0,   231,     0,   250,     0,     0,    43,   227,     0,
     148,    41,   235,    43,   213,   101,    41,   107,   236,     0,
     102,   106,   108,     0,   109,   110,     0,     0,   111,     0,
      43,    41,   112
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    84,    85,   561,   394,   203,   204,
     352,   353,   356,   357,    86,   234,   402,   565,   996,    88,
     328,   617,   490,   738,   182,   495,   181,   618,   622,   917,
    1026,   341,   625,   962,   624,   961,   185,   197,   865,   798,
     929,  1000,  1061,  1077,   931,   968,  1080,  1081,  1082,  1086,
    1089,   371,   372,    89,    90,   251,   900,    91,   588,    92,
     583,   412,    93,   411,    94,   585,   710,   711,   847,   746,
     918,  1047,   997,   753,   501,   504,   630,   964,   926,   856,
     621,   739,   958,   837,  1025,   840,   913,   717,   718,   719,
     720,   486,   573,   574,   207,   208,   212,   822,   888,   942,
    1040,   889,   940,   976,  1006,  1007,  1008,  1009,  1053,  1010,
    1011,  1012,  1051,  1074,   890,   891,   892,   893,   978,   894,
     179,   335,   336,   623,   812,   813,   814,   874,   698,   699,
      95,   322,    96,   381,   828,   430,   431,   425,   427,   563,
     429,   827,   597,   140,   416,   541,    97,    98,    99,   126,
     897,   984,   101,   242,   559,   397,   593,   592,   604,   603,
     297,   102,   721,   166,   167,   489,   737,   836,   910,   173,
     237,   487,   103,   520,   521,   522,   523,   104,   638,   318,
     639,   105,   106,   107,   313,   108,   109,   472,   732,   906,
     815,   935,   829,   830,   831,   832,   110,   111,   112,   113,
     252,   114,   115,   116,   117,   330,   607,   731,   608,   609,
     118,   551,   552,   804,   159,   160,   225,   226,   554,   693,
     119,   376,   686,   377,   120,   524,   121
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -837
static const yytype_int16 yypact[] =
{
    -837,    73,   101,  -837,  2091,  4386,  4386,   -64,  4386,  4386,
    4386,  4386,  4386,  4386,  4386,  4386,  -837,  4386,  4386,  4386,
    4386,  4386,  4386,  4386,    56,    56,  3171,  4386,   242,   -48,
     -45,  -837,  -837,    84,  -837,  -837,  -837,    86,  4386,  -837,
    -837,   -36,    66,  -837,   -45,  3306,  3441,   164,  -837,   196,
    3576,  -837,  4386,     2,    58,   155,   161,    16,   194,   224,
     241,   248,  -837,  -837,  -837,   250,   255,  -837,  -837,  -837,
    -837,  -837,  -837,   251,   -32,  -837,  -837,   264,  4521,  -837,
    -837,   193,   278,   291,   -57,  -837,    18,  -837,  -837,  -837,
    -837,  -837,  -837,   359,   372,  -837,  -837,   299,   393,   395,
     430,   402,   325,  -837,  -837,  4967,  -837,  -837,   165,  3457,
    -837,  -837,   326,   404,   352,  -837,   -17,  -837,    59,  -837,
    -837,  -837,  -837,  -837,   392,   342,   430,  5744,  5744,  4386,
    5744,  5744,  5977,   -27,  5311,  1060,   440,   440,    31,   440,
    4386,   440,   440,   440,   440,   440,   440,   440,  -837,   353,
     264,    98,   358,  -837,  -837,   362,  -837,    56,  5382,   351,
     536,  -837,   398,   264,   400,   405,  -837,  -837,   410,   428,
     -21,    59,  3711,  -837,  -837,  4521,   531,  -837,  4386,    22,
    5744,  2901,   -45,  4386,  4386,   408,  -837,  -837,  5010,  -837,
    5054,   412,   547,  -837,   414,  5744,  1552,   406,  5097,     6,
      15,   264,   -29,    23,  -837,  -837,   145,    29,  -837,  -837,
    -837,   550,    32,   430,    56,  4386,  4386,   416,  -837,  3171,
      46,   177,  -837,  4656,    56,   285,  -837,   264,  -837,   313,
     111,   417,   418,  5140,   422,  4386,   128,   420,   298,   128,
      67,   508,   429,   517,  -837,   467,  -837,  -837,  4386,  4386,
    -837,   519,   532,    -6,  -837,  4386,  -837,   567,  -837,  -837,
    4386,  4386,  4386,  4386,  4386,  4386,  4386,  4386,  4386,  4386,
    4386,  4386,  4386,  4386,  4386,  4386,  4386,  4386,  4386,   242,
    4386,  -837,  -837,  -837,  3846,  4386,  4386,  4386,  4386,  4386,
    4386,  4386,  4386,  4386,  4386,  4386,  4386,   429,    90,  4386,
    -837,  4386,  4386,   193,   -10,  -837,  5184,  4386,   440,   264,
     119,   156,   156,  -837,  -837,  3981,  -837,  4116,  -837,   264,
     400,    65,   429,    65,  -837,     3,  -837,  -837,  2901,  5744,
     439,  4386,  -837,   520,  -837,   452,   599,  5744,   516,  3322,
     538,     0,  -837,  -837,  -837,  5531,  -837,  -837,  -837,  -837,
     264,   -14,    33,  -837,   264,    93,    36,  -837,   167,   540,
      45,  -837,  4386,  -837,  -837,    58,  -837,  5531,   534,  -837,
    -837,    13,  -837,  -837,    26,   505,    28,  -837,   460,  1763,
     461,   231,   464,  -837,   546,  -837,  -837,   557,  1701,   496,
    -837,  -837,  -837,   274,  -837,  -837,  -837,   429,  -837,  -837,
    -837,  -837,  2226,  1953,  -837,  -837,  -837,  1796,  -837,   641,
     160,  -837,   537,   514,   515,  -837,   502,  4386,   524,  -837,
    4386,   525,     3,  -837,    59,  4386,  5904,  4386,  -837,  4386,
    4386,  4386,  3222,  3492,  3760,  3895,  3895,  3895,  3895,  1342,
    1342,  1342,  1342,   488,   488,   494,   494,   494,    31,    31,
      31,  -837,   440,   192,  5977,  5977,  5977,  5977,  5977,  5977,
    5977,  5977,  5977,  5977,  5977,  5977,  5977,  -837,   524,   526,
    -837,   521,   156,   522,  2026,  -837,   136,  1149,   229,  -837,
      56,  5744,    56,  5425,   400,  -837,  -837,  -837,  -837,   156,
    -837,  -837,  -837,  5744,  -837,  2361,  -837,  -837,  -837,  -837,
     670,    40,   530,   533,  -837,  5531,  5531,  5531,  5531,  5531,
    -837,   541,  -837,    -3,   539,   264,  5531,    98,   544,  -837,
    -837,  -837,  5660,  -837,  -837,   542,   200,   620,     6,  -837,
     253,   622,    15,  -837,   624,  -837,  -837,  4792,  -837,  -837,
     688,   549,    56,   548,  -837,  -837,  -837,  -837,  -837,   553,
    -837,    41,  -837,  -837,   294,  -837,  4386,  -837,  -837,   429,
     558,  -837,  -837,   152,   563,  -837,  -837,  -837,  -837,  -837,
      56,  4386,  -837,    51,  -837,    52,   566,   899,  5531,   560,
     264,   400,  -837,   592,   160,   565,  -837,  -837,   569,   151,
     564,  4835,   429,   429,     3,  5826,  5977,  4386,  5701,  6117,
    6184,   242,  -837,   429,   429,  -837,  -837,  -837,     8,  -837,
    -837,  -837,  -837,  -837,  4251,  -837,   318,  -837,   -45,  -837,
    -837,  -837,  4386,  4386,   204,   204,  5531,   651,  2496,  -837,
     356,  -837,    -9,   413,   413,   348,   348,  5482,   568,   719,
    5531,   584,   264,   119,  5227,   162,  5531,  5531,  5531,  5253,
    5531,  5531,  5531,  5531,  5531,  5531,  5531,  5531,  5531,  5531,
    5531,  5531,  5531,  5531,  5531,  5531,  5531,  5531,  5531,  5531,
    5531,  5531,  5531,   626,   659,  -837,  -837,   660,  -837,  -837,
    -837,  -837,  5531,   151,  -837,  -837,  4386,  -837,   231,   721,
    -837,  -837,  -837,   577,  1281,  -837,  -837,   581,  -837,   184,
     585,  -837,  5744,  3036,  -837,  -837,  -837,   264,   400,   160,
     586,   733,  -837,  -837,   151,  -837,  -837,   587,   736,  -837,
     430,  -837,  -837,  -837,  -837,  -837,  6048,  -837,  -837,  -837,
    -837,  -837,   595,  4386,  4386,    56,  5744,  -837,  -837,   349,
     590,   664,   596,  5744,    56,   603,   625,  -837,   625,  -837,
     745,  -837,  -837,  -837,   391,   605,  4386,    43,   296,  -837,
    5531,  -837,  5531,  -837,   615,   229,  -837,  -837,  -837,  5786,
    5865,  5939,  5531,  5587,  6082,  6150,  3087,  3356,  1239,  3625,
    3625,  3625,  3625,  1154,  1154,  1154,  1154,   451,   451,   413,
     413,   413,   348,   348,   348,   348,  1554,   618,  -837,  -837,
    -837,  -837,   619,  -837,   231,  -837,  4386,  -837,   621,  -837,
    4386,   156,   646,   198,  -837,  -837,   627,  -837,   400,   733,
    -837,   160,   652,   623,   668,   254,   628,  4386,   429,   713,
     718,   429,  -837,   630,  4878,  -837,   657,   366,   -45,  2901,
    -837,  -837,   629,  -837,  -837,  -837,   204,   632,   633,  5531,
     699,   637,  -837,  4924,  -837,  -837,  -837,  -837,  5660,  5525,
    -837,  6012,  5531,  -837,  -837,   690,   668,    54,  5977,  -837,
     634,  -837,  -837,  4386,   646,  -837,   735,  -837,   724,   160,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,   392,   474,  -837,    37,   642,   649,   643,  -837,  -837,
     729,  6048,  -837,  4386,  4386,  -837,   646,  -837,  -837,   156,
    -837,   -45,   778,   737,  -837,  -837,  -837,  4386,   231,  -837,
    -837,  -837,  -837,   653,  -837,  -837,  -837,  5531,  6012,   160,
    -837,  -837,   650,  -837,  -837,   595,   655,   646,  -837,   797,
      14,  -837,   740,   430,  -837,   738,  -837,  -837,    48,  -837,
     799,   661,   666,  -837,  -837,   792,  -837,   671,  2901,   669,
      55,  2631,  2631,  -837,  -837,   320,  5660,  -837,   673,  -837,
    -837,  -837,  5531,   160,  -837,   190,  -837,   818,    38,   759,
     820,   677,   763,  -837,    57,   683,  5531,  -837,  -837,  -837,
     771,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,   344,
     768,  -837,   687,  -837,  -837,   760,   696,   190,  -837,   700,
     764,   749,   703,   714,  5531,   785,  -837,  -837,  5531,  -837,
    -837,    69,  -837,  -837,  -837,  -837,  2766,   773,   710,   709,
    -837,  -837,  -837,  -837,   554,   160,  -837,   794,  -837,   855,
     716,  -837,   795,  -837,   478,  -837,  -837,  -837,   720,  -837,
    -837,   798,   800,   869,  -837,  -837,  5531,   151,  -837,   790,
    -837,   722,  -837,   160,  -837,   725,   726,  -837,  -837,   286,
    -837,   723,  -837,  -837,  -837,  -837,   727,   781,  -837,   734,
    -837,   781,  -837,   160,  -837,  -837,   807,   741,  -837,   742,
    -837,   732,  -837
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -837,  -837,  -374,  -837,   -24,  -837,  -837,  -837,  -837,   535,
    -837,   369,  -837,   370,  -837,  -250,  -837,  -837,    21,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -183,  -837,
    -837,  -837,   364,   499,   506,  -114,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,   195,   163,  -602,
    -837,  -837,   -53,  -837,  -837,  -837,  -468,  -837,  -837,    75,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -675,  -837,    85,
    -837,  -228,  -837,   223,  -837,   571,  -837,   110,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,   -76,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,  -837,  -836,  -837,  -837,
    -837,  -607,  -837,  -837,    60,  -837,  -837,  -837,  -837,  -837,
     854,  -837,     7,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,  -837,  -837,  -837,  -837,  -837,   -67,  -837,  -837,    -2,
      71,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,   447,  -171,  -266,  -837,  -837,  -837,  -837,  -837,  -837,
    -837,   105,  1034,  -837,  -309,   490,  -837,  -837,   300,   302,
    -837,  1220,   -20,   744,  -463,   424,    27,  -837,  -837,  -837,
    -785,  -837,  -837,  -837,  -837,     4,  -237,  -837,   131,  -837,
    -837,  -837,   -23,   -25,  -837,  -216,  -482,  -837,  -837,   109,
     -22,  -738,   256,  -837,   728,  -837,   407,  -125,  -837,  -837,
    -837,  -837,  -837,   252,  -837,  -837,  -837
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -589
static const yytype_int16 yytable[] =
{
     151,   151,   100,   170,   164,   169,   171,   615,   802,   174,
     176,   232,   305,   451,   408,   742,   421,   612,   133,   613,
     560,   542,   973,   748,   186,    87,   243,   872,   502,   202,
     331,   360,   413,   414,  -588,   632,   544,   365,   135,   823,
     368,   528,   123,   301,   532,   945,  1015,   301,   627,   688,
     229,   154,   154,   230,   301,   213,   944,   194,   539,   703,
    -193,   469,   688,   688,   359,  1021,   867,   301,   418,   467,
      35,   854,   733,     3,   421,   469,   123,   196,   641,   527,
     123,   982,   279,   471,   485,   473,   488,   756,   757,   123,
     129,  -395,   211,   304,   280,   241,   386,  -378,   525,   370,
     392,    -2,  1042,   199,   200,   232,   172,   701,   232,   175,
     383,   386,   177,   392,   386,   392,   419,    48,   183,   123,
     227,   953,   213,   241,   983,   228,   310,  -519,  -362,  -362,
     123,  -519,    35,   151,   205,    35,   302,  -515,   241,   320,
     302,    35,   222,   220,  -516,  1043,   325,   302,   390,   759,
     178,   420,   872,    81,   201,   155,   155,   503,   350,   168,
     302,   754,   334,   758,   468,   734,    35,   354,   543,   562,
     974,   975,   148,   384,   244,   351,   355,   358,   332,   361,
     960,  -588,   151,   545,   314,   366,   531,   697,   369,   529,
     151,   338,   533,   946,  1016,   628,   689,   201,  1052,   855,
     151,   590,   333,   393,   220,   149,   704,  -193,   150,   933,
     994,   339,  1022,   223,   224,    81,  -271,   206,   303,   123,
     184,    35,   374,   378,    81,   123,   282,   283,   422,   405,
     479,   424,    35,   364,   123,   606,   767,   744,   191,   582,
     616,   373,   375,   379,   919,   241,  -395,   420,   810,    81,
     241,   389,   606,   220,   170,   164,   169,   171,   601,  -397,
     534,   148,   873,   241,  1005,  -382,   123,  -397,    35,   706,
     192,   241,   835,   422,   223,   224,   424,   209,   123,  -271,
      35,   715,   716,   210,   768,   478,   422,   422,   155,   424,
     424,  -364,  -364,   674,   149,   484,   422,   150,   422,   424,
     579,   424,   362,   580,    81,   123,  -179,    35,   148,   579,
     959,   811,   580,   420,   476,    81,   123,   749,    35,   241,
     148,   517,   385,   223,   224,  -266,   526,   220,   123,   871,
     530,   695,   221,   745,   477,   728,   202,   155,   123,   579,
     576,   149,   580,   517,   150,   155,   677,   148,   214,   491,
     235,    81,   241,   149,   220,   155,   150,   151,   148,   236,
     549,   220,   423,    81,   724,   725,   390,   220,   690,   741,
     691,   692,   239,   801,   220,   729,   730,  -396,   215,   390,
     149,   241,  1065,   150,   715,   716,   581,   -55,   -55,   -55,
      81,   162,   756,   757,   163,   216,   222,   223,   224,   594,
     100,    81,   217,   579,   218,   241,   580,   470,   550,   219,
     168,   671,   672,   712,   575,  -163,  -163,  -163,   838,   839,
     423,   470,  -396,   566,   223,   224,   241,   954,  -380,   151,
     391,   223,   224,   245,   577,   911,   912,   223,   224,  -161,
    -161,  -161,  1072,  1073,   223,   224,   246,   422,   153,   156,
     424,   755,   756,   757,   857,   247,   151,   248,   151,   249,
     668,   669,   670,   250,   422,   241,  -521,   424,   299,   395,
     396,   152,   152,   253,   298,   165,   671,   672,  -163,   300,
     602,   517,   517,   517,   517,   517,   851,   756,   757,   238,
     240,   643,   517,    48,   227,   665,   666,   667,   668,   669,
     670,   850,  -161,   280,   351,   309,   311,   314,   355,   314,
     312,   316,   155,  -587,   671,   672,   620,   833,   151,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   273,   274,   275,   276,   277,   278,   712,   279,
     922,   276,   277,   278,   317,   279,   151,  -173,  -173,  -173,
     319,   280,   241,   321,   517,   324,   708,   280,   323,   327,
     581,   345,   340,   348,   367,   581,  -499,  -499,   344,   373,
     346,   380,   398,   399,   606,  -240,   170,   164,   169,   171,
     401,   404,   406,   407,   155,   880,   881,   882,   883,   884,
     885,   409,   410,   415,   870,   428,   417,   314,   740,   492,
     151,   151,   517,   905,   152,   494,   826,   497,   496,   498,
     540,   155,   500,   155,   535,   546,   517,   548,   765,   553,
     555,   556,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   517,   517,   517,   752,
     877,   747,   747,   152,   558,   578,   589,   936,   517,   581,
    -587,   152,   584,  1003,   151,   880,   881,   882,   883,   884,
     885,   152,   606,   155,   586,   587,   965,  1024,  -542,  -386,
    -390,   605,   610,   818,   626,   581,   629,   951,   952,   631,
     581,   642,   645,   374,   675,   640,   678,   981,   680,   985,
     673,   155,   682,   683,   685,  1038,   990,   687,   941,  1041,
     575,   151,   707,   375,   999,   550,   696,   700,   709,  1002,
     151,   705,   713,   714,   722,   750,   165,   762,   761,   385,
     577,   797,   168,   799,   800,   806,   517,   807,   517,   809,
     816,   821,   824,   820,   825,  1027,   841,  1064,   517,  -510,
     842,  1029,   843,   846,   878,   155,   155,   845,   967,   849,
     879,   852,   314,   880,   881,   882,   883,   884,   885,   886,
     860,   844,   864,   811,   866,  1044,   896,   903,   895,   869,
     151,   899,   904,   875,   909,   916,   422,   920,   921,   424,
     907,   923,   518,   924,   934,  1059,   930,   581,   939,   947,
     949,   581,  1004,   948,  1013,   950,   956,   969,   957,   963,
     887,   972,   980,   986,   518,   971,   977,  1071,   914,   155,
     989,   987,   151,  1076,   993,   517,   988,   991,   152,   979,
    1001,   550,  1014,  1017,  1018,  1019,  1013,   878,   517,  1020,
    1091,  1023,  -177,   879,  1028,  1030,   880,   881,   882,   883,
     884,   885,   886,  -228,  1031,   581,  1033,  1034,  1035,  1036,
     915,  1039,  1037,  1048,  1054,  1049,   155,  1050,  1055,  1056,
    1057,  1058,  1062,   747,  -234,   155,  1060,  1063,  1066,  1067,
    1069,  1075,  1070,  1087,   422,  1078,  1079,   424,  1083,   943,
    1092,   955,  1068,   938,   151,   536,  1088,   676,  1084,  1090,
     152,   567,   679,   517,   819,   581,   684,  -194,   568,   998,
     898,   848,  1085,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   817,   152,   925,   152,
     876,  1032,   231,   902,   937,   155,   538,   932,   803,   970,
     764,   763,     0,     0,   805,   550,     0,   382,   517,   581,
     363,   581,   518,   518,   518,   518,   518,     0,     0,     0,
    -499,  -499,   517,   518,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   155,     0,   992,
       0,     0,     0,   581,     0,     0,     0,     0,     0,   152,
     517,     0,     0,     0,   517,   633,   634,   635,   636,   637,
       0,     0,     0,     0,     0,     0,   644,     0,     0,     0,
       0,   581,     0,     0,     0,     0,     0,   152,     0,     0,
       0,     0,     0,     0,     0,   518,     0,     0,     0,     0,
       0,     0,   517,   581,     0,     0,     0,     0,     0,   581,
       0,     0,     0,     0,     0,     0,     0,  1046,   165,   155,
       0,     0,     0,     0,  -194,     0,     0,     0,     0,   581,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   152,   518,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   518,     0,     0,
       0,     0,     0,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
       0,  -499,  -499,     0,     0,     0,     0,     0,     0,   518,
     637,     0,     0,     0,     0,   152,   769,   770,   771,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   796,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,     0,     0,     0,     0,
       0,     0,   152,     0,     0,     0,     0,     0,     0,     0,
       0,   152,  -589,  -589,  -589,  -589,   663,   664,   665,   666,
     667,   668,   669,   670,     0,     0,     0,   518,     0,   518,
    -499,  -499,     0,     0,     0,  -363,  -363,   671,   672,   518,
       0,     0,     0,     0,     0,   127,   128,     0,   130,   131,
     132,   134,   136,   137,   138,   139,     0,   141,   142,   143,
     144,   145,   146,   147,     0,     0,   158,   161,     0,     0,
     858,   152,   859,     0,     0,     0,     0,     0,   180,     0,
       0,     0,   861,     0,     0,   188,   190,     0,     0,     0,
     195,     0,   198,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,     0,
     254,   255,   256,   152,     0,     0,   518,     0,   233,     0,
       0,     0,   671,   672,  -365,  -365,     0,     0,   257,   518,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   280,     0,     0,     0,     0,   306,
       0,     0,   928,     0,     0,     0,     0,     0,     0,     0,
     308,     0,     0,     0,     0,   152,     0,     0,     0,     0,
       0,     0,     0,     0,   518,     0,     0,     0,     0,   519,
    -589,  -589,  -589,  -589,   271,   272,   273,   274,   275,   276,
     277,   278,   233,   279,     0,   233,     0,     0,   329,     0,
       0,   519,     0,   337,   195,   280,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   966,     0,   518,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   518,     0,   195,   195,     0,     0,   158,
       0,   808,     0,   388,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   403,     0,     0,     0,     0,
       0,   518,     0,     0,     0,   518,     0,     0,   329,   329,
       0,     0,     0,     0,     0,   426,     0,     0,     0,     0,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,     0,
     452,     0,     0,   518,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,     0,     0,   329,
       0,   329,   474,     0,     0,     0,     0,   195,     0,     0,
       0,     0,     0,     0,     0,   481,     0,   483,     0,   519,
     519,   519,   519,   519,     0,     0,     0,     0,     0,     0,
     519,   493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   646,   647,   648,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,     0,
       0,   649,   537,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,     0,     0,     0,     0,     0,     0,
       0,     0,   519,  -499,  -499,     0,     0,   671,   672,     0,
       0,     0,     0,     0,     0,     0,     0,   195,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   329,     0,     0,
     591,     0,     0,     0,     0,   595,     0,   596,     0,   598,
     599,   600,     0,     0,     0,     0,     0,     0,     0,     0,
     519,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   519,     0,     0,     0,     0,     0,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,     0,   347,     0,
     254,   255,   256,     0,   863,     0,   519,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,     0,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   280,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   694,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
       0,   702,     0,     0,   519,     0,   519,     0,     0,     5,
       6,     7,     8,     9,     0,     0,   519,     0,    10,    11,
       0,     0,     0,     0,     0,     0,     0,   726,     0,     0,
       0,     0,     0,     0,  -499,  -499,     0,     0,     0,   570,
       0,     0,     0,     0,   736,     0,     0,     0,     0,     0,
      12,    13,   337,   743,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   557,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     123,    34,    35,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,   519,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   519,    48,     0,     0,
       0,     0,     0,     0,     0,     0,   195,     0,     0,     0,
       0,     0,   124,     0,     0,    59,    60,     0,   547,     0,
       0,     0,     0,   195,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,   125,    75,    76,    77,   571,
      78,   572,     0,   329,   834,    81,     0,    82,    83,     0,
       0,   519,   254,   255,   256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   853,     0,     0,     0,
     257,     0,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,     0,   519,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   280,     0,     0,     0,
     519,     0,     0,     0,     0,     0,   868,     0,     0,     0,
     329,     0,     0,     0,     0,   254,   255,   256,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   901,   519,     0,
       0,     0,   519,   257,     0,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   280,
     519,     0,     0,   329,     5,     6,     7,     8,     9,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,     0,
       0,   569,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   329,   329,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,   337,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,     0,    36,
       0,     0,     0,    37,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,   611,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,    51,     0,     0,    52,    53,
       0,    54,     0,     0,     0,    55,    56,    57,     0,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,    11,
      74,    75,    76,    77,     0,    78,     0,    79,    80,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,    30,     0,     0,     0,    31,    32,
      33,    34,    35,     0,    36,     0,     0,     0,    37,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,     0,    50,
      51,     0,     0,    52,     0,     0,    54,     0,     0,     0,
      55,    56,    57,     0,    58,    59,    60,   564,    62,    63,
      64,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,    11,   125,    75,    76,    77,     0,
      78,     0,    79,    80,     0,    81,     0,    82,    83,   619,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,     0,    36,
       0,     0,     0,    37,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,     0,    50,    51,     0,     0,    52,     0,
       0,    54,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,    11,
     125,    75,    76,    77,     0,    78,     0,    79,    80,     0,
      81,     0,    82,    83,   751,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,    30,     0,     0,     0,    31,    32,
      33,    34,    35,     0,    36,     0,     0,     0,    37,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,     0,    50,
      51,     0,     0,    52,     0,     0,    54,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,    11,   125,    75,    76,    77,     0,
      78,     0,    79,    80,     0,    81,     0,    82,    83,   995,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,     0,    36,
       0,     0,     0,    37,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,     0,    50,    51,     0,     0,    52,     0,
       0,    54,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,    11,
     125,    75,    76,    77,     0,    78,     0,    79,    80,     0,
      81,     0,    82,    83,  1045,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,    30,     0,     0,     0,    31,    32,
      33,    34,    35,     0,    36,     0,     0,     0,    37,    38,
      39,    40,     0,    41,     0,    42,     0,    43,     0,     0,
      44,     0,     0,     0,    45,    46,    47,    48,     0,    50,
      51,     0,     0,    52,     0,     0,    54,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,    11,   125,    75,    76,    77,     0,
      78,     0,    79,    80,     0,    81,     0,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,     0,    36,
       0,     0,     0,    37,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,     0,    50,    51,     0,     0,    52,     0,
       0,    54,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   122,
     125,    75,    76,    77,     0,    78,     0,    79,    80,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,   570,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     123,    34,    35,     0,     0,     0,     0,     0,    37,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     671,   672,   124,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   122,   125,    75,    76,    77,   571,
      78,     0,     0,     0,     0,    81,     0,    82,    83,     0,
       0,     0,     0,     0,   157,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   123,    34,    35,     0,     0,
       0,     0,     0,    37,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,    48,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   280,     0,   124,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   122,
     125,    75,    76,    77,     0,    78,     0,     0,     0,     0,
      81,     0,    82,    83,     0,     0,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     123,    34,    35,  -499,  -499,     0,     0,     0,    37,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,     0,    48,     0,     0,
       0,     0,     0,     0,     0,   499,     0,     0,     0,   671,
     672,     0,   124,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   122,   125,    75,    76,    77,     0,
      78,     0,   187,     0,     0,    81,     0,    82,    83,     0,
       0,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   123,    34,    35,  -499,  -499,
       0,     0,     0,    37,     0,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,    48,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   280,     0,   124,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   122,
     125,    75,    76,    77,     0,    78,     0,   189,     0,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     123,    34,    35,     0,     0,     0,     0,     0,    37,  -589,
    -589,  -589,  -589,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   671,   672,
       0,     0,   124,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,    11,   125,    75,    76,    77,     0,
      78,     0,   193,     0,     0,    81,     0,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   123,    34,    35,     0,     0,
       0,     0,     0,    37,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   280,     0,     0,     0,   124,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   122,
     125,    75,    76,    77,     0,    78,   326,     0,     0,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,   453,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     123,    34,    35,     0,     0,     0,     0,     0,    37,  -589,
    -589,  -589,  -589,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   280,     0,
       0,     0,   124,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   122,   125,    75,    76,    77,     0,
      78,     0,     0,     0,     0,    81,     0,    82,    83,     0,
       0,     0,     0,     0,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   123,    34,    35,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   122,
     125,    75,    76,    77,     0,    78,     0,     0,     0,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,   482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     123,    34,    35,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   122,   125,    75,    76,    77,     0,
      78,     0,     0,     0,     0,    81,     0,    82,    83,     0,
       0,     0,     0,     0,   735,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   123,    34,    35,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   122,
     125,    75,    76,    77,     0,    78,     0,     0,     0,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     123,    34,    35,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,    11,   125,    75,    76,    77,     0,
      78,     0,     0,     0,     0,    81,     0,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   123,    34,    35,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   122,
     125,    75,    76,    77,     0,    78,     0,     0,     0,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     123,   387,    35,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,   254,   255,   256,     0,   125,    75,    76,    77,     0,
      78,     0,     0,     0,     0,    81,     0,    82,    83,   257,
       0,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   254,   255,   256,     0,     0,     0,
       0,     0,     0,     0,     0,   280,     0,     0,     0,     0,
       0,     0,   257,     0,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,   254,   255,   256,
       0,     0,     0,     0,     0,     0,     0,     0,   280,     0,
       0,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
       0,     0,     0,   254,   255,   256,     0,     0,     0,     0,
       0,   280,     0,     0,     0,     0,     0,     0,     0,     0,
     681,   257,   854,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   254,   255,   256,     0,
       0,     0,     0,     0,     0,     0,     0,   280,     0,     0,
       0,     0,     0,   723,   257,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   254,
     255,   256,     0,     0,     0,     0,     0,     0,     0,     0,
     280,     0,     0,     0,     0,     0,   908,   257,     0,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,     0,   254,   255,   256,     0,     0,     0,     0,
       0,     0,     0,   280,     0,     0,     0,     0,     0,     0,
     855,   257,     0,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   254,   255,   256,     0,
       0,     0,     0,     0,     0,     0,     0,   280,     0,     0,
       0,     0,     0,   281,   257,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   254,
     255,   256,     0,     0,     0,     0,     0,     0,     0,     0,
     280,     0,     0,     0,     0,     0,   342,   257,     0,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,     0,   254,   255,   256,     0,     0,     0,     0,
       0,     0,     0,   280,     0,     0,     0,     0,     0,     0,
     343,   257,     0,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   646,   647,   648,     0,
       0,     0,     0,     0,     0,     0,     0,   280,     0,     0,
       0,     0,     0,   349,   649,     0,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,     0,     0,     0,
       0,   772,     0,     0,     0,     0,     0,     0,     0,     0,
     671,   672,     0,     0,     0,   400,     0,   505,   506,     0,
       0,     0,     0,   507,     0,   508,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   509,     0,     0,
     254,   255,   256,     0,     0,    31,    32,   123,     0,     0,
       0,     0,     0,     0,     0,   510,     0,     0,   257,   475,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,     0,     0,     0,     0,     0,     0,   148,
       0,     0,     0,     0,   280,     0,     0,     0,     0,     0,
       0,     0,   766,   511,     0,   512,    68,    69,    70,    71,
      72,   254,   255,   256,     0,     0,     0,   513,     0,     0,
       0,     0,   514,    75,    76,   515,     0,   516,     0,   257,
       0,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   254,   255,   256,     0,     0,   307,
       0,     0,     0,     0,     0,   280,     0,     0,     0,     0,
       0,     0,   257,     0,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   280,     0,
       0,   646,   647,   648,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   649,
     315,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,     0,     0,   646,   647,   648,     0,     0,     0,
       0,     0,     0,     0,     0,   671,   672,     0,     0,     0,
       0,     0,   649,   614,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   505,   506,     0,     0,     0,
       0,   507,     0,   508,     0,     0,     0,     0,   671,   672,
       0,     0,     0,     0,     0,   509,   646,   647,   648,     0,
       0,     0,     0,    31,    32,   123,     0,     0,     0,     0,
     760,     0,     0,   510,   649,   862,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   148,     0,     0,
     671,   672,     0,   927,     0,     0,     0,     0,     0,     0,
       0,   511,     0,   512,    68,    69,    70,    71,    72,   646,
     647,   648,     0,     0,     0,   513,     0,     0,     0,     0,
     514,    75,    76,   515,     0,   516,     0,   649,     0,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     254,   255,   256,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   671,   672,     0,     0,     0,   257,   727,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,   254,   255,   256,     0,     0,     0,     0,
       0,     0,     0,     0,   280,     0,     0,     0,     0,     0,
       0,   257,     0,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   647,   648,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   280,     0,     0,
       0,     0,     0,   649,     0,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   255,   256,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   671,
     672,     0,     0,   257,     0,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   648,   279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   280,
       0,     0,   649,     0,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   256,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   671,   672,
       0,   257,     0,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   649,   280,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   671,   672,   257,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     280,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   671,   672,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   280,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   671,   672,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     280,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   671,   672,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   280
};

static const yytype_int16 yycheck[] =
{
      24,    25,     4,    28,    28,    28,    28,   489,   683,    29,
      30,    78,   126,   279,   242,   622,   253,   480,    11,   482,
     394,     8,     8,   625,    44,     4,     8,   812,    28,    53,
       8,     8,   248,   249,     8,   503,     8,     8,    11,   714,
       8,     8,    74,    64,     8,     8,     8,    64,     8,     8,
      74,    24,    25,    77,    64,    57,   892,    50,   367,     8,
       8,   298,     8,     8,    93,     8,   804,    64,    74,   297,
      76,    28,    64,     0,   311,   312,    74,    50,    81,    93,
      74,    33,    51,   299,   321,   301,   323,    96,    97,    74,
     154,   148,    76,   118,    63,   152,   221,   154,   348,   213,
     225,     0,    33,   101,   102,   172,   154,   570,   175,   154,
      64,   236,    28,   238,   239,   240,   122,   101,   154,    74,
     152,   906,   124,   152,    76,   157,   150,   148,   155,   156,
      74,   148,    76,   157,    76,    76,   157,   154,   152,   163,
     157,    76,   145,    76,   154,    76,   171,   157,    81,   158,
      64,   157,   937,   159,   152,    24,    25,   157,   152,    28,
     157,   629,   182,   631,    74,   157,    76,   152,   155,   397,
     156,   157,   116,   127,   156,   199,   200,   201,   156,   156,
     918,   155,   206,   155,   157,   156,    93,   561,   156,   156,
     214,   184,   156,   156,   156,   155,   155,   152,  1034,   156,
     224,   417,   181,   227,    76,   149,   155,   155,   152,   155,
     155,   184,   155,   146,   147,   159,    64,   159,   159,    74,
     154,    76,   215,   216,   159,    74,    61,    62,   253,   162,
      74,   253,    76,   206,    74,   472,    74,    33,    74,   410,
     490,   214,   215,   216,   846,   152,   148,   157,    64,   159,
     152,   224,   489,    76,   279,   279,   279,   279,    66,   148,
      93,   116,    64,   152,    74,   154,    74,   148,    76,   578,
      74,   152,   735,   298,   146,   147,   298,   122,    74,   127,
      76,   130,   131,   122,   122,   309,   311,   312,   157,   311,
     312,   155,   156,    93,   149,   319,   321,   152,   323,   321,
     149,   323,   157,   152,   159,    74,   155,    76,   116,   149,
     917,   127,   152,   157,   307,   159,    74,   626,    76,   152,
     116,   345,   145,   146,   147,   127,   350,    76,    74,   811,
     354,   559,    81,   129,   307,   601,   360,   206,    74,   149,
     407,   149,   152,   367,   152,   214,    93,   116,   154,   328,
     157,   159,   152,   149,    76,   224,   152,   381,   116,    81,
     129,    76,   253,   159,   592,   593,    81,    76,    74,   619,
      76,    77,    81,   682,    76,   603,   604,   148,   154,    81,
     149,   152,  1057,   152,   130,   131,   410,    69,    70,    71,
     159,   149,    96,    97,   152,   154,   145,   146,   147,   424,
     402,   159,   154,   149,   154,   152,   152,   298,   381,   154,
     279,    63,    64,   584,   407,    95,    96,    97,    69,    70,
     311,   312,   148,   402,   146,   147,   152,   909,   154,   453,
     145,   146,   147,    74,   407,    69,    70,   146,   147,    95,
      96,    97,   156,   157,   146,   147,    74,   472,    24,    25,
     472,    95,    96,    97,   158,   156,   480,    64,   482,    64,
      47,    48,    49,    33,   489,   152,    64,   489,    64,   156,
     157,    24,    25,   148,   148,    28,    63,    64,   158,   127,
     453,   505,   506,   507,   508,   509,    95,    96,    97,    82,
      83,   515,   516,   101,   152,    44,    45,    46,    47,    48,
      49,   751,   158,    63,   528,   152,   148,   480,   532,   482,
     148,   160,   381,     8,    63,    64,   495,   733,   542,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    44,    45,    46,    47,    48,    49,   709,    51,
     849,    47,    48,    49,     8,    51,   570,    69,    70,    71,
     152,    63,   152,   148,   578,   127,   580,    63,   148,    28,
     584,    14,   154,   157,    14,   589,    61,    62,   156,   542,
     156,   155,   155,   155,   811,   101,   601,   601,   601,   601,
     158,   161,    74,   154,   453,   111,   112,   113,   114,   115,
     116,    74,   125,    74,   810,    28,    64,   570,   618,   160,
     624,   625,   626,   831,   157,    85,   720,     8,   156,    93,
      76,   480,    74,   482,    74,   155,   640,   156,   642,   155,
      74,    64,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   628,
     821,   624,   625,   206,   158,    14,   154,   873,   682,   683,
     155,   214,   125,   972,   688,   111,   112,   113,   114,   115,
     116,   224,   909,   542,   160,   160,   926,   986,   154,   154,
     154,   160,   160,   707,    14,   709,   156,   903,   904,   156,
     714,   152,   148,   686,    74,   154,    74,   947,    74,   949,
     158,   570,    14,   154,   156,  1014,   956,   154,   879,  1018,
     703,   735,   152,   686,   964,   688,   158,   154,   126,   969,
     744,   155,   157,   154,   160,    74,   279,     8,   160,   145,
     703,   105,   601,    74,    74,    14,   760,   160,   762,   158,
     155,     8,   155,   157,     8,   995,   156,  1056,   772,   154,
      86,  1001,   156,   128,   102,   624,   625,   154,   929,    14,
     108,   156,   735,   111,   112,   113,   114,   115,   116,   117,
     155,   744,   154,   127,   155,  1025,   108,    64,   155,   158,
     804,   153,    64,   156,   127,   156,   811,   155,   155,   811,
     160,    92,   345,   156,   160,  1045,   106,   821,    74,   157,
     157,   825,   973,   154,   975,    76,    28,   157,    71,   156,
     158,    14,    74,    14,   367,   160,    76,  1067,   838,   688,
      28,   160,   846,  1073,   155,   849,   160,   156,   381,   943,
     157,   804,    14,    74,    14,   158,  1007,   102,   862,    76,
    1090,   158,    71,   108,    76,   158,   111,   112,   113,   114,
     115,   116,   117,    93,   158,   879,   156,    93,   109,   156,
     839,    76,   148,    90,  1035,   155,   735,   158,    74,    14,
     154,    76,    74,   846,    74,   744,   156,     8,    88,   157,
     155,   158,   156,    76,   909,   158,   105,   909,   154,   891,
     158,   911,  1063,   158,   918,   360,   155,   528,  1081,   157,
     453,   402,   532,   927,   709,   929,   542,     8,   402,   962,
     825,   748,  1083,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   703,   480,   853,   482,
     820,  1007,    78,   828,   874,   804,   365,   866,   686,   935,
     640,   639,    -1,    -1,   688,   918,    -1,   219,   972,   973,
     206,   975,   505,   506,   507,   508,   509,    -1,    -1,    -1,
      61,    62,   986,   516,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   846,    -1,   958,
      -1,    -1,    -1,  1007,    -1,    -1,    -1,    -1,    -1,   542,
    1014,    -1,    -1,    -1,  1018,   505,   506,   507,   508,   509,
      -1,    -1,    -1,    -1,    -1,    -1,   516,    -1,    -1,    -1,
      -1,  1035,    -1,    -1,    -1,    -1,    -1,   570,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   578,    -1,    -1,    -1,    -1,
      -1,    -1,  1056,  1057,    -1,    -1,    -1,    -1,    -1,  1063,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1026,   601,   918,
      -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,  1083,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   624,   625,   626,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   640,    -1,    -1,
      -1,    -1,    -1,   646,   647,   648,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   670,   671,   672,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,   682,
     640,    -1,    -1,    -1,    -1,   688,   646,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,   735,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   744,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,   760,    -1,   762,
      61,    62,    -1,    -1,    -1,   155,   156,    63,    64,   772,
      -1,    -1,    -1,    -1,    -1,     5,     6,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    26,    27,    -1,    -1,
     760,   804,   762,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,   772,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
       9,    10,    11,   846,    -1,    -1,   849,    -1,    78,    -1,
      -1,    -1,    63,    64,   155,   156,    -1,    -1,    27,   862,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,   129,
      -1,    -1,   862,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,    -1,    -1,    -1,    -1,   918,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   927,    -1,    -1,    -1,    -1,   345,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   172,    51,    -1,   175,    -1,    -1,   178,    -1,
      -1,   367,    -1,   183,   184,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   927,    -1,   972,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   986,    -1,   215,   216,    -1,    -1,   219,
      -1,   160,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,  1014,    -1,    -1,    -1,  1018,    -1,    -1,   248,   249,
      -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,    -1,
     280,    -1,    -1,  1056,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,    -1,    -1,   299,
      -1,   301,   302,    -1,    -1,    -1,    -1,   307,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   315,    -1,   317,    -1,   505,
     506,   507,   508,   509,    -1,    -1,    -1,    -1,    -1,    -1,
     516,   331,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    27,   362,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   578,    61,    62,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   407,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,
     420,    -1,    -1,    -1,    -1,   425,    -1,   427,    -1,   429,
     430,   431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     626,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   640,    -1,    -1,    -1,    -1,    -1,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,    -1,   156,    -1,
       9,    10,    11,    -1,   160,    -1,   682,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   556,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,   571,    -1,    -1,   760,    -1,   762,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,   772,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   597,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,   614,    -1,    -1,    -1,    -1,    -1,
      44,    45,   622,   623,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,   158,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,   849,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   862,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   686,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,   119,   120,    -1,   155,    -1,
      -1,    -1,    -1,   703,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,   149,   150,   151,   152,   153,
     154,   155,    -1,   733,   734,   159,    -1,   161,   162,    -1,
      -1,   927,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   756,    -1,    -1,    -1,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,   972,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
     986,    -1,    -1,    -1,    -1,    -1,   806,    -1,    -1,    -1,
     810,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   827,  1014,    -1,
      -1,    -1,  1018,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
    1056,    -1,    -1,   873,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   903,   904,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,   917,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    78,
      -1,    -1,    -1,    82,    83,    84,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,   158,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,   107,   108,
      -1,   110,    -1,    -1,    -1,   114,   115,   116,    -1,   118,
     119,   120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    78,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,    -1,   103,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
     114,   115,   116,    -1,   118,   119,   120,   121,   122,   123,
     124,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,    -1,
     154,    -1,   156,   157,    -1,   159,    -1,   161,   162,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    78,
      -1,    -1,    -1,    82,    83,    84,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,    -1,   103,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,   161,   162,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    78,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,    -1,   103,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,    -1,
     154,    -1,   156,   157,    -1,   159,    -1,   161,   162,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    78,
      -1,    -1,    -1,    82,    83,    84,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,    -1,   103,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,   161,   162,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    78,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,    -1,   103,
     104,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,   116,    -1,   118,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,    -1,
     154,    -1,   156,   157,    -1,   159,    -1,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    78,
      -1,    -1,    -1,    82,    83,    84,    85,    -1,    87,    -1,
      89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,    -1,   103,   104,    -1,    -1,   107,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,   154,    -1,   156,   157,    -1,
     159,    -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,   153,
     154,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    82,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   101,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,   116,    -1,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,   154,    -1,    -1,    -1,    -1,
     159,    -1,   161,   162,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    61,    62,    -1,    -1,    -1,    82,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    63,
      64,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,    -1,
     154,    -1,   156,    -1,    -1,   159,    -1,   161,   162,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    61,    62,
      -1,    -1,    -1,    82,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   101,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,   116,    -1,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,   154,    -1,   156,    -1,    -1,
     159,    -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,    -1,
     154,    -1,   156,    -1,    -1,   159,    -1,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    82,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,   116,    -1,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,   154,   155,    -1,    -1,    -1,
     159,    -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,    -1,
     154,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,   154,    -1,    -1,    -1,    -1,
     159,    -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,    -1,
     154,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,   154,    -1,    -1,    -1,    -1,
     159,    -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,     3,     4,     5,     6,     7,    -1,
     144,    -1,    -1,    12,    13,   149,   150,   151,   152,    -1,
     154,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    -1,    12,    13,
     149,   150,   151,   152,    -1,   154,    -1,    -1,    -1,    -1,
     159,    -1,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,
     144,     9,    10,    11,    -1,   149,   150,   151,   152,    -1,
     154,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,   158,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,   158,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,   156,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,   156,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,   156,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    -1,    -1,    -1,   155,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
       9,    10,    11,    -1,    -1,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    27,   155,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   155,   130,    -1,   132,   133,   134,   135,   136,
     137,     9,    10,    11,    -1,    -1,    -1,   144,    -1,    -1,
      -1,    -1,   149,   150,   151,   152,    -1,   154,    -1,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,     9,    10,    11,    -1,    -1,   128,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
     128,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    27,   128,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    44,    45,    -1,    -1,    -1,
      -1,    50,    -1,    52,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    64,     9,    10,    11,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
     128,    -1,    -1,    82,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      63,    64,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   130,    -1,   132,   133,   134,   135,   136,   137,     9,
      10,    11,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
     149,   150,   151,   152,    -1,   154,    -1,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    11,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    63,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   164,   165,     0,   166,     3,     4,     5,     6,     7,
      12,    13,    44,    45,    50,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    64,    65,    66,    67,
      68,    72,    73,    74,    75,    76,    78,    82,    83,    84,
      85,    87,    89,    91,    94,    98,    99,   100,   101,   102,
     103,   104,   107,   108,   110,   114,   115,   116,   118,   119,
     120,   121,   122,   123,   124,   129,   130,   132,   133,   134,
     135,   136,   137,   144,   149,   150,   151,   152,   154,   156,
     157,   159,   161,   162,   167,   168,   177,   181,   182,   216,
     217,   220,   222,   225,   227,   293,   295,   309,   310,   311,
     312,   315,   324,   335,   340,   344,   345,   346,   348,   349,
     359,   360,   361,   362,   364,   365,   366,   367,   373,   383,
     387,   389,    13,    74,   116,   149,   312,   344,   344,   154,
     344,   344,   344,   295,   344,   349,   344,   344,   344,   344,
     306,   344,   344,   344,   344,   344,   344,   344,   116,   149,
     152,   167,   324,   348,   349,   361,   348,    33,   344,   377,
     378,   344,   149,   152,   167,   324,   326,   327,   361,   365,
     366,   373,   154,   332,   345,   154,   345,    28,    64,   283,
     344,   189,   187,   154,   154,   199,   345,   156,   344,   156,
     344,    74,    74,   156,   295,   344,   349,   200,   344,   101,
     102,   152,   167,   171,   172,    76,   159,   257,   258,   122,
     122,    76,   259,   312,   154,   154,   154,   154,   154,   154,
      76,    81,   145,   146,   147,   379,   380,   152,   157,   167,
     167,   293,   309,   344,   178,   157,    81,   333,   379,    81,
     379,   152,   316,     8,   156,    74,    74,   156,    64,    64,
      33,   218,   363,   148,     9,    10,    11,    27,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    51,
      63,   156,    61,    62,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   323,   148,    64,
     127,    64,   157,   159,   366,   218,   344,   128,   344,   152,
     167,   148,   148,   347,   349,   128,   160,     8,   342,   152,
     167,   148,   294,   148,   127,   366,   155,    28,   183,   344,
     368,     8,   156,   181,   345,   284,   285,   344,   295,   349,
     154,   194,   156,   156,   156,    14,   156,   156,   157,   156,
     152,   167,   173,   174,   152,   167,   175,   176,   167,    93,
       8,   156,   157,   346,   349,     8,   156,    14,     8,   156,
     218,   214,   215,   349,   295,   349,   384,   386,   295,   349,
     155,   296,   377,    64,   127,   145,   380,    75,   344,   349,
      81,   145,   380,   167,   170,   156,   157,   318,   155,   155,
     155,   158,   179,   344,   161,   162,    74,   154,   254,    74,
     125,   226,   224,   368,   368,    74,   307,    64,    74,   122,
     157,   359,   366,   372,   373,   300,   344,   301,    28,   303,
     298,   299,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   326,   344,    33,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   254,    74,   359,
     372,   368,   350,   368,   344,   155,   295,   349,   167,    74,
      33,   344,    33,   344,   167,   359,   254,   334,   359,   328,
     185,   181,   160,   344,    85,   188,   156,     8,    93,    93,
      74,   237,    28,   157,   238,    44,    45,    50,    52,    64,
      82,   130,   132,   144,   149,   152,   154,   167,   324,   335,
     336,   337,   338,   339,   388,   178,   167,    93,     8,   156,
     167,    93,     8,   156,    93,    74,   172,   344,   258,   337,
      76,   308,     8,   155,     8,   155,   155,   155,   156,   129,
     349,   374,   375,   155,   381,    74,    64,   158,   158,   317,
     165,   169,   254,   302,   121,   180,   181,   216,   217,   158,
      33,   153,   155,   255,   256,   295,   309,   349,    14,   149,
     152,   167,   325,   223,   125,   228,   160,   160,   221,   154,
     368,   344,   320,   319,   366,   344,   344,   305,   344,   344,
     344,    66,   349,   322,   321,   160,   359,   369,   371,   372,
     160,   158,   347,   347,   128,   369,   178,   184,   190,    28,
     181,   243,   191,   286,   197,   195,    14,     8,   155,   156,
     239,   156,   239,   338,   338,   338,   338,   338,   341,   343,
     154,    81,   152,   167,   338,   148,     9,    10,    11,    27,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    63,    64,   158,    93,    74,   174,    93,    74,   176,
      74,   158,    14,   154,   215,   156,   385,   154,     8,   155,
      74,    76,    77,   382,   344,   254,   158,   165,   291,   292,
     154,   347,   344,     8,   155,   155,   337,   152,   167,   126,
     229,   230,   325,   157,   154,   130,   131,   250,   251,   252,
     253,   325,   160,   158,   254,   254,   344,    28,   326,   254,
     254,   370,   351,    64,   157,    33,   344,   329,   186,   244,
     345,   178,   284,   344,    33,   129,   232,   349,   232,   337,
      74,    28,   181,   236,   239,    95,    96,    97,   239,   158,
     128,   160,     8,   342,   341,   167,   155,    74,   122,   338,
     338,   338,    28,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   105,   202,    74,
      74,   337,   250,   386,   376,   375,    14,   160,   160,   158,
      64,   127,   287,   288,   289,   353,   155,   256,   167,   230,
     157,     8,   260,   250,   155,     8,   218,   304,   297,   355,
     356,   357,   358,   368,   344,   347,   330,   246,    69,    70,
     248,   156,    86,   156,   349,   154,   128,   231,   231,    14,
     178,    95,   156,   344,    28,   156,   242,   158,   338,   338,
     155,   338,    28,   160,   154,   201,   155,   374,   344,   158,
     368,   369,   353,    64,   290,   156,   260,   325,   102,   108,
     111,   112,   113,   114,   115,   116,   117,   158,   261,   264,
     277,   278,   279,   280,   282,   155,   108,   313,   252,   153,
     219,   344,   334,    64,    64,   254,   352,   160,   158,   127,
     331,    69,    70,   249,   345,   181,   156,   192,   233,   232,
     155,   155,   337,    92,   156,   242,   241,   128,   338,   203,
     106,   207,   313,   155,   160,   354,   368,   287,   158,    74,
     265,   325,   262,   312,   280,     8,   156,   157,   154,   157,
      76,   368,   368,   353,   369,   345,    28,    71,   245,   284,
     374,   198,   196,   156,   240,   178,   338,   325,   208,   157,
     358,   160,    14,     8,   156,   157,   266,    76,   281,   218,
      74,   178,    33,    76,   314,   178,    14,   160,   160,    28,
     178,   156,   181,   155,   155,    28,   181,   235,   235,   178,
     204,   157,   178,   337,   325,    74,   267,   268,   269,   270,
     272,   273,   274,   325,    14,     8,   156,    74,    14,   158,
      76,     8,   155,   158,   337,   247,   193,   178,    76,   178,
     158,   158,   269,   156,    93,   109,   156,   148,   337,    76,
     263,   337,    33,    76,   178,    28,   181,   234,    90,   155,
     158,   275,   280,   271,   325,    74,    14,   154,    76,   178,
     156,   205,    74,     8,   337,   250,    88,   157,   325,   155,
     156,   178,   156,   157,   276,   158,   178,   206,   158,   105,
     209,   210,   211,   154,   211,   325,   212,    76,   155,   213,
     157,   178,   158
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 2:

    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

    { HANDLE_INTERACTIVE(); }
    break;

  case 6:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:

    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:

    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:

    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:

    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:

    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:

    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:

    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:

    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:

    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 19:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 20:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 23:

    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 24:

    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 25:

    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 26:

    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 29:

    { zend_do_use_function(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 30:

    { zend_do_use_function(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 31:

    { zend_do_use_function(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 32:

    { zend_do_use_function(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 35:

    { zend_do_use_const(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 36:

    { zend_do_use_const(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 37:

    { zend_do_use_const(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 38:

    { zend_do_use_const(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 39:

    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 40:

    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 41:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 42:

    { HANDLE_INTERACTIVE(); }
    break;

  case 47:

    { zend_error_noreturn(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 48:

    { DO_TICKS(); }
    break;

  case 49:

    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 51:

    { zend_do_if_cond(&(yyvsp[(2) - (2)]), &(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 52:

    { zend_do_if_after_statement(&(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 53:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 54:

    { zend_do_if_cond(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 55:

    { zend_do_if_after_statement(&(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 56:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 57:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 58:

    { zend_do_while_cond(&(yyvsp[(3) - (3)]), &(yyval) TSRMLS_CC); }
    break;

  case 59:

    { zend_do_while_end(&(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 60:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 61:

    { (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 62:

    { zend_do_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 63:

    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 64:

    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 65:

    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 66:

    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 67:

    { zend_do_switch_cond(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 68:

    { zend_do_switch_end(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 69:

    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 70:

    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 71:

    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 72:

    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 73:

    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 74:

    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 75:

    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 76:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 80:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 81:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 83:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 84:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 85:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 86:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 87:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 88:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 89:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 90:

    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 92:

    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 93:

    { zend_do_bind_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 94:

    { zend_do_end_finally(&(yyvsp[(1) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 95:

    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 96:

    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 97:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 98:

    { zend_initialize_try_catch_element(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 99:

    { zend_do_first_catch(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 100:

    { zend_do_begin_catch(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 101:

    { zend_do_end_catch(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 102:

    { zend_do_mark_last_catch(&(yyvsp[(2) - (13)]), &(yyvsp[(13) - (13)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (13)]);}
    break;

  case 103:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 104:

    { zend_do_finally(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 105:

    { (yyval) = (yyvsp[(1) - (5)]); }
    break;

  case 106:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 107:

    { (yyval).u.op.opline_num = -1; }
    break;

  case 108:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 109:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 110:

    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 111:

    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 112:

    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 115:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 116:

    { DO_TICKS(); }
    break;

  case 117:

    { DO_TICKS(); }
    break;

  case 118:

    { (yyval).op_type = 0; }
    break;

  case 119:

    { (yyval).op_type = 1; }
    break;

  case 120:

    { (yyval).op_type = 0; }
    break;

  case 121:

    { (yyval).op_type = 1; }
    break;

  case 122:

    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 123:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 124:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 125:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 126:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 127:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 128:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 129:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 130:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 131:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 132:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 133:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 134:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 139:

    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 140:

    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 141:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 142:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 143:

    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 144:

    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 145:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 146:

    { (yyval) = (yyvsp[(1) - (5)]); (yyval).EA = ZEND_PARSED_LIST_EXPR; }
    break;

  case 153:

    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 154:

    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 155:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 156:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 157:

    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 158:

    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 159:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 160:

    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 161:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 162:

    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 163:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 169:

    { zend_do_if_cond(&(yyvsp[(3) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 170:

    { zend_do_if_after_statement(&(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 172:

    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 173:

    { zend_do_if_after_statement(&(yyvsp[(2) - (6)]), 0 TSRMLS_CC); }
    break;

  case 182:

    { zend_do_receive_param(ZEND_RECV, &(yyvsp[(4) - (4)]), NULL, &(yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]).op_type, (yyvsp[(3) - (4)]).op_type TSRMLS_CC); }
    break;

  case 183:

    { zend_do_receive_param(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyvsp[(6) - (6)]), &(yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]).op_type, (yyvsp[(3) - (6)]).op_type TSRMLS_CC); }
    break;

  case 184:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 185:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 186:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 187:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 188:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 189:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 190:

    { zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 193:

    { zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL TSRMLS_CC); }
    break;

  case 194:

    { zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR TSRMLS_CC); }
    break;

  case 195:

    { zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF TSRMLS_CC); }
    break;

  case 196:

    { zend_do_unpack_params(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 197:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 198:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 199:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 200:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 201:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 202:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 203:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 204:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 205:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 208:

    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 212:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 213:

    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 215:

    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 216:

    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 225:

    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 226:

    { zend_resolve_class_name(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 227:

    { zend_resolve_class_name(&(yyvsp[(3) - (3)]) TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 228:

    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 229:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 230:

    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 231:

    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 232:

    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 233:

    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 234:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 235:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 236:

    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 237:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 238:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 239:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 240:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 241:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 242:

    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 243:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 244:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 245:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 246:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 247:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 248:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 249:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 250:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 251:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 252:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 253:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 254:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 255:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 256:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 257:

    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 258:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 259:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 260:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 261:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 262:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 263:

    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 264:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 265:

    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 266:

    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 267:

    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 268:

    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 269:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 270:

    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 271:

    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 272:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 273:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 274:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 275:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 276:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 277:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 278:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 279:

    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 280:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 281:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 282:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 283:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 284:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 285:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_POW, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 286:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 287:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 288:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 289:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 290:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 291:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 292:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 293:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 294:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 295:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 296:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 297:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 298:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 299:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 300:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 301:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 302:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 303:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 304:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 305:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 306:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 307:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 308:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 309:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 310:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 311:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 312:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 313:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 314:

    { zend_do_binary_op(ZEND_POW, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 315:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 316:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 317:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 318:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 319:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 320:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 321:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 322:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 323:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 324:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 325:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 326:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 327:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 328:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 329:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 330:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 331:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 332:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 333:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 334:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 335:

    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 336:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 337:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 338:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 339:

    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 340:

    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 341:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 342:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 343:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 344:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 345:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 346:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 347:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 348:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 349:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 350:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 351:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 352:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 353:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 354:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 355:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 356:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 357:

    { zend_do_yield(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 358:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]).op_type, 0 TSRMLS_CC); }
    break;

  case 359:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (10)]); }
    break;

  case 360:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]).op_type, 1 TSRMLS_CC); }
    break;

  case 361:

    { zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (11)]); }
    break;

  case 362:

    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 363:

    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 364:

    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 365:

    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 1 TSRMLS_CC); }
    break;

  case 366:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 367:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 368:

    { (yyvsp[(1) - (4)]).EA = 0; zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 369:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 370:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 371:

    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 374:

    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 375:

    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 376:

    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 377:

    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 378:

    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 379:

    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), 0, (yyvsp[(2) - (3)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 380:

    { (yyvsp[(1) - (3)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (3)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (3)]), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 381:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), 0, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 382:

    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 383:

    { zend_do_end_function_call(&(yyvsp[(2) - (4)]), &(yyval), 0, (yyvsp[(3) - (4)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 384:

    { (yyval).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 385:

    { zend_do_end_function_call((yyvsp[(4) - (5)]).u.op.opline_num?NULL:&(yyvsp[(3) - (5)]), &(yyval), (yyvsp[(4) - (5)]).u.op.opline_num, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 386:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 387:

    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 388:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 389:

    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 390:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 391:

    { zend_do_end_function_call(NULL, &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 392:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 393:

    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 394:

    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 395:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 396:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 397:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 398:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 399:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 400:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 401:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 402:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 403:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 404:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 405:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 406:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 409:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 410:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 411:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 412:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 413:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 414:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 415:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 416:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 417:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 418:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 419:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 420:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 421:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 422:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 423:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 424:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 425:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 426:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 427:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 428:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 429:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 430:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 431:

    { zend_do_constant_expression(&(yyval), (yyvsp[(1) - (1)]).u.ast TSRMLS_CC); }
    break;

  case 432:

    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 433:

    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 434:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 435:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 436:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 437:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 438:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 439:

    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 440:

    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 441:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 442:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_FETCH_DIM_R, (yyvsp[(1) - (4)]).u.ast, (yyvsp[(3) - (4)]).u.ast); }
    break;

  case 443:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_ADD, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 444:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_SUB, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 445:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_MUL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 446:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_POW, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 447:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_DIV, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 448:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_MOD, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 449:

    { (yyval).u.ast = zend_ast_create_unary(ZEND_BOOL_NOT, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 450:

    { (yyval).u.ast = zend_ast_create_unary(ZEND_BW_NOT, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 451:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 452:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 453:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_XOR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 454:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_SL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 455:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_SR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 456:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_CONCAT, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 457:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_XOR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 458:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 459:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 460:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 461:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 462:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_IDENTICAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 463:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_NOT_IDENTICAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 464:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 465:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_NOT_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 466:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 467:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER, (yyvsp[(3) - (3)]).u.ast, (yyvsp[(1) - (3)]).u.ast); }
    break;

  case 468:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 469:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(3) - (3)]).u.ast, (yyvsp[(1) - (3)]).u.ast); }
    break;

  case 470:

    { (yyval).u.ast = zend_ast_create_ternary(ZEND_SELECT, (yyvsp[(1) - (4)]).u.ast, NULL, (yyvsp[(4) - (4)]).u.ast); }
    break;

  case 471:

    { (yyval).u.ast = zend_ast_create_ternary(ZEND_SELECT, (yyvsp[(1) - (5)]).u.ast, (yyvsp[(3) - (5)]).u.ast, (yyvsp[(5) - (5)]).u.ast); }
    break;

  case 472:

    { (yyval).u.ast = zend_ast_create_unary(ZEND_UNARY_PLUS, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 473:

    { (yyval).u.ast = zend_ast_create_unary(ZEND_UNARY_MINUS, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 474:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 475:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 476:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 477:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 478:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 479:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 480:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 481:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 482:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 483:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 484:

    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 485:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 486:

    { zend_ast_dynamic_shrink(&(yyvsp[(1) - (2)]).u.ast); (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 489:

    { zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (5)]).u.ast); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(5) - (5)]).u.ast); }
    break;

  case 490:

    { zend_ast_dynamic_add(&(yyval).u.ast, NULL); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 491:

    { (yyval).u.ast = zend_ast_create_dynamic(ZEND_INIT_ARRAY); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(1) - (3)]).u.ast); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 492:

    { (yyval).u.ast = zend_ast_create_dynamic(ZEND_INIT_ARRAY); zend_ast_dynamic_add(&(yyval).u.ast, NULL); zend_ast_dynamic_add(&(yyval).u.ast, (yyvsp[(1) - (1)]).u.ast); }
    break;

  case 493:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 494:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 495:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 496:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 497:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 498:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 499:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 500:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 501:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 502:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 503:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 504:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 505:

    { (yyval).EA = 0; }
    break;

  case 506:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 507:

    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 508:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 509:

    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 510:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_begin_method_call(&(yyval) TSRMLS_CC); }
    break;

  case 511:

    { zend_do_end_function_call(&(yyvsp[(1) - (2)]), &(yyval), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 512:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 513:

    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 514:

    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 515:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 516:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 517:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 518:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 519:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 520:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 521:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 522:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 523:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 524:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 525:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 526:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 527:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 528:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 529:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 530:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 531:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 532:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 533:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 534:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 535:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 536:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 537:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 538:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 539:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 540:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 541:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 542:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 543:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 544:

    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 545:

    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 548:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 549:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 550:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 551:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 552:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 553:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 554:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 555:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 556:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 557:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 558:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 559:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 560:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 561:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 562:

    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 563:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 564:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 565:

    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 566:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 567:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 568:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 569:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 570:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 571:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 572:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 573:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 574:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 575:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 576:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 577:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 578:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 579:

    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 580:

    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 581:

    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 582:

    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 583:

    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 584:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 585:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 586:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 587:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 588:

    { zend_error_noreturn(E_COMPILE_ERROR, "Cannot use isset() on the result of an expression (you can use \"null !== expression\" instead)"); }
    break;

  case 589:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 590:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 591:

    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 592:

    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;



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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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





/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	if (!yyres) {
		return yystrlen(yystr);
	}
	{
		TSRMLS_FETCH();
		if (CG(parse_error) == 0) {
			char buffer[120];
			const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
			unsigned int len = 0, toklen = 0, yystr_len;
			
			CG(parse_error) = 1;

			if (LANG_SCNG(yy_text)[0] == 0 &&
				LANG_SCNG(yy_leng) == 1 &&
				memcmp(yystr, "\"end of file\"", sizeof("\"end of file\"") - 1) == 0) {
				yystpcpy(yyres, "end of file");
				return sizeof("end of file")-1;
			}
			
			str = LANG_SCNG(yy_text);
			end = memchr(str, '\n', LANG_SCNG(yy_leng));
			yystr_len = yystrlen(yystr);
			
			if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
				&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
				toklen = (tok2 - tok1) + 1;
			} else {
				tok1 = tok2 = NULL;
				toklen = 0;
			}
			
			if (end == NULL) {
				len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
			} else {
				len = (end - str) > 30 ? 30 : (end - str);
			}
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
			return len + (toklen ? toklen + 1 : 0) + 2;
		}		
	}	
	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */


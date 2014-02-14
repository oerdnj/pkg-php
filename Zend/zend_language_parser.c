
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
#define YYLAST   6195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  163
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  226
/* YYNRULES -- Number of rules.  */
#define YYNRULES  592
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1092

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
     612,   616,   618,   620,   623,   626,   630,   634,   639,   644,
     648,   650,   652,   655,   660,   664,   670,   672,   676,   679,
     680,   681,   686,   689,   691,   692,   702,   706,   708,   712,
     714,   718,   719,   721,   723,   726,   729,   732,   736,   738,
     742,   744,   746,   750,   755,   759,   760,   762,   764,   768,
     770,   772,   773,   775,   777,   780,   782,   784,   786,   788,
     790,   792,   796,   802,   804,   808,   814,   819,   823,   825,
     826,   828,   829,   834,   836,   839,   841,   846,   850,   851,
     855,   857,   859,   860,   861,   864,   865,   870,   871,   879,
     883,   888,   889,   897,   900,   904,   908,   912,   916,   920,
     924,   928,   932,   936,   940,   944,   948,   951,   954,   957,
     960,   961,   966,   967,   972,   973,   978,   979,   984,   988,
     992,   996,  1000,  1004,  1008,  1012,  1016,  1020,  1024,  1028,
    1032,  1036,  1039,  1042,  1045,  1048,  1052,  1056,  1060,  1064,
    1068,  1072,  1076,  1080,  1084,  1086,  1088,  1089,  1095,  1096,
    1097,  1105,  1106,  1112,  1114,  1117,  1120,  1123,  1126,  1129,
    1132,  1135,  1138,  1139,  1143,  1145,  1147,  1149,  1153,  1156,
    1158,  1159,  1170,  1171,  1183,  1186,  1189,  1194,  1199,  1204,
    1209,  1214,  1219,  1223,  1225,  1226,  1231,  1235,  1240,  1242,
    1245,  1246,  1250,  1251,  1257,  1258,  1263,  1264,  1270,  1271,
    1277,  1278,  1284,  1285,  1291,  1292,  1296,  1298,  1300,  1304,
    1307,  1309,  1313,  1316,  1318,  1320,  1321,  1322,  1329,  1331,
    1334,  1335,  1338,  1339,  1342,  1344,  1345,  1347,  1349,  1350,
    1352,  1354,  1356,  1358,  1360,  1362,  1364,  1366,  1368,  1370,
    1372,  1376,  1379,  1383,  1385,  1390,  1394,  1396,  1398,  1400,
    1404,  1407,  1409,  1411,  1413,  1417,  1421,  1425,  1429,  1433,
    1436,  1439,  1443,  1447,  1451,  1455,  1459,  1463,  1467,  1471,
    1475,  1479,  1483,  1487,  1491,  1495,  1499,  1503,  1507,  1511,
    1515,  1520,  1526,  1529,  1532,  1536,  1538,  1540,  1542,  1544,
    1548,  1551,  1553,  1557,  1561,  1563,  1564,  1567,  1568,  1570,
    1576,  1580,  1584,  1586,  1588,  1590,  1594,  1598,  1600,  1602,
    1604,  1605,  1606,  1614,  1616,  1619,  1620,  1621,  1626,  1631,
    1636,  1637,  1640,  1642,  1644,  1645,  1647,  1650,  1654,  1658,
    1660,  1665,  1666,  1672,  1674,  1676,  1678,  1680,  1683,  1685,
    1690,  1695,  1697,  1699,  1704,  1705,  1707,  1709,  1710,  1713,
    1718,  1723,  1725,  1727,  1731,  1733,  1736,  1740,  1742,  1744,
    1745,  1751,  1752,  1753,  1756,  1762,  1766,  1770,  1772,  1779,
    1784,  1789,  1792,  1795,  1798,  1800,  1803,  1805,  1806,  1812,
    1816,  1820,  1827,  1831,  1833,  1835,  1837,  1842,  1847,  1852,
    1855,  1858,  1863,  1866,  1869,  1871,  1872,  1877,  1879,  1881,
    1885,  1889,  1893
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
     167,    93,    74,    -1,   177,     8,    74,    14,   336,    -1,
     102,    74,    14,   336,    -1,    -1,   178,   179,   180,    -1,
      -1,   181,    -1,   216,    -1,   217,    -1,   121,   154,   155,
     156,    -1,   182,    -1,    74,    28,    -1,   157,   178,   158,
      -1,    -1,    -1,    68,   344,   183,   181,   184,   244,   248,
      -1,    -1,    -1,    68,   344,    28,   185,   178,   186,   246,
     249,    71,   156,    -1,    -1,    -1,    85,   187,   344,   188,
     243,    -1,    -1,    -1,    84,   189,   181,    85,   190,   344,
     156,    -1,    -1,    -1,    -1,    87,   154,   283,   156,   191,
     283,   156,   192,   283,   155,   193,   234,    -1,    -1,    94,
     344,   194,   238,    -1,    98,   156,    -1,    98,   343,   156,
      -1,    99,   156,    -1,    99,   343,   156,    -1,   103,   156,
      -1,   103,   294,   156,    -1,   103,   348,   156,    -1,   308,
     156,    -1,   110,   256,   156,    -1,   116,   258,   156,    -1,
      83,   282,   156,    -1,    78,    -1,   343,   156,    -1,   118,
     154,   214,   155,   156,    -1,    -1,    -1,    89,   154,   348,
      93,   195,   232,   231,   155,   196,   235,    -1,    -1,    -1,
      89,   154,   294,    93,   197,   232,   231,   155,   198,   235,
      -1,    -1,    91,   199,   154,   237,   155,   236,    -1,   156,
      -1,    -1,    -1,   104,   200,   157,   178,   158,   202,   201,
     207,    -1,   107,   343,   156,    -1,   100,    74,   156,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   154,   203,   324,   204,
      76,   155,   205,   157,   178,   158,   206,   209,    -1,    -1,
      -1,   106,   208,   157,   178,   158,    -1,   210,    -1,    -1,
     211,    -1,   210,   211,    -1,    -1,    -1,   105,   154,   324,
     212,    76,   155,   213,   157,   178,   158,    -1,   215,    -1,
     214,     8,   215,    -1,   348,    -1,   220,    -1,   222,    -1,
      -1,    33,    -1,    -1,   153,    -1,    -1,   311,   218,    74,
     221,   154,   250,   155,   157,   178,   158,    -1,    -1,   225,
      74,   226,   223,   229,   157,   259,   158,    -1,    -1,   227,
      74,   224,   228,   157,   259,   158,    -1,   122,    -1,   115,
     122,    -1,   123,    -1,   114,   122,    -1,    -1,   125,   324,
      -1,   124,    -1,    -1,   125,   230,    -1,    -1,   126,   230,
      -1,   324,    -1,   230,     8,   324,    -1,    -1,   128,   232,
      -1,   348,    -1,    33,   348,    -1,    -1,   129,   154,   233,
     373,   155,    -1,   181,    -1,    28,   178,    88,   156,    -1,
     181,    -1,    28,   178,    90,   156,    -1,   181,    -1,    28,
     178,    92,   156,    -1,    74,    14,   336,    -1,   237,     8,
      74,    14,   336,    -1,   157,   239,   158,    -1,   157,   156,
     239,   158,    -1,    28,   239,    95,   156,    -1,    28,   156,
     239,    95,   156,    -1,    -1,    -1,   239,    96,   343,   242,
     240,   178,    -1,    -1,   239,    97,   242,   241,   178,    -1,
      28,    -1,   156,    -1,   181,    -1,    28,   178,    86,   156,
      -1,    -1,    -1,   244,    69,   344,   245,   181,    -1,    -1,
      -1,   246,    69,   344,    28,   247,   178,    -1,    -1,    70,
     181,    -1,    -1,    70,    28,   178,    -1,   251,    -1,    -1,
     252,    -1,   251,     8,   252,    -1,   253,   218,   219,    76,
      -1,   253,   218,   219,    76,    14,   336,    -1,    -1,   130,
      -1,   131,    -1,   324,    -1,   154,   155,    -1,   154,   255,
     155,    -1,   154,   308,   155,    -1,   294,    -1,   348,    -1,
      33,   346,    -1,   153,   343,    -1,   255,     8,   294,    -1,
     255,     8,   348,    -1,   255,     8,    33,   346,    -1,   255,
       8,   153,   343,    -1,   256,     8,   257,    -1,   257,    -1,
      76,    -1,   159,   345,    -1,   159,   157,   343,   158,    -1,
     258,     8,    76,    -1,   258,     8,    76,    14,   336,    -1,
      76,    -1,    76,    14,   336,    -1,   259,   260,    -1,    -1,
      -1,   276,   261,   280,   156,    -1,   281,   156,    -1,   263,
      -1,    -1,   277,   311,   218,    74,   262,   154,   250,   155,
     275,    -1,   108,   264,   265,    -1,   324,    -1,   264,     8,
     324,    -1,   156,    -1,   157,   266,   158,    -1,    -1,   267,
      -1,   268,    -1,   267,   268,    -1,   269,   156,    -1,   273,
     156,    -1,   272,   109,   270,    -1,   324,    -1,   270,     8,
     324,    -1,    74,    -1,   272,    -1,   324,   148,    74,    -1,
     271,    93,   274,    74,    -1,   271,    93,   279,    -1,    -1,
     279,    -1,   156,    -1,   157,   178,   158,    -1,   278,    -1,
     117,    -1,    -1,   278,    -1,   279,    -1,   278,   279,    -1,
     111,    -1,   112,    -1,   113,    -1,   116,    -1,   115,    -1,
     114,    -1,   280,     8,    76,    -1,   280,     8,    76,    14,
     336,    -1,    76,    -1,    76,    14,   336,    -1,   281,     8,
      74,    14,   336,    -1,   102,    74,    14,   336,    -1,   282,
       8,   343,    -1,   343,    -1,    -1,   284,    -1,    -1,   284,
       8,   285,   343,    -1,   343,    -1,   286,   352,    -1,   352,
      -1,   287,    64,   367,   160,    -1,    64,   367,   160,    -1,
      -1,   287,   289,   286,    -1,   287,    -1,   286,    -1,    -1,
      -1,   291,   288,    -1,    -1,    66,   325,   293,   333,    -1,
      -1,   129,   154,   295,   373,   155,    14,   343,    -1,   348,
      14,   343,    -1,   348,    14,    33,   348,    -1,    -1,   348,
      14,    33,    66,   325,   296,   333,    -1,    65,   343,    -1,
     348,    26,   343,    -1,   348,    25,   343,    -1,   348,    24,
     343,    -1,   348,    15,   343,    -1,   348,    23,   343,    -1,
     348,    22,   343,    -1,   348,    21,   343,    -1,   348,    20,
     343,    -1,   348,    19,   343,    -1,   348,    18,   343,    -1,
     348,    17,   343,    -1,   348,    16,   343,    -1,   347,    62,
      -1,    62,   347,    -1,   347,    61,    -1,    61,   347,    -1,
      -1,   343,    29,   297,   343,    -1,    -1,   343,    30,   298,
     343,    -1,    -1,   343,     9,   299,   343,    -1,    -1,   343,
      11,   300,   343,    -1,   343,    10,   343,    -1,   343,    31,
     343,    -1,   343,    33,   343,    -1,   343,    32,   343,    -1,
     343,    46,   343,    -1,   343,    44,   343,    -1,   343,    45,
     343,    -1,   343,    47,   343,    -1,   343,    63,   343,    -1,
     343,    48,   343,    -1,   343,    49,   343,    -1,   343,    43,
     343,    -1,   343,    42,   343,    -1,    44,   343,    -1,    45,
     343,    -1,    50,   343,    -1,    52,   343,    -1,   343,    35,
     343,    -1,   343,    34,   343,    -1,   343,    37,   343,    -1,
     343,    36,   343,    -1,   343,    38,   343,    -1,   343,    41,
     343,    -1,   343,    39,   343,    -1,   343,    40,   343,    -1,
     343,    51,   325,    -1,   344,    -1,   292,    -1,    -1,   154,
     292,   155,   301,   290,    -1,    -1,    -1,   343,    27,   302,
     343,    28,   303,   343,    -1,    -1,   343,    27,    28,   304,
     343,    -1,   382,    -1,    60,   343,    -1,    59,   343,    -1,
      58,   343,    -1,    57,   343,    -1,    56,   343,    -1,    55,
     343,    -1,    54,   343,    -1,    67,   331,    -1,    -1,    53,
     305,   343,    -1,   339,    -1,   309,    -1,   310,    -1,   161,
     332,   161,    -1,    12,   343,    -1,    13,    -1,    -1,   311,
     218,   306,   154,   250,   155,   312,   157,   178,   158,    -1,
      -1,   116,   311,   218,   307,   154,   250,   155,   312,   157,
     178,   158,    -1,    13,   294,    -1,    13,   348,    -1,    13,
     343,   128,   294,    -1,    13,   343,   128,   348,    -1,   310,
      64,   367,   160,    -1,   309,    64,   367,   160,    -1,    82,
      64,   367,   160,    -1,   130,   154,   376,   155,    -1,    64,
     376,   160,    -1,   101,    -1,    -1,   108,   154,   313,   155,
      -1,   313,     8,    76,    -1,   313,     8,    33,    76,    -1,
      76,    -1,    33,    76,    -1,    -1,   167,   315,   254,    -1,
      -1,   149,   152,   167,   316,   254,    -1,    -1,   152,   167,
     317,   254,    -1,    -1,   323,   148,   371,   318,   254,    -1,
      -1,   323,   148,   358,   319,   254,    -1,    -1,   360,   148,
     371,   320,   254,    -1,    -1,   360,   148,   358,   321,   254,
      -1,    -1,   358,   322,   254,    -1,   116,    -1,   167,    -1,
     149,   152,   167,    -1,   152,   167,    -1,   167,    -1,   149,
     152,   167,    -1,   152,   167,    -1,   323,    -1,   326,    -1,
      -1,    -1,   364,   127,   327,   368,   328,   329,    -1,   364,
      -1,   329,   330,    -1,    -1,   127,   368,    -1,    -1,   154,
     155,    -1,   344,    -1,    -1,    81,    -1,   378,    -1,    -1,
     254,    -1,    72,    -1,    73,    -1,    82,    -1,   136,    -1,
     137,    -1,   151,    -1,   133,    -1,   134,    -1,   135,    -1,
     150,    -1,   144,    81,   145,    -1,   144,   145,    -1,   323,
     148,    74,    -1,   337,    -1,   130,   154,   340,   155,    -1,
      64,   340,   160,    -1,   334,    -1,   387,    -1,   167,    -1,
     149,   152,   167,    -1,   152,   167,    -1,   335,    -1,   132,
      -1,   338,    -1,   337,    44,   337,    -1,   337,    45,   337,
      -1,   337,    47,   337,    -1,   337,    48,   337,    -1,   337,
      49,   337,    -1,    50,   337,    -1,    52,   337,    -1,   337,
      31,   337,    -1,   337,    33,   337,    -1,   337,    32,   337,
      -1,   337,    43,   337,    -1,   337,    42,   337,    -1,   337,
      46,   337,    -1,   337,    10,   337,    -1,   337,    11,   337,
      -1,   337,     9,   337,    -1,   337,    30,   337,    -1,   337,
      29,   337,    -1,   337,    35,   337,    -1,   337,    34,   337,
      -1,   337,    37,   337,    -1,   337,    36,   337,    -1,   337,
      38,   337,    -1,   337,    39,   337,    -1,   337,    41,   337,
      -1,   337,    40,   337,    -1,   337,    27,    28,   337,    -1,
     337,    27,   337,    28,   337,    -1,    44,   337,    -1,    45,
     337,    -1,   154,   337,   155,    -1,    75,    -1,   388,    -1,
     386,    -1,   167,    -1,   149,   152,   167,    -1,   152,   167,
      -1,   334,    -1,   162,   378,   162,    -1,   144,   378,   145,
      -1,   132,    -1,    -1,   342,   341,    -1,    -1,     8,    -1,
     342,     8,   336,   128,   336,    -1,   342,     8,   336,    -1,
     336,   128,   336,    -1,   336,    -1,   345,    -1,   294,    -1,
     154,   343,   155,    -1,   154,   308,   155,    -1,   348,    -1,
     348,    -1,   348,    -1,    -1,    -1,   363,   127,   349,   368,
     350,   357,   351,    -1,   363,    -1,   351,   352,    -1,    -1,
      -1,   127,   368,   353,   357,    -1,   354,    64,   367,   160,
      -1,   355,    64,   367,   160,    -1,    -1,   356,   254,    -1,
     355,    -1,   354,    -1,    -1,   365,    -1,   372,   365,    -1,
     323,   148,   358,    -1,   360,   148,   358,    -1,   365,    -1,
     361,    64,   367,   160,    -1,    -1,   314,   362,    64,   367,
     160,    -1,   364,    -1,   361,    -1,   314,    -1,   365,    -1,
     372,   365,    -1,   359,    -1,   365,    64,   367,   160,    -1,
     365,   157,   343,   158,    -1,   366,    -1,    76,    -1,   159,
     157,   343,   158,    -1,    -1,   343,    -1,   370,    -1,    -1,
     358,   369,    -1,   370,    64,   367,   160,    -1,   370,   157,
     343,   158,    -1,   371,    -1,    74,    -1,   157,   343,   158,
      -1,   159,    -1,   372,   159,    -1,   373,     8,   374,    -1,
     374,    -1,   348,    -1,    -1,   129,   154,   375,   373,   155,
      -1,    -1,    -1,   377,   341,    -1,   377,     8,   343,   128,
     343,    -1,   377,     8,   343,    -1,   343,   128,   343,    -1,
     343,    -1,   377,     8,   343,   128,    33,   346,    -1,   377,
       8,    33,   346,    -1,   343,   128,    33,   346,    -1,    33,
     346,    -1,   378,   379,    -1,   378,    81,    -1,   379,    -1,
      81,   379,    -1,    76,    -1,    -1,    76,    64,   380,   381,
     160,    -1,    76,   127,    74,    -1,   146,   343,   158,    -1,
     146,    75,    64,   343,   160,   158,    -1,   147,   348,   158,
      -1,    74,    -1,    77,    -1,    76,    -1,   119,   154,   383,
     155,    -1,   120,   154,   348,   155,    -1,   120,   154,   294,
     155,    -1,     7,   343,    -1,     6,   343,    -1,     5,   154,
     343,   155,    -1,     4,   343,    -1,     3,   343,    -1,   385,
      -1,    -1,   383,     8,   384,   385,    -1,   348,    -1,   294,
      -1,   323,   148,    74,    -1,   360,   148,    74,    -1,   323,
     148,   122,    -1,   323,   148,   122,    -1
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
     583,   588,   589,   590,   591,   592,   593,   594,   595,   599,
     600,   605,   606,   607,   612,   613,   614,   615,   621,   622,
     627,   627,   628,   629,   630,   630,   636,   640,   641,   645,
     646,   649,   651,   655,   656,   660,   661,   665,   669,   670,
     674,   675,   679,   683,   684,   688,   689,   693,   694,   698,
     699,   703,   704,   708,   709,   713,   714,   715,   716,   717,
     718,   722,   723,   724,   725,   729,   730,   734,   735,   740,
     741,   745,   745,   746,   750,   751,   755,   756,   760,   760,
     761,   762,   766,   767,   767,   772,   772,   776,   776,   777,
     778,   779,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   797,   798,   798,   799,   799,   800,   800,   801,   802,
     803,   804,   805,   806,   807,   808,   809,   810,   811,   812,
     813,   814,   815,   816,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   829,   830,   831,
     830,   833,   833,   835,   836,   837,   838,   839,   840,   841,
     842,   843,   844,   844,   845,   846,   847,   848,   849,   850,
     851,   851,   854,   854,   860,   861,   862,   863,   867,   868,
     869,   872,   873,   876,   879,   881,   885,   886,   887,   888,
     892,   892,   894,   894,   896,   896,   898,   898,   900,   900,
     902,   902,   904,   904,   906,   906,   911,   912,   913,   914,
     918,   919,   920,   926,   927,   932,   933,   932,   935,   940,
     941,   946,   950,   951,   952,   956,   957,   958,   963,   964,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   984,   988,   989,   990,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,
    1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,
    1031,  1032,  1033,  1034,  1035,  1040,  1041,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,  1054,  1055,  1058,  1060,  1064,
    1065,  1066,  1067,  1071,  1072,  1076,  1077,  1082,  1087,  1092,
    1097,  1098,  1097,  1100,  1104,  1105,  1110,  1110,  1114,  1115,
    1119,  1119,  1124,  1125,  1126,  1130,  1131,  1135,  1136,  1141,
    1145,  1146,  1146,  1151,  1152,  1153,  1158,  1159,  1160,  1164,
    1165,  1166,  1171,  1172,  1176,  1177,  1182,  1183,  1183,  1187,
    1188,  1189,  1193,  1194,  1198,  1199,  1203,  1204,  1209,  1210,
    1210,  1211,  1216,  1217,  1221,  1222,  1223,  1224,  1225,  1226,
    1227,  1228,  1232,  1233,  1234,  1235,  1241,  1242,  1242,  1243,
    1244,  1245,  1246,  1251,  1252,  1253,  1258,  1259,  1260,  1261,
    1262,  1263,  1264,  1265,  1269,  1270,  1270,  1274,  1275,  1279,
    1280,  1284,  1288
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
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@39", "$@40",
  "trait_use_statement", "trait_list", "trait_adaptations",
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
     254,   255,   255,   255,   255,   255,   255,   255,   255,   256,
     256,   257,   257,   257,   258,   258,   258,   258,   259,   259,
     261,   260,   260,   260,   262,   260,   263,   264,   264,   265,
     265,   266,   266,   267,   267,   268,   268,   269,   270,   270,
     271,   271,   272,   273,   273,   274,   274,   275,   275,   276,
     276,   277,   277,   278,   278,   279,   279,   279,   279,   279,
     279,   280,   280,   280,   280,   281,   281,   282,   282,   283,
     283,   285,   284,   284,   286,   286,   287,   287,   289,   288,
     288,   288,   290,   291,   290,   293,   292,   295,   294,   294,
     294,   296,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     297,   294,   298,   294,   299,   294,   300,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   301,   294,   302,   303,
     294,   304,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   305,   294,   294,   294,   294,   294,   294,   294,
     306,   294,   307,   294,   308,   308,   308,   308,   309,   309,
     309,   310,   310,   311,   312,   312,   313,   313,   313,   313,
     315,   314,   316,   314,   317,   314,   318,   314,   319,   314,
     320,   314,   321,   314,   322,   314,   323,   323,   323,   323,
     324,   324,   324,   325,   325,   327,   328,   326,   326,   329,
     329,   330,   331,   331,   331,   332,   332,   332,   333,   333,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   335,   336,   336,   336,   337,   337,   337,   337,
     337,   337,   337,   337,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   340,   340,   341,   341,   342,
     342,   342,   342,   343,   343,   344,   344,   345,   346,   347,
     349,   350,   348,   348,   351,   351,   353,   352,   354,   354,
     356,   355,   357,   357,   357,   358,   358,   359,   359,   360,
     361,   362,   361,   363,   363,   363,   364,   364,   364,   365,
     365,   365,   366,   366,   367,   367,   368,   369,   368,   370,
     370,   370,   371,   371,   372,   372,   373,   373,   374,   375,
     374,   374,   376,   376,   377,   377,   377,   377,   377,   377,
     377,   377,   378,   378,   378,   378,   379,   380,   379,   379,
     379,   379,   379,   381,   381,   381,   382,   382,   382,   382,
     382,   382,   382,   382,   383,   384,   383,   385,   385,   386,
     386,   387,   388
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
       3,     1,     1,     2,     2,     3,     3,     4,     4,     3,
       1,     1,     2,     4,     3,     5,     1,     3,     2,     0,
       0,     4,     2,     1,     0,     9,     3,     1,     3,     1,
       3,     0,     1,     1,     2,     2,     2,     3,     1,     3,
       1,     1,     3,     4,     3,     0,     1,     1,     3,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     5,     1,     3,     5,     4,     3,     1,     0,
       1,     0,     4,     1,     2,     1,     4,     3,     0,     3,
       1,     1,     0,     0,     2,     0,     4,     0,     7,     3,
       4,     0,     7,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       0,     4,     0,     4,     0,     4,     0,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     0,     5,     0,     0,
       7,     0,     5,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     0,     3,     1,     1,     1,     3,     2,     1,
       0,    10,     0,    11,     2,     2,     4,     4,     4,     4,
       4,     4,     3,     1,     0,     4,     3,     4,     1,     2,
       0,     3,     0,     5,     0,     4,     0,     5,     0,     5,
       0,     5,     0,     5,     0,     3,     1,     1,     3,     2,
       1,     3,     2,     1,     1,     0,     0,     6,     1,     2,
       0,     2,     0,     2,     1,     0,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     1,     4,     3,     1,     1,     1,     3,
       2,     1,     1,     1,     3,     3,     3,     3,     3,     2,
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
       0,   359,     0,     0,     0,     0,   352,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   552,     0,     0,   412,
       0,   420,   421,     6,   475,   532,    80,   422,     0,    60,
      57,     0,     0,    89,     0,     0,     0,     0,   373,     0,
       0,    92,     0,     0,     0,     0,     0,   396,     0,     0,
       0,     0,   128,   130,   134,     0,     0,   484,   426,   427,
     428,   423,   424,     0,     0,   429,   425,     0,     0,    91,
      43,   544,   415,     0,   478,     4,     0,     8,    48,     9,
      10,   116,   117,     0,     0,   335,   494,     0,   355,   356,
     118,   525,     0,   481,   354,     0,   334,   493,     0,   497,
     394,   528,     0,   524,   503,   523,   526,   531,     0,   343,
     477,   476,   359,     6,   396,     0,   118,   583,   582,     0,
     580,   579,   358,   494,     0,   497,   321,   322,   323,   324,
       0,   350,   349,   348,   347,   346,   345,   344,   396,     0,
       0,   380,     0,   299,   499,     0,   297,     0,   557,     0,
     487,   283,     0,     0,   397,   403,   275,   404,     0,   408,
     526,     0,     0,   351,   414,     0,    51,    49,   534,     0,
     258,     0,     0,   259,     0,     0,    67,    69,     0,    71,
       0,     0,     0,    73,   494,     0,   497,     0,     0,     0,
       0,     0,    23,     0,    22,   201,     0,     0,   200,   131,
     129,   206,     0,   118,     0,     0,     0,     0,   277,   552,
     566,     0,   431,     0,     0,     0,   564,     0,    15,     0,
     480,   335,     0,     0,    41,     0,   416,     0,   417,     0,
       0,     0,     0,     0,    20,   132,   126,    76,   534,   534,
     119,   360,     0,     0,   304,     0,   306,   338,   300,   302,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,   298,   296,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   534,
     500,   534,     0,   545,   527,   360,     0,     0,   353,     0,
     384,     0,     0,   561,   498,     0,   372,   488,   553,     0,
     399,     0,   418,     0,   405,   527,   413,    54,     0,   535,
       0,     0,    79,     0,    58,     0,   260,   263,   494,   497,
       0,     0,    70,    72,    96,     0,    74,    75,    43,    95,
       0,    29,     0,    28,     0,    35,     0,    34,    25,     0,
       0,    17,     0,   202,   497,     0,    77,     0,     0,    78,
     362,     0,   113,   115,   494,   497,     0,   584,   494,   497,
       0,   551,     0,   567,     0,   430,   565,   475,     0,     0,
     563,   483,   562,   479,     5,    12,    13,     0,   336,   496,
     495,    50,     0,     0,   357,   482,     7,     0,   381,     0,
       0,   124,   135,     0,     0,   122,     0,   534,   589,   592,
       0,   517,   515,   386,     0,     0,   308,     0,   341,     0,
       0,     0,   309,   311,   310,   326,   325,   328,   327,   329,
     331,   332,   330,   320,   319,   313,   314,   312,   315,   317,
     318,   333,   316,     0,   279,   287,   295,   294,   293,   292,
     291,   290,   289,   288,   286,   285,   284,   395,   590,   518,
     390,     0,     0,     0,     0,   581,   494,   497,   382,   542,
       0,   556,     0,   555,   398,   517,   419,   276,   518,     0,
      43,    52,   370,   257,    61,     0,    63,   261,    86,    83,
       0,     0,   159,   159,    68,     0,     0,     0,     0,   485,
     422,     0,   442,     0,     0,     0,     0,   438,     0,   436,
     441,    40,   433,   443,   437,    41,    31,     0,     0,    18,
      37,     0,     0,    19,     0,    24,    21,     0,   199,   207,
     204,     0,     0,     0,   585,   576,   578,   577,    11,     0,
     548,     0,   547,   371,     0,   569,     0,   570,   572,     0,
       3,     5,   385,   272,     0,    42,    44,    45,    46,   533,
       0,     0,   188,     0,   494,     0,   497,     0,     0,     0,
     400,   133,   137,     0,     0,   369,   368,     0,   184,     0,
       0,     0,     0,   516,   305,   307,     0,     0,   301,   303,
       0,   280,     0,     0,   520,   537,   501,   536,   541,   529,
     530,   560,   559,     0,   406,    41,   168,     0,    43,   166,
      59,   259,     0,     0,     0,     0,     0,     0,   159,     0,
     159,     0,   472,   473,   449,   450,   492,     0,   487,   485,
       0,     0,   440,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,    30,    27,     0,    36,    33,    26,   203,     0,
     184,   114,    82,     0,   549,   551,     0,   573,   575,   574,
       0,     0,   383,    16,     3,   337,     0,     0,   193,   194,
       0,   189,   190,    39,     0,   402,     0,     0,   136,   139,
     209,   184,   185,   186,     0,   178,   180,   118,   187,   522,
     543,   389,   387,   342,   339,   281,   393,   391,   538,   514,
     534,     0,     0,   554,   410,   171,   174,     0,    41,     0,
     262,     0,     0,   141,   143,   141,   153,     0,    43,   151,
      90,     0,     0,     0,     0,     0,   155,     0,   435,   488,
     486,     0,   439,   474,   432,   591,   459,   457,   458,     0,
       0,   461,   460,   451,   453,   452,   463,   462,   465,   464,
     466,   467,   469,   468,   455,   454,   444,   445,   456,   446,
     447,   448,     0,    93,    32,    38,   205,     0,   586,   551,
     546,     0,   568,     0,    14,   534,     0,   271,   270,   274,
     265,     0,     0,     0,   494,   497,   401,   138,   209,     0,
     241,     0,   374,   184,   120,     0,   418,   513,   512,     0,
     505,     0,     0,   558,   407,   176,     0,     0,    53,    62,
       0,    64,   144,   145,     0,     0,     0,     0,    41,     0,
     157,     0,   164,   165,   162,   156,   491,   490,   434,   470,
       0,    98,   103,   374,     0,   278,   571,     0,   506,   264,
     534,     0,    47,   197,   198,   241,   140,     0,     0,   245,
     246,   247,   250,   249,   248,   240,   127,   208,   213,   210,
       0,   239,   243,     0,     0,     0,     0,   181,   121,     0,
     340,   282,   534,   534,   511,   502,   539,   540,     0,   409,
       0,     0,     0,   169,   175,   167,   259,   551,   142,    87,
      84,   154,     0,   158,   160,    43,     0,   471,     0,   104,
      94,     0,   550,   267,   514,     0,   269,   125,     0,     0,
     217,     0,   118,   244,     0,   212,    43,     0,    43,   182,
       0,     0,   504,   411,     0,    43,     0,     0,     0,     0,
       0,     0,   152,    43,    41,   489,    99,     0,    43,   507,
     266,     0,     0,   219,   221,   216,   253,     0,     0,     0,
      41,     0,   378,     0,    41,     0,   508,   509,   172,    41,
      56,   170,    65,   146,    43,   149,    88,    85,    41,     0,
      43,    41,   256,   218,     6,     0,   222,   223,     0,     0,
     231,     0,     0,     0,     0,   211,   214,     0,   123,   379,
       0,   375,   361,   183,    43,     0,    41,     0,    41,   363,
     220,   224,   225,   235,     0,   226,     0,   254,   251,     0,
     255,     0,   376,    41,    43,   147,    66,     0,   100,   105,
       0,   234,   227,   228,   232,     0,   184,   377,    41,   150,
       0,   233,     0,   252,     0,     0,    43,   229,     0,   148,
      41,   237,    43,   215,   101,    41,   107,   238,     0,   102,
     106,   108,     0,   109,   110,     0,     0,   111,     0,    43,
      41,   112
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    84,    85,   561,   394,   203,   204,
     352,   353,   356,   357,    86,   234,   402,   565,   995,    88,
     328,   616,   490,   735,   182,   495,   181,   617,   621,   916,
    1025,   341,   624,   961,   623,   960,   185,   197,   862,   793,
     928,   999,  1060,  1076,   930,   967,  1079,  1080,  1081,  1085,
    1088,   371,   372,    89,    90,   251,   899,    91,   587,    92,
     582,   412,    93,   411,    94,   584,   707,   708,   845,   743,
     917,  1046,   996,   750,   501,   504,   629,   963,   925,   854,
     620,   736,   957,   835,  1024,   838,   912,   714,   715,   716,
     717,   486,   573,   207,   208,   212,   820,   887,   941,  1039,
     888,   939,   975,  1005,  1006,  1007,  1008,  1052,  1009,  1010,
    1011,  1050,  1073,   889,   890,   891,   892,   977,   893,   179,
     335,   336,   622,   807,   808,   809,   871,   695,   696,    95,
     322,    96,   381,   826,   430,   431,   425,   427,   563,   429,
     825,   596,   140,   416,   541,    97,    98,    99,   126,   896,
     983,   101,   242,   559,   397,   592,   591,   603,   602,   297,
     102,   718,   166,   167,   489,   734,   834,   909,   173,   237,
     487,   103,   520,   636,   522,   523,   104,   637,   318,   638,
     105,   106,   107,   313,   108,   109,   472,   729,   905,   810,
     934,   827,   828,   829,   830,   110,   111,   112,   113,   252,
     114,   115,   116,   117,   330,   606,   728,   607,   608,   118,
     551,   552,   799,   159,   160,   225,   226,   554,   690,   119,
     376,   683,   377,   120,   524,   121
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -872
static const yytype_int16 yypact[] =
{
    -872,    78,    94,  -872,  1933,  4363,  4363,   -53,  4363,  4363,
    4363,  4363,  4363,  4363,  4363,  4363,  -872,  4363,  4363,  4363,
    4363,  4363,  4363,  4363,   166,   166,  3148,  4363,   258,   -48,
     -40,  -872,  -872,    92,  -872,  -872,  -872,   177,  4363,  -872,
    -872,   -31,   -20,  -872,   -40,  3283,  3418,   170,  -872,   185,
    3553,  -872,  4363,   161,    10,   128,   162,     7,   137,   143,
     145,   154,  -872,  -872,  -872,   190,   201,  -872,  -872,  -872,
    -872,  -872,  -872,   304,   -28,  -872,  -872,   289,  4498,  -872,
    -872,   218,   212,   322,   -56,  -872,    17,  -872,  -872,  -872,
    -872,  -872,  -872,   314,   346,  -872,  -872,   213,   318,   359,
     400,   376,   309,  -872,  -872,  5074,  -872,  -872,   216,  1880,
    -872,  -872,   311,   398,   350,  -872,    73,  -872,    40,  -872,
    -872,  -872,  -872,  -872,   395,   327,   400,  5682,  5682,  4363,
    5682,  5682,  5949,   -71,  5376,  1414,   435,   435,    30,   435,
    4363,   435,   435,   435,   435,   435,   435,   435,  -872,   355,
     289,   -61,   363,  -872,  -872,   369,  -872,   166,  5420,   360,
     516,  -872,   396,   289,   397,   399,  -872,  -872,   402,   418,
     -36,    40,  3688,  -872,  -872,  4498,   524,  -872,  4363,    18,
    5682,  2743,   -40,  4363,  4363,   403,  -872,  -872,  5117,  -872,
    5161,   404,   540,  -872,   405,  5682,   980,   401,  5204,    70,
      91,   289,   -17,    23,  -872,  -872,   240,    25,  -872,  -872,
    -872,   542,    27,   400,   166,  4363,  4363,   407,  -872,  3148,
      84,   292,  -872,  4633,   166,   319,  -872,   289,  -872,   123,
     -49,   408,   412,  5247,   411,  4363,   295,   409,   340,   295,
     176,   497,   419,   500,  -872,   452,  -872,  -872,  4363,  4363,
    -872,   504,   515,   220,  -872,  4363,  -872,   552,  -872,  -872,
    4363,  4363,  4363,  4363,  4363,  4363,  4363,  4363,  4363,  4363,
    4363,  4363,  4363,  4363,  4363,  4363,  4363,  4363,  4363,   258,
    4363,  -872,  -872,  -872,  3823,  4363,  4363,  4363,  4363,  4363,
    4363,  4363,  4363,  4363,  4363,  4363,  4363,   419,    21,  4363,
    -872,  4363,  4363,   218,    82,  -872,  5291,  4363,   435,   289,
      85,   182,   182,  -872,  -872,  3958,  -872,  4093,  -872,   289,
     397,    64,   419,    64,  -872,   -16,  -872,  -872,  2743,  5682,
     429,  4363,  -872,   505,  -872,   436,   583,  5682,   502,  1204,
     522,    13,  -872,  -872,  -872,  5485,  -872,  -872,  -872,  -872,
     289,   259,    32,  -872,   289,   291,    35,  -872,   308,   523,
     151,  -872,  4363,  -872,  -872,    10,  -872,  5485,   530,  -872,
    -872,    39,  -872,  -872,    43,   135,    47,  -872,   443,  1562,
     451,   224,   454,  -872,   536,  -872,  -872,   547,  4769,   456,
    -872,  -872,  -872,    99,  -872,  -872,  -872,   419,  -872,  -872,
    -872,  -872,  2068,  4812,  -872,  -872,  -872,  2878,  -872,   598,
     134,  -872,   491,   459,   460,  -872,   492,  4363,   494,  -872,
    4363,   496,   -16,  -872,    40,  4363,  5763,  4363,  -872,  4363,
    4363,  4363,  2929,  1690,  1881,  3062,  3062,  3062,  3062,  1466,
    1466,  1466,  1466,   720,   720,    62,    62,    62,    30,    30,
      30,  -872,   435,   158,  5949,  5949,  5949,  5949,  5949,  5949,
    5949,  5949,  5949,  5949,  5949,  5949,  5949,  -872,   494,   498,
    -872,   493,   182,   503,  4855,  -872,   275,  1441,   284,  -872,
     166,  5682,   166,  5476,   397,  -872,  -872,  -872,  -872,   182,
    -872,  -872,  -872,  5682,  -872,  2203,  -872,  -872,  -872,  -872,
     640,    52,   501,   509,  -872,  5510,  5510,  5510,  5510,  5485,
    -872,   506,  -872,   -23,   517,   289,  5510,   -61,   520,  -872,
    -872,  -872,  5847,  -872,  -872,   512,   315,   597,    70,  -872,
     326,   599,    91,  -872,   601,  -872,  -872,  4899,  -872,  -872,
     662,   527,   166,   521,  -872,  -872,  -872,  -872,  -872,   529,
    -872,    54,  -872,  -872,   328,  -872,  4363,  -872,  -872,   419,
     526,  -872,  -872,   140,   532,  -872,  -872,  -872,  -872,  -872,
     166,  4363,  -872,    55,    57,   533,   950,  5485,   537,   289,
     397,  -872,   564,   134,   538,  -872,  -872,   539,   263,   518,
    4942,   419,   419,   -16,  5724,  5949,  4363,  5639,  6018,  6051,
     258,  -872,   419,   419,  -872,  -872,  -872,   -15,  -872,  -872,
    -872,  -872,  -872,  4228,  -872,   384,  -872,   -40,  -872,  -872,
    -872,  4363,  4363,   152,   152,  5485,   620,  2338,  -872,   375,
    -872,   169,   427,   427,  -872,  -872,   569,   545,   690,  5485,
     554,   289,    85,  5334,     5,  5510,  5510,  5510,  1561,  5510,
    5510,  5510,  5510,  5510,  5510,  5510,  5510,  5510,  5510,  5510,
    5510,  5510,  5510,  5510,  5510,  5510,  5510,  5510,  5510,  5510,
     602,   632,  -872,  -872,   635,  -872,  -872,  -872,  -872,  5485,
     263,  -872,  -872,  4363,  -872,   224,   696,  -872,  -872,  -872,
     551,  1799,  -872,  -872,   556,  -872,   165,   557,  -872,  5682,
    3013,  -872,  -872,  -872,   289,   397,   134,   558,   708,  -872,
    -872,   263,  -872,  -872,   563,   711,  -872,   400,  -872,  -872,
    -872,  -872,  -872,  5984,  -872,  -872,  -872,  -872,  -872,   566,
    4363,  4363,   166,  5682,  -872,  -872,   378,   565,   637,   575,
    5682,   166,   571,   604,  -872,   604,  -872,   722,  -872,  -872,
    -872,   393,   578,  4363,    28,   294,  -872,  5485,  -872,  5485,
    -872,   584,   284,  -872,  -872,  -872,  5887,  5926,  6086,  5510,
    5806,  6127,  6146,  3199,  3333,  2062,  2737,  2737,  2737,  2737,
     884,   884,   884,   884,   495,   495,   427,   427,   427,  -872,
    -872,  -872,   586,  -872,  -872,  -872,  -872,   588,  -872,   224,
    -872,  4363,  -872,   580,  -872,  4363,   182,   614,   301,  -872,
    -872,   590,   166,  4363,    58,  1146,   397,   708,  -872,   134,
     414,   592,   641,   215,   595,  4363,   419,   687,   697,   419,
    -872,   600,  4985,  -872,   643,   424,   -40,  2743,  -872,  -872,
     606,  -872,  -872,  -872,   152,   618,   619,  5485,   684,   621,
    -872,  5031,  -872,  -872,  -872,  -872,  -872,   650,  -872,  6107,
    5510,  -872,   673,   641,    59,  5949,  -872,   622,  -872,  -872,
    4363,   614,  -872,  -872,  5682,   642,  -872,   707,   134,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
     395,   715,  -872,    36,   627,   631,   629,  -872,  -872,   713,
    5984,  -872,  4363,  4363,  -872,   614,  -872,  -872,   182,  -872,
     -40,   759,   719,  -872,  -872,  -872,  4363,   224,  -872,  -872,
    -872,  -872,   636,  -872,  -872,  -872,  5485,  6107,   134,  -872,
    -872,   639,  -872,  -872,   566,   634,   614,  -872,   783,    15,
    -872,   725,   400,  -872,   728,  -872,  -872,    26,  -872,   789,
     644,   645,  -872,  -872,   778,  -872,   652,  2743,   654,    60,
    2473,  2473,  -872,  -872,   -22,  -872,  -872,   653,  -872,  -872,
    -872,  5485,   134,  -872,   202,  -872,   797,    37,   738,   799,
     657,   741,  -872,    61,   661,  5485,  -872,  -872,  -872,   753,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,   175,   756,
    -872,   675,  -872,  -872,   742,   676,   202,  -872,   681,   745,
     730,   685,   692,  5485,   766,  -872,  -872,  5485,  -872,  -872,
      71,  -872,  -872,  -872,  -872,  2608,   757,   688,   691,  -872,
    -872,  -872,  -872,   471,   134,  -872,   774,  -872,   836,   698,
    -872,   775,  -872,   432,  -872,  -872,  -872,   700,  -872,  -872,
     779,   784,   851,  -872,  -872,  5485,   263,  -872,   773,  -872,
     705,  -872,   134,  -872,   709,   735,  -872,  -872,   349,  -872,
     734,  -872,  -872,  -872,  -872,   737,   758,  -872,   743,  -872,
     758,  -872,   134,  -872,  -872,   823,   710,  -872,   744,  -872,
     747,  -872
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -872,  -872,  -372,  -872,   -24,  -872,  -872,  -872,  -872,   543,
    -872,   379,  -872,   377,  -872,   189,  -872,  -872,    20,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -172,  -872,
    -872,  -872,   368,   510,   511,  -124,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,   205,   172,  -606,
    -872,  -872,   -47,  -872,  -872,  -872,  -464,  -872,  -872,    67,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -669,  -872,    96,
    -872,  -178,  -872,  -872,   550,  -872,   102,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,   -70,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,  -872,  -871,  -872,  -872,  -872,
    -611,  -872,  -872,    68,  -872,  -872,  -872,  -872,  -872,   860,
    -872,     2,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
    -872,  -872,  -872,  -872,  -872,   -57,  -872,  -872,     4,    77,
    -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
     221,  -310,  -265,  -872,  -872,  -872,  -872,  -872,  -872,  -872,
     115,   896,  -872,  -313,  1122,  -872,  -872,   303,   305,  -872,
    1065,   -14,   739,  -463,   508,   910,  -872,  -872,  -872,  -773,
    -872,  -872,  -872,  -872,    12,  -241,  -872,   -19,  -872,  -872,
    -872,   -25,    49,  -872,  -211,  -482,  -872,  -872,  -181,     8,
    -772,   264,  -872,   732,  -872,   453,   274,  -872,  -872,  -872,
    -872,  -872,   261,  -872,  -872,  -872
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -589
static const yytype_int16 yytable[] =
{
     151,   151,   305,   169,   164,   155,   155,   614,   100,   168,
     739,   797,   421,   133,   451,   174,   176,   611,   745,   612,
     943,   232,   560,   972,    87,   243,   331,   864,   301,   202,
     186,   360,   521,   365,   869,   368,   171,   413,   414,   631,
     528,   502,   821,   532,   944,  1014,   123,   542,   301,   730,
     229,  -588,   194,   230,   539,   544,   852,   469,   640,   981,
     626,   213,   685,   700,   408,  -191,  -195,   685,   685,  1020,
     421,   469,   423,  -163,  -163,  -163,   359,   170,     3,   764,
     485,   279,   488,   211,  -364,  -364,   205,  -397,   471,   370,
     473,   241,  -397,   280,    -2,   468,   241,    35,  -380,  -399,
     581,   129,   982,   241,  1041,  -384,   172,   698,    48,   276,
     277,   278,  -519,   279,   175,   232,    35,   470,   232,   467,
     177,   302,   222,   183,   227,   280,   310,   765,   213,   228,
     423,   470,   952,   151,   184,   241,  -163,   301,   155,   320,
      35,   302,   731,  -587,   123,   959,   301,  1042,   383,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,  1051,   869,   751,   123,   755,   304,   334,   206,
     503,   973,   974,   244,   332,   351,   355,   358,   420,   361,
      81,   366,   151,   369,   853,   741,   338,   155,   529,   694,
     151,   533,   945,  1015,   543,   155,  -499,  -499,  -588,   303,
     151,   333,   545,   393,  -273,   155,   589,   627,   123,   686,
     701,   384,  -191,  -195,   932,   993,  1021,   374,   378,   562,
     325,  -519,   350,    81,   600,   123,   123,  -515,    35,   805,
     302,   605,   123,  -399,    35,   123,  -516,   241,   918,   302,
     123,   178,    35,   354,   191,   152,   152,  -398,   605,   165,
     209,   241,   220,  -382,   169,   164,   479,   390,    35,   192,
     168,   424,   199,   200,   703,   753,   754,  -273,   148,   833,
    -161,  -161,  -161,   709,   148,   241,  1004,   282,   283,   395,
     396,   742,   148,   578,   210,   478,   579,   171,   220,   123,
    -587,   214,   806,   236,   418,   484,    35,   215,   123,   216,
      35,   149,   422,   201,   150,   958,   424,   149,   217,   476,
     150,    81,   746,   201,   123,   149,    35,    81,   150,   424,
     424,   517,   223,   224,   868,    81,   526,   756,   170,   424,
     530,   424,   123,  -161,    35,   725,   202,   123,   405,   420,
     148,    81,   419,   517,   218,   712,   713,   422,   491,   873,
     575,   578,   527,   549,   579,   219,   148,   151,   223,   224,
     422,   422,   155,   123,   578,   870,   796,   579,   220,   247,
     422,   220,   422,   149,   148,   235,   150,   420,   152,    81,
     220,   692,   248,    81,   531,   221,   580,  1064,   245,   149,
     753,   754,   150,   712,   713,   220,   709,   362,   220,    81,
     390,   534,   687,   239,   688,   689,   100,   162,   671,   574,
     163,   241,   578,   721,   722,   579,   220,    81,  -179,   674,
     246,   390,   566,   249,   726,   727,   953,   152,  -268,   151,
    -366,  -366,  -398,   250,   155,   152,   241,   385,   223,   224,
    -521,   223,   224,   241,   856,   152,   857,   836,   837,   222,
     223,   224,   855,   -55,   -55,   -55,   151,   253,   151,   298,
     241,   155,   299,   155,   391,   223,   224,   241,   223,   224,
     752,   753,   754,   593,   667,   668,   669,   300,   241,   227,
     424,   517,   517,   517,   517,   517,   223,   224,   849,   753,
     754,   642,   517,   910,   911,   386,    48,   424,   280,   392,
     165,  -173,  -173,  -173,   351,  1071,  1072,   309,   355,   876,
     386,   311,   392,   386,   392,   619,   877,   312,   151,   831,
     316,   422,   878,   155,   317,   879,   880,   881,   882,   883,
     884,   885,   153,   156,   921,   238,   240,   525,   422,   664,
     665,   666,   667,   668,   669,   324,   151,   321,   319,   241,
     323,   155,   327,   517,   345,   705,   367,   340,   348,   580,
     344,   346,   380,   398,   580,   605,   518,   399,   940,   401,
     404,   406,   886,   407,   409,   169,   164,   410,   415,   417,
     428,   168,   879,   880,   881,   882,   883,   884,   518,   492,
     494,   497,   496,   824,   867,   498,   500,   535,   546,   151,
     151,   517,   152,   737,   155,   155,   540,   548,   171,   553,
     555,   556,   577,   965,   558,   517,   583,   762,   966,   585,
     586,   517,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   588,   749,  -542,   170,
    -388,   904,  -392,   604,   625,   517,   580,   628,  1002,   935,
     639,   151,  1003,   609,  1012,   630,   155,   605,   644,   641,
     670,   672,  1023,   675,   152,   677,   679,   682,   719,   615,
     816,   680,   580,   684,   693,   374,   697,   580,   702,   704,
     706,   950,   951,   711,   747,   710,  1012,   757,   759,   385,
    1037,   152,   814,   152,  1040,   758,   794,   792,   151,   795,
     801,   802,   811,   155,   804,   818,   819,   151,   822,   823,
    -510,   839,   155,   840,  1053,   843,   518,   518,   518,   518,
     518,   841,   844,   517,   850,   517,   847,   518,   866,   858,
     861,   806,  1063,   863,   877,   517,   872,   894,   898,   895,
     878,   902,  1067,   879,   880,   881,   882,   883,   884,   885,
     906,   903,   915,   152,   273,   274,   275,   276,   277,   278,
     908,   279,  1084,   919,   920,   151,   922,   923,   926,   929,
     155,   938,   933,   280,   946,   947,   948,   955,   151,   949,
     956,   152,   962,   155,   970,   580,   968,   971,   518,   580,
     937,   976,   979,   985,   986,   987,   988,   738,   990,   992,
    1000,  1013,  1016,  1017,   424,  1018,  -242,  1019,   978,  1022,
     151,   165,   913,   517,  -177,   155,   879,   880,   881,   882,
     883,   884,  1027,  1029,  1030,  -230,   517,  1032,  1033,  1034,
    1036,  1035,  1038,  1048,   152,   152,   518,  1047,  1054,  1049,
    1055,  1057,  1056,  1061,   580,   422,  1059,   914,  -236,  1062,
     518,  1065,  1066,  1078,  1068,  1087,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,  1069,  1074,   151,   942,  1077,   954,  1082,   155,  1086,
     518,  1089,   517,   536,   580,  1091,   152,   673,  1083,   676,
     681,   817,   567,   568,   997,   538,   424,   846,   924,   897,
     875,   135,  -589,  -589,  -589,  -589,   662,   663,   664,   665,
     666,   667,   668,   669,   154,   154,  1031,   848,   231,   936,
     931,   901,   761,   760,   798,   363,   969,   517,   580,   800,
     580,   382,     0,   152,     0,     0,     0,   422,  -192,     0,
     196,   517,   152,     0,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   991,   518,     0,
     518,     0,   580,     0,     0,     0,     0,     0,     0,   517,
     518,     0,     0,   517,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,     0,     0,     0,
     580,  -499,  -499,     0,     0,     0,     0,     0,     0,     0,
     152,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   517,   580,   152,     0,     0,     0,     0,   580,     0,
       0,  -499,  -499,     0,     0,  1045,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   580,     0,
       0,     0,     0,     0,     0,   152,     0,   314,   518,     0,
     127,   128,     0,   130,   131,   132,   134,   136,   137,   138,
     139,   518,   141,   142,   143,   144,   145,   146,   147,     0,
       0,   158,   161,     0,   339,     0,     0,     0,     0,     0,
       0,     0,     0,   180,     0,  -192,     0,     0,     0,     0,
     188,   190,     0,     0,   964,   195,   364,   198,     0,     0,
       0,     0,     0,     0,   373,   375,   379,     0,     0,     0,
       0,     0,     0,     0,   389,   980,   347,   984,   152,     0,
       0,     0,     0,   233,   989,     0,     0,   518,     0,     0,
       0,     0,   998,     0,  -196,     0,     0,  1001,     0,     0,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1026,     0,     0,     0,     0,     0,  1028,
       0,     0,   518,     0,   306,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   308,   518,  -499,  -499,     0,
       0,     0,     0,  1043,     0,     0,     0,   477,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,     0,     0,  1058,   518,     0,     0,   233,   518,     0,
     233,   519,     0,   329,     0,     0,     0,     0,   337,   195,
       0,     0,     0,     0,     0,  1070,     0,     0,     0,     0,
       0,  1075,     0,   519,     0,  -499,  -499,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   518,     0,  1090,     0,
     195,   195,     0,     0,   158,     0,     0,     0,   388,     0,
       0,   550,     0,     0,     0,     0,     0,   499,     0,     0,
     403,  -196,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   329,   329,     0,     0,   576,     0,     0,
     426,     0,     0,     0,     0,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,     0,   452,     0,     0,     0,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,     0,   601,   329,     0,   329,   474,     0,     0,
       0,     0,   195,     0,     0,     0,     0,     0,     0,     0,
     481,     0,   483,     0,     0,     0,     0,     0,     0,     0,
     314,     0,   314,     0,     0,     0,   493,     0,     0,     0,
       0,   519,   519,   519,   519,   519,     0,     0,     0,     0,
       0,     0,   519,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   537,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,     0,     0,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,     0,     0,
       0,     0,   195,   519,     0,  -499,  -499,     0,     0,     0,
     314,     0,   329,     0,     0,   590,     0,     0,     0,     0,
     594,     0,   595,     0,   597,   598,   599,     0,     0,     0,
       0,     0,  -499,  -499,  -589,  -589,  -589,  -589,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,     0,     0,
       0,   519,     0,     0,     0,     0,     0,     0,     0,   280,
       0,     0,     0,   744,   744,   519,     0,     0,     0,     0,
       0,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,     0,     0,     0,  -365,
    -365,     0,     0,     0,     0,   519,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   769,
       0,     0,     0,   375,     0,   550,  -367,  -367,     0,     0,
       0,     0,     0,     0,     0,   505,   506,     0,     0,     0,
     815,   507,     0,   508,     0,     0,     0,     0,     0,     0,
       0,   691,     0,  -499,  -499,     0,     0,   632,   633,   634,
     635,     0,     0,    31,    32,   123,   699,     0,   643,     0,
       0,     0,   314,   510,     0,     0,     0,     0,     0,     0,
       0,   842,     0,   519,     0,   519,     0,     0,     0,     0,
       0,   723,     0,     0,     0,   519,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   148,   733,     0,
       0,     0,     0,     0,     0,     0,   337,   740,     0,     0,
       0,     0,     0,   512,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,   513,     0,     0,     0,   550,
     514,    75,    76,   515,     0,   516,     0,   547,     0,     0,
       0,     0,   314,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,     0,   519,     0,     0,     0,     0,   195,     0,
       0,     0,     0,   280,   744,     0,   519,     0,     0,     0,
       0,     0,     0,     0,     0,   195,     0,   766,   767,   768,
     770,   771,   772,   773,   774,   775,   776,   777,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
     790,   791,     0,     0,     0,   329,   832,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   254,   255,
     256,     0,     0,     0,     0,     0,     0,     0,   851,     0,
       0,     0,   519,     0,     0,     0,   257,   550,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   280,     0,     0,     0,   865,   519,     0,     0,
     329,     0,     0,     0,     0,     0,     0,     0,   874,     0,
       0,   519,     0,     0,     0,     0,     0,     0,     0,     0,
     900,   859,     0,     0,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,     0,     0,   519,
       0,     0,     0,   519,     0,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,     0,     0,   329,     5,     6,     7,     8,
       9,  -499,  -499,     0,   280,    10,    11,     0,     0,     0,
       0,   519,     0,     0,     0,     0,     0,     0,     0,   803,
       0,     0,     0,     0,     0,     0,     0,   329,   329,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,   337,   927,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
       0,    36,     0,     0,     0,    37,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,    51,     0,     0,
      52,    53,     0,    54,     0,     0,     0,    55,    56,    57,
       0,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,    11,    74,    75,    76,    77,     0,    78,     0,    79,
      80,     0,    81,     0,    82,    83,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,    29,    30,     0,     0,     0,
      31,    32,    33,    34,    35,     0,    36,     0,     0,     0,
      37,    38,    39,    40,     0,    41,     0,    42,     0,    43,
       0,     0,    44,     0,     0,     0,    45,    46,    47,    48,
       0,    50,    51,     0,     0,    52,     0,     0,    54,     0,
       0,     0,    55,    56,    57,     0,    58,    59,    60,   564,
      62,    63,    64,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,    11,   125,    75,    76,
      77,     0,    78,     0,    79,    80,     0,    81,     0,    82,
      83,   618,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
       0,    36,     0,     0,     0,    37,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,     0,    50,    51,     0,     0,
      52,     0,     0,    54,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,    11,   125,    75,    76,    77,     0,    78,     0,    79,
      80,     0,    81,     0,    82,    83,   748,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,    29,    30,     0,     0,     0,
      31,    32,    33,    34,    35,     0,    36,     0,     0,     0,
      37,    38,    39,    40,     0,    41,     0,    42,     0,    43,
       0,     0,    44,     0,     0,     0,    45,    46,    47,    48,
       0,    50,    51,     0,     0,    52,     0,     0,    54,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,    11,   125,    75,    76,
      77,     0,    78,     0,    79,    80,     0,    81,     0,    82,
      83,   994,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
       0,    36,     0,     0,     0,    37,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,     0,    50,    51,     0,     0,
      52,     0,     0,    54,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,    11,   125,    75,    76,    77,     0,    78,     0,    79,
      80,     0,    81,     0,    82,    83,  1044,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,    29,    30,     0,     0,     0,
      31,    32,    33,    34,    35,     0,    36,     0,     0,     0,
      37,    38,    39,    40,     0,    41,     0,    42,     0,    43,
       0,     0,    44,     0,     0,     0,    45,    46,    47,    48,
       0,    50,    51,     0,     0,    52,     0,     0,    54,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,    11,   125,    75,    76,
      77,     0,    78,     0,    79,    80,     0,    81,     0,    82,
      83,  -589,  -589,  -589,  -589,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
       0,    36,     0,     0,     0,    37,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,     0,    50,    51,     0,     0,
      52,     0,     0,    54,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,    11,   125,    75,    76,    77,     0,    78,     0,    79,
      80,     0,    81,     0,    82,    83,     0,     0,     0,     0,
       0,   570,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   123,    34,    35,     0,     0,     0,     0,     0,
      37,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,    48,
     279,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   280,     0,   124,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,   122,   125,    75,    76,
      77,   571,    78,   572,     0,     0,     0,    81,     0,    82,
      83,     0,     0,     0,     0,     0,   812,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   123,    34,    35,
       0,     0,     0,     0,     0,    37,  -589,  -589,  -589,  -589,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   280,     0,     0,     0,   124,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,   122,   125,    75,    76,    77,   813,    78,     0,     0,
       0,     0,    81,     0,    82,    83,     0,     0,     0,     0,
       0,   157,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   123,    34,    35,     0,     0,     0,     0,     0,
      37,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,   122,   125,    75,    76,
      77,     0,    78,     0,     0,     0,     0,    81,     0,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   123,    34,    35,
       0,     0,     0,     0,     0,    37,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,   122,   125,    75,    76,    77,     0,    78,     0,   187,
       0,     0,    81,     0,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   123,    34,    35,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,   122,   125,    75,    76,
      77,     0,    78,     0,   189,     0,     0,    81,     0,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   123,    34,    35,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,    11,   125,    75,    76,    77,     0,    78,     0,   193,
       0,     0,    81,     0,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   123,    34,    35,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,   122,   125,    75,    76,
      77,     0,    78,   326,     0,     0,     0,    81,     0,    82,
      83,     0,     0,     0,     0,     0,   453,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   123,    34,    35,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,   122,   125,    75,    76,    77,     0,    78,     0,     0,
       0,     0,    81,     0,    82,    83,     0,     0,     0,     0,
       0,   480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   123,    34,    35,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,   122,   125,    75,    76,
      77,     0,    78,     0,     0,     0,     0,    81,     0,    82,
      83,     0,     0,     0,     0,     0,   482,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   123,    34,    35,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,   122,   125,    75,    76,    77,     0,    78,     0,     0,
       0,     0,    81,     0,    82,    83,     0,     0,     0,     0,
       0,   732,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   123,    34,    35,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,   122,   125,    75,    76,
      77,     0,    78,     0,     0,     0,     0,    81,     0,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   123,    34,    35,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,    11,   125,    75,    76,    77,     0,    78,     0,     0,
       0,     0,    81,     0,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   123,    34,    35,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,   122,   125,    75,    76,
      77,     0,    78,     0,     0,     0,     0,    81,     0,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   123,   387,    35,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,   254,   255,
     256,     0,   125,    75,    76,    77,     0,    78,     0,     0,
       0,     0,    81,     0,    82,    83,   257,     0,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,   254,   255,   256,     0,     0,     0,     0,     0,     0,
       0,     0,   280,     0,     0,     0,     0,     0,     0,   257,
       0,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   254,   255,   256,     0,     0,     0,
       0,     0,     0,     0,     0,   280,     0,     0,     0,     0,
       0,     0,   257,     0,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,     0,   254,   255,
     256,     0,     0,     0,     0,     0,     0,     0,   280,     0,
       0,     0,     0,     0,     0,     0,   257,   557,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,   254,   255,   256,     0,     0,     0,     0,     0,     0,
       0,     0,   280,     0,     0,     0,     0,     0,     0,   257,
     569,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   254,   255,   256,     0,     0,     0,
       0,     0,     0,     0,     0,   280,     0,     0,     0,     0,
       0,     0,   257,   610,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,     0,     0,     0,
     254,   255,   256,     0,     0,     0,     0,     0,   280,     0,
       0,     0,     0,     0,     0,     0,     0,   678,   257,   852,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,   254,   255,   256,     0,     0,     0,     0,
       0,     0,     0,     0,   280,     0,     0,     0,     0,     0,
     720,   257,     0,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   254,   255,   256,     0,
       0,     0,     0,     0,     0,     0,     0,   280,     0,     0,
       0,     0,     0,   907,   257,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,     0,
     254,   255,   256,     0,     0,     0,     0,     0,     0,     0,
     280,     0,     0,     0,     0,     0,     0,   853,   257,     0,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,   254,   255,   256,     0,     0,     0,     0,
       0,     0,     0,     0,   280,     0,     0,     0,     0,     0,
     281,   257,     0,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   254,   255,   256,     0,
       0,     0,     0,     0,     0,     0,     0,   280,     0,     0,
       0,     0,     0,   342,   257,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,     0,
     254,   255,   256,     0,     0,     0,     0,     0,     0,     0,
     280,     0,     0,     0,     0,     0,     0,   343,   257,     0,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,   645,   646,   647,     0,     0,     0,     0,
       0,     0,     0,     0,   280,     0,     0,     0,     0,     0,
     349,   648,     0,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,     0,   254,   255,   256,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   400,   257,     0,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,     0,   254,
     255,   256,     0,     0,     0,     0,     0,     0,     0,   280,
       0,     0,     0,     0,     0,     0,   475,   257,     0,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   280,     0,   254,   255,   256,     0,   763,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   257,   307,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,     0,   505,
     506,     0,     0,     0,     0,   507,     0,   508,     0,   280,
       0,     0,     0,     0,     0,     0,     0,     0,   315,   509,
       0,     0,     0,     0,   505,   506,     0,    31,    32,   123,
     507,     0,   508,     0,     0,     0,     0,   510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,   123,     0,     0,     0,     0,     0,
       0,     0,   510,     0,     0,     0,     0,     0,     0,     0,
       0,   148,     0,     0,   613,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   511,     0,   512,    68,    69,
      70,    71,    72,     0,     0,     0,   148,     0,     0,   513,
       0,     0,     0,     0,   514,    75,    76,   515,     0,   516,
       0,     0,   512,    68,    69,    70,    71,    72,   254,   255,
     256,     0,     0,     0,   513,     0,     0,     0,     0,   514,
      75,    76,   515,     0,   516,     0,   257,   724,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,   254,   255,   256,     0,     0,     0,     0,     0,     0,
       0,     0,   280,     0,     0,     0,     0,     0,     0,   257,
       0,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   255,   256,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   280,     0,     0,     0,     0,
       0,   257,     0,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   256,   279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   280,     0,     0,
     257,     0,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,   645,   646,   647,     0,     0,
       0,     0,     0,     0,     0,     0,   280,     0,     0,     0,
       0,     0,     0,   648,   860,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   645,   646,   647,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   648,     0,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   646,   647,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   648,     0,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   647,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   648,     0,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   257,     0,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   280,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   280,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   280,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   648,   280,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,   666,   667,   668,   669,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669
};

static const yytype_int16 yycheck[] =
{
      24,    25,   126,    28,    28,    24,    25,   489,     4,    28,
     621,   680,   253,    11,   279,    29,    30,   480,   624,   482,
     891,    78,   394,     8,     4,     8,     8,   799,    64,    53,
      44,     8,   345,     8,   807,     8,    28,   248,   249,   503,
       8,    28,   711,     8,     8,     8,    74,     8,    64,    64,
      74,     8,    50,    77,   367,     8,    28,   298,    81,    33,
       8,    57,     8,     8,   242,     8,     8,     8,     8,     8,
     311,   312,   253,    95,    96,    97,    93,    28,     0,    74,
     321,    51,   323,    76,   155,   156,    76,   148,   299,   213,
     301,   152,   148,    63,     0,    74,   152,    76,   154,   148,
     410,   154,    76,   152,    33,   154,   154,   570,   101,    47,
      48,    49,   148,    51,   154,   172,    76,   298,   175,   297,
      28,   157,   145,   154,   152,    63,   150,   122,   124,   157,
     311,   312,   905,   157,   154,   152,   158,    64,   157,   163,
      76,   157,   157,     8,    74,   917,    64,    76,    64,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,  1033,   936,   628,    74,   630,   118,   182,   159,
     157,   156,   157,   156,   156,   199,   200,   201,   157,   156,
     159,   156,   206,   156,   156,    33,   184,   206,   156,   561,
     214,   156,   156,   156,   155,   214,    61,    62,   155,   159,
     224,   181,   155,   227,    64,   224,   417,   155,    74,   155,
     155,   127,   155,   155,   155,   155,   155,   215,   216,   397,
     171,   148,   152,   159,    66,    74,    74,   154,    76,    64,
     157,   472,    74,   148,    76,    74,   154,   152,   844,   157,
      74,    64,    76,   152,    74,    24,    25,   148,   489,    28,
     122,   152,    76,   154,   279,   279,    74,    81,    76,    74,
     279,   253,   101,   102,   577,    96,    97,   127,   116,   732,
      95,    96,    97,   583,   116,   152,    74,    61,    62,   156,
     157,   129,   116,   149,   122,   309,   152,   279,    76,    74,
     155,   154,   127,    81,    74,   319,    76,   154,    74,   154,
      76,   149,   253,   152,   152,   916,   298,   149,   154,   307,
     152,   159,   625,   152,    74,   149,    76,   159,   152,   311,
     312,   345,   146,   147,   806,   159,   350,   158,   279,   321,
     354,   323,    74,   158,    76,   600,   360,    74,   162,   157,
     116,   159,   122,   367,   154,   130,   131,   298,   328,   812,
     407,   149,    93,   129,   152,   154,   116,   381,   146,   147,
     311,   312,   381,    74,   149,    64,   679,   152,    76,   156,
     321,    76,   323,   149,   116,   157,   152,   157,   157,   159,
      76,   559,    64,   159,    93,    81,   410,  1056,    74,   149,
      96,    97,   152,   130,   131,    76,   706,   157,    76,   159,
      81,    93,    74,    81,    76,    77,   402,   149,    93,   407,
     152,   152,   149,   591,   592,   152,    76,   159,   155,    93,
      74,    81,   402,    64,   602,   603,   908,   206,   127,   453,
     155,   156,   148,    33,   453,   214,   152,   145,   146,   147,
      64,   146,   147,   152,   757,   224,   759,    69,    70,   145,
     146,   147,   158,    69,    70,    71,   480,   148,   482,   148,
     152,   480,    64,   482,   145,   146,   147,   152,   146,   147,
      95,    96,    97,   424,    47,    48,    49,   127,   152,   152,
     472,   505,   506,   507,   508,   509,   146,   147,    95,    96,
      97,   515,   516,    69,    70,   221,   101,   489,    63,   225,
     279,    69,    70,    71,   528,   156,   157,   152,   532,   819,
     236,   148,   238,   239,   240,   495,   102,   148,   542,   730,
     160,   472,   108,   542,     8,   111,   112,   113,   114,   115,
     116,   117,    24,    25,   847,    82,    83,   348,   489,    44,
      45,    46,    47,    48,    49,   127,   570,   148,   152,   152,
     148,   570,    28,   577,    14,   579,    14,   154,   157,   583,
     156,   156,   155,   155,   588,   806,   345,   155,   878,   158,
     161,    74,   158,   154,    74,   600,   600,   125,    74,    64,
      28,   600,   111,   112,   113,   114,   115,   116,   367,   160,
      85,     8,   156,   717,   805,    93,    74,    74,   155,   623,
     624,   625,   381,   617,   623,   624,    76,   156,   600,   155,
      74,    64,    14,   926,   158,   639,   125,   641,   928,   160,
     160,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   154,   627,   154,   600,
     154,   829,   154,   160,    14,   679,   680,   156,   971,   870,
     154,   685,   972,   160,   974,   156,   685,   908,   148,   152,
     158,    74,   985,    74,   453,    74,    14,   156,   160,   490,
     704,   154,   706,   154,   158,   683,   154,   711,   155,   152,
     126,   902,   903,   154,    74,   157,  1006,   128,     8,   145,
    1013,   480,   700,   482,  1017,   160,    74,   105,   732,    74,
      14,   160,   155,   732,   158,   157,     8,   741,   155,     8,
     154,   156,   741,    86,  1034,   154,   505,   506,   507,   508,
     509,   156,   128,   757,   156,   759,    14,   516,   158,   155,
     154,   127,  1055,   155,   102,   769,   156,   155,   153,   108,
     108,    64,  1062,   111,   112,   113,   114,   115,   116,   117,
     160,    64,   156,   542,    44,    45,    46,    47,    48,    49,
     127,    51,  1082,   155,   155,   799,    92,   156,   128,   106,
     799,    74,   160,    63,   157,   154,   157,    28,   812,    76,
      71,   570,   156,   812,   160,   819,   157,    14,   577,   823,
     158,    76,    74,    14,   160,   160,    28,   618,   156,   155,
     157,    14,    74,    14,   806,   158,   101,    76,   942,   158,
     844,   600,   836,   847,    71,   844,   111,   112,   113,   114,
     115,   116,    76,   158,   158,    93,   860,   156,    93,   109,
     148,   156,    76,   155,   623,   624,   625,    90,    74,   158,
      14,    76,   154,    74,   878,   806,   156,   837,    74,     8,
     639,    88,   157,   105,   155,   155,   645,   646,   647,   648,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   156,   158,   917,   890,   158,   910,   154,   917,    76,
     679,   157,   926,   360,   928,   158,   685,   528,  1080,   532,
     542,   706,   402,   402,   961,   365,   908,   745,   851,   823,
     818,    11,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    24,    25,  1006,   748,    78,   871,
     863,   826,   639,   638,   683,   206,   934,   971,   972,   685,
     974,   219,    -1,   732,    -1,    -1,    -1,   908,     8,    -1,
      50,   985,   741,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   957,   757,    -1,
     759,    -1,  1006,    -1,    -1,    -1,    -1,    -1,    -1,  1013,
     769,    -1,    -1,  1017,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
    1034,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     799,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1055,  1056,   812,    -1,    -1,    -1,    -1,  1062,    -1,
      -1,    61,    62,    -1,    -1,  1025,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1082,    -1,
      -1,    -1,    -1,    -1,    -1,   844,    -1,   157,   847,    -1,
       5,     6,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,   860,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    26,    27,    -1,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,   155,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,   925,    50,   206,    52,    -1,    -1,
      -1,    -1,    -1,    -1,   214,   215,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   224,   946,   156,   948,   917,    -1,
      -1,    -1,    -1,    78,   955,    -1,    -1,   926,    -1,    -1,
      -1,    -1,   963,    -1,     8,    -1,    -1,   968,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   994,    -1,    -1,    -1,    -1,    -1,  1000,
      -1,    -1,   971,    -1,   129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   985,    61,    62,    -1,
      -1,    -1,    -1,  1024,    -1,    -1,    -1,   307,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,  1044,  1013,    -1,    -1,   172,  1017,    -1,
     175,   345,    -1,   178,    -1,    -1,    -1,    -1,   183,   184,
      -1,    -1,    -1,    -1,    -1,  1066,    -1,    -1,    -1,    -1,
      -1,  1072,    -1,   367,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1055,    -1,  1089,    -1,
     215,   216,    -1,    -1,   219,    -1,    -1,    -1,   223,    -1,
      -1,   381,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
     235,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   248,   249,    -1,    -1,   407,    -1,    -1,
     255,    -1,    -1,    -1,    -1,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    -1,   280,    -1,    -1,    -1,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    -1,   453,   299,    -1,   301,   302,    -1,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     315,    -1,   317,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     480,    -1,   482,    -1,    -1,    -1,   331,    -1,    -1,    -1,
      -1,   505,   506,   507,   508,   509,    -1,    -1,    -1,    -1,
      -1,    -1,   516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   362,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   542,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,   407,   577,    -1,    61,    62,    -1,    -1,    -1,
     570,    -1,   417,    -1,    -1,   420,    -1,    -1,    -1,    -1,
     425,    -1,   427,    -1,   429,   430,   431,    -1,    -1,    -1,
      -1,    -1,    61,    62,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,    -1,
      -1,   625,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,   623,   624,   639,    -1,    -1,    -1,    -1,
      -1,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,    -1,    -1,    -1,   155,
     156,    -1,    -1,    -1,    -1,   679,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    28,
      -1,    -1,    -1,   683,    -1,   685,   155,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
     700,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   556,    -1,    61,    62,    -1,    -1,   505,   506,   507,
     508,    -1,    -1,    72,    73,    74,   571,    -1,   516,    -1,
      -1,    -1,   732,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   741,    -1,   757,    -1,   759,    -1,    -1,    -1,    -1,
      -1,   596,    -1,    -1,    -1,   769,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   613,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   621,   622,    -1,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,   137,    -1,
      -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,   799,
     149,   150,   151,   152,    -1,   154,    -1,   155,    -1,    -1,
      -1,    -1,   812,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,   847,    -1,    -1,    -1,    -1,   683,    -1,
      -1,    -1,    -1,    63,   844,    -1,   860,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   700,    -1,   645,   646,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,    -1,    -1,    -1,   730,   731,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,    -1,
      -1,    -1,   926,    -1,    -1,    -1,    27,   917,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,   801,   971,    -1,    -1,
     805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   813,    -1,
      -1,   985,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     825,   769,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,  1013,
      -1,    -1,    -1,  1017,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,   870,     3,     4,     5,     6,
       7,    61,    62,    -1,    63,    12,    13,    -1,    -1,    -1,
      -1,  1055,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   902,   903,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,   916,   860,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,
      87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
     107,   108,    -1,   110,    -1,    -1,    -1,   114,   115,   116,
      -1,   118,   119,   120,   121,   122,   123,   124,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,    -1,   144,    -1,    -1,
      12,    13,   149,   150,   151,   152,    -1,   154,    -1,   156,
     157,    -1,   159,    -1,   161,   162,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    -1,    78,    -1,    -1,    -1,
      82,    83,    84,    85,    -1,    87,    -1,    89,    -1,    91,
      -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
      -1,   103,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,
      -1,    -1,   114,   115,   116,    -1,   118,   119,   120,   121,
     122,   123,   124,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,     3,     4,     5,     6,
       7,    -1,   144,    -1,    -1,    12,    13,   149,   150,   151,
     152,    -1,   154,    -1,   156,   157,    -1,   159,    -1,   161,
     162,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,
      87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,    -1,   103,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,    -1,   144,    -1,    -1,
      12,    13,   149,   150,   151,   152,    -1,   154,    -1,   156,
     157,    -1,   159,    -1,   161,   162,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    -1,    78,    -1,    -1,    -1,
      82,    83,    84,    85,    -1,    87,    -1,    89,    -1,    91,
      -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
      -1,   103,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,     3,     4,     5,     6,
       7,    -1,   144,    -1,    -1,    12,    13,   149,   150,   151,
     152,    -1,   154,    -1,   156,   157,    -1,   159,    -1,   161,
     162,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,
      87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,    -1,   103,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,    -1,   144,    -1,    -1,
      12,    13,   149,   150,   151,   152,    -1,   154,    -1,   156,
     157,    -1,   159,    -1,   161,   162,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    -1,    78,    -1,    -1,    -1,
      82,    83,    84,    85,    -1,    87,    -1,    89,    -1,    91,
      -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
      -1,   103,   104,    -1,    -1,   107,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,     3,     4,     5,     6,
       7,    -1,   144,    -1,    -1,    12,    13,   149,   150,   151,
     152,    -1,   154,    -1,   156,   157,    -1,   159,    -1,   161,
     162,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,
      87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,    -1,   103,   104,    -1,    -1,
     107,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,   116,
      -1,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,    -1,   144,    -1,    -1,
      12,    13,   149,   150,   151,   152,    -1,   154,    -1,   156,
     157,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      82,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,   101,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,   116,    -1,    -1,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,     3,     4,     5,     6,
       7,    -1,   144,    -1,    -1,    12,    13,   149,   150,   151,
     152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    82,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,   116,
      -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,    -1,   144,    -1,    -1,
      12,    13,   149,   150,   151,   152,   153,   154,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      82,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,     3,     4,     5,     6,
       7,    -1,   144,    -1,    -1,    12,    13,   149,   150,   151,
     152,    -1,   154,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    82,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,    -1,   144,    -1,    -1,
      12,    13,   149,   150,   151,   152,    -1,   154,    -1,   156,
      -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,     3,     4,     5,     6,
       7,    -1,   144,    -1,    -1,    12,    13,   149,   150,   151,
     152,    -1,   154,    -1,   156,    -1,    -1,   159,    -1,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,    -1,   144,    -1,    -1,
      12,    13,   149,   150,   151,   152,    -1,   154,    -1,   156,
      -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,     3,     4,     5,     6,
       7,    -1,   144,    -1,    -1,    12,    13,   149,   150,   151,
     152,    -1,   154,   155,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,    -1,   144,    -1,    -1,
      12,    13,   149,   150,   151,   152,    -1,   154,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,     3,     4,     5,     6,
       7,    -1,   144,    -1,    -1,    12,    13,   149,   150,   151,
     152,    -1,   154,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,    -1,   144,    -1,    -1,
      12,    13,   149,   150,   151,   152,    -1,   154,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,     3,     4,     5,     6,
       7,    -1,   144,    -1,    -1,    12,    13,   149,   150,   151,
     152,    -1,   154,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,     3,     4,     5,     6,     7,    -1,   144,    -1,    -1,
      12,    13,   149,   150,   151,   152,    -1,   154,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,     3,     4,     5,     6,
       7,    -1,   144,    -1,    -1,    12,    13,   149,   150,   151,
     152,    -1,   154,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,    -1,    -1,    -1,    -1,    -1,    -1,   144,     9,    10,
      11,    -1,   149,   150,   151,   152,    -1,   154,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,   158,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    27,
     158,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    27,   158,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
     158,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,   158,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,   156,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
     156,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,   156,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    51,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,   156,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
     156,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   155,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,   155,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,     9,    10,    11,    -1,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,   128,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,    44,
      45,    -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,    64,
      -1,    -1,    -1,    -1,    44,    45,    -1,    72,    73,    74,
      50,    -1,    52,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   130,    -1,   132,   133,   134,
     135,   136,   137,    -1,    -1,    -1,   116,    -1,    -1,   144,
      -1,    -1,    -1,    -1,   149,   150,   151,   152,    -1,   154,
      -1,    -1,   132,   133,   134,   135,   136,   137,     9,    10,
      11,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,
     150,   151,   152,    -1,   154,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    11,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    63,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49
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
     217,   220,   222,   225,   227,   292,   294,   308,   309,   310,
     311,   314,   323,   334,   339,   343,   344,   345,   347,   348,
     358,   359,   360,   361,   363,   364,   365,   366,   372,   382,
     386,   388,    13,    74,   116,   149,   311,   343,   343,   154,
     343,   343,   343,   294,   343,   348,   343,   343,   343,   343,
     305,   343,   343,   343,   343,   343,   343,   343,   116,   149,
     152,   167,   323,   347,   348,   360,   347,    33,   343,   376,
     377,   343,   149,   152,   167,   323,   325,   326,   360,   364,
     365,   372,   154,   331,   344,   154,   344,    28,    64,   282,
     343,   189,   187,   154,   154,   199,   344,   156,   343,   156,
     343,    74,    74,   156,   294,   343,   348,   200,   343,   101,
     102,   152,   167,   171,   172,    76,   159,   256,   257,   122,
     122,    76,   258,   311,   154,   154,   154,   154,   154,   154,
      76,    81,   145,   146,   147,   378,   379,   152,   157,   167,
     167,   292,   308,   343,   178,   157,    81,   332,   378,    81,
     378,   152,   315,     8,   156,    74,    74,   156,    64,    64,
      33,   218,   362,   148,     9,    10,    11,    27,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    51,
      63,   156,    61,    62,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   322,   148,    64,
     127,    64,   157,   159,   365,   218,   343,   128,   343,   152,
     167,   148,   148,   346,   348,   128,   160,     8,   341,   152,
     167,   148,   293,   148,   127,   365,   155,    28,   183,   343,
     367,     8,   156,   181,   344,   283,   284,   343,   294,   348,
     154,   194,   156,   156,   156,    14,   156,   156,   157,   156,
     152,   167,   173,   174,   152,   167,   175,   176,   167,    93,
       8,   156,   157,   345,   348,     8,   156,    14,     8,   156,
     218,   214,   215,   348,   294,   348,   383,   385,   294,   348,
     155,   295,   376,    64,   127,   145,   379,    75,   343,   348,
      81,   145,   379,   167,   170,   156,   157,   317,   155,   155,
     155,   158,   179,   343,   161,   162,    74,   154,   254,    74,
     125,   226,   224,   367,   367,    74,   306,    64,    74,   122,
     157,   358,   365,   371,   372,   299,   343,   300,    28,   302,
     297,   298,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   325,   343,    33,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   254,    74,   358,
     371,   367,   349,   367,   343,   155,   294,   348,   167,    74,
      33,   343,    33,   343,   167,   358,   254,   333,   358,   327,
     185,   181,   160,   343,    85,   188,   156,     8,    93,    93,
      74,   237,    28,   157,   238,    44,    45,    50,    52,    64,
      82,   130,   132,   144,   149,   152,   154,   167,   323,   334,
     335,   336,   337,   338,   387,   178,   167,    93,     8,   156,
     167,    93,     8,   156,    93,    74,   172,   343,   257,   336,
      76,   307,     8,   155,     8,   155,   155,   155,   156,   129,
     348,   373,   374,   155,   380,    74,    64,   158,   158,   316,
     165,   169,   254,   301,   121,   180,   181,   216,   217,   158,
      33,   153,   155,   255,   294,   308,   348,    14,   149,   152,
     167,   324,   223,   125,   228,   160,   160,   221,   154,   367,
     343,   319,   318,   365,   343,   343,   304,   343,   343,   343,
      66,   348,   321,   320,   160,   358,   368,   370,   371,   160,
     158,   346,   346,   128,   368,   178,   184,   190,    28,   181,
     243,   191,   285,   197,   195,    14,     8,   155,   156,   239,
     156,   239,   337,   337,   337,   337,   336,   340,   342,   154,
      81,   152,   167,   337,   148,     9,    10,    11,    27,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     158,    93,    74,   174,    93,    74,   176,    74,   158,    14,
     154,   215,   156,   384,   154,     8,   155,    74,    76,    77,
     381,   343,   254,   158,   165,   290,   291,   154,   346,   343,
       8,   155,   155,   336,   152,   167,   126,   229,   230,   324,
     157,   154,   130,   131,   250,   251,   252,   253,   324,   160,
     158,   254,   254,   343,    28,   325,   254,   254,   369,   350,
      64,   157,    33,   343,   328,   186,   244,   344,   178,   283,
     343,    33,   129,   232,   348,   232,   336,    74,    28,   181,
     236,   239,    95,    96,    97,   239,   158,   128,   160,     8,
     341,   340,   167,   155,    74,   122,   337,   337,   337,    28,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   105,   202,    74,    74,   336,   250,   385,   375,
     374,    14,   160,   160,   158,    64,   127,   286,   287,   288,
     352,   155,    33,   153,   294,   348,   167,   230,   157,     8,
     259,   250,   155,     8,   218,   303,   296,   354,   355,   356,
     357,   367,   343,   346,   329,   246,    69,    70,   248,   156,
      86,   156,   348,   154,   128,   231,   231,    14,   178,    95,
     156,   343,    28,   156,   242,   158,   336,   336,   155,   337,
      28,   154,   201,   155,   373,   343,   158,   367,   368,   352,
      64,   289,   156,   346,   343,   259,   324,   102,   108,   111,
     112,   113,   114,   115,   116,   117,   158,   260,   263,   276,
     277,   278,   279,   281,   155,   108,   312,   252,   153,   219,
     343,   333,    64,    64,   254,   351,   160,   158,   127,   330,
      69,    70,   249,   344,   181,   156,   192,   233,   232,   155,
     155,   336,    92,   156,   242,   241,   128,   337,   203,   106,
     207,   312,   155,   160,   353,   367,   286,   158,    74,   264,
     324,   261,   311,   279,     8,   156,   157,   154,   157,    76,
     367,   367,   352,   368,   344,    28,    71,   245,   283,   373,
     198,   196,   156,   240,   178,   336,   324,   208,   157,   357,
     160,    14,     8,   156,   157,   265,    76,   280,   218,    74,
     178,    33,    76,   313,   178,    14,   160,   160,    28,   178,
     156,   181,   155,   155,    28,   181,   235,   235,   178,   204,
     157,   178,   336,   324,    74,   266,   267,   268,   269,   271,
     272,   273,   324,    14,     8,   156,    74,    14,   158,    76,
       8,   155,   158,   336,   247,   193,   178,    76,   178,   158,
     158,   268,   156,    93,   109,   156,   148,   336,    76,   262,
     336,    33,    76,   178,    28,   181,   234,    90,   155,   158,
     274,   279,   270,   324,    74,    14,   154,    76,   178,   156,
     205,    74,     8,   336,   250,    88,   157,   324,   155,   156,
     178,   156,   157,   275,   158,   178,   206,   158,   105,   209,
     210,   211,   154,   211,   324,   212,    76,   155,   213,   157,
     178,   158
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

    { Z_LVAL((yyval).u.constant) = 1; zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 191:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 192:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 193:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 194:

    { Z_LVAL((yyval).u.constant) = 0;  zend_do_unpack_params(&(yyvsp[(2) - (2)]), Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 195:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 196:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 197:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 198:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant);  zend_do_unpack_params(&(yyvsp[(4) - (4)]), Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 199:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 200:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 201:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 202:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 203:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 204:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 205:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 206:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 207:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 210:

    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 214:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 215:

    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 217:

    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 218:

    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 227:

    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 228:

    { zend_resolve_class_name(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 229:

    { zend_resolve_class_name(&(yyvsp[(3) - (3)]) TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 230:

    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 231:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 232:

    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 233:

    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 234:

    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 235:

    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 236:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 237:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 238:

    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 239:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 240:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 241:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 242:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 243:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 244:

    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 245:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 246:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 247:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 248:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 249:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 250:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 251:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 252:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 253:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 254:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 255:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 256:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 257:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 258:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 259:

    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 260:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 261:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 262:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 263:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 264:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 265:

    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 266:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 267:

    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 268:

    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 269:

    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 270:

    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 271:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 272:

    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 273:

    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 274:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 275:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 276:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 277:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 278:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 279:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 280:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 281:

    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 282:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 283:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 284:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 285:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 286:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 287:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_POW, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 288:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 289:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 290:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 291:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 292:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 293:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 294:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 295:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 296:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 297:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 298:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 299:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 300:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 301:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 302:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 303:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 304:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 305:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 306:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 307:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 308:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 309:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 310:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 311:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 312:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 313:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 314:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 315:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 316:

    { zend_do_binary_op(ZEND_POW, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 317:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 318:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 319:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 320:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 321:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 322:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 323:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 324:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 325:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 326:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 327:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 328:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 329:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 330:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 331:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 332:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 333:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 334:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 335:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 336:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 337:

    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 338:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 339:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 340:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 341:

    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 342:

    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 343:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 344:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 345:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 346:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 347:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 348:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 349:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 350:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 351:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 352:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 353:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 354:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 355:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 356:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 357:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 358:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 359:

    { zend_do_yield(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 360:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]).op_type, 0 TSRMLS_CC); }
    break;

  case 361:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (10)]); }
    break;

  case 362:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]).op_type, 1 TSRMLS_CC); }
    break;

  case 363:

    { zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (11)]); }
    break;

  case 364:

    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 365:

    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 366:

    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 367:

    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 1 TSRMLS_CC); }
    break;

  case 368:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 369:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 370:

    { (yyvsp[(1) - (4)]).EA = 0; zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 371:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 372:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 373:

    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 376:

    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 377:

    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 378:

    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 379:

    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 380:

    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 381:

    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 382:

    { (yyvsp[(1) - (3)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (3)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (3)]), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 383:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 384:

    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 385:

    { zend_do_end_function_call(&(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 386:

    { (yyval).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 387:

    { zend_do_end_function_call((yyvsp[(4) - (5)]).u.op.opline_num?NULL:&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), (yyvsp[(4) - (5)]).u.op.opline_num, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 388:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 389:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 390:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 391:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 392:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 393:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 394:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 395:

    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 396:

    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 397:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 398:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 399:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 400:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 401:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 402:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 403:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 404:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 405:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 406:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 407:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 408:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 411:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 412:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 413:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 414:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 415:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 416:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 417:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 418:

    { Z_LVAL((yyval).u.constant) = 0; }
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

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 429:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 430:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 431:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 432:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 433:

    { zend_do_constant_expression(&(yyval), (yyvsp[(1) - (1)]).u.ast TSRMLS_CC); }
    break;

  case 434:

    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 435:

    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 436:

    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 437:

    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 438:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 439:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 440:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 441:

    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 442:

    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 443:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 444:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_ADD, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 445:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_SUB, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 446:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_MUL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
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

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 486:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 489:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 490:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 491:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 492:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
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

    { zend_do_end_function_call(&(yyvsp[(1) - (2)]), &(yyval), &(yyvsp[(2) - (2)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
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



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
     T_SR_EQUAL = 268,
     T_SL_EQUAL = 269,
     T_XOR_EQUAL = 270,
     T_OR_EQUAL = 271,
     T_AND_EQUAL = 272,
     T_MOD_EQUAL = 273,
     T_CONCAT_EQUAL = 274,
     T_DIV_EQUAL = 275,
     T_MUL_EQUAL = 276,
     T_MINUS_EQUAL = 277,
     T_PLUS_EQUAL = 278,
     T_BOOLEAN_OR = 279,
     T_BOOLEAN_AND = 280,
     T_IS_NOT_IDENTICAL = 281,
     T_IS_IDENTICAL = 282,
     T_IS_NOT_EQUAL = 283,
     T_IS_EQUAL = 284,
     T_IS_GREATER_OR_EQUAL = 285,
     T_IS_SMALLER_OR_EQUAL = 286,
     T_SR = 287,
     T_SL = 288,
     T_INSTANCEOF = 289,
     T_UNSET_CAST = 290,
     T_BOOL_CAST = 291,
     T_OBJECT_CAST = 292,
     T_ARRAY_CAST = 293,
     T_STRING_CAST = 294,
     T_DOUBLE_CAST = 295,
     T_INT_CAST = 296,
     T_DEC = 297,
     T_INC = 298,
     T_CLONE = 299,
     T_NEW = 300,
     T_EXIT = 301,
     T_IF = 302,
     T_ELSEIF = 303,
     T_ELSE = 304,
     T_ENDIF = 305,
     T_LNUMBER = 306,
     T_DNUMBER = 307,
     T_STRING = 308,
     T_STRING_VARNAME = 309,
     T_VARIABLE = 310,
     T_NUM_STRING = 311,
     T_INLINE_HTML = 312,
     T_CHARACTER = 313,
     T_BAD_CHARACTER = 314,
     T_ENCAPSED_AND_WHITESPACE = 315,
     T_CONSTANT_ENCAPSED_STRING = 316,
     T_ECHO = 317,
     T_DO = 318,
     T_WHILE = 319,
     T_ENDWHILE = 320,
     T_FOR = 321,
     T_ENDFOR = 322,
     T_FOREACH = 323,
     T_ENDFOREACH = 324,
     T_DECLARE = 325,
     T_ENDDECLARE = 326,
     T_AS = 327,
     T_SWITCH = 328,
     T_ENDSWITCH = 329,
     T_CASE = 330,
     T_DEFAULT = 331,
     T_BREAK = 332,
     T_CONTINUE = 333,
     T_GOTO = 334,
     T_FUNCTION = 335,
     T_CONST = 336,
     T_RETURN = 337,
     T_TRY = 338,
     T_CATCH = 339,
     T_FINALLY = 340,
     T_THROW = 341,
     T_USE = 342,
     T_INSTEADOF = 343,
     T_GLOBAL = 344,
     T_PUBLIC = 345,
     T_PROTECTED = 346,
     T_PRIVATE = 347,
     T_FINAL = 348,
     T_ABSTRACT = 349,
     T_STATIC = 350,
     T_VAR = 351,
     T_UNSET = 352,
     T_ISSET = 353,
     T_EMPTY = 354,
     T_HALT_COMPILER = 355,
     T_CLASS = 356,
     T_TRAIT = 357,
     T_INTERFACE = 358,
     T_EXTENDS = 359,
     T_IMPLEMENTS = 360,
     T_OBJECT_OPERATOR = 361,
     T_DOUBLE_ARROW = 362,
     T_LIST = 363,
     T_ARRAY = 364,
     T_CALLABLE = 365,
     T_CLASS_C = 366,
     T_TRAIT_C = 367,
     T_METHOD_C = 368,
     T_FUNC_C = 369,
     T_LINE = 370,
     T_FILE = 371,
     T_COMMENT = 372,
     T_DOC_COMMENT = 373,
     T_OPEN_TAG = 374,
     T_OPEN_TAG_WITH_ECHO = 375,
     T_CLOSE_TAG = 376,
     T_WHITESPACE = 377,
     T_START_HEREDOC = 378,
     T_END_HEREDOC = 379,
     T_DOLLAR_OPEN_CURLY_BRACES = 380,
     T_CURLY_OPEN = 381,
     T_PAAMAYIM_NEKUDOTAYIM = 382,
     T_NAMESPACE = 383,
     T_NS_C = 384,
     T_DIR = 385,
     T_NS_SEPARATOR = 386,
     T_ELLIPSIS = 387
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
#define T_SR_EQUAL 268
#define T_SL_EQUAL 269
#define T_XOR_EQUAL 270
#define T_OR_EQUAL 271
#define T_AND_EQUAL 272
#define T_MOD_EQUAL 273
#define T_CONCAT_EQUAL 274
#define T_DIV_EQUAL 275
#define T_MUL_EQUAL 276
#define T_MINUS_EQUAL 277
#define T_PLUS_EQUAL 278
#define T_BOOLEAN_OR 279
#define T_BOOLEAN_AND 280
#define T_IS_NOT_IDENTICAL 281
#define T_IS_IDENTICAL 282
#define T_IS_NOT_EQUAL 283
#define T_IS_EQUAL 284
#define T_IS_GREATER_OR_EQUAL 285
#define T_IS_SMALLER_OR_EQUAL 286
#define T_SR 287
#define T_SL 288
#define T_INSTANCEOF 289
#define T_UNSET_CAST 290
#define T_BOOL_CAST 291
#define T_OBJECT_CAST 292
#define T_ARRAY_CAST 293
#define T_STRING_CAST 294
#define T_DOUBLE_CAST 295
#define T_INT_CAST 296
#define T_DEC 297
#define T_INC 298
#define T_CLONE 299
#define T_NEW 300
#define T_EXIT 301
#define T_IF 302
#define T_ELSEIF 303
#define T_ELSE 304
#define T_ENDIF 305
#define T_LNUMBER 306
#define T_DNUMBER 307
#define T_STRING 308
#define T_STRING_VARNAME 309
#define T_VARIABLE 310
#define T_NUM_STRING 311
#define T_INLINE_HTML 312
#define T_CHARACTER 313
#define T_BAD_CHARACTER 314
#define T_ENCAPSED_AND_WHITESPACE 315
#define T_CONSTANT_ENCAPSED_STRING 316
#define T_ECHO 317
#define T_DO 318
#define T_WHILE 319
#define T_ENDWHILE 320
#define T_FOR 321
#define T_ENDFOR 322
#define T_FOREACH 323
#define T_ENDFOREACH 324
#define T_DECLARE 325
#define T_ENDDECLARE 326
#define T_AS 327
#define T_SWITCH 328
#define T_ENDSWITCH 329
#define T_CASE 330
#define T_DEFAULT 331
#define T_BREAK 332
#define T_CONTINUE 333
#define T_GOTO 334
#define T_FUNCTION 335
#define T_CONST 336
#define T_RETURN 337
#define T_TRY 338
#define T_CATCH 339
#define T_FINALLY 340
#define T_THROW 341
#define T_USE 342
#define T_INSTEADOF 343
#define T_GLOBAL 344
#define T_PUBLIC 345
#define T_PROTECTED 346
#define T_PRIVATE 347
#define T_FINAL 348
#define T_ABSTRACT 349
#define T_STATIC 350
#define T_VAR 351
#define T_UNSET 352
#define T_ISSET 353
#define T_EMPTY 354
#define T_HALT_COMPILER 355
#define T_CLASS 356
#define T_TRAIT 357
#define T_INTERFACE 358
#define T_EXTENDS 359
#define T_IMPLEMENTS 360
#define T_OBJECT_OPERATOR 361
#define T_DOUBLE_ARROW 362
#define T_LIST 363
#define T_ARRAY 364
#define T_CALLABLE 365
#define T_CLASS_C 366
#define T_TRAIT_C 367
#define T_METHOD_C 368
#define T_FUNC_C 369
#define T_LINE 370
#define T_FILE 371
#define T_COMMENT 372
#define T_DOC_COMMENT 373
#define T_OPEN_TAG 374
#define T_OPEN_TAG_WITH_ECHO 375
#define T_CLOSE_TAG 376
#define T_WHITESPACE 377
#define T_START_HEREDOC 378
#define T_END_HEREDOC 379
#define T_DOLLAR_OPEN_CURLY_BRACES 380
#define T_CURLY_OPEN 381
#define T_PAAMAYIM_NEKUDOTAYIM 382
#define T_NAMESPACE 383
#define T_NS_C 384
#define T_DIR 385
#define T_NS_SEPARATOR 386
#define T_ELLIPSIS 387




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
#define YYLAST   5848

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  161
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  226
/* YYNRULES -- Number of rules.  */
#define YYNRULES  590
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1088

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   387

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,   160,     2,   157,    48,    32,     2,
     152,   153,    46,    43,     8,    44,    45,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,   154,
      37,    14,    38,    26,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,   158,    31,     2,   159,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   155,    30,   156,    51,     2,     2,     2,
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
      17,    18,    19,    20,    21,    22,    23,    24,    25,    28,
      29,    33,    34,    35,    36,    39,    40,    41,    42,    50,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151
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
     924,   928,   932,   936,   940,   944,   947,   950,   953,   956,
     957,   962,   963,   968,   969,   974,   975,   980,   984,   988,
     992,   996,  1000,  1004,  1008,  1012,  1016,  1020,  1024,  1028,
    1031,  1034,  1037,  1040,  1044,  1048,  1052,  1056,  1060,  1064,
    1068,  1072,  1076,  1078,  1080,  1081,  1087,  1088,  1089,  1097,
    1098,  1104,  1106,  1109,  1112,  1115,  1118,  1121,  1124,  1127,
    1130,  1131,  1135,  1137,  1139,  1141,  1145,  1148,  1150,  1151,
    1162,  1163,  1175,  1178,  1181,  1186,  1191,  1196,  1201,  1206,
    1211,  1215,  1217,  1218,  1223,  1227,  1232,  1234,  1237,  1238,
    1242,  1243,  1249,  1250,  1255,  1256,  1262,  1263,  1269,  1270,
    1276,  1277,  1283,  1284,  1288,  1290,  1292,  1296,  1299,  1301,
    1305,  1308,  1310,  1312,  1313,  1314,  1321,  1323,  1326,  1327,
    1330,  1331,  1334,  1336,  1337,  1339,  1341,  1342,  1344,  1346,
    1348,  1350,  1352,  1354,  1356,  1358,  1360,  1362,  1364,  1368,
    1371,  1375,  1377,  1382,  1386,  1388,  1390,  1392,  1396,  1399,
    1401,  1403,  1405,  1409,  1413,  1417,  1421,  1425,  1428,  1431,
    1435,  1439,  1443,  1447,  1451,  1455,  1459,  1463,  1467,  1471,
    1475,  1479,  1483,  1487,  1491,  1495,  1499,  1503,  1507,  1512,
    1518,  1521,  1524,  1528,  1530,  1532,  1534,  1536,  1540,  1543,
    1545,  1549,  1553,  1555,  1556,  1559,  1560,  1562,  1568,  1572,
    1576,  1578,  1580,  1582,  1586,  1590,  1592,  1594,  1596,  1597,
    1598,  1606,  1608,  1611,  1612,  1613,  1618,  1623,  1628,  1629,
    1632,  1634,  1636,  1637,  1639,  1642,  1646,  1650,  1652,  1657,
    1658,  1664,  1666,  1668,  1670,  1672,  1675,  1677,  1682,  1687,
    1689,  1691,  1696,  1697,  1699,  1701,  1702,  1705,  1710,  1715,
    1717,  1719,  1723,  1725,  1728,  1732,  1734,  1736,  1737,  1743,
    1744,  1745,  1748,  1754,  1758,  1762,  1764,  1771,  1776,  1781,
    1784,  1787,  1790,  1792,  1795,  1797,  1798,  1804,  1808,  1812,
    1819,  1823,  1825,  1827,  1829,  1834,  1839,  1844,  1847,  1850,
    1855,  1858,  1861,  1863,  1864,  1869,  1871,  1873,  1877,  1881,
    1885
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     162,     0,    -1,   163,    -1,    -1,   163,   164,   166,    -1,
      -1,    72,    -1,   165,   150,    72,    -1,   179,    -1,   214,
      -1,   215,    -1,   119,   152,   153,   154,    -1,   147,   165,
     154,    -1,    -1,   147,   165,   155,   167,   163,   156,    -1,
      -1,   147,   155,   168,   163,   156,    -1,   106,   169,   154,
      -1,   106,    99,   171,   154,    -1,   106,   100,   173,   154,
      -1,   175,   154,    -1,   169,     8,   170,    -1,   170,    -1,
     165,    -1,   165,    91,    72,    -1,   150,   165,    -1,   150,
     165,    91,    72,    -1,   171,     8,   172,    -1,   172,    -1,
     165,    -1,   165,    91,    72,    -1,   150,   165,    -1,   150,
     165,    91,    72,    -1,   173,     8,   174,    -1,   174,    -1,
     165,    -1,   165,    91,    72,    -1,   150,   165,    -1,   150,
     165,    91,    72,    -1,   175,     8,    72,    14,   334,    -1,
     100,    72,    14,   334,    -1,    -1,   176,   177,   178,    -1,
      -1,   179,    -1,   214,    -1,   215,    -1,   119,   152,   153,
     154,    -1,   180,    -1,    72,    27,    -1,   155,   176,   156,
      -1,    -1,    -1,    66,   342,   181,   179,   182,   242,   246,
      -1,    -1,    -1,    66,   342,    27,   183,   176,   184,   244,
     247,    69,   154,    -1,    -1,    -1,    83,   185,   342,   186,
     241,    -1,    -1,    -1,    82,   187,   179,    83,   188,   342,
     154,    -1,    -1,    -1,    -1,    85,   152,   281,   154,   189,
     281,   154,   190,   281,   153,   191,   232,    -1,    -1,    92,
     342,   192,   236,    -1,    96,   154,    -1,    96,   341,   154,
      -1,    97,   154,    -1,    97,   341,   154,    -1,   101,   154,
      -1,   101,   292,   154,    -1,   101,   346,   154,    -1,   306,
     154,    -1,   108,   254,   154,    -1,   114,   256,   154,    -1,
      81,   280,   154,    -1,    76,    -1,   341,   154,    -1,   116,
     152,   212,   153,   154,    -1,    -1,    -1,    87,   152,   346,
      91,   193,   230,   229,   153,   194,   233,    -1,    -1,    -1,
      87,   152,   292,    91,   195,   230,   229,   153,   196,   233,
      -1,    -1,    89,   197,   152,   235,   153,   234,    -1,   154,
      -1,    -1,    -1,   102,   198,   155,   176,   156,   200,   199,
     205,    -1,   105,   341,   154,    -1,    98,    72,   154,    -1,
      -1,    -1,    -1,    -1,    -1,   103,   152,   201,   322,   202,
      74,   153,   203,   155,   176,   156,   204,   207,    -1,    -1,
      -1,   104,   206,   155,   176,   156,    -1,   208,    -1,    -1,
     209,    -1,   208,   209,    -1,    -1,    -1,   103,   152,   322,
     210,    74,   153,   211,   155,   176,   156,    -1,   213,    -1,
     212,     8,   213,    -1,   346,    -1,   218,    -1,   220,    -1,
      -1,    32,    -1,    -1,   151,    -1,    -1,   309,   216,    72,
     219,   152,   248,   153,   155,   176,   156,    -1,    -1,   223,
      72,   224,   221,   227,   155,   257,   156,    -1,    -1,   225,
      72,   222,   226,   155,   257,   156,    -1,   120,    -1,   113,
     120,    -1,   121,    -1,   112,   120,    -1,    -1,   123,   322,
      -1,   122,    -1,    -1,   123,   228,    -1,    -1,   124,   228,
      -1,   322,    -1,   228,     8,   322,    -1,    -1,   126,   230,
      -1,   346,    -1,    32,   346,    -1,    -1,   127,   152,   231,
     371,   153,    -1,   179,    -1,    27,   176,    86,   154,    -1,
     179,    -1,    27,   176,    88,   154,    -1,   179,    -1,    27,
     176,    90,   154,    -1,    72,    14,   334,    -1,   235,     8,
      72,    14,   334,    -1,   155,   237,   156,    -1,   155,   154,
     237,   156,    -1,    27,   237,    93,   154,    -1,    27,   154,
     237,    93,   154,    -1,    -1,    -1,   237,    94,   341,   240,
     238,   176,    -1,    -1,   237,    95,   240,   239,   176,    -1,
      27,    -1,   154,    -1,   179,    -1,    27,   176,    84,   154,
      -1,    -1,    -1,   242,    67,   342,   243,   179,    -1,    -1,
      -1,   244,    67,   342,    27,   245,   176,    -1,    -1,    68,
     179,    -1,    -1,    68,    27,   176,    -1,   249,    -1,    -1,
     250,    -1,   249,     8,   250,    -1,   251,   216,   217,    74,
      -1,   251,   216,   217,    74,    14,   334,    -1,    -1,   128,
      -1,   129,    -1,   322,    -1,   152,   153,    -1,   152,   253,
     153,    -1,   152,   306,   153,    -1,   292,    -1,   346,    -1,
      32,   344,    -1,   151,   341,    -1,   253,     8,   292,    -1,
     253,     8,   346,    -1,   253,     8,    32,   344,    -1,   253,
       8,   151,   341,    -1,   254,     8,   255,    -1,   255,    -1,
      74,    -1,   157,   343,    -1,   157,   155,   341,   156,    -1,
     256,     8,    74,    -1,   256,     8,    74,    14,   334,    -1,
      74,    -1,    74,    14,   334,    -1,   257,   258,    -1,    -1,
      -1,   274,   259,   278,   154,    -1,   279,   154,    -1,   261,
      -1,    -1,   275,   309,   216,    72,   260,   152,   248,   153,
     273,    -1,   106,   262,   263,    -1,   322,    -1,   262,     8,
     322,    -1,   154,    -1,   155,   264,   156,    -1,    -1,   265,
      -1,   266,    -1,   265,   266,    -1,   267,   154,    -1,   271,
     154,    -1,   270,   107,   268,    -1,   322,    -1,   268,     8,
     322,    -1,    72,    -1,   270,    -1,   322,   146,    72,    -1,
     269,    91,   272,    72,    -1,   269,    91,   277,    -1,    -1,
     277,    -1,   154,    -1,   155,   176,   156,    -1,   276,    -1,
     115,    -1,    -1,   276,    -1,   277,    -1,   276,   277,    -1,
     109,    -1,   110,    -1,   111,    -1,   114,    -1,   113,    -1,
     112,    -1,   278,     8,    74,    -1,   278,     8,    74,    14,
     334,    -1,    74,    -1,    74,    14,   334,    -1,   279,     8,
      72,    14,   334,    -1,   100,    72,    14,   334,    -1,   280,
       8,   341,    -1,   341,    -1,    -1,   282,    -1,    -1,   282,
       8,   283,   341,    -1,   341,    -1,   284,   350,    -1,   350,
      -1,   285,    62,   365,   158,    -1,    62,   365,   158,    -1,
      -1,   285,   287,   284,    -1,   285,    -1,   284,    -1,    -1,
      -1,   289,   286,    -1,    -1,    64,   323,   291,   331,    -1,
      -1,   127,   152,   293,   371,   153,    14,   341,    -1,   346,
      14,   341,    -1,   346,    14,    32,   346,    -1,    -1,   346,
      14,    32,    64,   323,   294,   331,    -1,    63,   341,    -1,
     346,    25,   341,    -1,   346,    24,   341,    -1,   346,    23,
     341,    -1,   346,    22,   341,    -1,   346,    21,   341,    -1,
     346,    20,   341,    -1,   346,    19,   341,    -1,   346,    18,
     341,    -1,   346,    17,   341,    -1,   346,    16,   341,    -1,
     346,    15,   341,    -1,   345,    61,    -1,    61,   345,    -1,
     345,    60,    -1,    60,   345,    -1,    -1,   341,    28,   295,
     341,    -1,    -1,   341,    29,   296,   341,    -1,    -1,   341,
       9,   297,   341,    -1,    -1,   341,    11,   298,   341,    -1,
     341,    10,   341,    -1,   341,    30,   341,    -1,   341,    32,
     341,    -1,   341,    31,   341,    -1,   341,    45,   341,    -1,
     341,    43,   341,    -1,   341,    44,   341,    -1,   341,    46,
     341,    -1,   341,    47,   341,    -1,   341,    48,   341,    -1,
     341,    42,   341,    -1,   341,    41,   341,    -1,    43,   341,
      -1,    44,   341,    -1,    49,   341,    -1,    51,   341,    -1,
     341,    34,   341,    -1,   341,    33,   341,    -1,   341,    36,
     341,    -1,   341,    35,   341,    -1,   341,    37,   341,    -1,
     341,    40,   341,    -1,   341,    38,   341,    -1,   341,    39,
     341,    -1,   341,    50,   323,    -1,   342,    -1,   290,    -1,
      -1,   152,   290,   153,   299,   288,    -1,    -1,    -1,   341,
      26,   300,   341,    27,   301,   341,    -1,    -1,   341,    26,
      27,   302,   341,    -1,   380,    -1,    59,   341,    -1,    58,
     341,    -1,    57,   341,    -1,    56,   341,    -1,    55,   341,
      -1,    54,   341,    -1,    53,   341,    -1,    65,   329,    -1,
      -1,    52,   303,   341,    -1,   337,    -1,   307,    -1,   308,
      -1,   159,   330,   159,    -1,    12,   341,    -1,    13,    -1,
      -1,   309,   216,   304,   152,   248,   153,   310,   155,   176,
     156,    -1,    -1,   114,   309,   216,   305,   152,   248,   153,
     310,   155,   176,   156,    -1,    13,   292,    -1,    13,   346,
      -1,    13,   341,   126,   292,    -1,    13,   341,   126,   346,
      -1,   308,    62,   365,   158,    -1,   307,    62,   365,   158,
      -1,    80,    62,   365,   158,    -1,   128,   152,   374,   153,
      -1,    62,   374,   158,    -1,    99,    -1,    -1,   106,   152,
     311,   153,    -1,   311,     8,    74,    -1,   311,     8,    32,
      74,    -1,    74,    -1,    32,    74,    -1,    -1,   165,   313,
     252,    -1,    -1,   147,   150,   165,   314,   252,    -1,    -1,
     150,   165,   315,   252,    -1,    -1,   321,   146,   369,   316,
     252,    -1,    -1,   321,   146,   356,   317,   252,    -1,    -1,
     358,   146,   369,   318,   252,    -1,    -1,   358,   146,   356,
     319,   252,    -1,    -1,   356,   320,   252,    -1,   114,    -1,
     165,    -1,   147,   150,   165,    -1,   150,   165,    -1,   165,
      -1,   147,   150,   165,    -1,   150,   165,    -1,   321,    -1,
     324,    -1,    -1,    -1,   362,   125,   325,   366,   326,   327,
      -1,   362,    -1,   327,   328,    -1,    -1,   125,   366,    -1,
      -1,   152,   153,    -1,   342,    -1,    -1,    79,    -1,   376,
      -1,    -1,   252,    -1,    70,    -1,    71,    -1,    80,    -1,
     134,    -1,   135,    -1,   149,    -1,   131,    -1,   132,    -1,
     133,    -1,   148,    -1,   142,    79,   143,    -1,   142,   143,
      -1,   321,   146,    72,    -1,   335,    -1,   128,   152,   338,
     153,    -1,    62,   338,   158,    -1,   332,    -1,   385,    -1,
     165,    -1,   147,   150,   165,    -1,   150,   165,    -1,   333,
      -1,   130,    -1,   336,    -1,   335,    43,   335,    -1,   335,
      44,   335,    -1,   335,    46,   335,    -1,   335,    47,   335,
      -1,   335,    48,   335,    -1,    49,   335,    -1,    51,   335,
      -1,   335,    30,   335,    -1,   335,    32,   335,    -1,   335,
      31,   335,    -1,   335,    42,   335,    -1,   335,    41,   335,
      -1,   335,    45,   335,    -1,   335,    10,   335,    -1,   335,
      11,   335,    -1,   335,     9,   335,    -1,   335,    29,   335,
      -1,   335,    28,   335,    -1,   335,    34,   335,    -1,   335,
      33,   335,    -1,   335,    36,   335,    -1,   335,    35,   335,
      -1,   335,    37,   335,    -1,   335,    38,   335,    -1,   335,
      40,   335,    -1,   335,    39,   335,    -1,   335,    26,    27,
     335,    -1,   335,    26,   335,    27,   335,    -1,    43,   335,
      -1,    44,   335,    -1,   152,   335,   153,    -1,    73,    -1,
     386,    -1,   384,    -1,   165,    -1,   147,   150,   165,    -1,
     150,   165,    -1,   332,    -1,   160,   376,   160,    -1,   142,
     376,   143,    -1,   130,    -1,    -1,   340,   339,    -1,    -1,
       8,    -1,   340,     8,   334,   126,   334,    -1,   340,     8,
     334,    -1,   334,   126,   334,    -1,   334,    -1,   343,    -1,
     292,    -1,   152,   341,   153,    -1,   152,   306,   153,    -1,
     346,    -1,   346,    -1,   346,    -1,    -1,    -1,   361,   125,
     347,   366,   348,   355,   349,    -1,   361,    -1,   349,   350,
      -1,    -1,    -1,   125,   366,   351,   355,    -1,   352,    62,
     365,   158,    -1,   353,    62,   365,   158,    -1,    -1,   354,
     252,    -1,   353,    -1,   352,    -1,    -1,   363,    -1,   370,
     363,    -1,   321,   146,   356,    -1,   358,   146,   356,    -1,
     363,    -1,   359,    62,   365,   158,    -1,    -1,   312,   360,
      62,   365,   158,    -1,   362,    -1,   359,    -1,   312,    -1,
     363,    -1,   370,   363,    -1,   357,    -1,   363,    62,   365,
     158,    -1,   363,   155,   341,   156,    -1,   364,    -1,    74,
      -1,   157,   155,   341,   156,    -1,    -1,   341,    -1,   368,
      -1,    -1,   356,   367,    -1,   368,    62,   365,   158,    -1,
     368,   155,   341,   156,    -1,   369,    -1,    72,    -1,   155,
     341,   156,    -1,   157,    -1,   370,   157,    -1,   371,     8,
     372,    -1,   372,    -1,   346,    -1,    -1,   127,   152,   373,
     371,   153,    -1,    -1,    -1,   375,   339,    -1,   375,     8,
     341,   126,   341,    -1,   375,     8,   341,    -1,   341,   126,
     341,    -1,   341,    -1,   375,     8,   341,   126,    32,   344,
      -1,   375,     8,    32,   344,    -1,   341,   126,    32,   344,
      -1,    32,   344,    -1,   376,   377,    -1,   376,    79,    -1,
     377,    -1,    79,   377,    -1,    74,    -1,    -1,    74,    62,
     378,   379,   158,    -1,    74,   125,    72,    -1,   144,   341,
     156,    -1,   144,    73,    62,   341,   158,   156,    -1,   145,
     346,   156,    -1,    72,    -1,    75,    -1,    74,    -1,   117,
     152,   381,   153,    -1,   118,   152,   346,   153,    -1,   118,
     152,   292,   153,    -1,     7,   341,    -1,     6,   341,    -1,
       5,   152,   341,   153,    -1,     4,   341,    -1,     3,   341,
      -1,   383,    -1,    -1,   381,     8,   382,   383,    -1,   346,
      -1,   292,    -1,   321,   146,    72,    -1,   358,   146,    72,
      -1,   321,   146,   120,    -1,   321,   146,   120,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   220,   220,   224,   224,   225,   229,   230,   234,   235,
     236,   237,   238,   239,   239,   241,   241,   243,   244,   245,
     246,   250,   251,   255,   256,   257,   258,   262,   263,   267,
     268,   269,   270,   274,   275,   279,   280,   281,   282,   286,
     287,   291,   291,   292,   297,   298,   299,   300,   305,   306,
     310,   311,   311,   311,   312,   312,   312,   313,   313,   313,
     314,   314,   314,   318,   320,   322,   315,   324,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   340,   341,   339,   344,   345,   343,   347,
     347,   348,   349,   350,   349,   352,   353,   357,   358,   359,
     360,   361,   358,   365,   366,   366,   370,   371,   375,   376,
     380,   380,   380,   384,   385,   389,   393,   397,   401,   402,
     406,   407,   411,   411,   418,   417,   424,   423,   433,   434,
     435,   436,   440,   441,   445,   448,   450,   453,   455,   459,
     460,   464,   465,   469,   470,   471,   471,   475,   476,   481,
     482,   487,   488,   493,   494,   499,   500,   501,   502,   507,
     508,   508,   509,   509,   514,   515,   520,   521,   526,   528,
     528,   532,   534,   534,   538,   540,   544,   546,   551,   552,
     557,   558,   562,   564,   570,   571,   572,   573,   578,   579,
     580,   585,   586,   587,   588,   589,   590,   591,   592,   596,
     597,   602,   603,   604,   609,   610,   611,   612,   618,   619,
     624,   624,   625,   626,   627,   627,   633,   637,   638,   642,
     643,   646,   648,   652,   653,   657,   658,   662,   666,   667,
     671,   672,   676,   680,   681,   685,   686,   690,   691,   695,
     696,   700,   701,   705,   706,   710,   711,   712,   713,   714,
     715,   719,   720,   721,   722,   726,   727,   731,   732,   737,
     738,   742,   742,   743,   747,   748,   752,   753,   757,   757,
     758,   759,   763,   764,   764,   769,   769,   773,   773,   774,
     775,   776,   776,   777,   778,   779,   780,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   793,
     793,   794,   794,   795,   795,   796,   796,   797,   798,   799,
     800,   801,   802,   803,   804,   805,   806,   807,   808,   809,
     810,   811,   812,   813,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   824,   824,   825,   826,   825,   828,
     828,   830,   831,   832,   833,   834,   835,   836,   837,   838,
     839,   839,   840,   841,   842,   843,   844,   845,   846,   846,
     849,   849,   855,   856,   857,   858,   862,   863,   864,   867,
     868,   871,   874,   876,   880,   881,   882,   883,   887,   887,
     889,   889,   891,   891,   893,   893,   895,   895,   897,   897,
     899,   899,   901,   901,   906,   907,   908,   909,   913,   914,
     915,   921,   922,   927,   928,   927,   930,   935,   936,   941,
     945,   946,   947,   951,   952,   953,   958,   959,   964,   965,
     966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     979,   983,   984,   985,   989,   990,   991,   992,   993,   994,
     995,   996,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1049,  1050,  1053,  1055,  1059,  1060,  1061,
    1062,  1066,  1067,  1071,  1072,  1077,  1082,  1087,  1092,  1093,
    1092,  1095,  1099,  1100,  1105,  1105,  1109,  1110,  1114,  1114,
    1119,  1120,  1121,  1125,  1126,  1130,  1131,  1136,  1140,  1141,
    1141,  1146,  1147,  1148,  1153,  1154,  1155,  1159,  1160,  1161,
    1166,  1167,  1171,  1172,  1177,  1178,  1178,  1182,  1183,  1184,
    1188,  1189,  1193,  1194,  1198,  1199,  1204,  1205,  1205,  1206,
    1211,  1212,  1216,  1217,  1218,  1219,  1220,  1221,  1222,  1223,
    1227,  1228,  1229,  1230,  1236,  1237,  1237,  1238,  1239,  1240,
    1241,  1246,  1247,  1248,  1253,  1254,  1255,  1256,  1257,  1258,
    1259,  1260,  1264,  1265,  1265,  1269,  1270,  1274,  1275,  1279,
    1283
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
  "\">>= (T_SR_EQUAL)\"", "\"<<= (T_SL_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"",
  "\"|= (T_OR_EQUAL)\"", "\"&= (T_AND_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
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
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"", "'['",
  "\"clone (T_CLONE)\"", "\"new (T_NEW)\"", "\"exit (T_EXIT)\"",
  "\"if (T_IF)\"", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"integer number (T_LNUMBER)\"",
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
     273,   274,   275,   276,   277,   278,    63,    58,   279,   280,
     124,    94,    38,   281,   282,   283,   284,    60,    62,   285,
     286,   287,   288,    43,    45,    46,    42,    47,    37,    33,
     289,   126,    64,   290,   291,   292,   293,   294,   295,   296,
     297,   298,    91,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,    40,    41,    59,   123,   125,    36,    93,    96,
      34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   161,   162,   164,   163,   163,   165,   165,   166,   166,
     166,   166,   166,   167,   166,   168,   166,   166,   166,   166,
     166,   169,   169,   170,   170,   170,   170,   171,   171,   172,
     172,   172,   172,   173,   173,   174,   174,   174,   174,   175,
     175,   177,   176,   176,   178,   178,   178,   178,   179,   179,
     180,   181,   182,   180,   183,   184,   180,   185,   186,   180,
     187,   188,   180,   189,   190,   191,   180,   192,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   193,   194,   180,   195,   196,   180,   197,
     180,   180,   198,   199,   180,   180,   180,   200,   201,   202,
     203,   204,   200,   205,   206,   205,   207,   207,   208,   208,
     210,   211,   209,   212,   212,   213,   214,   215,   216,   216,
     217,   217,   219,   218,   221,   220,   222,   220,   223,   223,
     223,   223,   224,   224,   225,   226,   226,   227,   227,   228,
     228,   229,   229,   230,   230,   231,   230,   232,   232,   233,
     233,   234,   234,   235,   235,   236,   236,   236,   236,   237,
     238,   237,   239,   237,   240,   240,   241,   241,   242,   243,
     242,   244,   245,   244,   246,   246,   247,   247,   248,   248,
     249,   249,   250,   250,   251,   251,   251,   251,   252,   252,
     252,   253,   253,   253,   253,   253,   253,   253,   253,   254,
     254,   255,   255,   255,   256,   256,   256,   256,   257,   257,
     259,   258,   258,   258,   260,   258,   261,   262,   262,   263,
     263,   264,   264,   265,   265,   266,   266,   267,   268,   268,
     269,   269,   270,   271,   271,   272,   272,   273,   273,   274,
     274,   275,   275,   276,   276,   277,   277,   277,   277,   277,
     277,   278,   278,   278,   278,   279,   279,   280,   280,   281,
     281,   283,   282,   282,   284,   284,   285,   285,   287,   286,
     286,   286,   288,   289,   288,   291,   290,   293,   292,   292,
     292,   294,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   295,
     292,   296,   292,   297,   292,   298,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   299,   292,   300,   301,   292,   302,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     303,   292,   292,   292,   292,   292,   292,   292,   304,   292,
     305,   292,   306,   306,   306,   306,   307,   307,   307,   308,
     308,   309,   310,   310,   311,   311,   311,   311,   313,   312,
     314,   312,   315,   312,   316,   312,   317,   312,   318,   312,
     319,   312,   320,   312,   321,   321,   321,   321,   322,   322,
     322,   323,   323,   325,   326,   324,   324,   327,   327,   328,
     329,   329,   329,   330,   330,   330,   331,   331,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     333,   334,   334,   334,   335,   335,   335,   335,   335,   335,
     335,   335,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   338,   338,   339,   339,   340,   340,   340,
     340,   341,   341,   342,   342,   343,   344,   345,   347,   348,
     346,   346,   349,   349,   351,   350,   352,   352,   354,   353,
     355,   355,   355,   356,   356,   357,   357,   358,   359,   360,
     359,   361,   361,   361,   362,   362,   362,   363,   363,   363,
     364,   364,   365,   365,   366,   367,   366,   368,   368,   368,
     369,   369,   370,   370,   371,   371,   372,   373,   372,   372,
     374,   374,   375,   375,   375,   375,   375,   375,   375,   375,
     376,   376,   376,   376,   377,   378,   377,   377,   377,   377,
     377,   379,   379,   379,   380,   380,   380,   380,   380,   380,
     380,   380,   381,   382,   381,   383,   383,   384,   384,   385,
     386
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
       3,     3,     3,     3,     3,     2,     2,     2,     2,     0,
       4,     0,     4,     0,     4,     0,     4,     3,     3,     3,
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
       3,     1,     4,     3,     1,     1,     1,     3,     2,     1,
       1,     1,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     5,
       2,     2,     3,     1,     1,     1,     1,     3,     2,     1,
       3,     3,     1,     0,     2,     0,     1,     5,     3,     3,
       1,     1,     1,     3,     3,     1,     1,     1,     0,     0,
       7,     1,     2,     0,     0,     4,     4,     4,     0,     2,
       1,     1,     0,     1,     2,     3,     3,     1,     4,     0,
       5,     1,     1,     1,     1,     2,     1,     4,     4,     1,
       1,     4,     0,     1,     1,     0,     2,     4,     4,     1,
       1,     3,     1,     2,     3,     1,     1,     0,     5,     0,
       0,     2,     5,     3,     3,     1,     6,     4,     4,     2,
       2,     2,     1,     2,     1,     0,     5,     3,     3,     6,
       3,     1,     1,     1,     4,     4,     4,     2,     2,     4,
       2,     2,     1,     0,     4,     1,     1,     3,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,   357,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   550,     0,     0,   410,
       0,   418,   419,     6,   473,   530,    80,   420,     0,    60,
      57,     0,     0,    89,     0,     0,     0,     0,   371,     0,
       0,    92,     0,     0,     0,     0,     0,   394,     0,     0,
       0,     0,   128,   130,   134,     0,     0,   482,   424,   425,
     426,   421,   422,     0,     0,   427,   423,     0,     0,    91,
      43,   542,   413,     0,   476,     4,     0,     8,    48,     9,
      10,   116,   117,     0,     0,   333,   492,     0,   353,   354,
     118,   523,     0,   479,   352,     0,   332,   491,     0,   495,
     392,   526,     0,   522,   501,   521,   524,   529,     0,   341,
     475,   474,   357,     6,   394,     0,   118,   581,   580,     0,
     578,   577,   356,   492,     0,   495,   319,   320,   321,   322,
       0,   348,   347,   346,   345,   344,   343,   342,   394,     0,
       0,   378,     0,   298,   497,     0,   296,     0,   555,     0,
     485,   283,     0,     0,   395,   401,   275,   402,     0,   406,
     524,     0,     0,   349,   412,     0,    51,    49,   532,     0,
     258,     0,     0,   259,     0,     0,    67,    69,     0,    71,
       0,     0,     0,    73,   492,     0,   495,     0,     0,     0,
       0,     0,    23,     0,    22,   201,     0,     0,   200,   131,
     129,   206,     0,   118,     0,     0,     0,     0,   277,   550,
     564,     0,   429,     0,     0,     0,   562,     0,    15,     0,
     478,   333,     0,     0,    41,     0,   414,     0,   415,     0,
       0,     0,     0,     0,    20,   132,   126,    76,   532,   532,
     119,   358,     0,     0,   303,     0,   305,   336,   299,   301,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,   297,   295,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   532,   498,   532,
       0,   543,   525,   358,     0,     0,   351,     0,   382,     0,
       0,   559,   496,     0,   370,   486,   551,     0,   397,     0,
     416,     0,   403,   525,   411,    54,     0,   533,     0,     0,
      79,     0,    58,     0,   260,   263,   492,   495,     0,     0,
      70,    72,    96,     0,    74,    75,    43,    95,     0,    29,
       0,    28,     0,    35,     0,    34,    25,     0,     0,    17,
       0,   202,   495,     0,    77,     0,     0,    78,   360,     0,
     113,   115,   492,   495,     0,   582,   492,   495,     0,   549,
       0,   565,     0,   428,   563,   473,     0,     0,   561,   481,
     560,   477,     5,    12,    13,     0,   334,   494,   493,    50,
       0,     0,   355,   480,     7,     0,   379,     0,     0,   124,
     135,     0,     0,   122,     0,   532,   587,   590,     0,   515,
     513,   384,     0,     0,   307,     0,   339,     0,     0,     0,
     308,   310,   309,   324,   323,   326,   325,   327,   329,   330,
     328,   318,   317,   312,   313,   311,   314,   315,   316,   331,
       0,   279,   294,   293,   292,   291,   290,   289,   288,   287,
     286,   285,   284,   393,   588,   516,   388,     0,     0,     0,
       0,   579,   492,   495,   380,   540,     0,   554,     0,   553,
     396,   515,   417,   276,   516,     0,    43,    52,   368,   257,
      61,     0,    63,   261,    86,    83,     0,     0,   159,   159,
      68,     0,     0,     0,     0,   483,   420,     0,   440,     0,
       0,     0,     0,   436,     0,   434,   439,    40,   431,   441,
     435,    41,    31,     0,     0,    18,    37,     0,     0,    19,
       0,    24,    21,     0,   199,   207,   204,     0,     0,     0,
     583,   574,   576,   575,    11,     0,   546,     0,   545,   369,
       0,   567,     0,   568,   570,     0,     3,     5,   383,   272,
       0,    42,    44,    45,    46,   531,     0,     0,   188,     0,
     492,     0,   495,     0,     0,     0,   398,   133,   137,     0,
       0,   367,   366,     0,   184,     0,     0,     0,     0,   514,
     304,   306,     0,     0,   300,   302,     0,   280,     0,     0,
     518,   535,   499,   534,   539,   527,   528,   558,   557,     0,
     404,    41,   168,     0,    43,   166,    59,   259,     0,     0,
       0,     0,     0,     0,   159,     0,   159,     0,   470,   471,
     447,   448,   490,     0,   485,   483,     0,     0,   438,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,    30,    27,
       0,    36,    33,    26,   203,     0,   184,   114,    82,     0,
     547,   549,     0,   571,   573,   572,     0,     0,   381,    16,
       3,   335,     0,     0,   193,   194,     0,   189,   190,    39,
       0,   400,     0,     0,   136,   139,   209,   184,   185,   186,
       0,   178,   180,   118,   187,   520,   541,   387,   385,   340,
     337,   281,   391,   389,   536,   512,   532,     0,     0,   552,
     408,   171,   174,     0,    41,     0,   262,     0,     0,   141,
     143,   141,   153,     0,    43,   151,    90,     0,     0,     0,
       0,     0,   155,     0,   433,   486,   484,     0,   437,   472,
     430,   589,   457,   455,   456,     0,     0,   459,   458,   449,
     451,   450,   461,   460,   463,   462,   464,   465,   467,   466,
     453,   452,   442,   443,   454,   444,   445,   446,     0,    93,
      32,    38,   205,     0,   584,   549,   544,     0,   566,     0,
      14,   532,     0,   271,   270,   274,   265,     0,     0,     0,
     492,   495,   399,   138,   209,     0,   241,     0,   372,   184,
     120,     0,   416,   511,   510,     0,   503,     0,     0,   556,
     405,   176,     0,     0,    53,    62,     0,    64,   144,   145,
       0,     0,     0,     0,    41,     0,   157,     0,   164,   165,
     162,   156,   489,   488,   432,   468,     0,    98,   103,   372,
       0,   278,   569,     0,   504,   264,   532,     0,    47,   197,
     198,   241,   140,     0,     0,   245,   246,   247,   250,   249,
     248,   240,   127,   208,   213,   210,     0,   239,   243,     0,
       0,     0,     0,   181,   121,     0,   338,   282,   532,   532,
     509,   500,   537,   538,     0,   407,     0,     0,     0,   169,
     175,   167,   259,   549,   142,    87,    84,   154,     0,   158,
     160,    43,     0,   469,     0,   104,    94,     0,   548,   267,
     512,     0,   269,   125,     0,     0,   217,     0,   118,   244,
       0,   212,    43,     0,    43,   182,     0,     0,   502,   409,
       0,    43,     0,     0,     0,     0,     0,     0,   152,    43,
      41,   487,    99,     0,    43,   505,   266,     0,     0,   219,
     221,   216,   253,     0,     0,     0,    41,     0,   376,     0,
      41,     0,   506,   507,   172,    41,    56,   170,    65,   146,
      43,   149,    88,    85,    41,     0,    43,    41,   256,   218,
       6,     0,   222,   223,     0,     0,   231,     0,     0,     0,
       0,   211,   214,     0,   123,   377,     0,   373,   359,   183,
      43,     0,    41,     0,    41,   361,   220,   224,   225,   235,
       0,   226,     0,   254,   251,     0,   255,     0,   374,    41,
      43,   147,    66,     0,   100,   105,     0,   234,   227,   228,
     232,     0,   184,   375,    41,   150,     0,   233,     0,   252,
       0,     0,    43,   229,     0,   148,    41,   237,    43,   215,
     101,    41,   107,   238,     0,   102,   106,   108,     0,   109,
     110,     0,     0,   111,     0,    43,    41,   112
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    84,    85,   557,   392,   203,   204,
     350,   351,   354,   355,    86,   234,   400,   561,   991,    88,
     326,   612,   486,   731,   182,   491,   181,   613,   617,   912,
    1021,   339,   620,   957,   619,   956,   185,   197,   858,   789,
     924,   995,  1056,  1072,   926,   963,  1075,  1076,  1077,  1081,
    1084,   369,   370,    89,    90,   251,   895,    91,   583,    92,
     578,   410,    93,   409,    94,   580,   703,   704,   841,   739,
     913,  1042,   992,   746,   497,   500,   625,   959,   921,   850,
     616,   732,   953,   831,  1020,   834,   908,   710,   711,   712,
     713,   482,   569,   207,   208,   212,   816,   883,   937,  1035,
     884,   935,   971,  1001,  1002,  1003,  1004,  1048,  1005,  1006,
    1007,  1046,  1069,   885,   886,   887,   888,   973,   889,   179,
     333,   334,   618,   803,   804,   805,   867,   691,   692,    95,
     320,    96,   379,   822,   428,   429,   423,   425,   559,   427,
     821,   592,   140,   414,   537,    97,    98,    99,   126,   892,
     979,   101,   242,   555,   395,   588,   587,   599,   598,   295,
     102,   714,   166,   167,   485,   730,   830,   905,   173,   237,
     483,   103,   516,   632,   518,   519,   104,   633,   316,   634,
     105,   106,   107,   311,   108,   109,   468,   725,   901,   806,
     930,   823,   824,   825,   826,   110,   111,   112,   113,   252,
     114,   115,   116,   117,   328,   602,   724,   603,   604,   118,
     547,   548,   795,   159,   160,   225,   226,   550,   686,   119,
     374,   679,   375,   120,   520,   121
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -833
static const yytype_int16 yypact[] =
{
    -833,    75,    82,  -833,  1632,  3993,  3993,   -58,  3993,  3993,
    3993,  3993,  3993,  3993,  3993,  3993,  -833,  3993,  3993,  3993,
    3993,  3993,  3993,  3993,   119,   119,  2796,  3993,   158,   -53,
     -47,  -833,  -833,   211,  -833,  -833,  -833,   123,  3993,  -833,
    -833,    91,    93,  -833,   -47,  2929,  3062,   181,  -833,   203,
    3195,  -833,  3993,   157,    -7,   162,   168,     5,   138,   151,
     159,   170,  -833,  -833,  -833,   192,   200,  -833,  -833,  -833,
    -833,  -833,  -833,   279,    86,  -833,  -833,   248,  4126,  -833,
    -833,   206,   326,   394,   -60,  -833,    12,  -833,  -833,  -833,
    -833,  -833,  -833,   349,   355,  -833,  -833,   244,   370,   373,
     431,   391,   377,  -833,  -833,  4740,  -833,  -833,   198,  1001,
    -833,  -833,   380,   466,   420,  -833,    70,  -833,    10,  -833,
    -833,  -833,  -833,  -833,   465,   407,   431,  5388,  5388,  3993,
    5388,  5388,  5651,   185,  5083,  1193,  -833,  -833,   524,  -833,
    3993,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,   434,
     248,   -74,   442,  -833,  -833,   446,  -833,   119,  5145,   448,
     586,  -833,   450,   248,   454,   461,  -833,  -833,   463,   487,
     -28,    10,  3328,  -833,  -833,  4126,   583,  -833,  3993,    15,
    5388,  2530,   -47,  3993,  3993,   492,  -833,  -833,  4783,  -833,
    4825,   491,   632,  -833,   493,  5388,  1419,   498,  4867,    89,
     146,   248,   -13,    18,  -833,  -833,   147,    24,  -833,  -833,
    -833,   641,    25,   431,   119,  3993,  3993,   505,  -833,  2796,
     -27,   458,  -833,  4259,   119,   422,  -833,   248,  -833,   421,
     -59,   506,   512,  4910,   510,  3993,    79,   508,   424,    79,
      67,   596,   519,   602,  -833,   554,  -833,  -833,  3993,  3993,
    -833,   608,   619,   178,  -833,  3993,  -833,   658,  -833,  -833,
    3993,  3993,  3993,  3993,  3993,  3993,  3993,  3993,  3993,  3993,
    3993,  3993,  3993,  3993,  3993,  3993,  3993,  3993,  3993,   158,
    -833,  -833,  -833,  3461,  3993,  3993,  3993,  3993,  3993,  3993,
    3993,  3993,  3993,  3993,  3993,   519,   190,  3993,  -833,  3993,
    3993,   206,   -17,  -833,  4952,  3993,  -833,   248,   -50,   199,
     199,  -833,  -833,  3594,  -833,  3727,  -833,   248,   454,    11,
     519,    11,  -833,    -4,  -833,  -833,  2530,  5388,   528,  3993,
    -833,   599,  -833,   536,   683,  5388,   604,  1390,   621,     0,
    -833,  -833,  -833,  5195,  -833,  -833,  -833,  -833,   248,    -8,
      29,  -833,   248,   149,    30,  -833,   163,   634,   156,  -833,
    3993,  -833,  -833,    -7,  -833,  5195,   633,  -833,  -833,    17,
    -833,  -833,    35,   425,    36,  -833,   555,  1640,   558,   342,
     556,  -833,   645,  -833,  -833,   654,  4436,   565,  -833,  -833,
    -833,   356,  -833,  -833,  -833,   519,  -833,  -833,  -833,  -833,
    1765,  4478,  -833,  -833,  -833,  1471,  -833,   711,   -44,  -833,
     603,   570,   572,  -833,   580,  3993,   587,  -833,  3993,   588,
      -4,  -833,    10,  3993,  5549,  3993,  -833,  3993,  3993,  3993,
    1521,  2713,  2977,  3110,  3110,  3110,  3110,  1086,  1086,  1086,
    1086,   730,   730,   699,   699,   699,   524,   524,   524,  -833,
     134,  5651,  5651,  5651,  5651,  5651,  5651,  5651,  5651,  5651,
    5651,  5651,  5651,  -833,   587,   590,  -833,   585,   199,   593,
    4525,  -833,   257,  1241,   288,  -833,   119,  5388,   119,  5187,
     454,  -833,  -833,  -833,  -833,   199,  -833,  -833,  -833,  5388,
    -833,  1923,  -833,  -833,  -833,  -833,   746,    41,   607,   610,
    -833,  5219,  5219,  5219,  5219,  5195,  -833,   613,  -833,     1,
     612,   248,  5219,   -74,   620,  -833,  -833,  -833,  5511,  -833,
    -833,   611,   176,   697,    89,  -833,   177,   698,   146,  -833,
     700,  -833,  -833,  4567,  -833,  -833,   768,   631,   119,   635,
    -833,  -833,  -833,  -833,  -833,   636,  -833,    43,  -833,  -833,
     507,  -833,  3993,  -833,  -833,   519,   629,  -833,  -833,   -23,
     640,  -833,  -833,  -833,  -833,  -833,   119,  3993,  -833,    46,
      49,   646,   910,  5195,   637,   248,   454,  -833,   662,   -44,
     639,  -833,  -833,   650,   365,   647,  4609,   519,   519,    -4,
    5429,  5651,  3993,  5346,  5717,  5759,   158,  -833,   519,   519,
    -833,  -833,  -833,     4,  -833,  -833,  -833,  -833,  -833,  3860,
    -833,   263,  -833,   -47,  -833,  -833,  -833,  3993,  3993,   423,
     423,  5195,   731,  2081,  -833,   389,  -833,   184,   488,   488,
    -833,  -833,   678,   648,   800,  5195,   666,   248,   -50,  4994,
      16,  5219,  5219,  5219,  5018,  5219,  5219,  5219,  5219,  5219,
    5219,  5219,  5219,  5219,  5219,  5219,  5219,  5219,  5219,  5219,
    5219,  5219,  5219,  5219,  5219,  5219,   709,   745,  -833,  -833,
     748,  -833,  -833,  -833,  -833,  5195,   365,  -833,  -833,  3993,
    -833,   342,   804,  -833,  -833,  -833,   672,  4394,  -833,  -833,
     675,  -833,   164,   682,  -833,  5388,  2663,  -833,  -833,  -833,
     248,   454,   -44,   681,   829,  -833,  -833,   365,  -833,  -833,
     685,   832,  -833,   431,  -833,  -833,  -833,  -833,  -833,  5674,
    -833,  -833,  -833,  -833,  -833,   689,  3993,  3993,   119,  5388,
    -833,  -833,   351,   688,   760,   691,  5388,   119,   694,   721,
    -833,   721,  -833,   835,  -833,  -833,  -833,   521,   701,  3993,
       3,   363,  -833,  5195,  -833,  5195,  -833,   703,   288,  -833,
    -833,  -833,  5590,  5628,  5697,  5219,  5471,  5781,  5800,  2846,
    3244,  3376,  3509,  3509,  3509,  3509,  1423,  1423,  1423,  1423,
     655,   655,   488,   488,   488,  -833,  -833,  -833,   702,  -833,
    -833,  -833,  -833,   704,  -833,   342,  -833,  3993,  -833,   696,
    -833,  3993,   199,   733,   189,  -833,  -833,   705,   119,  3993,
      51,  1135,   454,   829,  -833,   -44,   644,   708,   757,   393,
     714,  3993,   519,   802,   805,   519,  -833,   710,  4654,  -833,
     741,   399,   -47,  2530,  -833,  -833,   715,  -833,  -833,  -833,
     423,   718,   719,  5195,   783,   720,  -833,  4698,  -833,  -833,
    -833,  -833,  -833,   749,  -833,  5740,  5219,  -833,   772,   757,
      52,  5651,  -833,   725,  -833,  -833,  3993,   733,  -833,  -833,
    5388,   849,  -833,   810,   -44,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,   465,   624,  -833,    32,
     722,   735,   736,  -833,  -833,   811,  5674,  -833,  3993,  3993,
    -833,   733,  -833,  -833,   199,  -833,   -47,   863,   824,  -833,
    -833,  -833,  3993,   342,  -833,  -833,  -833,  -833,   740,  -833,
    -833,  -833,  5195,  5740,   -44,  -833,  -833,   742,  -833,  -833,
     689,   738,   733,  -833,   887,     9,  -833,   828,   431,  -833,
     833,  -833,  -833,   160,  -833,   890,   750,   751,  -833,  -833,
     879,  -833,   753,  2530,   762,    56,  2239,  2239,  -833,  -833,
     -25,  -833,  -833,   755,  -833,  -833,  -833,  5195,   -44,  -833,
     145,  -833,   899,    33,   844,   903,   763,   847,  -833,    57,
     780,  5195,  -833,  -833,  -833,   873,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,   335,   871,  -833,   791,  -833,  -833,
     860,   796,   145,  -833,   799,   865,   858,   812,   808,  5195,
     893,  -833,  -833,  5195,  -833,  -833,   175,  -833,  -833,  -833,
    -833,  2397,   884,   822,   820,  -833,  -833,  -833,  -833,   713,
     -44,  -833,   905,  -833,   967,   830,  -833,   909,  -833,   314,
    -833,  -833,  -833,   834,  -833,  -833,   912,   914,   979,  -833,
    -833,  5195,   365,  -833,   904,  -833,   836,  -833,   -44,  -833,
     839,   840,  -833,  -833,   320,  -833,   837,  -833,  -833,  -833,
    -833,   841,   892,  -833,   846,  -833,   892,  -833,   -44,  -833,
    -833,   922,   854,  -833,   855,  -833,   843,  -833
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -833,  -833,  -376,  -833,   -24,  -833,  -833,  -833,  -833,   653,
    -833,   489,  -833,   484,  -833,  -272,  -833,  -833,    20,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,   -45,  -833,
    -833,  -833,   495,   638,   642,  -124,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,   333,   295,  -605,
    -833,  -833,    80,  -833,  -833,  -833,  -481,  -833,  -833,   193,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -655,  -833,   225,
    -833,  -239,  -833,  -833,   684,  -833,   231,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,    44,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -832,  -833,  -833,  -833,
    -603,  -833,  -833,   182,  -833,  -833,  -833,  -833,  -833,   970,
    -833,    31,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,    -1,  -833,  -833,     6,   191,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
     436,   105,  -267,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
     229,   665,  -833,  -170,   724,  -833,  -833,   417,   419,  -833,
     102,   -22,   852,  -465,   485,   664,  -833,  -833,  -833,  -767,
    -833,  -833,  -833,  -833,   129,  -248,  -833,   384,  -833,  -833,
    -833,   -19,    -9,  -833,  -202,  -479,  -833,  -833,   352,   237,
    -764,   379,  -833,   845,  -833,   470,   323,  -833,  -833,  -833,
    -833,  -833,   387,  -833,  -833,  -833
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -587
static const yytype_int16 yytable[] =
{
     151,   151,   303,   406,   164,   419,   610,   174,   176,   169,
     100,   607,   449,   608,   735,   741,   556,   968,   627,   170,
     243,   793,   186,   329,    87,   538,   358,   498,   123,   202,
     848,   860,   363,   366,   299,   381,   865,   524,   528,  -273,
     940,  1010,   133,  -586,   540,   299,   411,   412,   465,   622,
     229,   681,   817,   230,   696,   939,   463,  -191,   299,  -195,
     681,   419,   465,   213,   681,  1016,   726,   205,  -163,  -163,
    -163,   481,  -395,   484,   521,     3,   241,   232,   357,   211,
     636,   194,    -2,   523,    35,    35,  -395,  -397,   760,   368,
     241,   241,  -378,  -382,   129,   467,  -397,   469,   382,   172,
     241,   694,  -273,   574,    48,   175,   575,   127,   128,   302,
     130,   131,   132,   134,   136,   137,   138,   139,  -517,   141,
     142,   143,   144,   145,   146,   147,   308,   300,   158,   161,
     213,  -163,   299,   151,   948,  -514,   761,   241,   300,   318,
     180,   220,   241,   747,   222,   751,   388,   188,   190,   955,
     206,   300,   195,   220,   198,   499,   558,   849,   123,   727,
     332,   123,   323,   969,   970,   865,   244,   301,    81,   330,
     539,   232,   359,   517,   232,   349,   353,   356,   364,   367,
     233,   690,   151,   525,   529,   178,   941,  1011,  -586,   541,
     151,   123,   977,    35,   623,   535,   682,  1047,   596,   697,
     151,   331,  -191,   391,  -195,   928,   123,  1037,    35,   989,
    1017,   223,   224,   585,   611,   336,  -517,  1000,   123,   123,
     601,    35,  -513,   223,   224,   300,   801,   403,   123,   123,
     123,   304,    35,   148,   978,   914,   227,   601,   177,   348,
     527,   228,   306,   183,   420,   184,   372,   376,   148,  1038,
     416,   866,    35,   191,   530,   164,   199,   200,   281,   282,
     169,   148,   464,   829,    35,   171,   149,   667,   670,   150,
     170,   475,   148,    35,   233,   192,    81,   233,   749,   750,
     327,   149,   209,   474,   150,   335,   195,   420,   210,   802,
     214,    81,   574,   480,   149,   575,   352,   150,   417,   241,
     420,   420,   360,   215,    81,   162,   201,   201,   163,   954,
     420,   216,   420,   241,  -268,    81,   688,   195,   195,   513,
     123,   158,   217,   864,   522,   386,   241,   241,   526,   721,
     -55,   -55,   -55,   418,   202,    81,   472,   401,  -362,  -362,
     752,   513,   734,   869,   218,   418,   487,    81,   717,   718,
     327,   327,   219,   220,   418,   151,    81,   424,   221,   722,
     723,   235,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,  -173,  -173,  -173,   576,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,  1060,   247,   327,
     220,   327,   470,   699,   571,   236,   100,   195,   155,   155,
    -364,  -364,   168,   589,   123,   477,    35,   479,   832,   833,
     562,   245,   222,   223,   224,   949,   151,   246,  -161,  -161,
    -161,   489,   248,  -585,  -396,   249,   570,   123,   241,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   742,   151,  -519,   151,   737,   148,   749,   750,   420,
     152,   152,   533,   250,   165,   123,   906,   907,   220,   545,
     223,   224,   844,   239,  1067,  1068,   420,   513,   513,   513,
     513,   513,   748,   749,   750,  -497,  -497,   638,   513,   149,
     422,  -161,   150,   708,   709,   123,   220,    35,   220,    81,
     349,   388,  -396,   388,   353,   792,   241,   195,  -380,   153,
     156,   615,   574,   577,   151,   575,   171,   327,  -179,   851,
     586,   708,   709,   253,   827,   590,   296,   591,   297,   593,
     594,   595,   220,   422,   663,   664,   665,   148,   223,   224,
     574,   155,   151,   575,   384,   298,   422,   422,   390,   513,
     738,   701,   238,   240,   601,   576,   422,   227,   422,   384,
     576,   390,   384,   390,    48,   389,   223,   224,   223,   224,
     149,   241,   164,   150,   279,   393,   394,   169,  -585,   683,
      81,   684,   685,   852,   307,   853,   900,   170,   309,   820,
     155,   733,   310,   152,   315,   151,   151,   513,   155,   863,
     317,   383,   223,   224,   241,   421,   314,   319,   155,   321,
     325,   513,   322,   758,   845,   749,   750,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   152,   745,   338,   342,   343,   344,   466,   960,
     152,   513,   576,   346,   687,   365,   601,   151,   378,   396,
     152,   421,   466,   168,   931,   397,   399,   402,   404,   695,
     976,   405,   980,   917,   407,   135,   812,   408,   576,   985,
     413,   415,   490,   576,   705,   426,   488,   994,   154,   154,
     492,   493,   997,   496,   719,   494,   946,   947,   660,   661,
     662,   663,   664,   665,   151,   422,   531,   536,   542,   549,
     372,   729,   544,   151,   196,   165,   552,   551,  1022,   335,
     736,   554,   422,  -242,  1024,   573,   579,   810,   581,   513,
     582,   513,   584,   875,   876,   877,   878,   879,   880,  -540,
    -386,   513,  -390,   600,   873,   276,   277,   278,  1039,   279,
     874,   605,   961,   875,   876,   877,   878,   879,   880,   881,
     621,   624,   637,   155,   626,   635,   640,   666,  1054,   668,
     671,   151,   673,   273,   274,   275,   276,   277,   278,   514,
     279,   195,   675,   676,   151,   689,   702,   700,   680,   678,
    1066,   576,   693,   420,   706,   576,  1071,   998,   195,   698,
     882,   514,   707,   743,   753,   715,   754,   705,   755,   383,
     909,  1019,   788,  1086,   974,   152,   151,   790,   797,   513,
     791,   312,   875,   876,   877,   878,   879,   880,   327,   828,
     798,   800,   513,   171,   155,   807,   814,   815,   818,  1033,
     819,  -508,   835,  1036,   836,   837,   839,   840,   337,   843,
     576,   847,   862,   910,   857,   846,   854,   859,   802,   868,
     155,   890,   155,   891,   898,   894,   904,   899,   902,   911,
     362,   915,   916,   918,   919,   922,   925,   942,   371,   373,
     377,  1059,   934,   929,   950,   945,   152,   943,   387,   151,
     951,   944,   938,   952,   958,   420,   966,   964,   513,   861,
     576,   967,   972,   327,   981,   975,   984,   986,   982,   983,
     996,   870,   152,  1009,   152,   988,  1012,  1013,  -192,  1014,
     872,  1015,   155,   896,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,  1018,   514,   514,   514,
     514,   514,  -177,   513,   576,  1023,   576,  1025,   514,   873,
     155,  -230,  1026,  1028,  1032,   874,  1029,   513,   875,   876,
     877,   878,   879,   880,   881,  1030,  1031,  1034,   327,   473,
    -497,  -497,  1043,   987,   152,  1044,  1045,  1050,   576,   936,
     168,  1051,  1052,  1053,  1057,   513,  -236,  1058,  1055,   513,
    1061,  1062,  1064,  1070,  1065,  1074,  1082,  1073,  1078,  1087,
     327,   327,   152,   155,   155,   933,   576,  1083,   515,   514,
    1085,   532,   672,   669,   335,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   513,   576,   962,
     515,  1079,   165,   677,   576,   813,   842,   993,   563,   422,
     920,  1041,   564,   546,   893,   871,  1027,   534,   231,   932,
     927,   897,   757,   756,   576,   152,   152,   514,   361,   965,
     796,  -497,  -497,  -192,   380,   155,   794,     0,     0,   572,
       0,   514,     0,   999,     0,  1008,     0,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,     0,     0,     0,     0,     0,  1008,     0,     0,
       0,   514,   155,     0,   597,     0,     0,   152,     0,     0,
       0,   155,     0,  -587,  -587,  -587,  -587,   271,   272,   273,
     274,   275,   276,   277,   278,  1049,   279,     0,     0,     0,
     312,   422,   312,  -196,     0,     0,     0,     0,     0,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,     0,     0,  1063,   152,     0,   515,   515,   515,   515,
     515,     0,     0,   152,     0,     0,     0,   515,     0,   155,
       0,     0,     0,  1080,     0,     0,     0,     0,     0,   514,
       0,   514,   155,     0,     0,  -497,  -497,     0,     0,     0,
       0,   514,   371,     0,     0,     0,     0,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,     0,
       0,     0,     0,     0,   155,   628,   629,   630,   631,     0,
     312,   152,     0,     0,     0,     0,   639,     0,   515,     0,
       0,     0,     0,     0,   152,     0,     0,     0,     0,     0,
       0,     0,     0,  -497,  -497,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   152,     0,     0,   514,
       0,     0,     0,   740,   740,     0,   515,     0,  -196,     0,
       0,     0,   514,     0,     0,     0,     0,   155,     0,     0,
     515,  -497,  -497,     0,     0,     0,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     515,     0,     0,   373,     0,   546,  -363,  -363,     0,   152,
       0,     0,     0,     0,     0,     0,     0,     0,   514,     0,
     811,     0,     0,     0,     0,   762,   763,   764,   766,   767,
     768,   769,   770,   771,   772,   773,   774,   775,   776,   777,
     778,   779,   780,   781,   782,   783,   784,   785,   786,   787,
       0,     0,   312,     0,  -365,  -365,     0,     0,     0,     0,
       0,   838,     0,   514,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,     0,   514,   515,     0,
     515,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     515,     0,     0,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   514,     0,     0,     0,   514,
    -497,  -497,     0,     0,     0,     0,     0,     0,     0,   546,
    -587,  -587,  -587,  -587,   658,   659,   660,   661,   662,   663,
     664,   665,   312,     0,     5,     6,     7,     8,     9,  -497,
    -497,   495,     0,    10,    11,     0,     0,   514,     0,   855,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   566,   740,     0,     0,     0,   515,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,   515,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   123,    34,    35,     0,     0,     0,     0,
       0,    37,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
      48,   279,     0,   345,     0,     0,     0,   546,     0,     0,
     923,     0,     0,     0,     0,   124,     0,   515,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   125,    75,
      76,    77,   567,    78,   568,     0,     0,     0,    81,     0,
      82,    83,   515,     0,     0,     5,     6,     7,     8,     9,
       0,     0,     0,     0,    10,    11,   515,     0,     0,     0,
       0,     0,     0,     0,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,     0,     0,     0,     0,
       0,     0,     0,     0,   515,    12,    13,     0,   515,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
    -497,  -497,    31,    32,    33,    34,    35,     0,    36,     0,
       0,     0,    37,    38,    39,    40,   515,    41,     0,    42,
       0,    43,     0,     0,    44,     0,     0,     0,    45,    46,
      47,    48,    49,    50,    51,     0,     0,    52,    53,     0,
      54,     0,     0,     0,    55,    56,    57,     0,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,    65,
      66,     0,    67,    68,    69,    70,    71,    72,     5,     6,
       7,     8,     9,     0,    73,     0,     0,    10,    11,    74,
      75,    76,    77,     0,    78,     0,    79,    80,     0,    81,
       0,    82,    83,   543,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
       0,    36,     0,     0,     0,    37,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,     0,    50,    51,     0,     0,
      52,     0,     0,    54,     0,     0,     0,    55,    56,    57,
       0,    58,    59,    60,   560,    62,    63,    64,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,   125,    75,    76,    77,     0,    78,     0,    79,
      80,     0,    81,     0,    82,    83,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     614,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,     0,    36,
       0,     0,     0,    37,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,     0,    50,    51,     0,     0,    52,     0,
       0,    54,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,     0,
     125,    75,    76,    77,     0,    78,     0,    79,    80,     0,
      81,     0,    82,    83,     5,     6,     7,     8,     9,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   744,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     0,     0,
       0,    31,    32,    33,    34,    35,     0,    36,     0,     0,
       0,    37,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,     0,    50,    51,     0,     0,    52,     0,     0,    54,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,     0,    73,     0,     0,     0,     0,   125,    75,
      76,    77,     0,    78,     0,    79,    80,     0,    81,     0,
      82,    83,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   990,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,     0,    36,     0,     0,     0,    37,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,     0,
      50,    51,     0,     0,    52,     0,     0,    54,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,   125,    75,    76,    77,
       0,    78,     0,    79,    80,     0,    81,     0,    82,    83,
       5,     6,     7,     8,     9,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1040,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,    31,    32,    33,
      34,    35,     0,    36,     0,     0,     0,    37,    38,    39,
      40,     0,    41,     0,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,     0,    50,    51,
       0,     0,    52,     0,     0,    54,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     5,     6,     7,     8,     9,     0,    73,
       0,     0,    10,    11,   125,    75,    76,    77,     0,    78,
       0,    79,    80,     0,    81,     0,    82,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     0,     0,     0,
      31,    32,    33,    34,    35,     0,    36,     0,     0,     0,
      37,    38,    39,    40,     0,    41,     0,    42,     0,    43,
       0,     0,    44,     0,     0,     0,    45,    46,    47,    48,
       0,    50,    51,     0,     0,    52,     0,     0,    54,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,   122,   125,    75,    76,
      77,     0,    78,     0,    79,    80,     0,    81,     0,    82,
      83,     0,     0,     0,     0,   808,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   123,    34,    35,     0,     0,
       0,     0,     0,    37,     0,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,    48,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   122,
     125,    75,    76,    77,   809,    78,     0,     0,     0,     0,
      81,     0,    82,    83,     0,     0,     0,     0,   157,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   123,    34,
      35,     0,     0,     0,     0,     0,    37,   648,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   122,   125,    75,    76,    77,     0,    78,     0,
       0,     0,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,    31,
      32,   123,    34,    35,     0,     0,     0,     0,     0,    37,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,   122,   125,    75,    76,    77,
       0,    78,     0,   187,     0,     0,    81,     0,    82,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       0,     0,    31,    32,   123,    34,    35,     0,     0,     0,
       0,     0,    37,  -587,  -587,  -587,  -587,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,    67,    68,    69,    70,    71,    72,     5,     6,
       7,     8,     9,     0,    73,     0,     0,    10,   122,   125,
      75,    76,    77,     0,    78,     0,   189,     0,     0,    81,
       0,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   123,    34,    35,
       0,     0,     0,     0,     0,    37,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,    11,   125,    75,    76,    77,     0,    78,     0,   193,
       0,     0,    81,     0,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     123,    34,    35,     0,     0,     0,     0,     0,    37,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   665,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   122,   125,    75,    76,    77,     0,
      78,   324,     0,     0,     0,    81,     0,    82,    83,     0,
       0,     0,     0,   450,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   123,    34,    35,     0,     0,     0,     0,
       0,    37,  -587,  -587,  -587,  -587,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   122,   125,    75,
      76,    77,     0,    78,     0,     0,     0,     0,    81,     0,
      82,    83,     0,     0,     0,     0,   476,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   123,    34,    35,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
     122,   125,    75,    76,    77,     0,    78,     0,     0,     0,
       0,    81,     0,    82,    83,     0,     0,     0,     0,   478,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,     0,    31,    32,   123,
      34,    35,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,     0,     0,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     5,     6,     7,     8,     9,     0,    73,
       0,     0,    10,   122,   125,    75,    76,    77,     0,    78,
       0,     0,     0,     0,    81,     0,    82,    83,     0,     0,
       0,     0,   728,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   123,    34,    35,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,    11,
     125,    75,    76,    77,     0,    78,     0,     0,     0,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   123,    34,
      35,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   122,   125,    75,    76,    77,     0,    78,     0,
       0,     0,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,    31,
      32,   123,   385,    35,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
       0,    73,     0,   254,   255,   256,   125,    75,    76,    77,
       0,    78,     0,     0,     0,     0,    81,     0,    82,    83,
     257,     0,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,   254,   255,   256,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   257,     0,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,   254,   255,   256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   257,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,     0,
       0,     0,     0,     0,   254,   255,   256,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   257,   799,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   254,   255,   256,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   553,   257,     0,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,   254,   255,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   565,   257,     0,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
       0,     0,     0,   254,   255,   256,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     257,   606,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,     0,   279,     0,     0,   254,   255,   256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   674,   257,   848,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   254,
     255,   256,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   716,   257,     0,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,     0,   254,   255,   256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   257,
     903,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,     0,   279,   254,   255,   256,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   257,   849,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   254,   255,   256,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   257,   280,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,     0,   254,
     255,   256,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   257,   340,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,     0,
     279,   254,   255,   256,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,   341,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,     0,   279,   641,   642,   643,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     644,   347,   645,   646,   647,   648,   649,   650,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   662,
     663,   664,   665,     0,     0,   765,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   501,   502,   398,     0,     0,     0,   503,     0,   504,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
     123,     0,   254,   255,   256,     0,     0,     0,   506,     0,
       0,     0,     0,     0,     0,   471,     0,     0,     0,   257,
       0,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   148,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   759,   508,    68,
      69,    70,    71,    72,   254,   255,   256,     0,     0,     0,
     509,     0,     0,     0,     0,   510,    75,    76,   511,     0,
     512,   257,     0,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,     0,   279,   254,   255,   256,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   305,
       0,     0,     0,   257,     0,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,   501,   502,
       0,     0,     0,     0,   503,     0,   504,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   505,     0,     0,
       0,     0,   501,   502,     0,    31,    32,   123,   503,     0,
     504,   313,     0,     0,     0,   506,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,   123,     0,     0,     0,     0,     0,     0,     0,   506,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
       0,     0,     0,   609,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   507,     0,   508,    68,    69,    70,    71,
      72,     0,     0,   148,     0,     0,     0,   509,     0,     0,
       0,     0,   510,    75,    76,   511,     0,   512,     0,   508,
      68,    69,    70,    71,    72,   254,   255,   256,     0,     0,
       0,   509,     0,     0,     0,     0,   510,    75,    76,   511,
       0,   512,   257,   720,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,     0,   279,   254,   255,   256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   257,     0,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,     0,   279,   255,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
     641,   642,   643,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   644,   856,   645,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     641,   642,   643,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   644,     0,   645,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   257,     0,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
     642,   643,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   644,     0,   645,   646,
     647,   648,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   643,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   644,     0,   645,   646,   647,   648,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   257,     0,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
       0,   279,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   644,   279,   645,   646,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,     0,   279,   645,   646,
     647,   648,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,     0,   279,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     647,   648,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665
};

static const yytype_int16 yycheck[] =
{
      24,    25,   126,   242,    28,   253,   485,    29,    30,    28,
       4,   476,   279,   478,   617,   620,   392,     8,   499,    28,
       8,   676,    44,     8,     4,     8,     8,    27,    72,    53,
      27,   795,     8,     8,    62,    62,   803,     8,     8,    62,
       8,     8,    11,     8,     8,    62,   248,   249,   296,     8,
      74,     8,   707,    77,     8,   887,   295,     8,    62,     8,
       8,   309,   310,    57,     8,     8,    62,    74,    93,    94,
      95,   319,   146,   321,   346,     0,   150,    78,    91,    74,
      79,    50,     0,    91,    74,    74,   146,   146,    72,   213,
     150,   150,   152,   152,   152,   297,   146,   299,   125,   152,
     150,   566,   125,   147,    99,   152,   150,     5,     6,   118,
       8,     9,    10,    11,    12,    13,    14,    15,   146,    17,
      18,    19,    20,    21,    22,    23,   150,   155,    26,    27,
     124,   156,    62,   157,   901,   152,   120,   150,   155,   163,
      38,    74,   150,   624,   143,   626,    79,    45,    46,   913,
     157,   155,    50,    74,    52,   155,   395,   154,    72,   155,
     182,    72,   171,   154,   155,   932,   154,   157,   157,   154,
     153,   172,   154,   343,   175,   199,   200,   201,   154,   154,
      78,   557,   206,   154,   154,    62,   154,   154,   153,   153,
     214,    72,    32,    74,   153,   365,   153,  1029,    64,   153,
     224,   181,   153,   227,   153,   153,    72,    32,    74,   153,
     153,   144,   145,   415,   486,   184,   146,    72,    72,    72,
     468,    74,   152,   144,   145,   155,    62,   160,    72,    72,
      72,   129,    74,   114,    74,   840,   150,   485,    27,   150,
      91,   155,   140,   152,   253,   152,   215,   216,   114,    74,
      72,    62,    74,    72,    91,   279,    99,   100,    60,    61,
     279,   114,    72,   728,    74,    28,   147,    91,    91,   150,
     279,    72,   114,    74,   172,    72,   157,   175,    94,    95,
     178,   147,   120,   307,   150,   183,   184,   296,   120,   125,
     152,   157,   147,   317,   147,   150,   150,   150,   120,   150,
     309,   310,   155,   152,   157,   147,   150,   150,   150,   912,
     319,   152,   321,   150,   125,   157,   555,   215,   216,   343,
      72,   219,   152,   802,   348,   223,   150,   150,   352,   596,
      67,    68,    69,   155,   358,   157,   305,   235,   153,   154,
     156,   365,   614,   808,   152,   155,   326,   157,   587,   588,
     248,   249,   152,    74,   155,   379,   157,   255,    79,   598,
     599,   155,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,    67,    68,    69,   408,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,  1052,   154,   297,
      74,   299,   300,   573,   405,    79,   400,   305,    24,    25,
     153,   154,    28,   422,    72,   313,    74,   315,    67,    68,
     400,    72,   143,   144,   145,   904,   450,    72,    93,    94,
      95,   329,    62,     8,   146,    62,   405,    72,   150,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   621,   476,    62,   478,    32,   114,    94,    95,   468,
      24,    25,   360,    32,    28,    72,    67,    68,    74,   127,
     144,   145,   744,    79,   154,   155,   485,   501,   502,   503,
     504,   505,    93,    94,    95,    60,    61,   511,   512,   147,
     253,   156,   150,   128,   129,    72,    74,    74,    74,   157,
     524,    79,   146,    79,   528,   675,   150,   405,   152,    24,
      25,   491,   147,   408,   538,   150,   279,   415,   153,   156,
     418,   128,   129,   146,   726,   423,   146,   425,    62,   427,
     428,   429,    74,   296,    46,    47,    48,   114,   144,   145,
     147,   157,   566,   150,   221,   125,   309,   310,   225,   573,
     127,   575,    82,    83,   802,   579,   319,   150,   321,   236,
     584,   238,   239,   240,    99,   143,   144,   145,   144,   145,
     147,   150,   596,   150,    50,   154,   155,   596,   153,    72,
     157,    74,    75,   753,   150,   755,   825,   596,   146,   713,
     206,   613,   146,   157,     8,   619,   620,   621,   214,   801,
     150,   143,   144,   145,   150,   253,   158,   146,   224,   146,
      27,   635,   125,   637,    93,    94,    95,   641,   642,   643,
     644,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   206,   623,   152,   154,    14,   154,   296,   921,
     214,   675,   676,   155,   552,    14,   904,   681,   153,   153,
     224,   309,   310,   279,   866,   153,   156,   159,    72,   567,
     942,   152,   944,   843,    72,    11,   700,   123,   702,   951,
      72,    62,    83,   707,   579,    27,   158,   959,    24,    25,
     154,     8,   964,    72,   592,    91,   898,   899,    43,    44,
      45,    46,    47,    48,   728,   468,    72,    74,   153,   153,
     679,   609,   154,   737,    50,   279,    62,    72,   990,   617,
     618,   156,   485,    99,   996,    14,   123,   696,   158,   753,
     158,   755,   152,   109,   110,   111,   112,   113,   114,   152,
     152,   765,   152,   158,   100,    46,    47,    48,  1020,    50,
     106,   158,   922,   109,   110,   111,   112,   113,   114,   115,
      14,   154,   150,   379,   154,   152,   146,   156,  1040,    72,
      72,   795,    72,    43,    44,    45,    46,    47,    48,   343,
      50,   679,    14,   152,   808,   156,   124,   150,   152,   154,
    1062,   815,   152,   802,   155,   819,  1068,   967,   696,   153,
     156,   365,   152,    72,   126,   158,   158,   702,     8,   143,
     832,   981,   103,  1085,   938,   379,   840,    72,    14,   843,
      72,   157,   109,   110,   111,   112,   113,   114,   726,   727,
     158,   156,   856,   596,   450,   153,   155,     8,   153,  1009,
       8,   152,   154,  1013,    84,   154,   152,   126,   184,    14,
     874,   749,   156,   833,   152,   154,   153,   153,   125,   154,
     476,   153,   478,   106,    62,   151,   125,    62,   158,   154,
     206,   153,   153,    90,   154,   126,   104,   155,   214,   215,
     216,  1051,    72,   158,   906,    74,   450,   152,   224,   913,
      27,   155,   886,    69,   154,   904,   158,   155,   922,   797,
     924,    14,    74,   801,    14,    72,    27,   154,   158,   158,
     155,   809,   476,    14,   478,   153,    72,    14,     8,   156,
     815,    74,   538,   821,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   156,   501,   502,   503,
     504,   505,    69,   967,   968,    74,   970,   156,   512,   100,
     566,    91,   156,   154,   146,   106,    91,   981,   109,   110,
     111,   112,   113,   114,   115,   107,   154,    74,   866,   305,
      60,    61,    88,   953,   538,   153,   156,    72,  1002,   874,
     596,    14,   152,    74,    72,  1009,    72,     8,   154,  1013,
      86,   155,   153,   156,   154,   103,    74,   156,   152,   156,
     898,   899,   566,   619,   620,   156,  1030,   153,   343,   573,
     155,   358,   528,   524,   912,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,  1051,  1052,   924,
     365,  1076,   596,   538,  1058,   702,   741,   957,   400,   802,
     847,  1021,   400,   379,   819,   814,  1002,   363,    78,   867,
     859,   822,   635,   634,  1078,   619,   620,   621,   206,   930,
     681,    60,    61,   153,   219,   681,   679,    -1,    -1,   405,
      -1,   635,    -1,   968,    -1,   970,    -1,   641,   642,   643,
     644,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,    -1,    -1,    -1,    -1,    -1,  1002,    -1,    -1,
      -1,   675,   728,    -1,   450,    -1,    -1,   681,    -1,    -1,
      -1,   737,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,  1030,    50,    -1,    -1,    -1,
     476,   904,   478,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,  1058,   728,    -1,   501,   502,   503,   504,
     505,    -1,    -1,   737,    -1,    -1,    -1,   512,    -1,   795,
      -1,    -1,    -1,  1078,    -1,    -1,    -1,    -1,    -1,   753,
      -1,   755,   808,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,   765,   538,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,   840,   501,   502,   503,   504,    -1,
     566,   795,    -1,    -1,    -1,    -1,   512,    -1,   573,    -1,
      -1,    -1,    -1,    -1,   808,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   840,    -1,    -1,   843,
      -1,    -1,    -1,   619,   620,    -1,   621,    -1,   153,    -1,
      -1,    -1,   856,    -1,    -1,    -1,    -1,   913,    -1,    -1,
     635,    60,    61,    -1,    -1,    -1,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     675,    -1,    -1,   679,    -1,   681,   153,   154,    -1,   913,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   922,    -1,
     696,    -1,    -1,    -1,    -1,   641,   642,   643,   644,   645,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
      -1,    -1,   728,    -1,   153,   154,    -1,    -1,    -1,    -1,
      -1,   737,    -1,   967,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,   981,   753,    -1,
     755,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     765,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,  1009,    -1,    -1,    -1,  1013,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   795,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   808,    -1,     3,     4,     5,     6,     7,    60,
      61,    91,    -1,    12,    13,    -1,    -1,  1051,    -1,   765,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,   840,    -1,    -1,    -1,   843,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,   856,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      99,    50,    -1,   154,    -1,    -1,    -1,   913,    -1,    -1,
     856,    -1,    -1,    -1,    -1,   114,    -1,   922,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,   151,   152,   153,    -1,    -1,    -1,   157,    -1,
     159,   160,   967,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,   981,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1009,    43,    44,    -1,  1013,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      60,    61,    70,    71,    72,    73,    74,    -1,    76,    -1,
      -1,    -1,    80,    81,    82,    83,  1051,    85,    -1,    87,
      -1,    89,    -1,    -1,    92,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,   102,    -1,    -1,   105,   106,    -1,
     108,    -1,    -1,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,     3,     4,
       5,     6,     7,    -1,   142,    -1,    -1,    12,    13,   147,
     148,   149,   150,    -1,   152,    -1,   154,   155,    -1,   157,
      -1,   159,   160,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    76,    -1,    -1,    -1,    80,    81,    82,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    -1,    92,    -1,    -1,
      -1,    96,    97,    98,    99,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,   112,   113,   114,
      -1,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,    -1,   152,    -1,   154,
     155,    -1,   157,    -1,   159,   160,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    76,
      -1,    -1,    -1,    80,    81,    82,    83,    -1,    85,    -1,
      87,    -1,    89,    -1,    -1,    92,    -1,    -1,    -1,    96,
      97,    98,    99,    -1,   101,   102,    -1,    -1,   105,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
     147,   148,   149,   150,    -1,   152,    -1,   154,   155,    -1,
     157,    -1,   159,   160,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    76,    -1,    -1,
      -1,    80,    81,    82,    83,    -1,    85,    -1,    87,    -1,
      89,    -1,    -1,    92,    -1,    -1,    -1,    96,    97,    98,
      99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,   147,   148,
     149,   150,    -1,   152,    -1,   154,   155,    -1,   157,    -1,
     159,   160,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    76,    -1,    -1,    -1,    80,
      81,    82,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      -1,    92,    -1,    -1,    -1,    96,    97,    98,    99,    -1,
     101,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
      -1,   152,    -1,   154,   155,    -1,   157,    -1,   159,   160,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    76,    -1,    -1,    -1,    80,    81,    82,
      83,    -1,    85,    -1,    87,    -1,    89,    -1,    -1,    92,
      -1,    -1,    -1,    96,    97,    98,    99,    -1,   101,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,     3,     4,     5,     6,     7,    -1,   142,
      -1,    -1,    12,    13,   147,   148,   149,   150,    -1,   152,
      -1,   154,   155,    -1,   157,    -1,   159,   160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    76,    -1,    -1,    -1,
      80,    81,    82,    83,    -1,    85,    -1,    87,    -1,    89,
      -1,    -1,    92,    -1,    -1,    -1,    96,    97,    98,    99,
      -1,   101,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   114,    -1,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,
     130,   131,   132,   133,   134,   135,     3,     4,     5,     6,
       7,    -1,   142,    -1,    -1,    12,    13,   147,   148,   149,
     150,    -1,   152,    -1,   154,   155,    -1,   157,    -1,   159,
     160,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    99,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,     3,
       4,     5,     6,     7,    -1,   142,    -1,    -1,    12,    13,
     147,   148,   149,   150,   151,   152,    -1,    -1,    -1,    -1,
     157,    -1,   159,   160,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    80,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,   133,
     134,   135,     3,     4,     5,     6,     7,    -1,   142,    -1,
      -1,    12,    13,   147,   148,   149,   150,    -1,   152,    -1,
      -1,    -1,    -1,   157,    -1,   159,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,     3,     4,     5,     6,     7,
      -1,   142,    -1,    -1,    12,    13,   147,   148,   149,   150,
      -1,   152,    -1,   154,    -1,    -1,   157,    -1,   159,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    80,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,     3,     4,
       5,     6,     7,    -1,   142,    -1,    -1,    12,    13,   147,
     148,   149,   150,    -1,   152,    -1,   154,    -1,    -1,   157,
      -1,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    80,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,     3,     4,     5,     6,     7,    -1,   142,    -1,    -1,
      12,    13,   147,   148,   149,   150,    -1,   152,    -1,   154,
      -1,    -1,   157,    -1,   159,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,    -1,
     142,    -1,    -1,    12,    13,   147,   148,   149,   150,    -1,
     152,   153,    -1,    -1,    -1,   157,    -1,   159,   160,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,     3,     4,     5,
       6,     7,    -1,   142,    -1,    -1,    12,    13,   147,   148,
     149,   150,    -1,   152,    -1,    -1,    -1,    -1,   157,    -1,
     159,   160,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
       3,     4,     5,     6,     7,    -1,   142,    -1,    -1,    12,
      13,   147,   148,   149,   150,    -1,   152,    -1,    -1,    -1,
      -1,   157,    -1,   159,   160,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,     3,     4,     5,     6,     7,    -1,   142,
      -1,    -1,    12,    13,   147,   148,   149,   150,    -1,   152,
      -1,    -1,    -1,    -1,   157,    -1,   159,   160,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,
     130,   131,   132,   133,   134,   135,     3,     4,     5,     6,
       7,    -1,   142,    -1,    -1,    12,    13,   147,   148,   149,
     150,    -1,   152,    -1,    -1,    -1,    -1,   157,    -1,   159,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,     3,
       4,     5,     6,     7,    -1,   142,    -1,    -1,    12,    13,
     147,   148,   149,   150,    -1,   152,    -1,    -1,    -1,    -1,
     157,    -1,   159,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,   133,
     134,   135,     3,     4,     5,     6,     7,    -1,   142,    -1,
      -1,    12,    13,   147,   148,   149,   150,    -1,   152,    -1,
      -1,    -1,    -1,   157,    -1,   159,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,     9,    10,    11,   147,   148,   149,   150,
      -1,   152,    -1,    -1,    -1,    -1,   157,    -1,   159,   160,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,   158,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   156,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,   156,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   156,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   156,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
     156,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,   154,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,   154,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,   154,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,   154,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,   154,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,   153,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,     9,    10,    11,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   114,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,   130,   131,
     132,   133,   134,   135,     9,    10,    11,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,   147,   148,   149,   150,    -1,
     152,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    43,    44,    -1,    70,    71,    72,    49,    -1,
      51,   126,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   128,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,   114,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,    -1,   152,    -1,   130,
     131,   132,   133,   134,   135,     9,    10,    11,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,   147,   148,   149,   150,
      -1,   152,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    26,    50,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   162,   163,     0,   164,     3,     4,     5,     6,     7,
      12,    13,    43,    44,    49,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    70,    71,    72,    73,    74,    76,    80,    81,    82,
      83,    85,    87,    89,    92,    96,    97,    98,    99,   100,
     101,   102,   105,   106,   108,   112,   113,   114,   116,   117,
     118,   119,   120,   121,   122,   127,   128,   130,   131,   132,
     133,   134,   135,   142,   147,   148,   149,   150,   152,   154,
     155,   157,   159,   160,   165,   166,   175,   179,   180,   214,
     215,   218,   220,   223,   225,   290,   292,   306,   307,   308,
     309,   312,   321,   332,   337,   341,   342,   343,   345,   346,
     356,   357,   358,   359,   361,   362,   363,   364,   370,   380,
     384,   386,    13,    72,   114,   147,   309,   341,   341,   152,
     341,   341,   341,   292,   341,   346,   341,   341,   341,   341,
     303,   341,   341,   341,   341,   341,   341,   341,   114,   147,
     150,   165,   321,   345,   346,   358,   345,    32,   341,   374,
     375,   341,   147,   150,   165,   321,   323,   324,   358,   362,
     363,   370,   152,   329,   342,   152,   342,    27,    62,   280,
     341,   187,   185,   152,   152,   197,   342,   154,   341,   154,
     341,    72,    72,   154,   292,   341,   346,   198,   341,    99,
     100,   150,   165,   169,   170,    74,   157,   254,   255,   120,
     120,    74,   256,   309,   152,   152,   152,   152,   152,   152,
      74,    79,   143,   144,   145,   376,   377,   150,   155,   165,
     165,   290,   306,   341,   176,   155,    79,   330,   376,    79,
     376,   150,   313,     8,   154,    72,    72,   154,    62,    62,
      32,   216,   360,   146,     9,    10,    11,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    50,
     154,    60,    61,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   320,   146,    62,   125,    62,
     155,   157,   363,   216,   341,   126,   341,   150,   165,   146,
     146,   344,   346,   126,   158,     8,   339,   150,   165,   146,
     291,   146,   125,   363,   153,    27,   181,   341,   365,     8,
     154,   179,   342,   281,   282,   341,   292,   346,   152,   192,
     154,   154,   154,    14,   154,   154,   155,   154,   150,   165,
     171,   172,   150,   165,   173,   174,   165,    91,     8,   154,
     155,   343,   346,     8,   154,    14,     8,   154,   216,   212,
     213,   346,   292,   346,   381,   383,   292,   346,   153,   293,
     374,    62,   125,   143,   377,    73,   341,   346,    79,   143,
     377,   165,   168,   154,   155,   315,   153,   153,   153,   156,
     177,   341,   159,   160,    72,   152,   252,    72,   123,   224,
     222,   365,   365,    72,   304,    62,    72,   120,   155,   356,
     363,   369,   370,   297,   341,   298,    27,   300,   295,   296,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   323,
      32,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   252,    72,   356,   369,   365,   347,   365,
     341,   153,   292,   346,   165,    72,    32,   341,    32,   341,
     165,   356,   252,   331,   356,   325,   183,   179,   158,   341,
      83,   186,   154,     8,    91,    91,    72,   235,    27,   155,
     236,    43,    44,    49,    51,    62,    80,   128,   130,   142,
     147,   150,   152,   165,   321,   332,   333,   334,   335,   336,
     385,   176,   165,    91,     8,   154,   165,    91,     8,   154,
      91,    72,   170,   341,   255,   334,    74,   305,     8,   153,
       8,   153,   153,   153,   154,   127,   346,   371,   372,   153,
     378,    72,    62,   156,   156,   314,   163,   167,   252,   299,
     119,   178,   179,   214,   215,   156,    32,   151,   153,   253,
     292,   306,   346,    14,   147,   150,   165,   322,   221,   123,
     226,   158,   158,   219,   152,   365,   341,   317,   316,   363,
     341,   341,   302,   341,   341,   341,    64,   346,   319,   318,
     158,   356,   366,   368,   369,   158,   156,   344,   344,   126,
     366,   176,   182,   188,    27,   179,   241,   189,   283,   195,
     193,    14,     8,   153,   154,   237,   154,   237,   335,   335,
     335,   335,   334,   338,   340,   152,    79,   150,   165,   335,
     146,     9,    10,    11,    26,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   156,    91,    72,   172,
      91,    72,   174,    72,   156,    14,   152,   213,   154,   382,
     152,     8,   153,    72,    74,    75,   379,   341,   252,   156,
     163,   288,   289,   152,   344,   341,     8,   153,   153,   334,
     150,   165,   124,   227,   228,   322,   155,   152,   128,   129,
     248,   249,   250,   251,   322,   158,   156,   252,   252,   341,
      27,   323,   252,   252,   367,   348,    62,   155,    32,   341,
     326,   184,   242,   342,   176,   281,   341,    32,   127,   230,
     346,   230,   334,    72,    27,   179,   234,   237,    93,    94,
      95,   237,   156,   126,   158,     8,   339,   338,   165,   153,
      72,   120,   335,   335,   335,    27,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   103,   200,
      72,    72,   334,   248,   383,   373,   372,    14,   158,   158,
     156,    62,   125,   284,   285,   286,   350,   153,    32,   151,
     292,   346,   165,   228,   155,     8,   257,   248,   153,     8,
     216,   301,   294,   352,   353,   354,   355,   365,   341,   344,
     327,   244,    67,    68,   246,   154,    84,   154,   346,   152,
     126,   229,   229,    14,   176,    93,   154,   341,    27,   154,
     240,   156,   334,   334,   153,   335,    27,   152,   199,   153,
     371,   341,   156,   365,   366,   350,    62,   287,   154,   344,
     341,   257,   322,   100,   106,   109,   110,   111,   112,   113,
     114,   115,   156,   258,   261,   274,   275,   276,   277,   279,
     153,   106,   310,   250,   151,   217,   341,   331,    62,    62,
     252,   349,   158,   156,   125,   328,    67,    68,   247,   342,
     179,   154,   190,   231,   230,   153,   153,   334,    90,   154,
     240,   239,   126,   335,   201,   104,   205,   310,   153,   158,
     351,   365,   284,   156,    72,   262,   322,   259,   309,   277,
       8,   154,   155,   152,   155,    74,   365,   365,   350,   366,
     342,    27,    69,   243,   281,   371,   196,   194,   154,   238,
     176,   334,   322,   206,   155,   355,   158,    14,     8,   154,
     155,   263,    74,   278,   216,    72,   176,    32,    74,   311,
     176,    14,   158,   158,    27,   176,   154,   179,   153,   153,
      27,   179,   233,   233,   176,   202,   155,   176,   334,   322,
      72,   264,   265,   266,   267,   269,   270,   271,   322,    14,
       8,   154,    72,    14,   156,    74,     8,   153,   156,   334,
     245,   191,   176,    74,   176,   156,   156,   266,   154,    91,
     107,   154,   146,   334,    74,   260,   334,    32,    74,   176,
      27,   179,   232,    88,   153,   156,   272,   277,   268,   322,
      72,    14,   152,    74,   176,   154,   203,    72,     8,   334,
     248,    86,   155,   322,   153,   154,   176,   154,   155,   273,
     156,   176,   204,   156,   103,   207,   208,   209,   152,   209,
     322,   210,    74,   153,   211,   155,   176,   156
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

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 288:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 289:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 290:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 291:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 292:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 293:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 294:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 295:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 296:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 297:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 298:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 299:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 300:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 301:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 302:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 303:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 304:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 305:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 306:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 307:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 308:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 309:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 310:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 311:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 312:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 313:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 314:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
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

    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 380:

    { (yyvsp[(1) - (3)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (3)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (3)]), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 381:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 382:

    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 383:

    { zend_do_end_function_call(&(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 384:

    { (yyval).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 385:

    { zend_do_end_function_call((yyvsp[(4) - (5)]).u.op.opline_num?NULL:&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), (yyvsp[(4) - (5)]).u.op.opline_num, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 386:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 387:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 388:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 389:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 390:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 391:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 392:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 393:

    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
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

    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 433:

    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 434:

    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 435:

    { (yyval).u.ast = zend_ast_create_constant(&(yyvsp[(1) - (1)]).u.constant); }
    break;

  case 436:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 437:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
    break;

  case 438:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); (yyval).u.ast = zend_ast_create_constant(&(yyval).u.constant); }
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

    { (yyval).u.ast = zend_ast_create_binary(ZEND_ADD, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 443:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_SUB, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 444:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_MUL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 445:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_DIV, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 446:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_MOD, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 447:

    { (yyval).u.ast = zend_ast_create_unary(ZEND_BOOL_NOT, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 448:

    { (yyval).u.ast = zend_ast_create_unary(ZEND_BW_NOT, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 449:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 450:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 451:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BW_XOR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 452:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_SL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 453:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_SR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 454:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_CONCAT, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 455:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_XOR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 456:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 457:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 458:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_AND, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 459:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_BOOL_OR, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 460:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_IDENTICAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 461:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_NOT_IDENTICAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 462:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 463:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_NOT_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 464:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 465:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER, (yyvsp[(3) - (3)]).u.ast, (yyvsp[(1) - (3)]).u.ast); }
    break;

  case 466:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(1) - (3)]).u.ast, (yyvsp[(3) - (3)]).u.ast); }
    break;

  case 467:

    { (yyval).u.ast = zend_ast_create_binary(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[(3) - (3)]).u.ast, (yyvsp[(1) - (3)]).u.ast); }
    break;

  case 468:

    { (yyval).u.ast = zend_ast_create_ternary(ZEND_SELECT, (yyvsp[(1) - (4)]).u.ast, NULL, (yyvsp[(4) - (4)]).u.ast); }
    break;

  case 469:

    { (yyval).u.ast = zend_ast_create_ternary(ZEND_SELECT, (yyvsp[(1) - (5)]).u.ast, (yyvsp[(3) - (5)]).u.ast, (yyvsp[(5) - (5)]).u.ast); }
    break;

  case 470:

    { (yyval).u.ast = zend_ast_create_unary(ZEND_UNARY_PLUS, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 471:

    { (yyval).u.ast = zend_ast_create_unary(ZEND_UNARY_MINUS, (yyvsp[(2) - (2)]).u.ast); }
    break;

  case 472:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 473:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 474:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 475:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 476:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 477:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 478:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 479:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 480:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 481:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 482:

    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 483:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 484:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 487:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 488:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 489:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 490:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 491:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 493:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 494:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 495:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 496:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 497:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 498:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 499:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 500:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 501:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 502:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 503:

    { (yyval).EA = 0; }
    break;

  case 504:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 505:

    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 506:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 507:

    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 508:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_begin_method_call(&(yyval) TSRMLS_CC); }
    break;

  case 509:

    { zend_do_end_function_call(&(yyvsp[(1) - (2)]), &(yyval), &(yyvsp[(2) - (2)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 510:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 511:

    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 512:

    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 513:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 514:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 515:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 516:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 517:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 518:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 519:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 520:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 521:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 522:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 523:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 524:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 525:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 526:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 527:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 528:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 529:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 530:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 531:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 532:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 533:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 534:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 535:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 536:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 537:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 538:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 539:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 540:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 541:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 542:

    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 543:

    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 546:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 547:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 548:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 549:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 550:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 551:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 552:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 553:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 554:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 555:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 556:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 557:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 558:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 559:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 560:

    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 561:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 562:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 563:

    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 564:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 565:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 566:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 567:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 568:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 569:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 570:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 571:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 572:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 573:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 574:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 575:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 576:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 577:

    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 578:

    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 579:

    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 580:

    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 581:

    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 582:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 583:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 584:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 585:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 586:

    { zend_error_noreturn(E_COMPILE_ERROR, "Cannot use isset() on the result of an expression (you can use \"null !== expression\" instead)"); }
    break;

  case 587:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 588:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 589:

    { zend_do_resolve_class_name(&(yyval), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 590:

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


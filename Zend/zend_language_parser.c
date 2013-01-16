/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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
   | Copyright (c) 1998-2013 Zend Technologies Ltd. (http://www.zend.com) |
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
     T_NS_SEPARATOR = 386
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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  160
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  541
/* YYNRULES -- Number of states.  */
#define YYNSTATES  998

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   386

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,   159,     2,   156,    48,    32,     2,
     151,   152,    46,    43,     8,    44,    45,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,   153,
      37,    14,    38,    26,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,   157,    31,     2,   158,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   154,    30,   155,    51,     2,     2,     2,
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
     144,   145,   146,   147,   148,   149,   150
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    54,
      58,    60,    62,    66,    69,    74,    80,    85,    86,    90,
      91,    93,    95,    97,   102,   104,   107,   111,   112,   113,
     121,   122,   123,   134,   135,   136,   142,   143,   144,   152,
     153,   154,   155,   168,   169,   174,   177,   181,   184,   188,
     191,   195,   199,   202,   206,   210,   214,   216,   219,   225,
     226,   227,   238,   239,   240,   251,   252,   259,   261,   262,
     263,   272,   276,   280,   281,   282,   283,   284,   285,   299,
     300,   301,   307,   309,   310,   312,   315,   316,   317,   328,
     330,   334,   336,   338,   340,   341,   343,   344,   355,   356,
     365,   366,   374,   376,   379,   381,   384,   385,   388,   390,
     391,   394,   395,   398,   400,   404,   405,   408,   410,   413,
     414,   420,   422,   427,   429,   434,   436,   441,   445,   451,
     455,   460,   465,   471,   472,   473,   480,   481,   487,   489,
     491,   493,   498,   499,   500,   506,   507,   508,   515,   516,
     519,   520,   524,   526,   527,   530,   534,   540,   545,   550,
     556,   564,   571,   572,   574,   576,   578,   581,   585,   589,
     591,   593,   596,   600,   604,   609,   613,   615,   617,   620,
     625,   629,   635,   637,   641,   644,   645,   646,   651,   654,
     656,   657,   667,   671,   673,   677,   679,   683,   684,   686,
     688,   691,   694,   697,   701,   703,   707,   709,   711,   715,
     720,   724,   725,   727,   729,   733,   735,   737,   738,   740,
     742,   745,   747,   749,   751,   753,   755,   757,   761,   767,
     769,   773,   779,   784,   788,   790,   791,   793,   794,   799,
     801,   804,   806,   811,   815,   816,   820,   822,   824,   825,
     826,   829,   830,   835,   836,   844,   848,   853,   854,   862,
     865,   869,   873,   877,   881,   885,   889,   893,   897,   901,
     905,   909,   912,   915,   918,   921,   922,   927,   928,   933,
     934,   939,   940,   945,   949,   953,   957,   961,   965,   969,
     973,   977,   981,   985,   989,   993,   996,   999,  1002,  1005,
    1009,  1013,  1017,  1021,  1025,  1029,  1033,  1037,  1041,  1043,
    1045,  1046,  1052,  1053,  1054,  1062,  1063,  1069,  1071,  1074,
    1077,  1080,  1083,  1086,  1089,  1092,  1095,  1096,  1100,  1102,
    1104,  1106,  1110,  1113,  1115,  1116,  1127,  1128,  1140,  1143,
    1146,  1151,  1156,  1161,  1166,  1171,  1176,  1180,  1182,  1183,
    1188,  1192,  1197,  1199,  1202,  1203,  1207,  1208,  1214,  1215,
    1220,  1221,  1227,  1228,  1234,  1235,  1241,  1242,  1248,  1249,
    1253,  1255,  1257,  1261,  1264,  1266,  1270,  1273,  1275,  1277,
    1278,  1279,  1286,  1288,  1291,  1292,  1295,  1296,  1299,  1301,
    1302,  1304,  1306,  1307,  1309,  1311,  1313,  1315,  1317,  1319,
    1321,  1323,  1325,  1327,  1329,  1333,  1336,  1338,  1340,  1344,
    1347,  1350,  1353,  1358,  1362,  1364,  1366,  1370,  1372,  1374,
    1376,  1380,  1383,  1385,  1389,  1393,  1395,  1396,  1399,  1400,
    1402,  1408,  1412,  1416,  1418,  1420,  1422,  1426,  1430,  1432,
    1434,  1436,  1437,  1438,  1446,  1448,  1451,  1452,  1453,  1458,
    1463,  1468,  1469,  1472,  1474,  1476,  1477,  1479,  1482,  1486,
    1490,  1492,  1497,  1498,  1504,  1506,  1508,  1510,  1512,  1515,
    1517,  1522,  1527,  1529,  1531,  1536,  1537,  1539,  1541,  1542,
    1545,  1550,  1555,  1557,  1559,  1563,  1565,  1568,  1572,  1574,
    1576,  1577,  1583,  1584,  1585,  1588,  1594,  1598,  1602,  1604,
    1611,  1616,  1621,  1624,  1627,  1630,  1632,  1635,  1637,  1638,
    1644,  1648,  1652,  1659,  1663,  1665,  1667,  1669,  1674,  1679,
    1684,  1687,  1690,  1695,  1698,  1701,  1703,  1704,  1709,  1711,
    1713,  1717
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     161,     0,    -1,   162,    -1,    -1,   162,   163,   165,    -1,
      -1,    72,    -1,   164,   150,    72,    -1,   174,    -1,   209,
      -1,   210,    -1,   119,   151,   152,   153,    -1,   147,   164,
     153,    -1,    -1,   147,   164,   154,   166,   162,   155,    -1,
      -1,   147,   154,   167,   162,   155,    -1,   106,   168,   153,
      -1,   170,   153,    -1,   168,     8,   169,    -1,   169,    -1,
     164,    -1,   164,    91,    72,    -1,   150,   164,    -1,   150,
     164,    91,    72,    -1,   170,     8,    72,    14,   326,    -1,
     100,    72,    14,   326,    -1,    -1,   171,   172,   173,    -1,
      -1,   174,    -1,   209,    -1,   210,    -1,   119,   151,   152,
     153,    -1,   175,    -1,    72,    27,    -1,   154,   171,   155,
      -1,    -1,    -1,    66,   333,   176,   174,   177,   236,   240,
      -1,    -1,    -1,    66,   333,    27,   178,   171,   179,   238,
     241,    69,   153,    -1,    -1,    -1,    83,   180,   333,   181,
     235,    -1,    -1,    -1,    82,   182,   174,    83,   183,   333,
     153,    -1,    -1,    -1,    -1,    85,   151,   274,   153,   184,
     274,   153,   185,   274,   152,   186,   226,    -1,    -1,    92,
     333,   187,   230,    -1,    96,   153,    -1,    96,   332,   153,
      -1,    97,   153,    -1,    97,   332,   153,    -1,   101,   153,
      -1,   101,   285,   153,    -1,   101,   337,   153,    -1,   299,
     153,    -1,   108,   247,   153,    -1,   114,   249,   153,    -1,
      81,   273,   153,    -1,    76,    -1,   332,   153,    -1,   116,
     151,   207,   152,   153,    -1,    -1,    -1,    87,   151,   337,
      91,   188,   224,   223,   152,   189,   227,    -1,    -1,    -1,
      87,   151,   285,    91,   190,   224,   223,   152,   191,   227,
      -1,    -1,    89,   192,   151,   229,   152,   228,    -1,   153,
      -1,    -1,    -1,   102,   193,   154,   171,   155,   195,   194,
     200,    -1,   105,   332,   153,    -1,    98,    72,   153,    -1,
      -1,    -1,    -1,    -1,    -1,   103,   151,   196,   315,   197,
      74,   152,   198,   154,   171,   155,   199,   202,    -1,    -1,
      -1,   104,   201,   154,   171,   155,    -1,   203,    -1,    -1,
     204,    -1,   203,   204,    -1,    -1,    -1,   103,   151,   315,
     205,    74,   152,   206,   154,   171,   155,    -1,   208,    -1,
     207,     8,   208,    -1,   337,    -1,   212,    -1,   214,    -1,
      -1,    32,    -1,    -1,   302,   211,    72,   213,   151,   242,
     152,   154,   171,   155,    -1,    -1,   217,    72,   218,   215,
     221,   154,   250,   155,    -1,    -1,   219,    72,   216,   220,
     154,   250,   155,    -1,   120,    -1,   113,   120,    -1,   121,
      -1,   112,   120,    -1,    -1,   123,   315,    -1,   122,    -1,
      -1,   123,   222,    -1,    -1,   124,   222,    -1,   315,    -1,
     222,     8,   315,    -1,    -1,   126,   224,    -1,   337,    -1,
      32,   337,    -1,    -1,   127,   151,   225,   362,   152,    -1,
     174,    -1,    27,   171,    86,   153,    -1,   174,    -1,    27,
     171,    88,   153,    -1,   174,    -1,    27,   171,    90,   153,
      -1,    72,    14,   326,    -1,   229,     8,    72,    14,   326,
      -1,   154,   231,   155,    -1,   154,   153,   231,   155,    -1,
      27,   231,    93,   153,    -1,    27,   153,   231,    93,   153,
      -1,    -1,    -1,   231,    94,   332,   234,   232,   171,    -1,
      -1,   231,    95,   234,   233,   171,    -1,    27,    -1,   153,
      -1,   174,    -1,    27,   171,    84,   153,    -1,    -1,    -1,
     236,    67,   333,   237,   174,    -1,    -1,    -1,   238,    67,
     333,    27,   239,   171,    -1,    -1,    68,   174,    -1,    -1,
      68,    27,   171,    -1,   243,    -1,    -1,   244,    74,    -1,
     244,    32,    74,    -1,   244,    32,    74,    14,   326,    -1,
     244,    74,    14,   326,    -1,   243,     8,   244,    74,    -1,
     243,     8,   244,    32,    74,    -1,   243,     8,   244,    32,
      74,    14,   326,    -1,   243,     8,   244,    74,    14,   326,
      -1,    -1,   128,    -1,   129,    -1,   315,    -1,   151,   152,
      -1,   151,   246,   152,    -1,   151,   299,   152,    -1,   285,
      -1,   337,    -1,    32,   335,    -1,   246,     8,   285,    -1,
     246,     8,   337,    -1,   246,     8,    32,   335,    -1,   247,
       8,   248,    -1,   248,    -1,    74,    -1,   156,   334,    -1,
     156,   154,   332,   155,    -1,   249,     8,    74,    -1,   249,
       8,    74,    14,   326,    -1,    74,    -1,    74,    14,   326,
      -1,   250,   251,    -1,    -1,    -1,   267,   252,   271,   153,
      -1,   272,   153,    -1,   254,    -1,    -1,   268,   302,   211,
      72,   253,   151,   242,   152,   266,    -1,   106,   255,   256,
      -1,   315,    -1,   255,     8,   315,    -1,   153,    -1,   154,
     257,   155,    -1,    -1,   258,    -1,   259,    -1,   258,   259,
      -1,   260,   153,    -1,   264,   153,    -1,   263,   107,   261,
      -1,   315,    -1,   261,     8,   315,    -1,    72,    -1,   263,
      -1,   315,   146,    72,    -1,   262,    91,   265,    72,    -1,
     262,    91,   270,    -1,    -1,   270,    -1,   153,    -1,   154,
     171,   155,    -1,   269,    -1,   115,    -1,    -1,   269,    -1,
     270,    -1,   269,   270,    -1,   109,    -1,   110,    -1,   111,
      -1,   114,    -1,   113,    -1,   112,    -1,   271,     8,    74,
      -1,   271,     8,    74,    14,   326,    -1,    74,    -1,    74,
      14,   326,    -1,   272,     8,    72,    14,   326,    -1,   100,
      72,    14,   326,    -1,   273,     8,   332,    -1,   332,    -1,
      -1,   275,    -1,    -1,   275,     8,   276,   332,    -1,   332,
      -1,   277,   341,    -1,   341,    -1,   278,    62,   356,   157,
      -1,    62,   356,   157,    -1,    -1,   278,   280,   277,    -1,
     278,    -1,   277,    -1,    -1,    -1,   282,   279,    -1,    -1,
      64,   316,   284,   324,    -1,    -1,   127,   151,   286,   362,
     152,    14,   332,    -1,   337,    14,   332,    -1,   337,    14,
      32,   337,    -1,    -1,   337,    14,    32,    64,   316,   287,
     324,    -1,    63,   332,    -1,   337,    25,   332,    -1,   337,
      24,   332,    -1,   337,    23,   332,    -1,   337,    22,   332,
      -1,   337,    21,   332,    -1,   337,    20,   332,    -1,   337,
      19,   332,    -1,   337,    18,   332,    -1,   337,    17,   332,
      -1,   337,    16,   332,    -1,   337,    15,   332,    -1,   336,
      61,    -1,    61,   336,    -1,   336,    60,    -1,    60,   336,
      -1,    -1,   332,    28,   288,   332,    -1,    -1,   332,    29,
     289,   332,    -1,    -1,   332,     9,   290,   332,    -1,    -1,
     332,    11,   291,   332,    -1,   332,    10,   332,    -1,   332,
      30,   332,    -1,   332,    32,   332,    -1,   332,    31,   332,
      -1,   332,    45,   332,    -1,   332,    43,   332,    -1,   332,
      44,   332,    -1,   332,    46,   332,    -1,   332,    47,   332,
      -1,   332,    48,   332,    -1,   332,    42,   332,    -1,   332,
      41,   332,    -1,    43,   332,    -1,    44,   332,    -1,    49,
     332,    -1,    51,   332,    -1,   332,    34,   332,    -1,   332,
      33,   332,    -1,   332,    36,   332,    -1,   332,    35,   332,
      -1,   332,    37,   332,    -1,   332,    40,   332,    -1,   332,
      38,   332,    -1,   332,    39,   332,    -1,   332,    50,   316,
      -1,   333,    -1,   283,    -1,    -1,   151,   283,   152,   292,
     281,    -1,    -1,    -1,   332,    26,   293,   332,    27,   294,
     332,    -1,    -1,   332,    26,    27,   295,   332,    -1,   371,
      -1,    59,   332,    -1,    58,   332,    -1,    57,   332,    -1,
      56,   332,    -1,    55,   332,    -1,    54,   332,    -1,    53,
     332,    -1,    65,   322,    -1,    -1,    52,   296,   332,    -1,
     328,    -1,   300,    -1,   301,    -1,   158,   323,   158,    -1,
      12,   332,    -1,    13,    -1,    -1,   302,   211,   297,   151,
     242,   152,   303,   154,   171,   155,    -1,    -1,   114,   302,
     211,   298,   151,   242,   152,   303,   154,   171,   155,    -1,
      13,   285,    -1,    13,   337,    -1,    13,   332,   126,   285,
      -1,    13,   332,   126,   337,    -1,   301,    62,   356,   157,
      -1,   300,    62,   356,   157,    -1,    80,    62,   356,   157,
      -1,   128,   151,   365,   152,    -1,    62,   365,   157,    -1,
      99,    -1,    -1,   106,   151,   304,   152,    -1,   304,     8,
      74,    -1,   304,     8,    32,    74,    -1,    74,    -1,    32,
      74,    -1,    -1,   164,   306,   245,    -1,    -1,   147,   150,
     164,   307,   245,    -1,    -1,   150,   164,   308,   245,    -1,
      -1,   314,   146,   360,   309,   245,    -1,    -1,   314,   146,
     347,   310,   245,    -1,    -1,   349,   146,   360,   311,   245,
      -1,    -1,   349,   146,   347,   312,   245,    -1,    -1,   347,
     313,   245,    -1,   114,    -1,   164,    -1,   147,   150,   164,
      -1,   150,   164,    -1,   164,    -1,   147,   150,   164,    -1,
     150,   164,    -1,   314,    -1,   317,    -1,    -1,    -1,   353,
     125,   318,   357,   319,   320,    -1,   353,    -1,   320,   321,
      -1,    -1,   125,   357,    -1,    -1,   151,   152,    -1,   333,
      -1,    -1,    79,    -1,   367,    -1,    -1,   245,    -1,    70,
      -1,    71,    -1,    80,    -1,   134,    -1,   135,    -1,   149,
      -1,   131,    -1,   132,    -1,   133,    -1,   148,    -1,   142,
      79,   143,    -1,   142,   143,    -1,   325,    -1,   164,    -1,
     147,   150,   164,    -1,   150,   164,    -1,    43,   326,    -1,
      44,   326,    -1,   128,   151,   329,   152,    -1,    62,   329,
     157,    -1,   327,    -1,   130,    -1,   314,   146,    72,    -1,
      73,    -1,   375,    -1,   164,    -1,   147,   150,   164,    -1,
     150,   164,    -1,   325,    -1,   159,   367,   159,    -1,   142,
     367,   143,    -1,   130,    -1,    -1,   331,   330,    -1,    -1,
       8,    -1,   331,     8,   326,   126,   326,    -1,   331,     8,
     326,    -1,   326,   126,   326,    -1,   326,    -1,   334,    -1,
     285,    -1,   151,   332,   152,    -1,   151,   299,   152,    -1,
     337,    -1,   337,    -1,   337,    -1,    -1,    -1,   352,   125,
     338,   357,   339,   346,   340,    -1,   352,    -1,   340,   341,
      -1,    -1,    -1,   125,   357,   342,   346,    -1,   343,    62,
     356,   157,    -1,   344,    62,   356,   157,    -1,    -1,   345,
     245,    -1,   344,    -1,   343,    -1,    -1,   354,    -1,   361,
     354,    -1,   314,   146,   347,    -1,   349,   146,   347,    -1,
     354,    -1,   350,    62,   356,   157,    -1,    -1,   305,   351,
      62,   356,   157,    -1,   353,    -1,   350,    -1,   305,    -1,
     354,    -1,   361,   354,    -1,   348,    -1,   354,    62,   356,
     157,    -1,   354,   154,   332,   155,    -1,   355,    -1,    74,
      -1,   156,   154,   332,   155,    -1,    -1,   332,    -1,   359,
      -1,    -1,   347,   358,    -1,   359,    62,   356,   157,    -1,
     359,   154,   332,   155,    -1,   360,    -1,    72,    -1,   154,
     332,   155,    -1,   156,    -1,   361,   156,    -1,   362,     8,
     363,    -1,   363,    -1,   337,    -1,    -1,   127,   151,   364,
     362,   152,    -1,    -1,    -1,   366,   330,    -1,   366,     8,
     332,   126,   332,    -1,   366,     8,   332,    -1,   332,   126,
     332,    -1,   332,    -1,   366,     8,   332,   126,    32,   335,
      -1,   366,     8,    32,   335,    -1,   332,   126,    32,   335,
      -1,    32,   335,    -1,   367,   368,    -1,   367,    79,    -1,
     368,    -1,    79,   368,    -1,    74,    -1,    -1,    74,    62,
     369,   370,   157,    -1,    74,   125,    72,    -1,   144,   332,
     155,    -1,   144,    73,    62,   332,   157,   155,    -1,   145,
     337,   155,    -1,    72,    -1,    75,    -1,    74,    -1,   117,
     151,   372,   152,    -1,   118,   151,   337,   152,    -1,   118,
     151,   285,   152,    -1,     7,   332,    -1,     6,   332,    -1,
       5,   151,   332,   152,    -1,     4,   332,    -1,     3,   332,
      -1,   374,    -1,    -1,   372,     8,   373,   374,    -1,   337,
      -1,   285,    -1,   314,   146,    72,    -1,   349,   146,    72,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   217,   217,   221,   221,   222,   226,   227,   231,   232,
     233,   234,   235,   236,   236,   238,   238,   240,   241,   245,
     246,   250,   251,   252,   253,   257,   258,   262,   262,   263,
     268,   269,   270,   271,   276,   277,   281,   282,   282,   282,
     283,   283,   283,   284,   284,   284,   285,   285,   285,   289,
     291,   293,   286,   295,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   311,
     312,   310,   315,   316,   314,   318,   318,   319,   320,   321,
     320,   323,   324,   328,   329,   330,   331,   332,   329,   336,
     337,   337,   341,   342,   346,   347,   351,   351,   351,   355,
     356,   360,   364,   368,   372,   373,   378,   378,   385,   384,
     391,   390,   400,   401,   402,   403,   407,   408,   412,   415,
     417,   420,   422,   426,   427,   431,   432,   436,   437,   438,
     438,   442,   443,   448,   449,   454,   455,   460,   461,   466,
     467,   468,   469,   474,   475,   475,   476,   476,   481,   482,
     487,   488,   493,   495,   495,   499,   501,   501,   505,   507,
     511,   513,   518,   519,   524,   525,   526,   527,   528,   529,
     530,   531,   536,   537,   538,   539,   544,   545,   546,   551,
     552,   553,   554,   555,   556,   560,   561,   566,   567,   568,
     573,   574,   575,   576,   582,   583,   588,   588,   589,   590,
     591,   591,   597,   601,   602,   606,   607,   610,   612,   616,
     617,   621,   622,   626,   630,   631,   635,   636,   640,   644,
     645,   649,   650,   654,   655,   659,   660,   664,   665,   669,
     670,   674,   675,   676,   677,   678,   679,   683,   684,   685,
     686,   690,   691,   695,   696,   701,   702,   706,   706,   707,
     711,   712,   716,   717,   721,   721,   722,   723,   727,   728,
     728,   733,   733,   737,   737,   738,   739,   740,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,   750,   751,
     752,   753,   754,   755,   756,   757,   757,   758,   758,   759,
     759,   760,   760,   761,   762,   763,   764,   765,   766,   767,
     768,   769,   770,   771,   772,   773,   774,   775,   776,   777,
     778,   779,   780,   781,   782,   783,   784,   785,   786,   787,
     788,   788,   789,   790,   789,   792,   792,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   803,   804,   805,
     806,   807,   808,   809,   810,   810,   813,   813,   819,   820,
     821,   822,   826,   827,   828,   831,   832,   835,   838,   840,
     844,   845,   846,   847,   851,   851,   853,   853,   855,   855,
     857,   857,   859,   859,   861,   861,   863,   863,   865,   865,
     870,   871,   872,   873,   877,   878,   879,   885,   886,   891,
     892,   891,   894,   899,   900,   905,   909,   910,   911,   915,
     916,   917,   922,   923,   928,   929,   930,   931,   932,   933,
     934,   935,   936,   937,   938,   939,   944,   945,   946,   947,
     948,   949,   950,   951,   952,   953,   957,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   974,   975,   978,   980,
     984,   985,   986,   987,   991,   992,   996,   997,  1002,  1007,
    1012,  1017,  1018,  1017,  1020,  1024,  1025,  1030,  1030,  1034,
    1035,  1039,  1039,  1044,  1045,  1046,  1050,  1051,  1055,  1056,
    1061,  1065,  1066,  1066,  1071,  1072,  1073,  1078,  1079,  1080,
    1084,  1085,  1086,  1091,  1092,  1096,  1097,  1102,  1103,  1103,
    1107,  1108,  1109,  1113,  1114,  1118,  1119,  1123,  1124,  1129,
    1130,  1130,  1131,  1136,  1137,  1141,  1142,  1143,  1144,  1145,
    1146,  1147,  1148,  1152,  1153,  1154,  1155,  1161,  1162,  1162,
    1163,  1164,  1165,  1166,  1171,  1172,  1173,  1178,  1179,  1180,
    1181,  1182,  1183,  1184,  1185,  1189,  1190,  1190,  1194,  1195,
    1199,  1200
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
  "\"\\\\ (T_NS_SEPARATOR)\"", "'('", "')'", "';'", "'{'", "'}'", "'$'",
  "']'", "'`'", "'\"'", "$accept", "start", "top_statement_list", "$@1",
  "namespace_name", "top_statement", "$@2", "$@3", "use_declarations",
  "use_declaration", "constant_declaration", "inner_statement_list", "$@4",
  "inner_statement", "statement", "unticked_statement", "$@5", "$@6",
  "$@7", "$@8", "$@9", "@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23",
  "catch_statement", "$@24", "$@25", "$@26", "$@27", "finally_statement",
  "$@28", "additional_catches", "non_empty_additional_catches",
  "additional_catch", "@29", "$@30", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "$@31",
  "unticked_class_declaration_statement", "$@32", "$@33",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "$@34", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@35", "$@36", "case_separator",
  "while_statement", "elseif_list", "$@37", "new_elseif_list", "$@38",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
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
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "parenthesis_expr", "r_variable", "w_variable", "rw_variable",
  "variable", "$@68", "$@69", "variable_properties", "variable_property",
  "$@70", "array_method_dereference", "method", "@71", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "$@72",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@73", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@74", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@75",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@76", "isset_variable", "class_constant", 0
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
     386,    40,    41,    59,   123,   125,    36,    93,    96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   160,   161,   163,   162,   162,   164,   164,   165,   165,
     165,   165,   165,   166,   165,   167,   165,   165,   165,   168,
     168,   169,   169,   169,   169,   170,   170,   172,   171,   171,
     173,   173,   173,   173,   174,   174,   175,   176,   177,   175,
     178,   179,   175,   180,   181,   175,   182,   183,   175,   184,
     185,   186,   175,   187,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   188,
     189,   175,   190,   191,   175,   192,   175,   175,   193,   194,
     175,   175,   175,   195,   196,   197,   198,   199,   195,   200,
     201,   200,   202,   202,   203,   203,   205,   206,   204,   207,
     207,   208,   209,   210,   211,   211,   213,   212,   215,   214,
     216,   214,   217,   217,   217,   217,   218,   218,   219,   220,
     220,   221,   221,   222,   222,   223,   223,   224,   224,   225,
     224,   226,   226,   227,   227,   228,   228,   229,   229,   230,
     230,   230,   230,   231,   232,   231,   233,   231,   234,   234,
     235,   235,   236,   237,   236,   238,   239,   238,   240,   240,
     241,   241,   242,   242,   243,   243,   243,   243,   243,   243,
     243,   243,   244,   244,   244,   244,   245,   245,   245,   246,
     246,   246,   246,   246,   246,   247,   247,   248,   248,   248,
     249,   249,   249,   249,   250,   250,   252,   251,   251,   251,
     253,   251,   254,   255,   255,   256,   256,   257,   257,   258,
     258,   259,   259,   260,   261,   261,   262,   262,   263,   264,
     264,   265,   265,   266,   266,   267,   267,   268,   268,   269,
     269,   270,   270,   270,   270,   270,   270,   271,   271,   271,
     271,   272,   272,   273,   273,   274,   274,   276,   275,   275,
     277,   277,   278,   278,   280,   279,   279,   279,   281,   282,
     281,   284,   283,   286,   285,   285,   285,   287,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   288,   285,   289,   285,   290,
     285,   291,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     292,   285,   293,   294,   285,   295,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   296,   285,   285,   285,
     285,   285,   285,   285,   297,   285,   298,   285,   299,   299,
     299,   299,   300,   300,   300,   301,   301,   302,   303,   303,
     304,   304,   304,   304,   306,   305,   307,   305,   308,   305,
     309,   305,   310,   305,   311,   305,   312,   305,   313,   305,
     314,   314,   314,   314,   315,   315,   315,   316,   316,   318,
     319,   317,   317,   320,   320,   321,   322,   322,   322,   323,
     323,   323,   324,   324,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   327,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   329,   329,   330,   330,
     331,   331,   331,   331,   332,   332,   333,   333,   334,   335,
     336,   338,   339,   337,   337,   340,   340,   342,   341,   343,
     343,   345,   344,   346,   346,   346,   347,   347,   348,   348,
     349,   350,   351,   350,   352,   352,   352,   353,   353,   353,
     354,   354,   354,   355,   355,   356,   356,   357,   358,   357,
     359,   359,   359,   360,   360,   361,   361,   362,   362,   363,
     364,   363,   363,   365,   365,   366,   366,   366,   366,   366,
     366,   366,   366,   367,   367,   367,   367,   368,   369,   368,
     368,   368,   368,   368,   370,   370,   370,   371,   371,   371,
     371,   371,   371,   371,   371,   372,   373,   372,   374,   374,
     375,   375
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     2,     3,
       1,     1,     3,     2,     4,     5,     4,     0,     3,     0,
       1,     1,     1,     4,     1,     2,     3,     0,     0,     7,
       0,     0,    10,     0,     0,     5,     0,     0,     7,     0,
       0,     0,    12,     0,     4,     2,     3,     2,     3,     2,
       3,     3,     2,     3,     3,     3,     1,     2,     5,     0,
       0,    10,     0,     0,    10,     0,     6,     1,     0,     0,
       8,     3,     3,     0,     0,     0,     0,     0,    13,     0,
       0,     5,     1,     0,     1,     2,     0,     0,    10,     1,
       3,     1,     1,     1,     0,     1,     0,    10,     0,     8,
       0,     7,     1,     2,     1,     2,     0,     2,     1,     0,
       2,     0,     2,     1,     3,     0,     2,     1,     2,     0,
       5,     1,     4,     1,     4,     1,     4,     3,     5,     3,
       4,     4,     5,     0,     0,     6,     0,     5,     1,     1,
       1,     4,     0,     0,     5,     0,     0,     6,     0,     2,
       0,     3,     1,     0,     2,     3,     5,     4,     4,     5,
       7,     6,     0,     1,     1,     1,     2,     3,     3,     1,
       1,     2,     3,     3,     4,     3,     1,     1,     2,     4,
       3,     5,     1,     3,     2,     0,     0,     4,     2,     1,
       0,     9,     3,     1,     3,     1,     3,     0,     1,     1,
       2,     2,     2,     3,     1,     3,     1,     1,     3,     4,
       3,     0,     1,     1,     3,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     5,     1,
       3,     5,     4,     3,     1,     0,     1,     0,     4,     1,
       2,     1,     4,     3,     0,     3,     1,     1,     0,     0,
       2,     0,     4,     0,     7,     3,     4,     0,     7,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     0,     4,     0,     4,     0,
       4,     0,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       0,     5,     0,     0,     7,     0,     5,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     0,     3,     1,     1,
       1,     3,     2,     1,     0,    10,     0,    11,     2,     2,
       4,     4,     4,     4,     4,     4,     3,     1,     0,     4,
       3,     4,     1,     2,     0,     3,     0,     5,     0,     4,
       0,     5,     0,     5,     0,     5,     0,     5,     0,     3,
       1,     1,     3,     2,     1,     3,     2,     1,     1,     0,
       0,     6,     1,     2,     0,     2,     0,     2,     1,     0,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     1,     3,     2,
       2,     2,     4,     3,     1,     1,     3,     1,     1,     1,
       3,     2,     1,     3,     3,     1,     0,     2,     0,     1,
       5,     3,     3,     1,     1,     1,     3,     3,     1,     1,
       1,     0,     0,     7,     1,     2,     0,     0,     4,     4,
       4,     0,     2,     1,     1,     0,     1,     2,     3,     3,
       1,     4,     0,     5,     1,     1,     1,     1,     2,     1,
       4,     4,     1,     1,     4,     0,     1,     1,     0,     2,
       4,     4,     1,     1,     3,     1,     2,     3,     1,     1,
       0,     5,     0,     0,     2,     5,     3,     3,     1,     6,
       4,     4,     2,     2,     2,     1,     2,     1,     0,     5,
       3,     3,     6,     3,     1,     1,     1,     4,     4,     4,
       2,     2,     4,     2,     2,     1,     0,     4,     1,     1,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,   343,     0,     0,     0,     0,   336,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   503,     0,     0,   396,
       0,   404,   405,     6,   427,   483,    66,   406,     0,    46,
      43,     0,     0,    75,     0,     0,     0,     0,   357,     0,
       0,    78,     0,     0,     0,     0,     0,   380,     0,     0,
       0,     0,   112,   114,   118,     0,     0,   435,   410,   411,
     412,   407,   408,     0,     0,   413,   409,     0,     0,    77,
      29,   495,   399,     0,   429,     4,     0,     8,    34,     9,
      10,   102,   103,     0,     0,   319,   445,     0,   339,   340,
     104,   476,     0,   432,   338,     0,   318,   444,     0,   448,
     378,   479,     0,   475,   454,   474,   477,   482,     0,   327,
     428,   343,     6,   380,     0,   104,   534,   533,     0,   531,
     530,   342,   445,     0,   448,   305,   306,   307,   308,     0,
     334,   333,   332,   331,   330,   329,   328,   380,     0,     0,
     364,     0,   284,   450,     0,   282,     0,   508,     0,   438,
     269,     0,     0,   381,   387,   261,   388,     0,   392,   477,
       0,     0,   335,   398,     0,    37,    35,   485,     0,   244,
       0,     0,   245,     0,     0,    53,    55,     0,    57,     0,
       0,     0,    59,   445,     0,   448,     0,     0,     0,    21,
       0,    20,   187,     0,     0,   186,   115,   113,   192,     0,
     104,     0,     0,     0,     0,   263,   503,   517,     0,   415,
       0,     0,     0,   515,     0,    15,     0,   431,   319,     0,
       0,    27,     0,   400,     0,   401,     0,     0,     0,     0,
       0,    18,   116,   110,    62,   485,   485,   105,   344,     0,
       0,   289,     0,   291,   322,   285,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,   283,   281,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   485,   451,   485,     0,   496,   478,
     344,     0,     0,   337,     0,   368,     0,     0,   512,   449,
       0,   356,   439,   504,     0,   383,     0,   402,     0,   389,
     478,   397,    40,     0,   486,     0,     0,    65,     0,    44,
       0,   246,   249,   445,   448,     0,     0,    56,    58,    82,
       0,    60,    61,    29,    81,    23,     0,     0,    17,     0,
     188,   448,     0,    63,     0,     0,    64,   346,     0,    99,
     101,   445,   448,     0,   535,   445,   448,     0,   502,     0,
     518,     0,   414,   516,   427,     0,     0,   514,   434,   513,
     430,     5,    12,    13,     0,   320,   447,   446,    36,     0,
       0,   341,   433,     7,     0,   365,     0,     0,   108,   119,
       0,     0,   106,     0,   485,   540,     0,   468,   466,   370,
       0,     0,   293,     0,   325,     0,     0,     0,   294,   296,
     295,   310,   309,   312,   311,   313,   315,   316,   314,   304,
     303,   298,   299,   297,   300,   301,   302,   317,     0,   265,
     280,   279,   278,   277,   276,   275,   274,   273,   272,   271,
     270,   379,   541,   469,   374,     0,     0,     0,     0,   532,
     445,   448,   366,   493,     0,   507,     0,   506,   382,   468,
     403,   262,   469,     0,    29,    38,   354,   243,    47,     0,
      49,   247,    72,    69,     0,     0,   143,   143,    54,     0,
       0,   436,   406,     0,   425,     0,     0,     0,   417,     0,
     416,    26,   424,    27,     0,    22,    19,     0,   185,   193,
     190,     0,     0,     0,   536,   527,   529,   528,    11,     0,
     499,     0,   498,   355,     0,   520,     0,   521,   523,     0,
       3,     5,   369,   258,     0,    28,    30,    31,    32,   484,
       0,   176,     0,   445,     0,   448,     0,     0,     0,   384,
     117,   121,     0,     0,   353,   352,     0,   172,     0,     0,
       0,     0,   467,   290,   292,     0,     0,   286,   288,     0,
     266,     0,     0,   471,   488,   452,   487,   492,   480,   481,
     511,   510,     0,   390,    27,   152,     0,    29,   150,    45,
     245,     0,     0,     0,     0,     0,     0,   143,     0,   143,
       0,   420,   421,   443,     0,   438,   436,     0,     0,   419,
       0,    83,    24,   189,     0,   172,   100,    68,     0,   500,
     502,     0,   524,   526,   525,     0,     0,   367,    16,     3,
     321,     0,     0,   181,     0,   177,   178,    25,     0,   386,
       0,     0,   120,   123,   195,   172,   173,   174,     0,   162,
       0,   175,   473,   494,   373,   371,   326,   323,   267,   377,
     375,   489,   465,   485,     0,     0,   505,   394,   155,   158,
       0,    27,     0,   248,     0,     0,   125,   127,   125,   137,
       0,    29,   135,    76,     0,     0,     0,     0,     0,   139,
       0,   423,   439,   437,     0,   418,   426,     0,    79,   191,
       0,   537,   502,   497,     0,   519,     0,    14,   485,     0,
     257,   256,   260,   251,     0,     0,   445,   448,   385,   122,
     195,     0,   227,     0,   358,   172,     0,   164,     0,   402,
     464,   463,     0,   456,     0,     0,   509,   391,   160,     0,
       0,    39,    48,     0,    50,   128,   129,     0,     0,     0,
       0,    27,     0,   141,     0,   148,   149,   146,   140,   442,
     441,   422,    84,    89,   358,     0,   264,   522,     0,   457,
     250,   485,     0,    33,   184,   227,   124,     0,     0,   231,
     232,   233,   236,   235,   234,   226,   111,   194,   199,   196,
       0,   225,   229,     0,     0,     0,     0,     0,   165,     0,
     324,   268,   485,   485,   462,   453,   490,   491,     0,   393,
       0,     0,     0,   153,   159,   151,   245,   502,   126,    73,
      70,   138,     0,   142,   144,    29,     0,     0,    90,    80,
       0,   501,   253,   465,     0,   255,   109,     0,     0,   203,
       0,   104,   230,     0,   198,    29,     0,    29,     0,   168,
       0,   167,     0,     0,   455,   395,     0,    29,     0,     0,
       0,     0,     0,     0,   136,    29,    27,   440,    85,     0,
      29,   458,   252,     0,     0,   205,   207,   202,   239,     0,
       0,     0,    27,     0,   362,     0,    27,   169,     0,   166,
     459,   460,   156,    27,    42,   154,    51,   130,    29,   133,
      74,    71,    27,     0,    29,    27,   242,   204,     6,     0,
     208,   209,     0,     0,   217,     0,     0,     0,     0,   197,
     200,     0,   107,   363,     0,   359,   345,     0,   171,    29,
       0,    27,     0,    27,   347,   206,   210,   211,   221,     0,
     212,     0,   240,   237,     0,   241,     0,   360,   170,    27,
      29,   131,    52,     0,    86,    91,     0,   220,   213,   214,
     218,     0,   172,   361,    27,   134,     0,   219,     0,   238,
       0,     0,    29,   215,     0,   132,    27,   223,    29,   201,
      87,    27,    93,   224,     0,    88,    92,    94,     0,    95,
      96,     0,     0,    97,     0,    29,    27,    98
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    84,    85,   531,   381,   200,   201,
      86,   231,   389,   535,   899,    88,   323,   585,   474,   668,
     181,   479,   180,   586,   590,   816,   930,   336,   593,   863,
     592,   862,   184,   196,   763,   698,   827,   903,   966,   982,
     829,   869,   985,   986,   987,   991,   994,   358,   359,    89,
      90,   248,    91,   556,    92,   551,   399,    93,   398,    94,
     553,   641,   642,   748,   676,   817,   952,   900,   683,   485,
     488,   598,   865,   825,   757,   589,   669,   859,   738,   929,
     741,   812,   648,   649,   650,   470,   542,   204,   205,   209,
     722,   787,   840,   944,   788,   838,   877,   909,   910,   911,
     912,   958,   913,   914,   915,   956,   979,   789,   790,   791,
     792,   879,   793,   178,   330,   331,   591,   710,   711,   712,
     772,   630,   631,    95,   317,    96,   368,   729,   416,   417,
     411,   413,   533,   415,   728,   565,   139,   403,   511,    97,
      98,    99,   125,   796,   885,   101,   239,   529,   384,   561,
     560,   572,   571,   292,   102,   651,   165,   166,   473,   667,
     737,   809,   172,   234,   471,   103,   603,   502,   104,   604,
     313,   605,   105,   106,   107,   308,   108,   109,   456,   662,
     805,   713,   833,   730,   731,   732,   733,   110,   111,   112,
     113,   249,   114,   115,   116,   117,   325,   575,   661,   576,
     577,   118,   521,   522,   702,   158,   159,   222,   223,   524,
     625,   119,   363,   618,   364,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -769
static const yytype_int16 yypact[] =
{
    -769,   118,   121,  -769,  1586,  3871,  3871,   -25,  3871,  3871,
    3871,  3871,  3871,  3871,  3871,  3871,  -769,  3871,  3871,  3871,
    3871,  3871,  3871,  3871,   187,   187,  2541,  3871,   349,   -22,
     -20,  -769,  -769,   107,  -769,  -769,  -769,    74,  3871,  -769,
    -769,    47,    78,  -769,   -20,  2674,  2807,   163,  -769,   170,
    2940,  -769,  3871,   -47,   -26,    26,   111,    14,   109,   112,
     114,   116,  -769,  -769,  -769,   149,   164,  -769,  -769,  -769,
    -769,  -769,  -769,   374,   -27,  -769,  -769,   200,  4004,  -769,
    -769,   150,   194,   253,   278,  -769,    13,  -769,  -769,  -769,
    -769,  -769,  -769,   247,   275,  -769,  -769,   172,   288,   303,
     340,   315,   249,  -769,  -769,  4485,  -769,  -769,    29,  2292,
    -769,  -769,   255,   364,   307,  -769,    66,  -769,   -16,  -769,
    -769,  -769,  -769,   369,   285,   340,  4938,  4938,  3871,  4938,
    4938,   937,   -11,  4737,  1760,  -769,  -769,   353,  -769,  3871,
    -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,   299,   200,
     -49,   334,  -769,  -769,   338,  -769,   187,  4780,   344,   498,
    -769,   360,   200,   362,   377,  -769,  -769,   386,   390,   -35,
     -16,  3073,  -769,  -769,  4004,   503,  -769,  3871,    20,  4938,
    2275,   -20,  3871,  3871,   387,  -769,  -769,  4527,  -769,  4569,
     388,   526,  -769,   391,  4938,  1380,   392,  4611,   200,    -5,
      23,  -769,  -769,   246,    24,  -769,  -769,  -769,   535,    25,
     340,   187,  3871,  3871,   401,  -769,  2541,   100,   131,  -769,
    4137,   187,   413,  -769,   200,  -769,   306,   293,   402,   412,
    4653,   416,  3871,   144,   420,   359,   144,   158,   507,   429,
     509,  -769,   462,  -769,  -769,  3871,  3871,  -769,   514,   527,
     220,  -769,  3871,  -769,   565,  -769,  -769,  3871,  3871,  3871,
    3871,  3871,  3871,  3871,  3871,  3871,  3871,  3871,  3871,  3871,
    3871,  3871,  3871,  3871,  3871,  3871,   349,  -769,  -769,  -769,
    3206,  3871,  3871,  3871,  3871,  3871,  3871,  3871,  3871,  3871,
    3871,  3871,   429,   235,  3871,  -769,  3871,  3871,   150,    -7,
    -769,  4695,  3871,  -769,   200,   -38,   250,   250,  -769,  -769,
    3339,  -769,  3472,  -769,   200,   362,    -8,   429,    -8,  -769,
      36,  -769,  -769,  2275,  4938,   436,  3871,  -769,   511,  -769,
     445,   592,  4938,   512,  1208,   534,    10,  -769,  -769,  -769,
     757,  -769,  -769,  -769,  -769,   162,   538,   -47,  -769,  3871,
    -769,  -769,   -26,  -769,   757,   533,  -769,  -769,    33,  -769,
    -769,    34,    56,    41,  -769,   461,  1560,   464,   280,   463,
    -769,   546,  -769,  -769,   557,  1066,   465,  -769,  -769,  -769,
     304,  -769,  -769,  -769,   429,  -769,  -769,  -769,  -769,  1743,
    1327,  -769,  -769,  -769,  2408,  -769,   609,    89,  -769,   504,
     469,   471,  -769,   479,  3871,   480,  3871,   481,    36,  -769,
     -16,  3871,  5017,  3871,  -769,  3871,  3871,  3871,  2458,  2591,
    2722,  2855,  2855,  2855,  2855,  1563,  1563,  1563,  1563,   642,
     642,   370,   370,   370,   353,   353,   353,  -769,   219,   937,
     937,   937,   937,   937,   937,   937,   937,   937,   937,   937,
     937,  -769,   480,   486,  -769,   483,   250,   487,  4271,  -769,
     210,  2026,   -36,  -769,   187,  4938,   187,  4839,   362,  -769,
    -769,  -769,  -769,   250,  -769,  -769,  -769,  4938,  -769,  1404,
    -769,  -769,  -769,  -769,   624,    49,   490,   495,  -769,   757,
     757,   757,  -769,   500,  -769,    45,   499,   200,   -49,   506,
    -769,  -769,  -769,   501,   581,  -769,  -769,  4313,  -769,  -769,
     640,   508,   187,   505,  -769,  -769,  -769,  -769,  -769,   513,
    -769,    51,  -769,  -769,   207,  -769,  3871,  -769,  -769,   429,
     502,  -769,  -769,   153,   516,  -769,  -769,  -769,  -769,  -769,
     187,  -769,    52,    54,   510,   135,   757,   515,   200,   362,
    -769,   536,    89,   518,  -769,  -769,   519,   350,   517,  4355,
     429,   429,    36,  4979,   937,  3871,  4881,  5062,  5083,   349,
    -769,   429,   429,  -769,  -769,  -769,    53,  -769,  -769,  -769,
    -769,  -769,  3605,  -769,   341,  -769,   -20,  -769,  -769,  -769,
    3871,  3871,   234,   234,   757,   597,  1876,  -769,   382,  -769,
     176,  -769,  -769,   550,   522,   672,   757,   539,   200,   -38,
     622,   595,  -769,  -769,   757,   350,  -769,  -769,  3871,  -769,
     280,   681,  -769,  -769,  -769,   543,   985,  -769,  -769,   547,
    -769,   159,   551,  -769,  3738,  -769,  -769,  -769,   200,   362,
      89,   553,   696,  -769,  -769,   350,  -769,  -769,   563,   697,
      59,  -769,  -769,  -769,  -769,  -769,  5040,  -769,  -769,  -769,
    -769,  -769,   568,  3871,  3871,   187,  4938,  -769,  -769,   384,
     567,   632,   569,  4938,   187,   573,   603,  -769,   603,  -769,
     716,  -769,  -769,  -769,   441,   579,  3871,    58,   291,  -769,
     757,  -769,   757,  -769,   589,   -36,  -769,   582,  -769,  -769,
     590,  -769,   280,  -769,  3871,  -769,   591,  -769,  3871,   250,
     623,   171,  -769,  -769,   594,   187,    57,  1227,   362,   696,
    -769,    89,   650,   599,   646,   284,   679,   743,  3871,   429,
     705,   706,   429,  -769,   612,  4399,  -769,   645,   394,   -20,
    2275,  -769,  -769,   618,  -769,  -769,  -769,   234,   625,   627,
     757,   684,   628,  -769,  4443,  -769,  -769,  -769,  -769,  -769,
     652,  -769,  -769,   678,   646,    61,   937,  -769,   619,  -769,
    -769,  3871,   623,  -769,  -769,  1167,  -769,   711,    89,  -769,
    -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,
     369,   600,  -769,    27,   630,   634,   633,   212,   772,   757,
    5040,  -769,  3871,  3871,  -769,   623,  -769,  -769,   250,  -769,
     -20,   761,   722,  -769,  -769,  -769,  3871,   280,  -769,  -769,
    -769,  -769,   639,  -769,  -769,  -769,   757,    89,  -769,  -769,
     641,  -769,  -769,   568,   637,   623,  -769,   783,    18,  -769,
     730,   340,  -769,   736,  -769,  -769,   351,  -769,   735,   796,
     757,  -769,   654,   655,  -769,  -769,   787,  -769,   662,  2275,
     664,    75,  2009,  2009,  -769,  -769,   155,  -769,  -769,   663,
    -769,  -769,  -769,   757,    89,  -769,    91,  -769,   804,    28,
     749,   808,   668,   750,  -769,    76,   670,   816,   757,  -769,
    -769,  -769,  -769,   763,  -769,  -769,  -769,  -769,  -769,  -769,
    -769,  -769,   204,   759,  -769,   680,  -769,  -769,   747,   685,
      91,  -769,   686,   751,   727,   688,   698,   757,   771,  -769,
    -769,   757,  -769,  -769,   367,  -769,  -769,   757,  -769,  -769,
    2142,   758,   695,   693,  -769,  -769,  -769,  -769,   626,    89,
    -769,   779,  -769,   839,   704,  -769,   782,  -769,  -769,   493,
    -769,  -769,  -769,   708,  -769,  -769,   785,   786,   851,  -769,
    -769,   757,   350,  -769,   777,  -769,   712,  -769,    89,  -769,
     713,   714,  -769,  -769,   336,  -769,   715,  -769,  -769,  -769,
    -769,   718,   765,  -769,   723,  -769,   765,  -769,    89,  -769,
    -769,   801,   724,  -769,   725,  -769,   726,  -769
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -769,  -769,  -362,  -769,   -24,  -769,  -769,  -769,  -769,   530,
    -769,  -223,  -769,  -769,     3,  -769,  -769,  -769,  -769,  -769,
    -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,
    -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,
    -769,  -769,  -769,  -769,  -108,  -769,  -769,  -769,   368,   494,
     520,  -123,  -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,
    -769,  -769,   242,   206,  -579,  -769,  -769,    31,  -769,  -769,
    -769,  -383,  -769,  -769,   141,  -769,  -769,  -769,  -769,  -769,
    -769,  -769,  -607,  -769,   175,  -193,  -769,  -769,   544,  -769,
     181,  -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,     0,
    -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,
    -768,  -769,  -769,  -769,  -573,  -769,  -769,   139,  -769,  -769,
    -769,  -769,  -769,   834,  -769,    11,  -769,  -769,  -769,  -769,
    -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,  -769,   -65,
    -769,  -769,    -1,   160,  -769,  -769,  -769,  -769,  -769,  -769,
    -769,  -769,  -769,  -769,   -19,  -363,  -264,  -769,  -769,  -769,
    -769,  -769,  -769,  -769,   203,   459,   466,  -769,  -769,   333,
     331,  -769,   908,   -14,   737,  -446,   470,    43,  -769,  -769,
    -769,  -670,  -769,  -769,  -769,  -769,   108,  -211,  -769,    19,
    -769,  -769,  -769,   -18,    64,  -769,  -194,  -462,  -769,  -769,
     236,    35,  -678,   323,  -769,   729,  -769,   443,   330,  -769,
    -769,  -769,  -769,  -769,   329,  -769
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -540
static const yytype_int16 yytable[] =
{
     150,   150,   300,   100,   163,   151,   151,    87,   700,   164,
     168,   583,   437,   229,   678,   173,   175,   672,   580,   530,
     581,   240,   132,   842,   765,   122,   874,   296,   326,   199,
     185,   347,   352,   355,   550,   843,   918,   486,   723,   407,
     770,   512,  -539,   154,   154,   122,   395,   167,   202,   514,
     226,   400,   401,   227,   134,   296,   210,   595,    35,   620,
     634,   193,  -179,   170,  -538,  -182,    35,   153,   153,   620,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   453,   620,   924,   755,   346,   357,   208,   278,
     279,   726,   169,   195,   633,   407,   453,  -381,   296,   451,
     455,   238,   457,   198,   600,   469,   229,   472,  -383,   229,
    -382,  -470,   238,    48,   238,   663,  -450,  -450,     3,   297,
     503,    -2,   210,   224,   607,   305,   128,   225,   296,   171,
     203,   174,   150,   727,   176,   854,   177,   151,   315,   861,
     298,  -348,  -348,  -180,  -467,   238,   206,   297,    81,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   122,   370,   908,   487,   770,   241,   329,   818,   629,
     957,   875,   876,   327,   345,   154,   348,   353,   356,   150,
     844,   919,   299,   328,   151,   513,  -539,   150,   219,   643,
     297,   532,   151,   515,   333,  -450,  -450,   150,   182,   309,
     380,   596,   151,   621,   635,   217,  -179,   664,  -538,  -182,
     558,   756,  -470,   831,   684,  -259,   688,  -466,   217,   736,
     297,   708,   154,   361,   365,   371,   334,   897,   925,   183,
     154,   207,   217,   771,   320,   190,   547,   377,   547,   548,
     154,   548,   191,   860,   848,   574,   351,   769,  -147,  -147,
    -147,   584,   163,   504,   360,   362,   366,   164,   168,   122,
     211,    35,   574,   212,   376,   213,   674,   214,   217,   774,
     686,   687,   122,   233,   372,   220,   221,   643,  -259,   622,
     462,   623,   624,   569,   709,   410,   849,  -180,   220,   221,
     468,   122,   405,    35,    35,   167,  -254,  -145,  -145,  -145,
     215,   147,   220,   221,   232,   658,   122,   452,    35,    35,
    -147,   170,   238,   460,   408,   216,   498,   392,   122,   242,
      35,   499,   463,   199,    35,   244,   475,   217,   410,   544,
     498,   689,   236,   147,   148,   499,   627,   149,   220,   221,
     169,   410,   410,    81,   150,   461,   855,   243,   147,   151,
     245,   410,   122,   410,    35,   970,   122,   408,   776,  -145,
     147,   675,  -350,  -350,   671,   246,   148,   654,   655,   149,
     408,   408,   247,   549,   406,    81,    81,  -472,   659,   660,
     408,   148,   408,   883,   149,   686,   687,   154,   100,   406,
      81,    81,   536,   148,   147,   250,   149,   220,   221,   946,
     349,   293,    81,   276,   406,   543,    81,   519,   -41,   -41,
     -41,   520,   646,   647,   150,   839,   273,   274,   275,   151,
     276,   122,   122,    35,  -381,   884,   294,   148,   238,  -364,
     149,   547,   295,   217,   548,   224,    81,   545,   377,  -383,
     150,   947,   150,   238,  -368,   151,   758,   151,   217,   304,
    -382,   739,   740,   218,   238,  -366,   238,   154,   751,   382,
     383,   810,   811,   147,   868,   498,   498,   498,    48,   734,
     499,   499,   499,   609,   562,   685,   686,   687,   646,   647,
     306,   570,   588,   154,   307,   154,   409,   217,   150,   977,
     978,   410,   377,   151,   152,   155,   161,   547,   574,   162,
     548,   311,  -163,   220,   221,    81,   312,   309,   410,   309,
     314,   907,   238,   916,   768,   319,   150,   219,   220,   221,
     408,   151,   498,   316,   639,   235,   237,   499,   549,   454,
     322,   154,   318,   549,   752,   686,   687,   408,   335,   804,
     340,   339,   409,   454,   341,   163,   343,   916,   373,   354,
     164,   168,   379,   367,   385,   360,   378,   220,   221,   154,
    -157,  -157,  -157,   373,   386,   379,   373,   379,   150,   150,
     498,   388,   670,   151,   151,   499,   959,   834,   391,   393,
     394,   396,   498,   309,   695,   397,   402,   499,   167,   404,
     498,   549,   414,   476,   478,   499,   150,   574,   480,   682,
     481,   151,   866,   482,   170,   973,   484,   510,   852,   853,
     505,   154,   154,   516,   718,   523,   549,   518,   525,   526,
     528,   549,   882,   546,   886,   990,   554,   552,   555,   361,
     557,  -493,  -372,   169,   893,   677,   677,  -376,   594,   154,
     573,   150,   902,   597,   578,   716,   151,   905,   599,   608,
     150,   606,   610,   612,   614,   151,   611,   628,   617,   615,
     640,   362,   636,   520,   619,   638,   498,   632,   498,   680,
     645,   499,   644,   499,   652,   931,   690,   717,   150,   691,
     692,   933,   372,   151,   154,   270,   271,   272,   273,   274,
     275,   150,   276,   154,   696,   704,   151,   549,   697,  -228,
     705,   549,   707,   714,   721,   725,   949,   720,   309,   779,
     780,   781,   782,   783,   784,   724,   743,   745,   880,  -461,
     742,   154,   744,   150,   746,   813,   498,   964,   151,   747,
     750,   499,   753,   762,   154,   779,   780,   781,   782,   783,
     784,   761,   764,   814,   410,   520,   767,   773,   709,   976,
     777,   794,   795,   798,   549,   981,   778,   799,   309,   779,
     780,   781,   782,   783,   784,   785,   154,   802,   803,   806,
     808,   815,   996,   408,   822,   498,   832,   819,   826,   820,
     499,   823,   828,   837,   845,   846,   850,   847,   857,   841,
     677,   858,   864,   150,   872,   870,   856,   873,   151,   500,
     489,   490,   498,   549,   878,   786,   501,   499,   881,   887,
     888,   890,   891,   500,   892,   894,   896,   904,   917,   491,
     509,   920,   921,   922,   923,   926,   498,    31,    32,   122,
     927,   499,  -161,   932,   939,   934,   154,   492,  -216,   937,
     935,   940,   938,   410,   941,   943,   953,   954,   955,   498,
     549,   960,   549,   961,   499,   962,   963,   967,  -222,   968,
     520,   965,   895,   971,   498,   974,   972,   975,   984,   499,
     980,   147,   408,   983,   988,   992,   993,   506,   989,   995,
     616,   997,   719,   537,   749,   493,   549,   494,    68,    69,
      70,    71,    72,   498,   901,   824,   508,   498,   499,   495,
     797,   775,   499,   498,   496,    75,    76,   497,   499,   538,
     936,   835,   228,   126,   127,   549,   129,   130,   131,   133,
     135,   136,   137,   138,   830,   140,   141,   142,   143,   144,
     145,   146,   801,   951,   157,   160,   693,   498,   549,   694,
     350,   871,   499,   703,   549,   369,   179,   701,   500,   500,
     500,     0,     0,   187,   189,   601,   602,     0,   194,     0,
     197,     0,     0,   254,   549,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   230,   276,     0,     0,
       0,     0,     0,     0,   251,   252,   253,     0,     0,     0,
       0,     0,     0,     0,     0,   500,     0,     0,     0,     0,
       0,   254,   637,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,   276,   301,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   303,     0,     0,
       0,     0,     0,   500,     0,     0,     0,     0,     0,     0,
     679,     0,     0,     0,     0,   500,     0,     0,     0,     0,
       0,     0,     0,   500,     0,   251,   252,   253,     0,   230,
     699,     0,   230,     0,     0,   324,     0,     0,     0,     0,
     332,   194,   254,     0,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,     0,   276,     0,     0,     0,
     194,   194,     0,     0,   157,     0,     0,     0,   375,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     390,     0,   706,     0,     0,     0,     0,     0,     0,   500,
       0,   500,     0,   324,   324,     0,   759,     0,   760,     0,
     412,     0,     0,     0,     0,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,     0,     0,     0,     0,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
       0,     0,   324,     0,   324,   458,     0,     0,     0,   500,
     194,     0,     0,     0,     0,     0,   821,     0,   465,     0,
     467,   527,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   477,  -183,     0,     0,     0,     0,
       0,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,     0,     0,     0,     0,   507,   500,     0,
       0,     0,     0,     0,     0,   851,     0,   777,  -450,  -450,
       0,     0,     0,   778,     0,     0,   779,   780,   781,   782,
     783,   784,   785,     0,     0,   500,     0,  -450,  -450,     0,
       0,     0,   867,     0,     0,     0,     0,     0,     0,   483,
       0,     0,   194,     0,     0,     0,     0,     0,     0,   500,
       0,     0,   324,     0,   559,     0,   889,     0,     0,   563,
       0,   564,   836,   566,   567,   568,     0,     0,     0,     0,
       0,     0,   500,     0,     0,     0,   251,   252,   253,   906,
       0,     0,     0,     0,     0,     0,     0,   500,     0,     0,
       0,     0,     0,   254,   928,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   500,   276,     0,  -183,
     500,     0,     0,   942,     0,     0,   500,   945,     0,     0,
       0,     0,     0,   948,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,     0,     5,     6,     7,
       8,     9,     0,     0,     0,     0,    10,    11,     0,     0,
     500,     0,     0,     0,     0,     0,     0,   969,     0,     0,
       0,   587,     0,     0,   626,     0,     0,     0,     0,     0,
    -450,  -450,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,     0,     0,   656,    31,    32,    33,    34,    35,     0,
      36,     0,   539,     0,    37,    38,    39,    40,     0,    41,
     666,    42,     0,    43,     0,     0,    44,     0,   332,   673,
      45,    46,    47,    48,     0,    50,    51,     0,     0,    52,
       0,     0,    54,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,     0,     0,     0,   194,     0,     0,     0,
       0,    65,    66,   342,    67,    68,    69,    70,    71,    72,
       0,     0,   194,     0,     0,     0,    73,     0,     0,     0,
       0,   124,    75,    76,    77,    78,     0,    79,    80,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,   324,   735,     0,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,     0,     0,     0,     5,
       6,     7,     8,     9,   754,     0,     0,     0,    10,    11,
    -540,  -540,  -540,  -540,   268,   269,   270,   271,   272,   273,
     274,   275,   766,   276,     0,     0,   324,     0,     0,     0,
    -450,  -450,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,   800,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,     0,    36,     0,     0,     0,    37,    38,    39,    40,
       0,    41,     0,    42,     0,    43,     0,     0,    44,   324,
       0,     0,    45,    46,    47,    48,    49,    50,    51,     0,
       0,    52,    53,     0,    54,     0,     0,     0,    55,    56,
      57,     0,    58,    59,    60,    61,    62,    63,    64,     0,
     324,   324,   517,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     0,     0,   332,     0,     0,     0,    73,     0,
       0,     0,     0,    74,    75,    76,    77,    78,     0,    79,
      80,     0,    81,     0,    82,    83,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       0,     0,     0,    31,    32,    33,    34,    35,     0,    36,
    -450,  -450,     0,    37,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,     0,    50,    51,     0,     0,    52,     0,
       0,    54,     0,     0,     0,    55,    56,    57,     0,    58,
      59,    60,   534,    62,    63,    64,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,    11,
     124,    75,    76,    77,    78,     0,    79,    80,     0,    81,
       0,    82,    83,   681,     0,     0,     0,     0,     0,     0,
       0,     0,  -349,  -349,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,     0,     0,    31,    32,    33,    34,
      35,     0,    36,     0,     0,     0,    37,    38,    39,    40,
       0,    41,     0,    42,     0,    43,     0,     0,    44,     0,
       0,     0,    45,    46,    47,    48,     0,    50,    51,     0,
       0,    52,     0,     0,    54,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,    11,   124,    75,    76,    77,    78,     0,    79,
      80,     0,    81,     0,    82,    83,   898,     0,     0,     0,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,    31,
      32,    33,    34,    35,     0,    36,  -450,  -450,     0,    37,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,     0,
      50,    51,     0,     0,    52,     0,     0,    54,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,    11,   124,    75,    76,    77,
      78,     0,    79,    80,     0,    81,     0,    82,    83,   950,
       0,     0,     0,     0,     0,     0,     0,     0,  -351,  -351,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,    31,    32,    33,    34,    35,     0,    36,     0,
       0,     0,    37,    38,    39,    40,     0,    41,     0,    42,
       0,    43,     0,     0,    44,     0,     0,     0,    45,    46,
      47,    48,     0,    50,    51,     0,     0,    52,     0,     0,
      54,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,    67,    68,    69,    70,    71,    72,     5,     6,
       7,     8,     9,     0,    73,     0,     0,    10,    11,   124,
      75,    76,    77,    78,     0,    79,    80,     0,    81,     0,
      82,    83,     0,     0,     0,     0,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     0,     0,     0,    31,    32,    33,    34,    35,
       0,    36,  -450,  -450,     0,    37,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,     0,    50,    51,     0,     0,
      52,     0,     0,    54,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,    11,   124,    75,    76,    77,    78,     0,    79,    80,
       0,    81,     0,    82,    83,     0,     0,     0,     0,     0,
     540,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     122,    34,    35,     0,     0,     0,     0,     0,    37,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,    48,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   121,   124,    75,    76,    77,    78,
     541,     0,     0,     0,    81,     0,    82,    83,     0,     0,
       0,     0,     0,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   122,    34,    35,     0,     0,     0,     0,
       0,    37,     0,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
      48,   276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,   121,   124,    75,
      76,    77,    78,     0,     0,     0,     0,    81,     0,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   122,    34,    35,     0,
       0,     0,     0,     0,    37,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,     0,   276,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
     121,   124,    75,    76,    77,    78,     0,   186,     0,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,     0,    31,    32,   122,
      34,    35,     0,     0,     0,     0,     0,    37,  -540,  -540,
    -540,  -540,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,   276,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   123,     0,     0,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     5,     6,     7,     8,     9,     0,    73,
       0,     0,    10,   121,   124,    75,    76,    77,    78,     0,
     188,     0,     0,    81,     0,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,     0,     0,     0,
      31,    32,   122,    34,    35,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,     0,
      67,    68,    69,    70,    71,    72,     5,     6,     7,     8,
       9,     0,    73,     0,     0,    10,    11,   124,    75,    76,
      77,    78,     0,   192,     0,     0,    81,     0,    82,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,     0,    31,    32,   122,    34,    35,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,     0,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,     0,    67,    68,    69,    70,    71,    72,     5,
       6,     7,     8,     9,     0,    73,     0,     0,    10,   121,
     124,    75,    76,    77,    78,   321,     0,     0,     0,    81,
       0,    82,    83,     0,     0,     0,     0,     0,   438,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,     0,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,     0,     0,     0,    31,    32,   122,    34,
      35,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     123,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,    67,    68,    69,    70,
      71,    72,     5,     6,     7,     8,     9,     0,    73,     0,
       0,    10,   121,   124,    75,    76,    77,    78,     0,     0,
       0,     0,    81,     0,    82,    83,     0,     0,     0,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,    31,
      32,   122,    34,    35,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   123,     0,     0,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    66,     0,    67,
      68,    69,    70,    71,    72,     5,     6,     7,     8,     9,
       0,    73,     0,     0,    10,   121,   124,    75,    76,    77,
      78,     0,     0,     0,     0,    81,     0,    82,    83,     0,
       0,     0,     0,     0,   466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,     0,
       0,     0,    31,    32,   122,    34,    35,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,     0,     0,    59,
      60,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,     0,    67,    68,    69,    70,    71,    72,     5,     6,
       7,     8,     9,     0,    73,     0,     0,    10,   121,   124,
      75,    76,    77,    78,     0,     0,     0,     0,    81,     0,
      82,    83,     0,     0,     0,     0,     0,   665,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,     0,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,     0,    31,    32,   122,    34,    35,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,    67,    68,    69,    70,    71,
      72,     5,     6,     7,     8,     9,     0,    73,     0,     0,
      10,   121,   124,    75,    76,    77,    78,     0,     0,     0,
       0,    81,     0,    82,    83,     0,     0,     0,     0,     0,
     715,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,     0,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,     0,     0,     0,    31,    32,
     122,    34,    35,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,     0,     0,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,     0,    67,    68,
      69,    70,    71,    72,     5,     6,     7,     8,     9,     0,
      73,     0,     0,    10,   121,   124,    75,    76,    77,    78,
       0,     0,     0,     0,    81,     0,    82,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
       0,    31,    32,   122,    34,    35,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
       0,    67,    68,    69,    70,    71,    72,     5,     6,     7,
       8,     9,     0,    73,     0,     0,    10,    11,   124,    75,
      76,    77,    78,     0,     0,     0,     0,    81,     0,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,    31,    32,   122,    34,    35,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
       0,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,     0,    67,    68,    69,    70,    71,    72,
       5,     6,     7,     8,     9,     0,    73,     0,     0,    10,
     121,   124,    75,    76,    77,    78,     0,     0,     0,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,     0,    31,    32,   122,
     374,    35,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   123,     0,     0,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,    73,
     251,   252,   253,     0,   124,    75,    76,    77,    78,     0,
       0,     0,     0,    81,     0,    82,    83,   254,     0,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
       0,   276,   251,   252,   253,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   254,
       0,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,     0,   276,   251,   252,   253,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   254,     0,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,   276,     0,     0,   251,   252,
     253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   254,   579,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,     0,   276,
       0,     0,   251,   252,   253,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   613,   254,
     755,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,     0,   276,   251,   252,   253,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     653,   254,     0,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,   276,   251,   252,   253,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   254,   807,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,     0,   276,   251,   252,
     253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   254,   756,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,     0,   276,
     251,   252,   253,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   254,   277,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
       0,   276,   251,   252,   253,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   254,
     337,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,     0,   276,   251,   252,   253,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   254,   338,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,   276,   251,   252,   253,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   254,   344,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,     0,   276,     0,   251,
     252,   253,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   387,   254,     0,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,     0,
     276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   459,   251,   252,
     253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   302,     0,   254,     0,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,     0,   276,
     251,   252,   253,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   310,   254,   657,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
       0,   276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   251,   252,   253,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   254,   582,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,     0,   276,   252,
     253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   254,     0,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   253,   276,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   254,     0,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,     0,   276,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,     0,
     276,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,     0,   276,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,     0,   276
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-769))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-540))

static const yytype_int16 yycheck[] =
{
      24,    25,   125,     4,    28,    24,    25,     4,   615,    28,
      28,   473,   276,    78,   593,    29,    30,   590,   464,   381,
     466,     8,    11,   791,   702,    72,     8,    62,     8,    53,
      44,     8,     8,     8,   397,     8,     8,    27,   645,   250,
     710,     8,     8,    24,    25,    72,   239,    28,    74,     8,
      74,   245,   246,    77,    11,    62,    57,     8,    74,     8,
       8,    50,     8,    28,     8,     8,    74,    24,    25,     8,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   293,     8,     8,    27,    91,   210,    74,    60,
      61,    32,    28,    50,   540,   306,   307,   146,    62,   292,
     294,   150,   296,   150,   487,   316,   171,   318,   146,   174,
     146,   146,   150,    99,   150,    62,    60,    61,     0,   154,
     343,     0,   123,   150,    79,   149,   151,   154,    62,   151,
     156,   151,   156,    74,    27,   805,    62,   156,   162,   817,
     156,   152,   153,     8,   151,   150,   120,   154,   156,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    72,    62,    72,   154,   835,   153,   181,   747,   531,
     938,   153,   154,   153,   198,   156,   153,   153,   153,   203,
     153,   153,   118,   180,   203,   152,   152,   211,   143,   552,
     154,   384,   211,   152,   183,    60,    61,   221,   151,   156,
     224,   152,   221,   152,   152,    74,   152,   154,   152,   152,
     404,   153,   146,   152,   597,    62,   599,   151,    74,   665,
     154,    62,   203,   212,   213,   125,   183,   152,   152,   151,
     211,   120,    74,    62,   170,    72,   147,    79,   147,   150,
     221,   150,    72,   816,    32,   456,   203,   709,    93,    94,
      95,   474,   276,    91,   211,   212,   213,   276,   276,    72,
     151,    74,   473,   151,   221,   151,    32,   151,    74,   715,
      94,    95,    72,    79,   143,   144,   145,   640,   125,    72,
     304,    74,    75,    64,   125,   250,    74,   152,   144,   145,
     314,    72,    72,    74,    74,   276,   125,    93,    94,    95,
     151,   114,   144,   145,   154,   569,    72,    72,    74,    74,
     155,   276,   150,   302,   250,   151,   340,   159,    72,    72,
      74,   340,    72,   347,    74,   153,   323,    74,   293,   394,
     354,   155,    79,   114,   147,   354,   529,   150,   144,   145,
     276,   306,   307,   156,   368,   302,   808,    72,   114,   368,
      62,   316,    72,   318,    74,   962,    72,   293,   721,   155,
     114,   127,   152,   153,   587,    62,   147,   560,   561,   150,
     306,   307,    32,   397,   154,   156,   156,    62,   571,   572,
     316,   147,   318,    32,   150,    94,    95,   368,   389,   154,
     156,   156,   389,   147,   114,   146,   150,   144,   145,    32,
     154,   146,   156,    50,   154,   394,   156,   127,    67,    68,
      69,   368,   128,   129,   438,   778,    46,    47,    48,   438,
      50,    72,    72,    74,   146,    74,    62,   147,   150,   151,
     150,   147,   125,    74,   150,   150,   156,   394,    79,   146,
     464,    74,   466,   150,   151,   464,   155,   466,    74,   150,
     146,    67,    68,    79,   150,   151,   150,   438,   681,   153,
     154,    67,    68,   114,   827,   489,   490,   491,    99,   663,
     489,   490,   491,   497,   410,    93,    94,    95,   128,   129,
     146,   438,   479,   464,   146,   466,   250,    74,   512,   153,
     154,   456,    79,   512,    24,    25,   147,   147,   709,   150,
     150,   157,   152,   144,   145,   156,     8,   464,   473,   466,
     150,   874,   150,   876,   708,   125,   540,   143,   144,   145,
     456,   540,   546,   146,   548,    82,    83,   546,   552,   293,
      27,   512,   146,   557,    93,    94,    95,   473,   151,   732,
      14,   153,   306,   307,   153,   569,   154,   910,   218,    14,
     569,   569,   222,   152,   152,   512,   143,   144,   145,   540,
      67,    68,    69,   233,   152,   235,   236,   237,   592,   593,
     594,   155,   586,   592,   593,   594,   939,   771,   158,    72,
     151,    72,   606,   540,   608,   123,    72,   606,   569,    62,
     614,   615,    27,   157,    83,   614,   620,   808,   153,   596,
       8,   620,   825,    91,   569,   968,    72,    74,   802,   803,
      72,   592,   593,   152,   638,   152,   640,   153,    72,    62,
     155,   645,   845,    14,   847,   988,   157,   123,   157,   618,
     151,   151,   151,   569,   857,   592,   593,   151,    14,   620,
     157,   665,   865,   153,   157,   634,   665,   870,   153,   150,
     674,   151,   146,    72,    14,   674,   155,   155,   153,   151,
     124,   618,   152,   620,   151,   150,   690,   151,   692,    72,
     151,   690,   154,   692,   157,   898,   126,   634,   702,   157,
       8,   904,   143,   702,   665,    43,    44,    45,    46,    47,
      48,   715,    50,   674,    72,    14,   715,   721,   103,    99,
     157,   725,   155,   152,     8,     8,   929,   154,   665,   109,
     110,   111,   112,   113,   114,   152,    84,   674,   841,   151,
     153,   702,   153,   747,   151,   739,   750,   950,   747,   126,
      14,   750,   153,   151,   715,   109,   110,   111,   112,   113,
     114,   152,   152,   740,   709,   702,   155,   153,   125,   972,
     100,   152,   106,    74,   778,   978,   106,    14,   715,   109,
     110,   111,   112,   113,   114,   115,   747,    62,    62,   157,
     125,   153,   995,   709,    90,   799,   157,   152,   126,   152,
     799,   153,   104,    72,   154,   151,    14,   154,    27,   790,
     747,    69,   153,   817,   157,   154,   810,    14,   817,   340,
      43,    44,   826,   827,    74,   155,   340,   826,    72,    74,
      14,   157,   157,   354,    27,   153,   152,   154,    14,    62,
     354,    72,    14,   155,    74,   155,   850,    70,    71,    72,
      14,   850,    69,    74,   107,   155,   817,    80,    91,   153,
     155,   153,    91,   808,   146,    74,    88,   152,   155,   873,
     874,    72,   876,    14,   873,   151,    74,    72,    72,     8,
     817,   153,   859,    86,   888,   152,   154,   153,   103,   888,
     155,   114,   808,   155,   151,    74,   152,   347,   986,   154,
     512,   155,   640,   389,   678,   128,   910,   130,   131,   132,
     133,   134,   135,   917,   863,   754,   352,   921,   917,   142,
     725,   720,   921,   927,   147,   148,   149,   150,   927,   389,
     910,   772,    78,     5,     6,   939,     8,     9,    10,    11,
      12,    13,    14,    15,   764,    17,    18,    19,    20,    21,
      22,    23,   729,   930,    26,    27,   605,   961,   962,   606,
     203,   833,   961,   620,   968,   216,    38,   618,   489,   490,
     491,    -1,    -1,    45,    46,   489,   490,    -1,    50,    -1,
      52,    -1,    -1,    26,   988,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    78,    50,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   546,    -1,    -1,    -1,    -1,
      -1,    26,   546,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,   594,    -1,    -1,    -1,    -1,    -1,    -1,
     594,    -1,    -1,    -1,    -1,   606,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   614,    -1,     9,    10,    11,    -1,   171,
     614,    -1,   174,    -1,    -1,   177,    -1,    -1,    -1,    -1,
     182,   183,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    -1,
     212,   213,    -1,    -1,   216,    -1,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     232,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,   690,
      -1,   692,    -1,   245,   246,    -1,   690,    -1,   692,    -1,
     252,    -1,    -1,    -1,    -1,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,    -1,    -1,    -1,    -1,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
      -1,    -1,   294,    -1,   296,   297,    -1,    -1,    -1,   750,
     302,    -1,    -1,    -1,    -1,    -1,   750,    -1,   310,    -1,
     312,   155,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   326,     8,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,   349,   799,    -1,
      -1,    -1,    -1,    -1,    -1,   799,    -1,   100,    60,    61,
      -1,    -1,    -1,   106,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,   826,    -1,    60,    61,    -1,
      -1,    -1,   826,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,   394,    -1,    -1,    -1,    -1,    -1,    -1,   850,
      -1,    -1,   404,    -1,   406,    -1,   850,    -1,    -1,   411,
      -1,   413,   155,   415,   416,   417,    -1,    -1,    -1,    -1,
      -1,    -1,   873,    -1,    -1,    -1,     9,    10,    11,   873,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   888,    -1,    -1,
      -1,    -1,    -1,    26,   888,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   917,    50,    -1,   152,
     921,    -1,    -1,   917,    -1,    -1,   927,   921,    -1,    -1,
      -1,    -1,    -1,   927,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
     961,    -1,    -1,    -1,    -1,    -1,    -1,   961,    -1,    -1,
      -1,    27,    -1,    -1,   526,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,   565,    70,    71,    72,    73,    74,    -1,
      76,    -1,   155,    -1,    80,    81,    82,    83,    -1,    85,
     582,    87,    -1,    89,    -1,    -1,    92,    -1,   590,   591,
      96,    97,    98,    99,    -1,   101,   102,    -1,    -1,   105,
      -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,    -1,    -1,    -1,   618,    -1,    -1,    -1,
      -1,   127,   128,   153,   130,   131,   132,   133,   134,   135,
      -1,    -1,   634,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,   147,   148,   149,   150,   151,    -1,   153,   154,    -1,
     156,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   663,   664,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,     3,
       4,     5,     6,     7,   686,    -1,    -1,    -1,    12,    13,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   704,    50,    -1,    -1,   708,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    49,   728,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    76,    -1,    -1,    -1,    80,    81,    82,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    -1,    92,   771,
      -1,    -1,    96,    97,    98,    99,   100,   101,   102,    -1,
      -1,   105,   106,    -1,   108,    -1,    -1,    -1,   112,   113,
     114,    -1,   116,   117,   118,   119,   120,   121,   122,    -1,
     802,   803,   152,   127,   128,    -1,   130,   131,   132,   133,
     134,   135,    -1,    -1,   816,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   147,   148,   149,   150,   151,    -1,   153,
     154,    -1,   156,    -1,   158,   159,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,    76,
      60,    61,    -1,    80,    81,    82,    83,    -1,    85,    -1,
      87,    -1,    89,    -1,    -1,    92,    -1,    -1,    -1,    96,
      97,    98,    99,    -1,   101,   102,    -1,    -1,   105,    -1,
      -1,   108,    -1,    -1,    -1,   112,   113,   114,    -1,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,     3,
       4,     5,     6,     7,    -1,   142,    -1,    -1,    12,    13,
     147,   148,   149,   150,   151,    -1,   153,   154,    -1,   156,
      -1,   158,   159,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,   153,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    76,    -1,    -1,    -1,    80,    81,    82,    83,
      -1,    85,    -1,    87,    -1,    89,    -1,    -1,    92,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,   101,   102,    -1,
      -1,   105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,
     114,    -1,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,   133,
     134,   135,     3,     4,     5,     6,     7,    -1,   142,    -1,
      -1,    12,    13,   147,   148,   149,   150,   151,    -1,   153,
     154,    -1,   156,    -1,   158,   159,    27,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    76,    60,    61,    -1,    80,
      81,    82,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
      -1,    92,    -1,    -1,    -1,    96,    97,    98,    99,    -1,
     101,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,     3,     4,     5,     6,     7,
      -1,   142,    -1,    -1,    12,    13,   147,   148,   149,   150,
     151,    -1,   153,   154,    -1,   156,    -1,   158,   159,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,   153,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    76,    -1,
      -1,    -1,    80,    81,    82,    83,    -1,    85,    -1,    87,
      -1,    89,    -1,    -1,    92,    -1,    -1,    -1,    96,    97,
      98,    99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,
     108,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,     3,     4,
       5,     6,     7,    -1,   142,    -1,    -1,    12,    13,   147,
     148,   149,   150,   151,    -1,   153,   154,    -1,   156,    -1,
     158,   159,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    76,    60,    61,    -1,    80,    81,    82,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    -1,    92,    -1,    -1,
      -1,    96,    97,    98,    99,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,
      -1,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,     3,     4,     5,     6,     7,    -1,   142,    -1,    -1,
      12,    13,   147,   148,   149,   150,   151,    -1,   153,   154,
      -1,   156,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    99,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,    -1,
     142,    -1,    -1,    12,    13,   147,   148,   149,   150,   151,
     152,    -1,    -1,    -1,   156,    -1,   158,   159,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      99,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,     3,     4,     5,
       6,     7,    -1,   142,    -1,    -1,    12,    13,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,   158,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    80,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,    -1,   130,   131,   132,   133,   134,   135,
       3,     4,     5,     6,     7,    -1,   142,    -1,    -1,    12,
      13,   147,   148,   149,   150,   151,    -1,   153,    -1,    -1,
     156,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    80,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,     3,     4,     5,     6,     7,    -1,   142,
      -1,    -1,    12,    13,   147,   148,   149,   150,   151,    -1,
     153,    -1,    -1,   156,    -1,   158,   159,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     150,   151,    -1,   153,    -1,    -1,   156,    -1,   158,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     147,   148,   149,   150,   151,   152,    -1,    -1,    -1,   156,
      -1,   158,   159,    -1,    -1,    -1,    -1,    -1,    32,    -1,
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
      -1,    12,    13,   147,   148,   149,   150,   151,    -1,    -1,
      -1,    -1,   156,    -1,   158,   159,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,
     131,   132,   133,   134,   135,     3,     4,     5,     6,     7,
      -1,   142,    -1,    -1,    12,    13,   147,   148,   149,   150,
     151,    -1,    -1,    -1,    -1,   156,    -1,   158,   159,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,     3,     4,
       5,     6,     7,    -1,   142,    -1,    -1,    12,    13,   147,
     148,   149,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,
     158,   159,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,   130,   131,   132,   133,   134,
     135,     3,     4,     5,     6,     7,    -1,   142,    -1,    -1,
      12,    13,   147,   148,   149,   150,   151,    -1,    -1,    -1,
      -1,   156,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,    -1,
     142,    -1,    -1,    12,    13,   147,   148,   149,   150,   151,
      -1,    -1,    -1,    -1,   156,    -1,   158,   159,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,     3,     4,     5,
       6,     7,    -1,   142,    -1,    -1,    12,    13,   147,   148,
     149,   150,   151,    -1,    -1,    -1,    -1,   156,    -1,   158,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      13,   147,   148,   149,   150,   151,    -1,    -1,    -1,    -1,
     156,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
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
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,   142,
       9,    10,    11,    -1,   147,   148,   149,   150,   151,    -1,
      -1,    -1,    -1,   156,    -1,   158,   159,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,   155,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,    26,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,   155,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,   153,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,   153,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
     153,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,   153,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,   153,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,    -1,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,   126,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    11,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   161,   162,     0,   163,     3,     4,     5,     6,     7,
      12,    13,    43,    44,    49,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    70,    71,    72,    73,    74,    76,    80,    81,    82,
      83,    85,    87,    89,    92,    96,    97,    98,    99,   100,
     101,   102,   105,   106,   108,   112,   113,   114,   116,   117,
     118,   119,   120,   121,   122,   127,   128,   130,   131,   132,
     133,   134,   135,   142,   147,   148,   149,   150,   151,   153,
     154,   156,   158,   159,   164,   165,   170,   174,   175,   209,
     210,   212,   214,   217,   219,   283,   285,   299,   300,   301,
     302,   305,   314,   325,   328,   332,   333,   334,   336,   337,
     347,   348,   349,   350,   352,   353,   354,   355,   361,   371,
     375,    13,    72,   114,   147,   302,   332,   332,   151,   332,
     332,   332,   285,   332,   337,   332,   332,   332,   332,   296,
     332,   332,   332,   332,   332,   332,   332,   114,   147,   150,
     164,   314,   336,   337,   349,   336,    32,   332,   365,   366,
     332,   147,   150,   164,   314,   316,   317,   349,   353,   354,
     361,   151,   322,   333,   151,   333,    27,    62,   273,   332,
     182,   180,   151,   151,   192,   333,   153,   332,   153,   332,
      72,    72,   153,   285,   332,   337,   193,   332,   150,   164,
     168,   169,    74,   156,   247,   248,   120,   120,    74,   249,
     302,   151,   151,   151,   151,   151,   151,    74,    79,   143,
     144,   145,   367,   368,   150,   154,   164,   164,   283,   299,
     332,   171,   154,    79,   323,   367,    79,   367,   150,   306,
       8,   153,    72,    72,   153,    62,    62,    32,   211,   351,
     146,     9,    10,    11,    26,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    50,   153,    60,    61,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   313,   146,    62,   125,    62,   154,   156,   354,
     211,   332,   126,   332,   150,   164,   146,   146,   335,   337,
     126,   157,     8,   330,   150,   164,   146,   284,   146,   125,
     354,   152,    27,   176,   332,   356,     8,   153,   174,   333,
     274,   275,   332,   285,   337,   151,   187,   153,   153,   153,
      14,   153,   153,   154,   153,   164,    91,     8,   153,   154,
     334,   337,     8,   153,    14,     8,   153,   211,   207,   208,
     337,   285,   337,   372,   374,   285,   337,   152,   286,   365,
      62,   125,   143,   368,    73,   332,   337,    79,   143,   368,
     164,   167,   153,   154,   308,   152,   152,   152,   155,   172,
     332,   158,   159,    72,   151,   245,    72,   123,   218,   216,
     356,   356,    72,   297,    62,    72,   154,   347,   354,   360,
     361,   290,   332,   291,    27,   293,   288,   289,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   316,    32,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   245,    72,   347,   360,   356,   338,   356,   332,   152,
     285,   337,   164,    72,    32,   332,    32,   332,   164,   347,
     245,   324,   347,   318,   178,   174,   157,   332,    83,   181,
     153,     8,    91,    91,    72,   229,    27,   154,   230,    43,
      44,    62,    80,   128,   130,   142,   147,   150,   164,   314,
     325,   326,   327,   171,    91,    72,   169,   332,   248,   326,
      74,   298,     8,   152,     8,   152,   152,   152,   153,   127,
     337,   362,   363,   152,   369,    72,    62,   155,   155,   307,
     162,   166,   245,   292,   119,   173,   174,   209,   210,   155,
      32,   152,   246,   285,   299,   337,    14,   147,   150,   164,
     315,   215,   123,   220,   157,   157,   213,   151,   356,   332,
     310,   309,   354,   332,   332,   295,   332,   332,   332,    64,
     337,   312,   311,   157,   347,   357,   359,   360,   157,   155,
     335,   335,   126,   357,   171,   177,   183,    27,   174,   235,
     184,   276,   190,   188,    14,     8,   152,   153,   231,   153,
     231,   326,   326,   326,   329,   331,   151,    79,   150,   164,
     146,   155,    72,   155,    14,   151,   208,   153,   373,   151,
       8,   152,    72,    74,    75,   370,   332,   245,   155,   162,
     281,   282,   151,   335,     8,   152,   152,   326,   150,   164,
     124,   221,   222,   315,   154,   151,   128,   129,   242,   243,
     244,   315,   157,   155,   245,   245,   332,    27,   316,   245,
     245,   358,   339,    62,   154,    32,   332,   319,   179,   236,
     333,   171,   274,   332,    32,   127,   224,   337,   224,   326,
      72,    27,   174,   228,   231,    93,    94,    95,   231,   155,
     126,   157,     8,   330,   329,   164,    72,   103,   195,   326,
     242,   374,   364,   363,    14,   157,   157,   155,    62,   125,
     277,   278,   279,   341,   152,    32,   285,   337,   164,   222,
     154,     8,   250,   242,   152,     8,    32,    74,   294,   287,
     343,   344,   345,   346,   356,   332,   335,   320,   238,    67,
      68,   240,   153,    84,   153,   337,   151,   126,   223,   223,
      14,   171,    93,   153,   332,    27,   153,   234,   155,   326,
     326,   152,   151,   194,   152,   362,   332,   155,   356,   357,
     341,    62,   280,   153,   335,   250,   315,   100,   106,   109,
     110,   111,   112,   113,   114,   115,   155,   251,   254,   267,
     268,   269,   270,   272,   152,   106,   303,   244,    74,    14,
     332,   324,    62,    62,   245,   340,   157,   155,   125,   321,
      67,    68,   241,   333,   174,   153,   185,   225,   224,   152,
     152,   326,    90,   153,   234,   233,   126,   196,   104,   200,
     303,   152,   157,   342,   356,   277,   155,    72,   255,   315,
     252,   302,   270,     8,   153,   154,   151,   154,    32,    74,
      14,   326,   356,   356,   341,   357,   333,    27,    69,   237,
     274,   362,   191,   189,   153,   232,   171,   326,   315,   201,
     154,   346,   157,    14,     8,   153,   154,   256,    74,   271,
     211,    72,   171,    32,    74,   304,   171,    74,    14,   326,
     157,   157,    27,   171,   153,   174,   152,   152,    27,   174,
     227,   227,   171,   197,   154,   171,   326,   315,    72,   257,
     258,   259,   260,   262,   263,   264,   315,    14,     8,   153,
      72,    14,   155,    74,     8,   152,   155,    14,   326,   239,
     186,   171,    74,   171,   155,   155,   259,   153,    91,   107,
     153,   146,   326,    74,   253,   326,    32,    74,   326,   171,
      27,   174,   226,    88,   152,   155,   265,   270,   261,   315,
      72,    14,   151,    74,   171,   153,   198,    72,     8,   326,
     242,    86,   154,   315,   152,   153,   171,   153,   154,   266,
     155,   171,   199,   155,   103,   202,   203,   204,   151,   204,
     315,   205,    74,   152,   206,   154,   171,   155
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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
  if (yypact_value_is_default (yyn))
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

  case 21:

    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 22:

    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 23:

    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 24:

    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 25:

    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 26:

    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 27:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 28:

    { HANDLE_INTERACTIVE(); }
    break;

  case 33:

    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 34:

    { DO_TICKS(); }
    break;

  case 35:

    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 37:

    { zend_do_if_cond(&(yyvsp[(2) - (2)]), &(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 38:

    { zend_do_if_after_statement(&(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 39:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 40:

    { zend_do_if_cond(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 41:

    { zend_do_if_after_statement(&(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 42:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 43:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 44:

    { zend_do_while_cond(&(yyvsp[(3) - (3)]), &(yyval) TSRMLS_CC); }
    break;

  case 45:

    { zend_do_while_end(&(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 46:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 47:

    { (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 48:

    { zend_do_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]) TSRMLS_CC); }
    break;

  case 49:

    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:

    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 51:

    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 52:

    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 53:

    { zend_do_switch_cond(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 54:

    { zend_do_switch_end(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 55:

    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 56:

    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 57:

    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 58:

    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:

    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 60:

    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 61:

    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 62:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 66:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 67:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 69:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 70:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 71:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 72:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 73:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 74:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 75:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 76:

    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 78:

    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 79:

    { zend_do_bind_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 80:

    { zend_do_end_finally(&(yyvsp[(1) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(8) - (8)]) TSRMLS_CC); }
    break;

  case 81:

    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 82:

    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 83:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 84:

    { zend_initialize_try_catch_element(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 85:

    { zend_do_first_catch(&(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 86:

    { zend_do_begin_catch(&(yyvsp[(1) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(6) - (7)]), &(yyvsp[(2) - (7)]) TSRMLS_CC); }
    break;

  case 87:

    { zend_do_end_catch(&(yyvsp[(1) - (11)]) TSRMLS_CC); }
    break;

  case 88:

    { zend_do_mark_last_catch(&(yyvsp[(2) - (13)]), &(yyvsp[(13) - (13)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (13)]);}
    break;

  case 89:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 90:

    { zend_do_finally(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 91:

    { (yyval) = (yyvsp[(1) - (5)]); }
    break;

  case 92:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 93:

    { (yyval).u.op.opline_num = -1; }
    break;

  case 94:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 95:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 96:

    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 97:

    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 98:

    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 101:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 102:

    { DO_TICKS(); }
    break;

  case 103:

    { DO_TICKS(); }
    break;

  case 104:

    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 105:

    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 106:

    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 107:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 108:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 109:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 110:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 111:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 112:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 113:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 114:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 115:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 116:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 117:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 118:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 123:

    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 124:

    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 125:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 126:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 127:

    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 128:

    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 129:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 130:

    { (yyval) = (yyvsp[(1) - (5)]); (yyval).EA = ZEND_PARSED_LIST_EXPR; }
    break;

  case 137:

    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 138:

    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 139:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 140:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 141:

    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 142:

    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 143:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 144:

    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 145:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 146:

    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 147:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 153:

    { zend_do_if_cond(&(yyvsp[(3) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 154:

    { zend_do_if_after_statement(&(yyvsp[(2) - (5)]), 0 TSRMLS_CC); }
    break;

  case 156:

    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 157:

    { zend_do_if_after_statement(&(yyvsp[(2) - (6)]), 0 TSRMLS_CC); }
    break;

  case 164:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 165:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 166:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 167:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 168:

    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 169:

    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 170:

    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 171:

    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 172:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 173:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 174:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 175:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 176:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 177:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 178:

    { Z_LVAL((yyval).u.constant) = 1; zend_do_pass_param(&(yyvsp[(2) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 179:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 180:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 181:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 182:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 183:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 184:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 185:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 186:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 187:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 188:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 189:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 190:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 191:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 192:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 193:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 196:

    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 200:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 201:

    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 203:

    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 204:

    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 213:

    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 214:

    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 215:

    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 216:

    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 217:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 218:

    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 219:

    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 220:

    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 221:

    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 222:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 223:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 224:

    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 225:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 226:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 227:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 228:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 229:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 230:

    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 231:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 232:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 233:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 234:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 235:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 236:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 237:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 238:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 239:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 240:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 241:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 242:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 243:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 244:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 245:

    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 246:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 247:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 248:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 249:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 250:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 251:

    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 252:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 253:

    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 254:

    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 255:

    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 256:

    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 257:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 258:

    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 259:

    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 260:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 261:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 262:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 263:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 264:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 265:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 266:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 267:

    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 268:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 269:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 270:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 271:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 272:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 273:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 274:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 275:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 276:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 277:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 278:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 279:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 280:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 281:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 282:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 283:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 284:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 285:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 286:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 287:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 288:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 289:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 290:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 291:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 292:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 293:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 294:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 295:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 296:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 297:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 298:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 299:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 300:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 301:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 302:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 303:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 304:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 305:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 306:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 307:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 308:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 309:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 310:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 311:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 312:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 313:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 314:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 315:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 316:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 317:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 318:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 319:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 320:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 321:

    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 322:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 323:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 324:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 325:

    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 326:

    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 327:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 328:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 329:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 330:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 331:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 332:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 333:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 334:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 335:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 336:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 337:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 338:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 339:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 340:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 341:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 342:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 343:

    { zend_do_yield(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 344:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]).op_type, 0 TSRMLS_CC); }
    break;

  case 345:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (10)]); }
    break;

  case 346:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]).op_type, 1 TSRMLS_CC); }
    break;

  case 347:

    { zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (11)]); }
    break;

  case 348:

    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 0 TSRMLS_CC); }
    break;

  case 349:

    { zend_do_yield(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 350:

    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 0 TSRMLS_CC); }
    break;

  case 351:

    { zend_do_yield(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]), 1 TSRMLS_CC); }
    break;

  case 352:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 353:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 354:

    { (yyvsp[(1) - (4)]).EA = 0; zend_do_begin_variable_parse(TSRMLS_C); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 355:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 356:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 357:

    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 360:

    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 361:

    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 362:

    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 363:

    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 364:

    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 365:

    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 366:

    { (yyvsp[(1) - (3)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (3)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (3)]), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 367:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), 0, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 368:

    { (yyval).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (2)]), 0 TSRMLS_CC); }
    break;

  case 369:

    { zend_do_end_function_call(&(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), 0, (yyvsp[(3) - (4)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 370:

    { (yyval).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 371:

    { zend_do_end_function_call((yyvsp[(4) - (5)]).u.op.opline_num?NULL:&(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), (yyvsp[(4) - (5)]).u.op.opline_num, (yyvsp[(4) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 372:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 373:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 374:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 375:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 376:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (3)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 377:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(5) - (5)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 378:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 379:

    { zend_do_end_function_call(&(yyvsp[(1) - (3)]), &(yyval), &(yyvsp[(3) - (3)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 380:

    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 381:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 382:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 383:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 384:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 385:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 386:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 387:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 388:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 389:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 390:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 391:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 392:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 395:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 396:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 397:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 398:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 399:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 400:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 401:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 402:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 403:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 404:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 405:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 406:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 407:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 408:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 409:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 410:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 411:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 412:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 413:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 414:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 415:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 416:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 417:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 418:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 419:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 420:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 421:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 422:

    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 423:

    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 424:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 425:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 426:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 427:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 428:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 429:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 430:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 431:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 432:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 433:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 434:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 435:

    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 436:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 437:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 440:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 441:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 442:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 443:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 444:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 445:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 446:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 447:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 448:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 449:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 450:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 451:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 452:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 453:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 454:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 455:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 456:

    { (yyval).EA = 0; }
    break;

  case 457:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 458:

    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 459:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 460:

    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 461:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_begin_method_call(&(yyval) TSRMLS_CC); }
    break;

  case 462:

    { zend_do_end_function_call(&(yyvsp[(1) - (2)]), &(yyval), &(yyvsp[(2) - (2)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 463:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 464:

    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 465:

    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 466:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 467:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 468:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 469:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 470:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 471:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 472:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 473:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 474:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 475:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 476:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 477:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 478:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 479:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 480:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 481:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 482:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 483:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 484:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 485:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 486:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 487:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 488:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 489:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 490:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 491:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 492:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 493:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 494:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 495:

    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 496:

    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 499:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 500:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 501:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 502:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 503:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 504:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 505:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 506:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 507:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 508:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 509:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 510:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 511:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 512:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 513:

    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 514:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 515:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 516:

    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 517:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 518:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 519:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 520:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 521:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 522:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 523:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 524:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 525:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 526:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 527:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 528:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 529:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 530:

    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 531:

    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 532:

    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 533:

    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 534:

    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 535:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 536:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 537:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 538:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 539:

    { zend_error(E_COMPILE_ERROR, "Cannot use isset() on the result of an expression (you can use \"null !== expression\" instead)"); }
    break;

  case 540:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 541:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;



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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


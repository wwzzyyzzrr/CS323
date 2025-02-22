/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "pro_1.y"

#include "lex.yy.c"
#include "stdlib.h"
#include "stdio.h"
#include "node.hpp"
#include "queue"
#include "stack"
#include "iostream"
#include "string"
#include "vector"
#define YYSTYPE Node
using namespace std;
void yyerror(const char*); //必须要有
extern int yylex(void);
string addLine(string,int);

Node program;

#line 89 "pro_1.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PRO_1_TAB_H_INCLUDED
# define YY_YY_PRO_1_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    CHAR = 260,
    ID = 261,
    TYPE = 262,
    STRUCT = 263,
    IF = 264,
    ELSE = 265,
    WHILE = 266,
    RETURN = 267,
    DOT = 268,
    SEMI = 269,
    COMMA = 270,
    ASSIGN = 271,
    LT = 272,
    LE = 273,
    GT = 274,
    GE = 275,
    NE = 276,
    EQ = 277,
    PLUS = 278,
    MINUS = 279,
    MUL = 280,
    DIV = 281,
    AND = 282,
    OR = 283,
    NOT = 284,
    LP = 285,
    RP = 286,
    LB = 287,
    RB = 288,
    LC = 289,
    RC = 290,
    LEXERR = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PRO_1_TAB_H_INCLUDED  */



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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   351

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

#define YYUNDEFTOK  2
#define YYMAXUTOK   291

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    43,    52,    60,    65,    70,    80,    89,
      99,   105,   116,   124,   132,   146,   150,   159,   166,   173,
     177,   191,   195,   200,   212,   216,   227,   233,   242,   250,
     259,   264,   279,   288,   295,   300,   307,   313,   317,   327,
     340,   356,   371,   380,   388,   392,   403,   409,   420,   426,
     438,   442,   446,   450,   458,   462,   470,   478,   486,   494,
     502,   510,   518,   526,   534,   542,   550,   558,   566,   573,
     580,   589,   593,   601,   605,   614,   622,   626,   632,   638,
     644,   650,   656,   664
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "CHAR", "ID", "TYPE",
  "STRUCT", "IF", "ELSE", "WHILE", "RETURN", "DOT", "SEMI", "COMMA",
  "ASSIGN", "LT", "LE", "GT", "GE", "NE", "EQ", "PLUS", "MINUS", "MUL",
  "DIV", "AND", "OR", "NOT", "LP", "RP", "LB", "RB", "LC", "RC", "LEXERR",
  "$accept", "Program", "ExtDefList", "ExtDef", "ExtDecList", "Specifier",
  "StructSpecifier", "VarDec", "FunDec", "VarList", "ParamDec", "CompSt",
  "StmtList", "Stmt", "DefList", "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -81

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-81)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -81,    47,    11,   -81,     0,   101,   -81,   -17,   -16,
     -81,   -81,   -81,    14,   -81,    16,    74,   107,    20,     0,
       0,    77,    96,   -81,   -81,    75,    76,     0,   -81,    75,
      42,     0,    89,   -81,   -81,    75,    81,   127,   -81,   116,
     -81,   -81,   -81,   112,   114,   191,   290,   136,   -81,   -81,
     -81,   120,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
     132,   149,   153,   129,   129,   129,   129,   154,   -81,    12,
     114,    44,   129,   -81,   -81,    75,   -81,    19,   129,   129,
      73,   312,   128,   150,   125,   -81,   -81,   -81,   -81,   100,
     -81,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   256,   -81,   -81,   -81,
     172,   109,   193,   214,   -81,   -81,   -81,   -81,   115,   -81,
     -81,   256,   310,   310,   310,   310,   310,   310,   312,   312,
     128,   128,   296,   276,   235,   256,   129,   -81,   -81,   114,
     114,   -81,   -81,   -81,   -81,   147,   -81,   114,   -81
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    12,     0,     0,     2,     4,     0,    13,    16,    17,
       1,     3,     6,    18,     8,    19,     0,    10,     0,    43,
      43,     0,     0,     5,     7,     0,     0,    43,     9,     0,
       0,    43,     0,    21,    25,     0,     0,    28,    26,     0,
      18,    19,    11,     0,    33,    48,     0,    46,    14,    42,
      15,    29,    22,    23,     0,    24,    20,    78,    79,    80,
      77,     0,     0,     0,     0,     0,     0,    81,    36,     0,
      33,     0,     0,    44,    45,     0,    27,     0,     0,     0,
       0,    68,    69,     0,     0,    30,    31,    32,    34,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    47,    51,    72,
      83,     0,     0,     0,    37,    38,    67,    73,     0,    75,
      76,    53,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    55,    56,     0,    54,     0,    50,    70,     0,
       0,    52,    71,    74,    82,    39,    41,     0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   175,   -81,   176,     5,   -81,   -23,   -81,    -3,
     -81,   184,   133,   -26,   320,   -81,   130,   -81,   -63,   -80
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    16,    29,     7,    17,    18,    36,
      37,    68,    69,    70,    30,    31,    46,    47,    71,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      80,    81,    82,    83,   118,     6,    45,     1,     2,   106,
       6,    10,    51,    85,   110,   112,   113,    19,    20,    39,
     108,   110,    57,    58,    59,    60,    35,    35,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    64,    21,    88,    22,    86,    65,    66,
     109,    76,    45,     8,    27,    67,   144,    89,    90,    35,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   110,   114,    23,   104,    48,    33,    43,
     105,    40,    52,     9,     1,     2,    89,   115,    24,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    12,     1,     2,   104,   119,    13,    34,   105,
     137,    41,    53,   145,   146,    14,   141,    57,    58,    59,
      60,   148,    25,    61,    50,    62,    63,    38,    57,    58,
      59,    60,    57,    58,    59,    60,   120,    15,    64,    26,
     138,    89,    54,    65,    66,    56,   142,    55,    27,    64,
      67,    75,    26,    64,    65,    66,   117,   147,    65,    66,
     104,    67,    77,    89,   105,    67,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    78,
      11,   116,   104,    79,    84,    89,   105,   136,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    42,    28,    87,   104,   107,    89,    72,   105,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,    26,   139,   104,     0,    89,     0,   105,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,     0,     0,   140,   104,     0,    89,     0,
     105,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,     0,     0,   104,   143,    89,
       0,   105,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,     0,     0,   104,    89,
       0,    73,   105,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    74,     0,     0,     0,   104,    89,
       0,     0,   105,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    89,     0,    89,     0,     0,   104,     0,
       0,     0,   105,    98,    99,   100,   101,   100,   101,     0,
      32,     0,   104,     0,   104,     0,   105,    44,   105,     0,
       0,    49
};

static const yytype_int16 yycheck[] =
{
      63,    64,    65,    66,    84,     0,    29,     7,     8,    72,
       5,     0,    35,     1,    77,    78,    79,    34,    34,    22,
       1,    84,     3,     4,     5,     6,    21,    22,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    24,    30,     1,    30,    35,    29,    30,
      31,    54,    75,     6,    34,    36,   136,    13,    14,    54,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   136,     1,     1,    32,    35,     1,     3,
      36,     6,     1,    36,     7,     8,    13,    14,    14,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     1,     7,     8,    32,     6,     6,    31,    36,
       1,    36,    31,   139,   140,    14,     1,     3,     4,     5,
       6,   147,    15,     9,    35,    11,    12,    31,     3,     4,
       5,     6,     3,     4,     5,     6,    36,    36,    24,    32,
      31,    13,    15,    29,    30,    33,    31,    31,    34,    24,
      36,    15,    32,    24,    29,    30,    31,    10,    29,    30,
      32,    36,    30,    13,    36,    36,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    30,
       5,    31,    32,    30,    30,    13,    36,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    25,    18,    70,    32,    75,    13,    16,    36,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    32,    31,    32,    -1,    13,    -1,    36,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    31,    32,    -1,    13,    -1,
      36,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    32,    33,    13,
      -1,    36,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    13,
      -1,     1,    36,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    14,    -1,    -1,    -1,    32,    13,
      -1,    -1,    36,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    13,    -1,    13,    -1,    -1,    32,    -1,
      -1,    -1,    36,    23,    24,    25,    26,    25,    26,    -1,
      20,    -1,    32,    -1,    32,    -1,    36,    27,    36,    -1,
      -1,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    38,    39,    40,    42,    43,     6,    36,
       0,    39,     1,     6,    14,    36,    41,    44,    45,    34,
      34,    30,    30,     1,    14,    15,    32,    34,    48,    42,
      51,    52,    51,     1,    31,    42,    46,    47,    31,    46,
       6,    36,    41,     3,    51,    44,    53,    54,    35,    51,
      35,    44,     1,    31,    15,    31,    33,     3,     4,     5,
       6,     9,    11,    12,    24,    29,    30,    36,    48,    49,
      50,    55,    16,     1,    14,    15,    46,    30,    30,    30,
      55,    55,    55,    55,    30,     1,    35,    49,     1,    13,
      14,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    32,    36,    55,    53,     1,    31,
      55,    56,    55,    55,     1,    14,    31,    31,    56,     6,
      36,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    15,     1,    31,    31,
      31,     1,    31,    33,    56,    50,    50,    10,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    40,    40,
      41,    41,    42,    42,    43,    43,    43,    43,    44,    44,
      44,    45,    45,    45,    45,    45,    45,    46,    46,    47,
      48,    48,    49,    49,    50,    50,    50,    50,    50,    50,
      50,    50,    51,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    56,    56
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     2,     3,     2,     3,
       1,     3,     1,     1,     5,     5,     2,     2,     1,     1,
       4,     3,     4,     4,     4,     3,     3,     3,     1,     2,
       4,     4,     2,     0,     2,     2,     1,     3,     3,     5,
       7,     5,     2,     0,     3,     3,     1,     3,     1,     3,
       4,     3,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       4,     4,     3,     3,     4,     3,     3,     1,     1,     1,
       1,     1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 37 "pro_1.y"
    {
        program.show = addLine("Program", (yyloc).first_line);
        program.subNode.push_back(yyvsp[0]);
    }
#line 1511 "pro_1.tab.c"
    break;

  case 3:
#line 43 "pro_1.y"
    {
        Node temp; 
        temp.subNode.push_back(yyvsp[-1]);
        if (! yyvsp[0].subNode.empty())
            temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("ExtDefList", (yyloc).first_line);
        yyval = temp;
    }
#line 1524 "pro_1.tab.c"
    break;

  case 4:
#line 52 "pro_1.y"
    {
        Node temp; 
        temp.show = addLine("ExtDefList", (yyloc).first_line);
        yyval = temp;
    }
#line 1534 "pro_1.tab.c"
    break;

  case 5:
#line 60 "pro_1.y"
    {
        string e = "Error type B at Line "+to_string((yyloc).first_line)+": Missing semicolon \';\'";
        errList.push_back(e);
    }
#line 1543 "pro_1.tab.c"
    break;

  case 6:
#line 65 "pro_1.y"
    {
        string e = "Error type B at Line "+to_string((yyloc).first_line)+": Missing semicolon \';\'";
        errList.push_back(e);
    }
#line 1552 "pro_1.tab.c"
    break;

  case 7:
#line 70 "pro_1.y"
    {
        Node temp;
        Node semi;
        semi.show = "SEMI";
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(semi);
        temp.show = addLine("ExtDef", (yyloc).first_line);
        yyval = temp;
    }
#line 1567 "pro_1.tab.c"
    break;

  case 8:
#line 80 "pro_1.y"
    {
        Node temp;
        Node semi;
        semi.show = "SEMI";
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(semi);
        temp.show = addLine("ExtDef", (yyloc).first_line);
        yyval = temp;
    }
#line 1581 "pro_1.tab.c"
    break;

  case 9:
#line 89 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("ExtDef", (yyloc).first_line);
        yyval = temp;
    }
#line 1594 "pro_1.tab.c"
    break;

  case 10:
#line 99 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("ExtDecList", (yyloc).first_line);
        yyval = temp;
    }
#line 1605 "pro_1.tab.c"
    break;

  case 11:
#line 105 "pro_1.y"
    {
        Node temp;
        Node comma;
        temp.subNode.push_back(yyvsp[-2]);
        comma.show = "COMMA";
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("ExtDecList", (yyloc).first_line);
        yyval = temp;
    }
#line 1619 "pro_1.tab.c"
    break;

  case 12:
#line 116 "pro_1.y"
    {
        Node temp;
        Node type;
        type.show = "TYPE: "+yyvsp[0].show;
        temp.subNode.push_back(type);
        temp.show = addLine("Specifier", (yyloc).first_line);
        yyval = temp;
    }
#line 1632 "pro_1.tab.c"
    break;

  case 13:
#line 124 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Specifier", (yyloc).first_line);
        yyval = temp;
    }
#line 1643 "pro_1.tab.c"
    break;

  case 14:
#line 132 "pro_1.y"
    {
        Node temp, struc, id, lc, rc;
        struc.show = "STRUCT";
        id.show = "ID: "+yyvsp[-3].show;
        lc.show = "LC";
        rc.show = "RC";
        temp.subNode.push_back(struc);
        temp.subNode.push_back(id);
        temp.subNode.push_back(lc);
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(rc);
        temp.show = addLine("StructSpecifier", (yyloc).first_line);
        yyval = temp;
    }
#line 1662 "pro_1.tab.c"
    break;

  case 15:
#line 146 "pro_1.y"
    {
        string e = "Error type A at Line "+to_string((yyloc).first_line)+": unknown lexeme "+yyvsp[-3].show;
        errList.push_back(e);
    }
#line 1671 "pro_1.tab.c"
    break;

  case 16:
#line 150 "pro_1.y"
    {
        Node temp, struc, id;
        struc.show = "STRUCT";
        id.show = "ID: "+yyvsp[0].show;
        temp.subNode.push_back(struc);
        temp.subNode.push_back(id);
        temp.show = addLine("StructSpecifier", (yyloc).first_line);
        yyval = temp;
    }
#line 1685 "pro_1.tab.c"
    break;

  case 17:
#line 159 "pro_1.y"
    {
        string e = "Error type A at Line "+to_string((yyloc).first_line)+": unknown lexeme "+yyvsp[0].show;
        errList.push_back(e);
    }
#line 1694 "pro_1.tab.c"
    break;

  case 18:
#line 166 "pro_1.y"
    {
        Node temp, id;
        id.show = "ID: "+yyvsp[0].show;
        temp.subNode.push_back(id);
        temp.show = addLine("VarDec", (yyloc).first_line);
        yyval = temp;
    }
#line 1706 "pro_1.tab.c"
    break;

  case 19:
#line 173 "pro_1.y"
    {
        string e = "Error type A at Line "+to_string((yyloc).first_line)+": unknown lexeme "+yyvsp[0].show;
        errList.push_back(e);
    }
#line 1715 "pro_1.tab.c"
    break;

  case 20:
#line 177 "pro_1.y"
    {
        Node temp, lb, i, rb;
        lb.show = "LB";
        rb.show = "RB";
        i.show = "INT: "+yyvsp[-1].show;
        temp.subNode.push_back(yyvsp[-3]);
        temp.subNode.push_back(lb);
        temp.subNode.push_back(i);
        temp.subNode.push_back(rb);
        temp.show = addLine("VarDec", (yyloc).first_line);
        yyval = temp;
    }
#line 1732 "pro_1.tab.c"
    break;

  case 21:
#line 191 "pro_1.y"
    {
        string e = "Error type B at Line "+to_string((yyloc).first_line)+": Missing Right Parentheses \')\'";
        errList.push_back(e);
    }
#line 1741 "pro_1.tab.c"
    break;

  case 22:
#line 195 "pro_1.y"
    {
        string e = "Error type B at Line "+to_string((yyloc).first_line)+": Missing Right Parentheses \')\'";
        errList.push_back(e);
    }
#line 1750 "pro_1.tab.c"
    break;

  case 23:
#line 200 "pro_1.y"
    {
        Node temp, id, lp, rp;
        id.show = "ID: "+yyvsp[-3].show;
        lp.show = "LP";
        rp.show = "RP";
        temp.subNode.push_back(id);
        temp.subNode.push_back(lp);
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(rp);
        temp.show = addLine("FunDec", (yyloc).first_line);
        yyval = temp;
    }
#line 1767 "pro_1.tab.c"
    break;

  case 24:
#line 212 "pro_1.y"
    {
        string e = "Error type A at Line "+to_string((yyloc).first_line)+": unknown lexeme "+yyvsp[-3].show;
        errList.push_back(e);
    }
#line 1776 "pro_1.tab.c"
    break;

  case 25:
#line 216 "pro_1.y"
    {
        Node temp, id, lp, rp;
        id.show = "ID: "+yyvsp[-2].show;
        lp.show = "LP";
        rp.show = "RP";
        temp.subNode.push_back(id);
        temp.subNode.push_back(lp);
        temp.subNode.push_back(rp);
        temp.show = addLine("FunDec", (yyloc).first_line);
        yyval = temp;
    }
#line 1792 "pro_1.tab.c"
    break;

  case 26:
#line 227 "pro_1.y"
    {
        string e = "Error type A at Line "+to_string((yyloc).first_line)+": unknown lexeme "+yyvsp[-2].show;
        errList.push_back(e);
    }
#line 1801 "pro_1.tab.c"
    break;

  case 27:
#line 233 "pro_1.y"
    {
        Node temp, comma;
        comma.show ="COMMA";
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(comma);
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("VarList", (yyloc).first_line);
        yyval = temp;
    }
#line 1815 "pro_1.tab.c"
    break;

  case 28:
#line 242 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("VarList", (yyloc).first_line);
        yyval = temp;
    }
#line 1826 "pro_1.tab.c"
    break;

  case 29:
#line 250 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("ParamDec", (yyloc).first_line);
        yyval = temp;
    }
#line 1838 "pro_1.tab.c"
    break;

  case 30:
#line 259 "pro_1.y"
    {
        string e = "Error type B at Line "+to_string((yyloc).first_line)+": Missing Right Curly Braces \'}\'";
        errList.push_back(e);
    }
#line 1847 "pro_1.tab.c"
    break;

  case 31:
#line 264 "pro_1.y"
    {
        Node temp, lc, rc;
        lc.show = "LC";
        rc.show = "RC";
        temp.subNode.push_back(lc);
        if (! yyvsp[-2].subNode.empty())
            temp.subNode.push_back(yyvsp[-2]);
        if (! yyvsp[-1].subNode.empty())
            temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(rc);
        temp.show = addLine("CompSt", (yyloc).first_line);
        yyval = temp;
    }
#line 1865 "pro_1.tab.c"
    break;

  case 32:
#line 279 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-1]);
        if (! yyvsp[0].subNode.empty())
            temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("StmtList", (yyloc).first_line);
        yyval = temp;
    }
#line 1878 "pro_1.tab.c"
    break;

  case 33:
#line 288 "pro_1.y"
    {
        Node temp;
        temp.show = addLine("StmtList", (yyloc).first_line);
        yyval = temp;
    }
#line 1888 "pro_1.tab.c"
    break;

  case 34:
#line 295 "pro_1.y"
    {
        string e = "Error type B at Line "+to_string((yyloc).first_line)+": Missing semicolon \';\'";
        errList.push_back(e);
    }
#line 1897 "pro_1.tab.c"
    break;

  case 35:
#line 300 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(createNode("SEMI"));
        temp.show = addLine("Stmt", (yyloc).first_line);
        yyval = temp;
    }
#line 1909 "pro_1.tab.c"
    break;

  case 36:
#line 307 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Stmt", (yyloc).first_line);
        yyval = temp;
    }
#line 1920 "pro_1.tab.c"
    break;

  case 37:
#line 313 "pro_1.y"
    {
        string e = "Error type B at Line "+to_string((yyloc).first_line)+": Missing semicolon \';\'";
        errList.push_back(e);
    }
#line 1929 "pro_1.tab.c"
    break;

  case 38:
#line 317 "pro_1.y"
    {
        Node temp, ret, semi;
        ret.show = "RETURN";
        semi.show = "SEMI";
        temp.subNode.push_back(ret);
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(semi);
        temp.show = addLine("Stmt", (yyloc).first_line);
        yyval = temp;
    }
#line 1944 "pro_1.tab.c"
    break;

  case 39:
#line 327 "pro_1.y"
    {
        Node temp, i, lp, rp;
        i.show = "IF";
        lp.show = "LP";
        rp.show = "RP";
        temp.subNode.push_back(i);
        temp.subNode.push_back(lp);
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(rp);
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Stmt", (yyloc).first_line);
        yyval = temp;
    }
#line 1962 "pro_1.tab.c"
    break;

  case 40:
#line 340 "pro_1.y"
    {
        Node temp, i, lp, rp, e;
        i.show = "IF";
        lp.show = "LP";
        rp.show = "RP";
        e.show = "ELSE";
        temp.subNode.push_back(i);
        temp.subNode.push_back(lp);
        temp.subNode.push_back(yyvsp[-4]);
        temp.subNode.push_back(rp);
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(e);
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Stmt", (yyloc).first_line);
        yyval = temp;
    }
#line 1983 "pro_1.tab.c"
    break;

  case 41:
#line 356 "pro_1.y"
    {
        Node temp, w, lp, rp;
        w.show = "WHILE";
        lp.show = "LP";
        rp.show = "RP";
        temp.subNode.push_back(w);
        temp.subNode.push_back(lp);
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(rp);
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Stmt", (yyloc).first_line);
        yyval = temp;
    }
#line 2001 "pro_1.tab.c"
    break;

  case 42:
#line 371 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-1]);
        if (! yyvsp[0].subNode.empty())
            temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("DefList", (yyloc).first_line);
        yyval = temp;
    }
#line 2014 "pro_1.tab.c"
    break;

  case 43:
#line 380 "pro_1.y"
    {
        Node temp;
        temp.show = addLine("DefList", (yyloc).first_line);
        yyval = temp;
    }
#line 2024 "pro_1.tab.c"
    break;

  case 44:
#line 388 "pro_1.y"
    {
        string e = "Error type B at Line "+to_string((yyloc).first_line)+": Missing semicolon \';\'";
        errList.push_back(e);
    }
#line 2033 "pro_1.tab.c"
    break;

  case 45:
#line 392 "pro_1.y"
    {
        Node temp, semi;
        semi.show = "SEMI";
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(semi);
        temp.show = addLine("Def", (yyloc).first_line);
        yyval = temp;
    }
#line 2047 "pro_1.tab.c"
    break;

  case 46:
#line 403 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("DecList", (yyloc).first_line);
        yyval = temp;
    }
#line 2058 "pro_1.tab.c"
    break;

  case 47:
#line 409 "pro_1.y"
    {
        Node temp, comma;
        comma.show= "COMMA";
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(comma);
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("DecList", (yyloc).first_line);
        yyval = temp;
    }
#line 2072 "pro_1.tab.c"
    break;

  case 48:
#line 420 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Dec", (yyloc).first_line);
        yyval = temp;
    }
#line 2083 "pro_1.tab.c"
    break;

  case 49:
#line 426 "pro_1.y"
    {
        Node temp, assign;
        assign.show = "ASSIGN";
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(assign);
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Dec", (yyloc).first_line);
        yyval = temp;
    }
#line 2097 "pro_1.tab.c"
    break;

  case 50:
#line 438 "pro_1.y"
    {
        string e = "Error type B at Line "+to_string((yyloc).first_line)+": Missing Right Parentheses \')\'";
        errList.push_back(e);
    }
#line 2106 "pro_1.tab.c"
    break;

  case 51:
#line 442 "pro_1.y"
    {
        string e = "Error type B at Line "+to_string((yyloc).first_line)+": Missing Right Parentheses \')\'";
        errList.push_back(e);
    }
#line 2115 "pro_1.tab.c"
    break;

  case 52:
#line 446 "pro_1.y"
    {
        string e = "Error type A at Line "+to_string((yyloc).first_line)+": unknown lexeme "+yyvsp[-3].show;
        errList.push_back(e);
    }
#line 2124 "pro_1.tab.c"
    break;

  case 53:
#line 450 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("ASSIGN"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2137 "pro_1.tab.c"
    break;

  case 54:
#line 458 "pro_1.y"
    {
        string e = "Error type A at Line "+to_string((yyloc).first_line)+": unknown lexeme "+yyvsp[-1].show;
        errList.push_back(e);
    }
#line 2146 "pro_1.tab.c"
    break;

  case 55:
#line 462 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("AND"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2159 "pro_1.tab.c"
    break;

  case 56:
#line 470 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("OR"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2172 "pro_1.tab.c"
    break;

  case 57:
#line 478 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("LT"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2185 "pro_1.tab.c"
    break;

  case 58:
#line 486 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("LE"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2198 "pro_1.tab.c"
    break;

  case 59:
#line 494 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("GT"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2211 "pro_1.tab.c"
    break;

  case 60:
#line 502 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("GE"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2224 "pro_1.tab.c"
    break;

  case 61:
#line 510 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("NE"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2237 "pro_1.tab.c"
    break;

  case 62:
#line 518 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);cout<<yytext<<endl;
        temp.subNode.push_back(createNode("EQ"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2250 "pro_1.tab.c"
    break;

  case 63:
#line 526 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("PLUS"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2263 "pro_1.tab.c"
    break;

  case 64:
#line 534 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("MINUS"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2276 "pro_1.tab.c"
    break;

  case 65:
#line 542 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("MUL"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2289 "pro_1.tab.c"
    break;

  case 66:
#line 550 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("DIV"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2302 "pro_1.tab.c"
    break;

  case 67:
#line 558 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(createNode("LP"));
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(createNode("RP"));
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2315 "pro_1.tab.c"
    break;

  case 68:
#line 566 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(createNode("MINUS"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2327 "pro_1.tab.c"
    break;

  case 69:
#line 573 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(createNode("NOT"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2339 "pro_1.tab.c"
    break;

  case 70:
#line 580 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(createNode("ID: "+yyvsp[-3].show));
        temp.subNode.push_back(createNode("LP"));
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(createNode("RP"));
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2353 "pro_1.tab.c"
    break;

  case 71:
#line 589 "pro_1.y"
    {
        string e = "Error type A at Line "+to_string((yyloc).first_line)+": unknown lexeme "+yyvsp[-3].show;
        errList.push_back(e);
    }
#line 2362 "pro_1.tab.c"
    break;

  case 72:
#line 593 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(createNode("ID: "+yyvsp[-2].show));
        temp.subNode.push_back(createNode("LP"));
        temp.subNode.push_back(createNode("RP"));
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2375 "pro_1.tab.c"
    break;

  case 73:
#line 601 "pro_1.y"
    {
        string e = "Error type A at Line "+to_string((yyloc).first_line)+": unknown lexeme "+yyvsp[-2].show;
        errList.push_back(e);
    }
#line 2384 "pro_1.tab.c"
    break;

  case 74:
#line 605 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-3]);
        temp.subNode.push_back(createNode("LB"));
        temp.subNode.push_back(yyvsp[-1]);
        temp.subNode.push_back(createNode("RB"));
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2398 "pro_1.tab.c"
    break;

  case 75:
#line 614 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("DOT"));
        temp.subNode.push_back(createNode("ID: "+yyvsp[0].show));
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2411 "pro_1.tab.c"
    break;

  case 76:
#line 622 "pro_1.y"
    {
        string e = "Error type A at Line "+to_string((yyloc).first_line)+": unknown lexeme "+yyvsp[0].show;
        errList.push_back(e);
    }
#line 2420 "pro_1.tab.c"
    break;

  case 77:
#line 626 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(createNode("ID: "+yyvsp[0].show));
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2431 "pro_1.tab.c"
    break;

  case 78:
#line 632 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(createNode("INT: "+yyvsp[0].show));
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2442 "pro_1.tab.c"
    break;

  case 79:
#line 638 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(createNode("FLOAT: "+yyvsp[0].show));
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2453 "pro_1.tab.c"
    break;

  case 80:
#line 644 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(createNode("CHAR: "+yyvsp[0].show));
        temp.show = addLine("Exp", (yyloc).first_line);
        yyval = temp;
    }
#line 2464 "pro_1.tab.c"
    break;

  case 81:
#line 650 "pro_1.y"
    {
        string e = "Error type A at Line "+to_string((yyloc).first_line)+": unknown lexeme "+yyvsp[0].show;
        errList.push_back(e);
    }
#line 2473 "pro_1.tab.c"
    break;

  case 82:
#line 656 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[-2]);
        temp.subNode.push_back(createNode("COMMA"));
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Args", (yyloc).first_line);
        yyval = temp;
    }
#line 2486 "pro_1.tab.c"
    break;

  case 83:
#line 664 "pro_1.y"
    {
        Node temp;
        temp.subNode.push_back(yyvsp[0]);
        temp.show = addLine("Args", (yyloc).first_line);
        yyval = temp;
    }
#line 2497 "pro_1.tab.c"
    break;


#line 2501 "pro_1.tab.c"

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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
#line 671 "pro_1.y"

 
 
void yyerror(const char *s){
    // fprintf(stderr, "%s\n", s);
}

void errOut(){
    int size = errList.size();
    for (int i=0;i<size;i++){
        cout<<errList[i]<<endl;
    }
}

void output(Node node, int num){
    int size = node.subNode.size();
    string tab(num,' ');
    cout<<tab<<node.show<<endl; 
    for (int i=0;i<size;i++){
        output(node.subNode[i],num+2);
    }
      
}

string addLine(string s, int line){
    return s+" ("+to_string(line)+")";
}

int main(){
    yyparse();
    if (errList.empty())
        output(program,0);
    else
        errOut();

}


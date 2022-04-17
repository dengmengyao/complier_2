/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 1 "src/parser.y" /* yacc.c:316  */

    #include <iostream>
    #include <assert.h>
    #include "parser.h"
    extern Ast ast;
    int yylex();
    int yyerror( char const * );

#line 72 "src/parser.cpp" /* yacc.c:316  */



/* Copy the first part of user declarations.  */

#line 78 "src/parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_INCLUDE_PARSER_H_INCLUDED
# define YY_YY_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 10 "src/parser.y" /* yacc.c:355  */

    #include "Ast.h"
    #include "SymbolTable.h"
    #include "Type.h"

#line 114 "src/parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    INTEGER = 259,
    FOR = 260,
    WHILE = 261,
    BREAK = 262,
    CONTINUE = 263,
    PUTINT = 264,
    PUTCH = 265,
    GETCH = 266,
    GETINT = 267,
    IF = 268,
    ELSE = 269,
    NOD = 270,
    INT = 271,
    VOID = 272,
    CONST = 273,
    LPAREN = 274,
    RPAREN = 275,
    LBRACE = 276,
    RBRACE = 277,
    SEMICOLON = 278,
    LB = 279,
    RB = 280,
    MUL = 281,
    DIV = 282,
    COMOP = 283,
    ADD = 284,
    SUB = 285,
    OR = 286,
    AND = 287,
    NOT = 288,
    LESS = 289,
    MORE = 290,
    RELGEQ = 291,
    RELLEQ = 292,
    EQUOP = 293,
    UEQUOP = 294,
    ASSIGN = 295,
    RETURN = 296,
    THEN = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "src/parser.y" /* yacc.c:355  */

    int itype;
    char* strtype;
    StmtNode* stmttype;
    ExprNode* exprtype;
    Type* type;
    Id* idtype;
    Explist* exprline;

#line 179 "src/parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INCLUDE_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 196 "src/parser.cpp" /* yacc.c:358  */

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
# elif ! defined YYSIZE_T
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    52,    53,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      76,    84,    94,   110,   114,   118,   127,   126,   136,   141,
     144,   150,   156,   162,   168,   174,   180,   184,   189,   192,
     197,   199,   215,   219,   223,   228,   231,   237,   243,   251,
     253,   259,   265,   273,   275,   281,   289,   291,   297,   303,
     309,   315,   321,   329,   331,   339,   341,   348,   351,   357,
     363,   370,   380,   386,   390,   396,   403,   410,   410,   432,
     439,   446,   447,   451
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INTEGER", "FOR", "WHILE", "BREAK",
  "CONTINUE", "PUTINT", "PUTCH", "GETCH", "GETINT", "IF", "ELSE", "NOD",
  "INT", "VOID", "CONST", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "SEMICOLON", "LB", "RB", "MUL", "DIV", "COMOP", "ADD", "SUB", "OR",
  "AND", "NOT", "LESS", "MORE", "RELGEQ", "RELLEQ", "EQUOP", "UEQUOP",
  "ASSIGN", "RETURN", "THEN", "$accept", "Stmts", "Stmt", "AssignStmt",
  "BlockStmt", "IfStmt", "ExpStmt", "ReturnStmt", "DeclStmt", "DeclStmts",
  "FuncDef", "ConstStmt", "WhileStmt", "BreakStmt", "ContinueStmt",
  "putintStmt", "putchStmt", "semicolonStmt", "Exp", "AddExp", "Cond",
  "LnotExp", "LOrExp", "PrimaryExp", "LVal", "RelExp", "LAndExp", "MulExp",
  "Type", "constType", "IDlist", "PARAMLIST", "PARAMLISTs", "Explist",
  "Program", "$@1", "$@2", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

#define YYPACT_NINF -68

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-68)))

#define YYTABLE_NINF -78

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      78,    22,   -68,    33,   -14,    32,    54,    56,    74,   -68,
     -68,   -68,    50,    35,   -68,    50,    50,    50,    50,    78,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,    -8,    75,   -68,    79,
     -68,    66,   111,    80,    44,   112,   100,   117,    50,    50,
     -68,   -68,    28,    28,    50,   -13,   -68,   -68,    78,   -68,
     -68,   -68,    95,    -8,   -68,    50,    50,   -68,    50,   110,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      -7,    12,    19,   121,   -68,    79,    29,   105,   107,   108,
     114,   -68,     7,   -68,    44,    44,    80,   113,   116,   115,
      -8,    -8,    -8,    -8,    -8,    -8,   111,   -68,   -68,   -68,
      50,   118,   127,   -68,   128,   -68,    96,    23,    50,   -68,
      78,   119,   129,    78,   -68,   131,   133,   -68,   -68,    61,
     -68,   101,   -68,    79,   -68,   -68,   -68,   140,   132,   134,
     153,   -68,    30,    50,    78,   -68,   -68,   -68,   142,   138,
     -68,   -68,   157,   -68,   -68
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    22,    39,     0,     0,     0,     0,     0,     0,    67,
      68,    69,     0,    26,    83,     0,     0,     0,     0,     2,
       3,     5,     6,     7,    11,    12,    13,    14,    16,    15,
       8,     9,    10,    17,    18,    19,    56,     0,    49,    37,
      45,    38,    63,    65,    53,     0,     0,     0,    44,     0,
      32,    33,     0,     0,     0,     0,    38,    28,     0,    46,
      47,    48,     0,    36,     4,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     1,    42,     0,     0,     0,     0,
       0,    40,     0,    34,    54,    55,    66,     0,     0,     0,
      57,    58,    59,    60,    61,    62,    64,    50,    51,    52,
       0,     0,     0,    73,     0,    74,     0,     0,     0,    41,
       0,     0,     0,     0,    27,     0,     0,    25,    70,    82,
      21,     0,    72,    43,    31,    75,    76,    29,     0,     0,
       0,    81,     0,     0,     0,    24,    23,    79,     0,     0,
      71,    30,     0,    78,    80
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   103,   -18,   -68,    13,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -67,   -10,
       2,   -11,    -9,    37,     0,    87,    97,    38,   -68,   -68,
     -68,   -68,    81,   -68,   -68,   -68,   -68
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    62,    36,
      37,    38,    39,    40,    56,    42,    43,    44,    45,    46,
      81,   142,    82,    86,    47,    58,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    64,    99,    55,    59,    60,    61,    91,    63,    50,
       1,     2,   -77,     3,     4,     5,     6,     7,    68,    41,
       8,    65,    66,     9,    10,    11,    12,   112,    13,   124,
      14,     1,     2,   110,   114,   113,    15,    16,   114,    85,
      17,    48,   115,   128,   118,   148,   132,    12,    18,   119,
     149,    87,    49,     1,     2,    51,    90,    57,    41,    63,
     100,   101,   102,   103,   104,   105,   107,   108,   109,    12,
      77,    78,    79,    52,    64,    53,   150,   140,   141,    15,
      16,     1,     2,    17,     3,     4,     5,     6,     7,    88,
      89,     8,    41,    54,     9,    10,    11,    12,    67,    13,
      63,    14,   134,    94,    95,   137,    69,    15,    16,   133,
      68,    17,    76,     1,     2,    80,    83,    84,    93,    18,
      41,    97,    98,    41,   116,   120,   151,   121,   122,    12,
     130,   131,   125,    63,   123,   126,   110,   129,   127,    15,
      16,   143,   135,    17,    41,    70,    71,    72,    73,    74,
      75,   138,   136,   139,   144,   145,   147,   146,   152,    13,
     154,    92,   153,   106,   117,    96
};

static const yytype_uint8 yycheck[] =
{
       0,    19,    69,    12,    15,    16,    17,    20,    18,    23,
       3,     4,    19,     6,     7,     8,     9,    10,    31,    19,
      13,    29,    30,    16,    17,    18,    19,    15,    21,    22,
      23,     3,     4,    40,    15,    23,    29,    30,    15,    48,
      33,    19,    23,   110,    15,    15,    23,    19,    41,    20,
      20,    49,    19,     3,     4,    23,    54,    22,    58,    69,
      70,    71,    72,    73,    74,    75,    77,    78,    79,    19,
      26,    27,    28,    19,    92,    19,   143,    16,    17,    29,
      30,     3,     4,    33,     6,     7,     8,     9,    10,    52,
      53,    13,    92,    19,    16,    17,    18,    19,    23,    21,
     110,    23,   120,    65,    66,   123,    40,    29,    30,   118,
      31,    33,    32,     3,     4,     3,    16,     0,    23,    41,
     120,    11,    12,   123,     3,    20,   144,    20,    20,    19,
       3,     3,    19,   143,    20,    19,    40,    19,    23,    29,
      30,    40,    23,    33,   144,    34,    35,    36,    37,    38,
      39,    20,    23,    20,    14,    23,     3,    23,    16,    21,
       3,    58,   149,    76,    83,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,     9,    10,    13,    16,
      17,    18,    19,    21,    23,    29,    30,    33,    41,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    77,    19,    19,
      23,    23,    19,    19,    19,    65,    67,    22,    78,    64,
      64,    64,    61,    62,    45,    29,    30,    23,    31,    40,
      34,    35,    36,    37,    38,    39,    32,    26,    27,    28,
       3,    73,    75,    16,     0,    65,    76,    63,    66,    66,
      63,    20,    44,    23,    70,    70,    69,    11,    12,    61,
      62,    62,    62,    62,    62,    62,    68,    64,    64,    64,
      40,    79,    15,    23,    15,    23,     3,    75,    15,    20,
      20,    20,    20,    20,    22,    19,    19,    23,    61,    19,
       3,     3,    23,    65,    45,    23,    23,    45,    20,    20,
      16,    17,    74,    40,    14,    23,    23,     3,    15,    20,
      61,    45,    16,    47,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    77,    44,    44,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      73,    73,    67,    46,    46,    46,    78,    47,    47,    48,
      48,    55,    56,    57,    50,    49,    61,    63,    66,    66,
      66,    66,    76,    76,    76,    64,    64,    64,    64,    70,
      70,    70,    70,    62,    62,    62,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    65,    65,    71,    71,    72,
      75,    75,    54,    51,    52,    58,    59,    79,    53,    74,
      74,    74,    74,    60
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     6,     6,     4,     0,     4,     2,     5,
       7,     5,     2,     2,     3,     2,     1,     1,     1,     1,
       3,     4,     1,     3,     0,     1,     2,     2,     2,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     1,     3,     1,     1,     1,
       3,     5,     4,     3,     3,     5,     5,     0,     7,     2,
       4,     1,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        case 2:
#line 46 "src/parser.y" /* yacc.c:1646  */
    {
        ast.setRoot((yyvsp[0].stmttype));
    }
#line 1388 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 52 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1394 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 53 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new SeqNode((yyvsp[-1].stmttype), (yyvsp[0].stmttype));
    }
#line 1402 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 58 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1408 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 59 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1414 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 60 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1420 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 61 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1426 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 62 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1432 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1438 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 64 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1444 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1450 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 66 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1456 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 67 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1462 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 68 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1468 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 69 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1474 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 70 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1480 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 71 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1486 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 72 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1492 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 76 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        (yyval.idtype) = new Id(se);
        delete [](yyvsp[0].strtype);
    }
#line 1504 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 84 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        (yyval.idtype) = new Id((yyvsp[-2].idtype), se);
        delete [](yyvsp[0].strtype);
    }
#line 1516 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[0].strtype));
        if(se == nullptr)
        {
            fprintf(stderr, "identifier \"%s\" is undefined\n", (char*)(yyvsp[0].strtype));
            delete [](char*)(yyvsp[0].strtype);
            assert(se != nullptr);
        }
        (yyval.exprtype) = new Id(se);
        delete [](yyvsp[0].strtype);
    }
#line 1533 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 110 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new AssignintStmt((yyvsp[-5].exprtype));
    }
#line 1541 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new AssignchStmt((yyvsp[-5].exprtype));
    }
#line 1549 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 118 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new AssignStmt((yyvsp[-3].exprtype), (yyvsp[-1].exprtype));
    }
#line 1557 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 127 "src/parser.y" /* yacc.c:1646  */
    {identifiers = new SymbolTable(identifiers);}
#line 1563 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 129 "src/parser.y" /* yacc.c:1646  */
    {
            (yyval.stmttype) = new CompoundStmt((yyvsp[-1].stmttype));
            SymbolTable *top = identifiers;
            identifiers = identifiers->getPrev();
            delete top;
        }
#line 1574 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 136 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new CompoundStmt;
    }
#line 1582 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 141 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new IfStmt((yyvsp[-2].exprtype), (yyvsp[0].stmttype));
    }
#line 1590 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 144 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new IfElseStmt((yyvsp[-4].exprtype), (yyvsp[-2].stmttype), (yyvsp[0].stmttype));
    }
#line 1598 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 150 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new WhileStmt((yyvsp[-2].exprtype), (yyvsp[0].stmttype));
    }
#line 1606 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 156 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new BreakStmt;
    }
#line 1614 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 162 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new ContinueStmt;
    }
#line 1622 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 168 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new ReturnStmt((yyvsp[-1].exprtype));
    }
#line 1630 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 174 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new ExpStmt((yyvsp[-1].exprtype));  
    }
#line 1638 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 180 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1644 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 184 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1650 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 189 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.exprtype) = (yyvsp[0].exprtype);
    }
#line 1658 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 192 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new ConstantSymbolEntry(TypeSystem::intType, (yyvsp[0].itype));
        (yyval.exprtype) = new Constant(se);
    }
#line 1667 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 197 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprtype) = (yyvsp[-1].exprtype);}
#line 1673 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 199 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[-3].strtype));
        if(se == nullptr)
        {
            fprintf(stderr, "identifier \"%s\" is undefined\n", (char*)(yyvsp[-3].strtype));
            delete [](char*)(yyvsp[-3].strtype);
            assert(se != nullptr);
        }
        (yyval.exprtype)=new Id(se,(yyvsp[-1].exprline));
        delete [](yyvsp[-3].strtype);
    }
#line 1690 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 215 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprline) = new Explist(se,(yyvsp[0].exprtype));
    }
#line 1699 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 219 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprline) = new Explist(se,(yyvsp[-2].exprline),(yyvsp[0].exprtype));
    }
#line 1708 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 223 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprline) = NULL;}
#line 1714 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 228 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1720 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 232 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr0(se, BinaryExpr0::ADD, (yyvsp[0].exprtype));
    }
#line 1729 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 238 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr0(se, BinaryExpr0::SUB, (yyvsp[0].exprtype));
    }
#line 1738 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 244 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr0(se, BinaryExpr0::NOT, (yyvsp[0].exprtype));
    }
#line 1747 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 251 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1753 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 254 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MUL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1762 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 260 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::DIV, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1771 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 266 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::COMOP, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1780 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 273 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1786 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 276 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::ADD, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1795 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 282 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::SUB, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1804 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 289 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1810 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 292 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::LESS, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1819 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 298 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MORE, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1828 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 304 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::RELGEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1837 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 310 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::RELLEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1846 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 316 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::EQUOP, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1855 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 322 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::UEQUOP, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1864 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 329 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1870 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 332 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::AND, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1879 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 339 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1885 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 342 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::OR, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1894 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 348 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.type) = TypeSystem::intType;
    }
#line 1902 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 351 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.type) = TypeSystem::voidType;
    }
#line 1910 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 357 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.type) = TypeSystem::constType;
    }
#line 1918 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 363 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        (yyval.idtype) = new Id(se,(yyvsp[0].exprtype));
        delete [](yyvsp[-2].strtype);
    }
#line 1930 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 370 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[-2].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[-2].strtype), se);
        (yyval.idtype) = new Id((yyvsp[-4].idtype),se,(yyvsp[0].exprtype));
        delete [](yyvsp[-2].strtype);
    }
#line 1942 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 380 "src/parser.y" /* yacc.c:1646  */
    {
       (yyval.stmttype)=new ConstStmt((yyvsp[-1].idtype));
    }
#line 1950 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 386 "src/parser.y" /* yacc.c:1646  */
    {(yyval.stmttype) = new DeclStmt((yyvsp[-1].idtype));}
#line 1956 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 390 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new DeclStmt((yyvsp[-1].idtype));
    }
#line 1964 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 397 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new putintStmt((yyvsp[-2].exprtype));
    }
#line 1972 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 404 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype) = new putchStmt((yyvsp[-2].exprtype));
    }
#line 1980 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 410 "src/parser.y" /* yacc.c:1646  */
    {
        Type *funcType;
        funcType = new FunctionType((yyvsp[-1].type),{});
        SymbolEntry *se = new IdentifierSymbolEntry(funcType, (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        identifiers = new SymbolTable(identifiers);
    }
#line 1992 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 419 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[-5].strtype));
        assert(se != nullptr);
        (yyval.stmttype) = new FunctionDef(se, (yyvsp[-2].idtype), (yyvsp[0].stmttype));
        SymbolTable *top = identifiers;
        identifiers = identifiers->getPrev();
        delete top;
        delete [](yyvsp[-5].strtype);
    }
#line 2007 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 432 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        (yyval.idtype) = new Id(se);
        delete [](yyvsp[0].strtype);
    }
#line 2019 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 439 "src/parser.y" /* yacc.c:1646  */
    {
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        (yyval.idtype) = new Id((yyvsp[-3].idtype), se);
        delete [](yyvsp[0].strtype);
    }
#line 2031 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 446 "src/parser.y" /* yacc.c:1646  */
    {(yyval.idtype) = NULL;}
#line 2037 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 447 "src/parser.y" /* yacc.c:1646  */
    {(yyval.idtype) = NULL;}
#line 2043 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 451 "src/parser.y" /* yacc.c:1646  */
    {
        (yyval.stmttype)=new semicolonStmt;
    }
#line 2051 "src/parser.cpp" /* yacc.c:1646  */
    break;


#line 2055 "src/parser.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

yyreturn:
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
  return yyresult;
}
#line 455 "src/parser.y" /* yacc.c:1906  */


int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    return -1;
}

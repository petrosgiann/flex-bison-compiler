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
#line 1 "syntax.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

extern FILE *yyin;
extern int yylex();
extern char *yytext;

extern void yyerror(const char* err);
extern void yyterminate();
extern int lineno, 
           line_init;
           
#define MAX_IDS 100

extern char str_buf[256]; 

int tnum1;
int tnum2;
int flag=0;
char id[15];
char button[15]="";
int tmp1=0;
int tmp2=0;






#line 105 "syntax.tab.c"

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

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_LINEAR_LAYOUT = 3,            /* "linear_layout"  */
  YYSYMBOL_T_LINEAR_LAYOUT_END = 4,        /* "linear_layout_end"  */
  YYSYMBOL_T_RELATIVE_LAYOUT = 5,          /* "relative_layout"  */
  YYSYMBOL_T_RELATIVE_LAYOUT_END = 6,      /* "relative_layout_end"  */
  YYSYMBOL_T_TEXTVIEW = 7,                 /* "textview"  */
  YYSYMBOL_T_TEXTVIEW_END = 8,             /* "textview_end"  */
  YYSYMBOL_T_IMAGEVIEW = 9,                /* "imageview"  */
  YYSYMBOL_T_IMAGEVIEW_END = 10,           /* "imageview_end"  */
  YYSYMBOL_T_BUTTON = 11,                  /* "button"  */
  YYSYMBOL_T_BUTTON_END = 12,              /* "button_end"  */
  YYSYMBOL_T_RADIOBUTTON = 13,             /* "radiobutton"  */
  YYSYMBOL_T_RADIOBUTTON_END = 14,         /* "radiobutton_end"  */
  YYSYMBOL_T_RADIOGROUP = 15,              /* "radiogroup"  */
  YYSYMBOL_T_RADIOGROUP_END = 16,          /* "radiogroup_end"  */
  YYSYMBOL_T_PROGRESSBAR = 17,             /* "progressbar"  */
  YYSYMBOL_T_PROGRESSBAR_END = 18,         /* "progressbar_end"  */
  YYSYMBOL_T_AN_WIDTH = 19,                /* "an_width"  */
  YYSYMBOL_T_AN_HEIGHT = 20,               /* "an_height"  */
  YYSYMBOL_T_AN_ORIENTATION = 21,          /* "an_orientation"  */
  YYSYMBOL_T_AN_ID = 22,                   /* "an_id"  */
  YYSYMBOL_T_AN_TEXT = 23,                 /* "an_text"  */
  YYSYMBOL_T_AN_SRC = 24,                  /* "an_src"  */
  YYSYMBOL_T_AN_PADDING = 25,              /* "an_padding"  */
  YYSYMBOL_T_AN_CHECKED_BUTTON = 26,       /* "an_checked_button"  */
  YYSYMBOL_T_AN_TEXT_COLOR = 27,           /* "an_text_color"  */
  YYSYMBOL_T_AN_MAX = 28,                  /* "an_max"  */
  YYSYMBOL_T_AN_PROGRESS = 29,             /* "an_progress"  */
  YYSYMBOL_T_EQUAL = 30,                   /* "equal"  */
  YYSYMBOL_T_END_SYMBOL = 31,              /* "end_symbol"  */
  YYSYMBOL_T_RANDOM_WORD = 32,             /* "random_word"  */
  YYSYMBOL_T_NUMBER = 33,                  /* "positive number"  */
  YYSYMBOL_T_SYMBOL = 34,                  /* "symbol"  */
  YYSYMBOL_T_STRING = 35,                  /* "string"  */
  YYSYMBOL_T_BIG = 36,                     /* "t_big"  */
  YYSYMBOL_T_NEGATIVE = 37,                /* "negative number"  */
  YYSYMBOL_T_MP = 38,                      /* "match_parent"  */
  YYSYMBOL_T_WC = 39,                      /* "wrap_content"  */
  YYSYMBOL_T_AN_RB = 40,                   /* "t_an_rb"  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_root = 42,                      /* root  */
  YYSYMBOL_linear_layout = 43,             /* linear_layout  */
  YYSYMBOL_relative_layout = 44,           /* relative_layout  */
  YYSYMBOL_attribute = 45,                 /* attribute  */
  YYSYMBOL_layout_value = 46,              /* layout_value  */
  YYSYMBOL_th_number = 47,                 /* th_number  */
  YYSYMBOL_linear_layout_attributes = 48,  /* linear_layout_attributes  */
  YYSYMBOL_relative_layout_attributes = 49, /* relative_layout_attributes  */
  YYSYMBOL_linear_layout_optional_attributes = 50, /* linear_layout_optional_attributes  */
  YYSYMBOL_relative_layout_optional_attributes = 51, /* relative_layout_optional_attributes  */
  YYSYMBOL_element = 52,                   /* element  */
  YYSYMBOL_relative_element_list = 53,     /* relative_element_list  */
  YYSYMBOL_linear_element_list = 54,       /* linear_element_list  */
  YYSYMBOL_text_view = 55,                 /* text_view  */
  YYSYMBOL_text_view_attributes = 56,      /* text_view_attributes  */
  YYSYMBOL_text_view_standart_attributes = 57, /* text_view_standart_attributes  */
  YYSYMBOL_text_view_optional_attributes = 58, /* text_view_optional_attributes  */
  YYSYMBOL_image_view = 59,                /* image_view  */
  YYSYMBOL_image_view_attributes = 60,     /* image_view_attributes  */
  YYSYMBOL_image_view_standart_attributes = 61, /* image_view_standart_attributes  */
  YYSYMBOL_image_view_optional_attributes = 62, /* image_view_optional_attributes  */
  YYSYMBOL_button = 63,                    /* button  */
  YYSYMBOL_button_attributes = 64,         /* button_attributes  */
  YYSYMBOL_button_standart_attributes = 65, /* button_standart_attributes  */
  YYSYMBOL_button_optional_attributes = 66, /* button_optional_attributes  */
  YYSYMBOL_radio_group = 67,               /* radio_group  */
  YYSYMBOL_radio_group_attributes = 68,    /* radio_group_attributes  */
  YYSYMBOL_radio_group_standart_attributes = 69, /* radio_group_standart_attributes  */
  YYSYMBOL_70_1 = 70,                      /* $@1  */
  YYSYMBOL_radio_group_optional_attributes = 71, /* radio_group_optional_attributes  */
  YYSYMBOL_72_2 = 72,                      /* $@2  */
  YYSYMBOL_73_3 = 73,                      /* $@3  */
  YYSYMBOL_radio_buttons = 74,             /* radio_buttons  */
  YYSYMBOL_radio_button = 75,              /* radio_button  */
  YYSYMBOL_radio_button_attributes = 76,   /* radio_button_attributes  */
  YYSYMBOL_radio_button_standart_attributes = 77, /* radio_button_standart_attributes  */
  YYSYMBOL_radio_button_optional_attributes = 78, /* radio_button_optional_attributes  */
  YYSYMBOL_79_4 = 79,                      /* $@4  */
  YYSYMBOL_progress_bar = 80,              /* progress_bar  */
  YYSYMBOL_progress_bar_attributes = 81,   /* progress_bar_attributes  */
  YYSYMBOL_progress_bar_optional_attributes = 82, /* progress_bar_optional_attributes  */
  YYSYMBOL_83_5 = 83,                      /* $@5  */
  YYSYMBOL_84_6 = 84,                      /* $@6  */
  YYSYMBOL_85_7 = 85,                      /* $@7  */
  YYSYMBOL_86_8 = 86,                      /* $@8  */
  YYSYMBOL_87_9 = 87,                      /* $@9  */
  YYSYMBOL_88_10 = 88,                     /* $@10  */
  YYSYMBOL_89_11 = 89,                     /* $@11  */
  YYSYMBOL_90_12 = 90                      /* $@12  */
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
typedef yytype_int16 yy_state_t;

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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   287

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  281

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    92,    92,    93,    95,    96,    99,   101,   103,   103,
     103,   105,   107,   107,   109,   109,   111,   111,   112,   112,
     114,   118,   119,   120,   121,   122,   123,   124,   125,   128,
     128,   128,   130,   130,   137,   139,   140,   141,   143,   145,
     145,   146,   147,   151,   153,   153,   155,   157,   157,   158,
     159,   164,   166,   166,   168,   170,   170,   171,   172,   177,
     177,   179,   179,   181,   181,   183,   183,   183,   184,   184,
     188,   188,   208,   211,   212,   213,   215,   218,   217,   238,
     240,   240,   244,   244,   244,   255,   255,   255,   265,   265,
     265,   277,   277,   277
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"linear_layout\"",
  "\"linear_layout_end\"", "\"relative_layout\"",
  "\"relative_layout_end\"", "\"textview\"", "\"textview_end\"",
  "\"imageview\"", "\"imageview_end\"", "\"button\"", "\"button_end\"",
  "\"radiobutton\"", "\"radiobutton_end\"", "\"radiogroup\"",
  "\"radiogroup_end\"", "\"progressbar\"", "\"progressbar_end\"",
  "\"an_width\"", "\"an_height\"", "\"an_orientation\"", "\"an_id\"",
  "\"an_text\"", "\"an_src\"", "\"an_padding\"", "\"an_checked_button\"",
  "\"an_text_color\"", "\"an_max\"", "\"an_progress\"", "\"equal\"",
  "\"end_symbol\"", "\"random_word\"", "\"positive number\"", "\"symbol\"",
  "\"string\"", "\"t_big\"", "\"negative number\"", "\"match_parent\"",
  "\"wrap_content\"", "\"t_an_rb\"", "$accept", "root", "linear_layout",
  "relative_layout", "attribute", "layout_value", "th_number",
  "linear_layout_attributes", "relative_layout_attributes",
  "linear_layout_optional_attributes",
  "relative_layout_optional_attributes", "element",
  "relative_element_list", "linear_element_list", "text_view",
  "text_view_attributes", "text_view_standart_attributes",
  "text_view_optional_attributes", "image_view", "image_view_attributes",
  "image_view_standart_attributes", "image_view_optional_attributes",
  "button", "button_attributes", "button_standart_attributes",
  "button_optional_attributes", "radio_group", "radio_group_attributes",
  "radio_group_standart_attributes", "$@1",
  "radio_group_optional_attributes", "$@2", "$@3", "radio_buttons",
  "radio_button", "radio_button_attributes",
  "radio_button_standart_attributes", "radio_button_optional_attributes",
  "$@4", "progress_bar", "progress_bar_attributes",
  "progress_bar_optional_attributes", "$@5", "$@6", "$@7", "$@8", "$@9",
  "$@10", "$@11", "$@12", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-20)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      53,    -4,    -4,    29,   -20,    32,    38,    28,    48,    36,
     -20,   -11,    41,    43,   -20,    46,    45,   -20,    46,    47,
     -20,   -20,    54,   -20,    42,    49,    -4,    -4,    -4,    -4,
      -4,    -4,   -20,   -20,    44,   -20,     7,   -20,   -20,   -20,
     -20,   -20,    50,   -20,    51,   -20,    46,    52,    57,    55,
      56,    58,   -18,    61,    60,    64,    59,    65,    37,    62,
      -9,    66,    69,    70,    67,    78,   -20,    74,   -20,   -20,
      68,    73,   -20,   -20,   -11,    71,    72,    46,    77,    79,
      80,     3,    81,   -20,    82,   -19,   -20,    83,    23,   -20,
      84,    17,    75,    85,    86,    87,   -20,   -20,    88,    89,
     -20,   -20,   -20,    90,   -20,   -20,    96,    98,    35,    91,
      92,    93,   -20,   -20,    94,    99,   100,   -20,    97,   102,
     103,   -20,   101,   104,   106,   -20,    -4,   -14,   105,   107,
     108,    76,   109,   -20,   110,   113,   -20,   111,   112,   114,
     115,   117,   118,   119,   121,   122,   120,   123,   124,    75,
     -20,   -20,   125,   126,   128,   -20,   129,   130,   131,   132,
     133,   134,   135,   127,   137,   138,   136,   140,   -20,   139,
     141,   -20,   143,   -20,   -20,   144,   -20,   145,   146,   148,
     -20,   116,   -20,   149,   150,   -20,   151,   152,   153,   154,
     -20,    40,   155,   156,   -20,   157,   158,   163,   164,    95,
     160,   170,   174,   -20,   171,   165,   168,   172,   175,   173,
     -20,   -20,   166,   169,   176,   177,   178,   179,   180,   -20,
     181,   182,   183,   184,   185,   186,   188,   189,   190,   191,
     192,   194,   195,   196,   197,   198,   199,   201,   200,   203,
     202,   204,   -20,   -20,   205,   207,   -20,   -20,   208,   209,
     210,   211,   -20,   212,   213,   -20,   -20,   -20,   -20,   -20,
     -20,   214,   220,   222,   217,   218,   -20,   187,   223,   -20,
     -20,   221,   224,   226,   227,   -20,   -20,   228,   229,   -20,
     -20
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     2,     0,    13,     0,    15,     0,
       1,     0,     0,     0,    12,     0,     0,    14,     0,     0,
       8,     9,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    27,     0,    32,     0,    21,    22,    23,
      24,    26,     0,    25,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,     0,     0,    75,     0,     5,    27,    33,    72,
       0,    28,    29,    11,     0,     0,     0,    31,     0,     0,
       0,    37,     0,    34,     0,    45,    43,     0,    53,    51,
       0,    62,     0,     0,     0,     0,    80,    79,     0,     0,
      73,    74,     4,     0,     3,     7,    17,    16,     0,     0,
       0,     0,    35,    36,     0,     0,     0,    44,     0,     0,
       0,    52,     0,     0,     0,    61,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
      60,    59,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,     0,
       0,    71,     0,    85,    88,     0,    76,     0,     0,    39,
      38,    40,    46,     0,     0,    54,     0,     0,     0,     0,
      66,     0,     0,     0,    78,     0,     0,     0,     0,    47,
      48,    55,    56,    64,    65,     0,     0,     0,     0,     0,
      19,    18,     0,     0,     0,     0,     0,     0,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,    91,     0,     0,    41,    42,     0,     0,
       0,     0,    68,     0,     0,    86,    89,    49,    50,    57,
      58,     0,     0,     0,     0,     0,    69,     0,     0,    87,
      90,     0,     0,     0,     0,    83,    92,     0,     0,    84,
      93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -20,   -20,     1,   193,     6,    34,   -20,   -20,   215,   -20,
     -20,   -15,    25,   -20,   -20,   -20,    39,   206,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -12,    19,   -20,   147,   216,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,    32,    33,    34,    22,    23,     7,     9,    14,
      17,    45,    46,    36,    37,    53,    81,    82,    38,    55,
      85,   117,    39,    57,    88,   121,    40,    59,    91,   188,
     125,   205,   261,   127,    41,    42,    64,    65,   175,    43,
      61,    96,   253,   277,   192,   264,   193,   265,   254,   278
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,     4,   150,   115,    78,    79,   116,     6,     8,    80,
       1,    66,    26,    93,    27,     5,    28,   151,    29,    94,
      95,    68,    30,    19,    31,    78,     5,    20,    21,    10,
      80,    72,     8,    52,    54,    56,    58,    60,     1,   123,
      26,   136,    27,   124,    28,   119,    29,    71,   120,     1,
      30,    26,    31,    27,     5,    28,     1,    29,     2,    12,
      13,    30,    11,    31,    15,     5,    62,    63,   206,   207,
      16,    24,    18,    25,    48,    44,    49,    90,   102,   104,
      47,    69,    87,    50,    84,    70,    73,    74,   126,    62,
      75,    76,    83,    72,    77,    86,    89,    97,    92,    98,
      99,    63,   108,   103,    79,   106,   107,   109,   105,   110,
     111,   155,   114,   118,   122,   128,   129,   130,   134,   135,
     214,   113,   131,   132,   133,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   147,   146,   148,   171,   198,   152,
     157,   153,   154,   158,   156,   149,   159,   160,     0,   161,
     162,   163,   164,   168,   165,   166,   167,   169,   170,   173,
     172,   174,   183,   176,   177,   178,   179,   180,   181,   182,
     184,   186,   185,   187,   189,   197,   190,   191,   194,     0,
     195,   196,   215,   199,   200,   201,   202,   203,   204,   208,
     209,   210,   211,   212,   213,   216,   217,   218,   220,   219,
     224,   223,   221,   225,   222,     0,   226,   227,   228,   229,
     230,     0,   101,   233,   234,   231,   232,   271,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,    67,
     244,   245,   246,   247,   248,   249,   250,   251,   255,   252,
     256,    51,   257,   258,   259,   260,   262,   263,   266,   267,
     268,   269,   270,   272,     0,   273,     0,     0,   274,   275,
     276,     0,   279,   280,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
      15,     0,    16,    22,    22,    23,    25,     1,     2,    27,
       3,     4,     5,    22,     7,    19,     9,    31,    11,    28,
      29,    36,    15,    34,    17,    22,    19,    38,    39,     0,
      27,    46,    26,    27,    28,    29,    30,    31,     3,    22,
       5,     6,     7,    26,     9,    22,    11,    46,    25,     3,
      15,     5,    17,     7,    19,     9,     3,    11,     5,    21,
      22,    15,    30,    17,    36,    19,    22,    23,    28,    29,
      22,    30,    36,    30,    20,    30,    34,    40,     4,     6,
      33,    31,    23,    34,    24,    34,    34,    30,    13,    22,
      35,    35,    31,   108,    36,    31,    31,    31,    36,    30,
      30,    23,    77,    35,    23,    34,    34,    30,    74,    30,
      30,    35,    30,    30,    30,    30,    30,    30,    22,    21,
      25,    82,    34,    34,    34,    34,    34,    34,    34,    30,
      30,    34,    30,    30,    30,    34,    30,   149,    22,    34,
      30,    34,    34,    30,    35,   126,    35,    35,    -1,    35,
      35,    34,    34,    33,    35,    34,    34,    34,    34,    33,
      35,    33,    35,    34,    34,    34,    34,    34,    34,    34,
      33,    35,    34,    33,    35,    27,    35,    34,    34,    -1,
      35,    35,    22,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    30,    30,    25,    22,    26,    30,    34,
      34,    28,    30,    34,    29,    -1,    30,    30,    30,    30,
      30,    -1,    65,    30,    30,    34,    34,    30,    -1,    -1,
      35,    35,    34,    34,    34,    34,    34,    33,    33,    36,
      34,    34,    34,    34,    33,    35,    33,    35,    33,    35,
      33,    26,    34,    34,    34,    34,    34,    34,    34,    29,
      28,    34,    34,    30,    -1,    34,    -1,    -1,    34,    33,
      33,    -1,    34,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    81
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,    42,    43,    19,    45,    48,    45,    49,
       0,    30,    21,    22,    50,    36,    22,    51,    36,    34,
      38,    39,    46,    47,    30,    30,     5,     7,     9,    11,
      15,    17,    43,    44,    45,    52,    54,    55,    59,    63,
      67,    75,    76,    80,    30,    52,    53,    33,    20,    34,
      34,    49,    45,    56,    45,    60,    45,    64,    45,    68,
      45,    81,    22,    23,    77,    78,     4,    44,    52,    31,
      34,    43,    52,    34,    30,    35,    35,    36,    22,    23,
      27,    57,    58,    31,    24,    61,    31,    23,    65,    31,
      40,    69,    36,    22,    28,    29,    82,    31,    30,    30,
      78,    77,     4,    35,     6,    46,    34,    34,    53,    30,
      30,    30,    58,    57,    30,    22,    25,    62,    30,    22,
      25,    66,    30,    22,    26,    71,    13,    74,    30,    30,
      30,    34,    34,    34,    22,    21,     6,    34,    34,    34,
      34,    30,    30,    34,    30,    30,    34,    30,    30,    75,
      16,    31,    34,    34,    34,    35,    35,    30,    30,    35,
      35,    35,    35,    34,    34,    35,    34,    34,    33,    34,
      34,    74,    35,    33,    33,    79,    34,    34,    34,    34,
      34,    34,    34,    35,    33,    34,    35,    33,    70,    35,
      35,    34,    85,    87,    34,    35,    35,    27,    22,    34,
      34,    34,    34,    34,    34,    72,    28,    29,    34,    34,
      34,    34,    30,    30,    25,    22,    25,    22,    26,    34,
      30,    30,    29,    28,    34,    34,    30,    30,    30,    30,
      30,    34,    34,    30,    30,    35,    35,    34,    34,    34,
      34,    34,    33,    33,    34,    34,    34,    34,    33,    35,
      33,    35,    35,    83,    89,    33,    33,    34,    34,    34,
      34,    73,    34,    34,    86,    88,    34,    29,    28,    34,
      34,    30,    30,    34,    34,    33,    33,    84,    90,    34,
      34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    43,    43,    44,    45,    46,    46,
      46,    47,    48,    48,    49,    49,    50,    50,    50,    50,
      51,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      53,    53,    54,    54,    55,    56,    56,    56,    57,    58,
      58,    58,    58,    59,    60,    60,    61,    62,    62,    62,
      62,    63,    64,    64,    65,    66,    66,    66,    66,    67,
      67,    68,    68,    70,    69,    71,    72,    71,    73,    71,
      74,    74,    75,    76,    76,    76,    77,    79,    78,    80,
      81,    81,    83,    84,    82,    85,    86,    82,    87,    88,
      82,    89,    90,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     6,     6,     5,     5,     6,     1,     1,
       1,     3,     2,     1,     2,     1,     5,     5,    10,    10,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     0,     1,     2,     3,     3,     3,     2,     5,     5,
       5,    10,    10,     3,     3,     2,     5,     5,     5,    10,
      10,     3,     3,     2,     5,     5,     5,    10,    10,     5,
       5,     3,     2,     0,     6,     5,     0,     6,     0,    11,
       2,     3,     2,     3,     3,     2,     5,     0,     6,     3,
       2,     1,     0,     0,    17,     0,     0,    12,     0,     0,
      12,     0,     0,    17
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* root: linear_layout  */
#line 92 "syntax.y"
                    {printf("\n\nParsed Successfully!🔥 \n");}
#line 1644 "syntax.tab.c"
    break;

  case 3: /* root: "relative_layout" relative_layout_attributes "t_big" relative_element_list linear_layout "relative_layout_end"  */
#line 93 "syntax.y"
                                                                                                               {printf("\n\nParsed Successfully!🔥 \n");}
#line 1650 "syntax.tab.c"
    break;

  case 4: /* linear_layout: "linear_layout" linear_layout_attributes "t_big" linear_element_list relative_layout "linear_layout_end"  */
#line 95 "syntax.y"
                                                                                                                         { printf("LinearLayout parsed.\n"); }
#line 1656 "syntax.tab.c"
    break;

  case 5: /* linear_layout: "linear_layout" linear_layout_attributes "t_big" linear_element_list "linear_layout_end"  */
#line 96 "syntax.y"
                                                                                                         { printf("LinearLayout parsed.\n"); }
#line 1662 "syntax.tab.c"
    break;

  case 6: /* relative_layout: "relative_layout" relative_layout_attributes "t_big" relative_element_list "relative_layout_end"  */
#line 99 "syntax.y"
                                                                                                                 { printf("RelativeLayout parsed.\n"); }
#line 1668 "syntax.tab.c"
    break;

  case 21: /* element: text_view  */
#line 118 "syntax.y"
                   { printf("TextView parsed.\n"); }
#line 1674 "syntax.tab.c"
    break;

  case 22: /* element: image_view  */
#line 119 "syntax.y"
                     { printf("ImageView parsed.\n"); }
#line 1680 "syntax.tab.c"
    break;

  case 23: /* element: button  */
#line 120 "syntax.y"
                 { printf("Button parsed.\n"); }
#line 1686 "syntax.tab.c"
    break;

  case 24: /* element: radio_group  */
#line 121 "syntax.y"
                      { printf("RadioGroup parsed.\n"); }
#line 1692 "syntax.tab.c"
    break;

  case 25: /* element: progress_bar  */
#line 122 "syntax.y"
                       { printf("ProgressBar parsed.\n"); }
#line 1698 "syntax.tab.c"
    break;

  case 31: /* relative_element_list: %empty  */
#line 128 "syntax.y"
                                                                       {}
#line 1704 "syntax.tab.c"
    break;

  case 63: /* $@1: %empty  */
#line 181 "syntax.y"
                                                                    {tmp2=atoi(yytext);}
#line 1710 "syntax.tab.c"
    break;

  case 66: /* $@2: %empty  */
#line 183 "syntax.y"
                                                                                                                            {strcpy(button,yytext);}
#line 1716 "syntax.tab.c"
    break;

  case 68: /* $@3: %empty  */
#line 184 "syntax.y"
                                                                                          {strcpy(button,yytext);}
#line 1722 "syntax.tab.c"
    break;

  case 71: /* radio_buttons: "radiobutton" radio_button radio_buttons  */
#line 190 "syntax.y"
{
if(flag==0 && button[0]!='\0')
{   yyerror("Invalid checkedButton value\n");
    exit(1);

}

if(tmp1!=tmp2)
{
     yyerror("Invalid RadioButtonNumber value\n");
    exit(1);

}
}
#line 1741 "syntax.tab.c"
    break;

  case 72: /* radio_button: radio_button_attributes "end_symbol"  */
#line 208 "syntax.y"
                                     {tmp1++;}
#line 1747 "syntax.tab.c"
    break;

  case 77: /* $@4: %empty  */
#line 218 "syntax.y"
{strcpy(id,yytext);
if(strcmp(id,button)==0)
    flag=1;
}
#line 1756 "syntax.tab.c"
    break;

  case 82: /* $@5: %empty  */
#line 244 "syntax.y"
                                                                              {tnum1=atoi(yytext);}
#line 1762 "syntax.tab.c"
    break;

  case 83: /* $@6: %empty  */
#line 244 "syntax.y"
                                                                                                                                                      { tnum2=atoi(yytext);}
#line 1768 "syntax.tab.c"
    break;

  case 84: /* progress_bar_optional_attributes: "an_id" "equal" "symbol" "string" "symbol" "an_max" "equal" "symbol" "positive number" $@5 "symbol" "an_progress" "equal" "symbol" "positive number" $@6 "symbol"  */
#line 245 "syntax.y"
{
        if (tnum1 >= tnum2) {
            printf("");
        } else  {
            yyerror("Invalid progress value\n");
            exit(1);
        }

}
#line 1782 "syntax.tab.c"
    break;

  case 85: /* $@7: %empty  */
#line 255 "syntax.y"
                                    {tnum1=atoi(yytext);}
#line 1788 "syntax.tab.c"
    break;

  case 86: /* $@8: %empty  */
#line 255 "syntax.y"
                                                                                                            { tnum2=atoi(yytext);}
#line 1794 "syntax.tab.c"
    break;

  case 87: /* progress_bar_optional_attributes: "an_max" "equal" "symbol" "positive number" $@7 "symbol" "an_progress" "equal" "symbol" "positive number" $@8 "symbol"  */
#line 256 "syntax.y"
{
        if (tnum1 >= tnum2) {
            printf("");
        } else  {
            yyerror("Invalid progress value\n");
            exit(1);
        }

}
#line 1808 "syntax.tab.c"
    break;

  case 88: /* $@9: %empty  */
#line 265 "syntax.y"
                                         { tnum2=atoi(yytext);}
#line 1814 "syntax.tab.c"
    break;

  case 89: /* $@10: %empty  */
#line 265 "syntax.y"
                                                                                                             {tnum1=atoi(yytext);}
#line 1820 "syntax.tab.c"
    break;

  case 90: /* progress_bar_optional_attributes: "an_progress" "equal" "symbol" "positive number" $@9 "symbol" "an_max" "equal" "symbol" "positive number" $@10 "symbol"  */
#line 268 "syntax.y"
{
        if (tnum1 >= tnum2) {
            printf("");
        } else  {
            yyerror("Invalid progress value\n");
            exit(1);
        }

}
#line 1834 "syntax.tab.c"
    break;

  case 91: /* $@11: %empty  */
#line 277 "syntax.y"
                                                                                    { tnum2=atoi(yytext);}
#line 1840 "syntax.tab.c"
    break;

  case 92: /* $@12: %empty  */
#line 277 "syntax.y"
                                                                                                                                                        {tnum1=atoi(yytext);}
#line 1846 "syntax.tab.c"
    break;

  case 93: /* progress_bar_optional_attributes: "an_id" "equal" "symbol" "string" "symbol" "an_progress" "equal" "symbol" "positive number" $@11 "symbol" "an_max" "equal" "symbol" "positive number" $@12 "symbol"  */
#line 280 "syntax.y"
{
        if (tnum1 >= tnum2) {
            printf("");
        } else  {
            yyerror("Invalid progress value\n");
            exit(1);
        }

}
#line 1860 "syntax.tab.c"
    break;


#line 1864 "syntax.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 300 "syntax.y"


int main ( int argc, char **argv  )
  {

  yyin = fopen( argv[1], "r" );
  yyparse ();

  return 0;
}


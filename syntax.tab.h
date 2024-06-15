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

#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
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
    T_LINEAR_LAYOUT = 258,         /* "linear_layout"  */
    T_LINEAR_LAYOUT_END = 259,     /* "linear_layout_end"  */
    T_RELATIVE_LAYOUT = 260,       /* "relative_layout"  */
    T_RELATIVE_LAYOUT_END = 261,   /* "relative_layout_end"  */
    T_TEXTVIEW = 262,              /* "textview"  */
    T_TEXTVIEW_END = 263,          /* "textview_end"  */
    T_IMAGEVIEW = 264,             /* "imageview"  */
    T_IMAGEVIEW_END = 265,         /* "imageview_end"  */
    T_BUTTON = 266,                /* "button"  */
    T_BUTTON_END = 267,            /* "button_end"  */
    T_RADIOBUTTON = 268,           /* "radiobutton"  */
    T_RADIOBUTTON_END = 269,       /* "radiobutton_end"  */
    T_RADIOGROUP = 270,            /* "radiogroup"  */
    T_RADIOGROUP_END = 271,        /* "radiogroup_end"  */
    T_PROGRESSBAR = 272,           /* "progressbar"  */
    T_PROGRESSBAR_END = 273,       /* "progressbar_end"  */
    T_AN_WIDTH = 274,              /* "an_width"  */
    T_AN_HEIGHT = 275,             /* "an_height"  */
    T_AN_ORIENTATION = 276,        /* "an_orientation"  */
    T_AN_ID = 277,                 /* "an_id"  */
    T_AN_TEXT = 278,               /* "an_text"  */
    T_AN_SRC = 279,                /* "an_src"  */
    T_AN_PADDING = 280,            /* "an_padding"  */
    T_AN_CHECKED_BUTTON = 281,     /* "an_checked_button"  */
    T_AN_TEXT_COLOR = 282,         /* "an_text_color"  */
    T_AN_MAX = 283,                /* "an_max"  */
    T_AN_PROGRESS = 284,           /* "an_progress"  */
    T_EQUAL = 285,                 /* "equal"  */
    T_END_SYMBOL = 286,            /* "end_symbol"  */
    T_RANDOM_WORD = 287,           /* "random_word"  */
    T_NUMBER = 288,                /* "positive number"  */
    T_SYMBOL = 289,                /* "symbol"  */
    T_STRING = 290,                /* "string"  */
    T_BIG = 291,                   /* "t_big"  */
    T_NEGATIVE = 292,              /* "negative number"  */
    T_MP = 293,                    /* "match_parent"  */
    T_WC = 294,                    /* "wrap_content"  */
    T_AN_RB = 295                  /* "t_an_rb"  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "syntax.y"

  char* strval;    /* String value */
  int numval;   /* Numeric value */

#line 109 "syntax.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */

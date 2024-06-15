%{

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





%}


%error-verbose

%union {
  char* strval;    /* String value */
  int numval;   /* Numeric value */
}


%token T_LINEAR_LAYOUT "linear_layout"
%token T_LINEAR_LAYOUT_END "linear_layout_end"
%token T_RELATIVE_LAYOUT "relative_layout"
%token T_RELATIVE_LAYOUT_END "relative_layout_end"
%token T_TEXTVIEW "textview"
%token T_TEXTVIEW_END "textview_end"
%token T_IMAGEVIEW "imageview"
%token T_IMAGEVIEW_END "imageview_end"
%token T_BUTTON "button"
%token T_BUTTON_END "button_end"
%token T_RADIOBUTTON "radiobutton"
%token T_RADIOBUTTON_END "radiobutton_end"
%token T_RADIOGROUP "radiogroup"
%token T_RADIOGROUP_END "radiogroup_end"
%token T_PROGRESSBAR "progressbar"
%token T_PROGRESSBAR_END "progressbar_end"
%token T_AN_WIDTH "an_width"
%token T_AN_HEIGHT "an_height"
%token T_AN_ORIENTATION "an_orientation"
%token T_AN_ID "an_id"
%token T_AN_TEXT "an_text"
%token T_AN_SRC "an_src"
%token T_AN_PADDING "an_padding"
%token T_AN_CHECKED_BUTTON "an_checked_button"
%token T_AN_TEXT_COLOR "an_text_color"
%token T_AN_MAX "an_max"
%token T_AN_PROGRESS "an_progress"
%token T_EQUAL "equal"
%token T_END_SYMBOL "end_symbol"
%token T_RANDOM_WORD "random_word"
%token <numval> T_NUMBER "positive number"
%token T_SYMBOL "symbol"
%token T_STRING "string"
%token T_BIG "t_big"
%token T_NEGATIVE "negative number"
%token <strval> T_MP "match_parent"
%token <strval> T_WC "wrap_content"
%token T_AN_RB   "t_an_rb"






%start root

%%

root: linear_layout {printf("\n\nParsed Successfully!🔥 \n");}
|T_RELATIVE_LAYOUT relative_layout_attributes T_BIG relative_element_list linear_layout  T_RELATIVE_LAYOUT_END {printf("\n\nParsed Successfully!🔥 \n");}

linear_layout: T_LINEAR_LAYOUT  linear_layout_attributes  T_BIG  linear_element_list relative_layout T_LINEAR_LAYOUT_END { printf("LinearLayout parsed.\n"); };
              |T_LINEAR_LAYOUT  linear_layout_attributes  T_BIG  linear_element_list T_LINEAR_LAYOUT_END { printf("LinearLayout parsed.\n"); };


relative_layout: T_RELATIVE_LAYOUT relative_layout_attributes T_BIG relative_element_list T_RELATIVE_LAYOUT_END  { printf("RelativeLayout parsed.\n"); };

attribute: T_AN_WIDTH T_EQUAL  layout_value   T_AN_HEIGHT  T_EQUAL  layout_value   ;

layout_value : T_MP | T_WC |  th_number  ;

th_number : T_SYMBOL T_NUMBER T_SYMBOL;

linear_layout_attributes: attribute linear_layout_optional_attributes | attribute ;

relative_layout_attributes: attribute relative_layout_optional_attributes | attribute;

linear_layout_optional_attributes: T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL  | T_AN_ORIENTATION T_EQUAL T_SYMBOL T_STRING T_SYMBOL 
|T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL T_AN_ORIENTATION T_EQUAL T_SYMBOL T_STRING T_SYMBOL | T_AN_ORIENTATION T_EQUAL T_SYMBOL T_STRING T_SYMBOL T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL   ;

relative_layout_optional_attributes: T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL  ;



element: text_view { printf("TextView parsed.\n"); }
        | image_view { printf("ImageView parsed.\n"); }
        | button { printf("Button parsed.\n"); }
        | radio_group { printf("RadioGroup parsed.\n"); }
        | progress_bar { printf("ProgressBar parsed.\n"); }
        | radio_button
        | relative_layout
        | linear_layout ;


relative_element_list: relative_element_list element | element | %empty{};

linear_element_list: element | linear_element_list element;






text_view: T_TEXTVIEW text_view_attributes T_END_SYMBOL;

text_view_attributes: attribute text_view_standart_attributes text_view_optional_attributes
|attribute text_view_optional_attributes text_view_standart_attributes
|attribute text_view_standart_attributes;

text_view_standart_attributes: T_AN_TEXT T_EQUAL T_SYMBOL T_STRING T_SYMBOL   ;

text_view_optional_attributes: T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL | T_AN_TEXT_COLOR T_EQUAL T_SYMBOL T_STRING T_SYMBOL 
| T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL T_AN_TEXT_COLOR T_EQUAL T_SYMBOL T_STRING T_SYMBOL
| T_AN_TEXT_COLOR T_EQUAL T_SYMBOL T_STRING T_SYMBOL T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL ;



image_view: T_IMAGEVIEW image_view_attributes T_END_SYMBOL;

image_view_attributes: attribute image_view_standart_attributes image_view_optional_attributes |attribute image_view_standart_attributes;

image_view_standart_attributes: T_AN_SRC T_EQUAL T_SYMBOL T_STRING T_SYMBOL   ;

image_view_optional_attributes: T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL | T_AN_PADDING T_EQUAL T_SYMBOL T_NUMBER T_SYMBOL 
|T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL T_AN_PADDING T_EQUAL T_SYMBOL T_NUMBER T_SYMBOL
|T_AN_PADDING T_EQUAL T_SYMBOL T_NUMBER T_SYMBOL T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL  ;




button: T_BUTTON button_attributes T_END_SYMBOL;

button_attributes: attribute button_standart_attributes button_optional_attributes |attribute button_standart_attributes;

button_standart_attributes: T_AN_TEXT T_EQUAL T_SYMBOL T_STRING T_SYMBOL  ;

button_optional_attributes: T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL  | T_AN_PADDING T_EQUAL T_SYMBOL T_NUMBER T_SYMBOL
|T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL T_AN_PADDING T_EQUAL T_SYMBOL T_NUMBER T_SYMBOL
|T_AN_PADDING T_EQUAL T_SYMBOL T_NUMBER T_SYMBOL T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL  ;




radio_group:  T_RADIOGROUP  radio_group_attributes T_BIG  radio_buttons T_END_SYMBOL | T_RADIOGROUP radio_group_attributes T_BIG radio_buttons T_RADIOGROUP_END

radio_group_attributes: attribute radio_group_standart_attributes radio_group_optional_attributes | attribute radio_group_standart_attributes;

radio_group_standart_attributes: T_AN_RB  T_EQUAL T_SYMBOL T_NUMBER {tmp2=atoi(yytext);} T_SYMBOL  ;

radio_group_optional_attributes: T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL  | T_AN_CHECKED_BUTTON T_EQUAL T_SYMBOL T_STRING{strcpy(button,yytext);} T_SYMBOL 
| T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL T_AN_CHECKED_BUTTON T_EQUAL T_SYMBOL T_STRING{strcpy(button,yytext);} T_SYMBOL
// | T_AN_CHECKED_BUTTON T_EQUAL T_SYMBOL T_STRING {strcpy(button,yytext);}  T_SYMBOL T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL


radio_buttons: T_RADIOBUTTON radio_button |  T_RADIOBUTTON radio_button radio_buttons

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
};


radio_button:

radio_button_attributes T_END_SYMBOL {tmp1++;};


radio_button_attributes: attribute radio_button_standart_attributes radio_button_optional_attributes
| attribute  radio_button_optional_attributes radio_button_standart_attributes
| attribute radio_button_standart_attributes;

radio_button_standart_attributes: T_AN_TEXT T_EQUAL T_SYMBOL T_STRING T_SYMBOL ;

radio_button_optional_attributes: T_AN_ID T_EQUAL T_SYMBOL T_STRING
{strcpy(id,yytext);
if(strcmp(id,button)==0)
    flag=1;
} T_SYMBOL ;
















progress_bar: T_PROGRESSBAR progress_bar_attributes T_END_SYMBOL;

progress_bar_attributes: attribute progress_bar_optional_attributes | attribute;

progress_bar_optional_attributes: 

T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL T_AN_MAX T_EQUAL T_SYMBOL T_NUMBER {tnum1=atoi(yytext);}  T_SYMBOL T_AN_PROGRESS T_EQUAL T_SYMBOL T_NUMBER { tnum2=atoi(yytext);}  T_SYMBOL
{
        if (tnum1 >= tnum2) {
            printf("");
        } else  {
            yyerror("Invalid progress value\n");
            exit(1);
        }

}

|T_AN_MAX T_EQUAL T_SYMBOL T_NUMBER {tnum1=atoi(yytext);}  T_SYMBOL T_AN_PROGRESS T_EQUAL T_SYMBOL T_NUMBER { tnum2=atoi(yytext);}  T_SYMBOL
{
        if (tnum1 >= tnum2) {
            printf("");
        } else  {
            yyerror("Invalid progress value\n");
            exit(1);
        }

}
|T_AN_PROGRESS T_EQUAL T_SYMBOL T_NUMBER { tnum2=atoi(yytext);}  T_SYMBOL T_AN_MAX T_EQUAL T_SYMBOL T_NUMBER {tnum1=atoi(yytext);}  T_SYMBOL 
 

{
        if (tnum1 >= tnum2) {
            printf("");
        } else  {
            yyerror("Invalid progress value\n");
            exit(1);
        }

}
|T_AN_ID T_EQUAL T_SYMBOL T_STRING T_SYMBOL T_AN_PROGRESS T_EQUAL T_SYMBOL T_NUMBER { tnum2=atoi(yytext);}  T_SYMBOL T_AN_MAX T_EQUAL T_SYMBOL T_NUMBER {tnum1=atoi(yytext);}  T_SYMBOL 
 

{
        if (tnum1 >= tnum2) {
            printf("");
        } else  {
            yyerror("Invalid progress value\n");
            exit(1);
        }

};
  
 


attribute_value: T_STRING | T_NUMBER ;

exp: T_EQUAL  T_SYMBOL attribute_value T_SYMBOL ;




%%

int main ( int argc, char **argv  )
  {

  yyin = fopen( argv[1], "r" );
  yyparse ();

  return 0;
}


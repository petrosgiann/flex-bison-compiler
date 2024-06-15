%{
#include "syntax.tab.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int error_counter=0;

void token_print(int token_id);
void yyerror(const char* err);
%}

%option noyywrap 
%option yylineno

%x SINGLE_LINE_COMMENT



%% 

"<LinearLayout"   {return T_LINEAR_LAYOUT;}
"</LinearLayout>" {return T_LINEAR_LAYOUT_END;}
"<RelativeLayout" {return T_RELATIVE_LAYOUT;}
"</RelativeLayout>" {return T_RELATIVE_LAYOUT_END;}
"<TextView" {return T_TEXTVIEW;}
"</TextView>" {return T_TEXTVIEW_END;}
"<ImageView" {return T_IMAGEVIEW;}
"</ImageView>" {return T_IMAGEVIEW;}
"<Button" {return T_BUTTON;}
"</Button>" {return T_BUTTON_END;}
"<RadioButton" {return T_RADIOBUTTON;}
"</RadioButton>" {return T_RADIOBUTTON_END;}
"<RadioGroup" {return T_RADIOGROUP;}
"</RadioGroup>" {return T_RADIOGROUP_END;}
"<ProgressBar" {return T_PROGRESSBAR;}
"</ProgressBar>" {return T_PROGRESSBAR_END;}
"android:layout_width" {return T_AN_WIDTH;}
"android:layout_height" {return T_AN_HEIGHT;}
"android:orientation" {return T_AN_ORIENTATION;}
"android:id" {return T_AN_ID;}
"android:text" {return T_AN_TEXT;}
"android:src" {return T_AN_SRC;}
"android:padding" {return T_AN_PADDING;}
"android:max" {return T_AN_MAX;}
"android:progress" {return T_AN_PROGRESS;}
"android:checkedButton" {return T_AN_CHECKED_BUTTON;}
"android:textColor"  {return T_AN_TEXT_COLOR;}
"android:rbutton" {return T_AN_RB;}




"<!--"             {BEGIN(SINGLE_LINE_COMMENT); }
<SINGLE_LINE_COMMENT>"-->" { BEGIN(INITIAL); printf("Comment ignored.\n"); }
<SINGLE_LINE_COMMENT>.   {  }

"=" {return T_EQUAL;}
"/>" {return T_END_SYMBOL;}
[a-zA-Z][a-zA-Z0-9_ ]+ {return T_STRING;} 
[0-9]* {return T_NUMBER;}
-[0-9]* {return T_NEGATIVE;}
["] {return T_SYMBOL;}
">" {return T_BIG;}
\"match_parent\"   { yylval.strval = strdup(yytext); yylval.strval[strlen(yylval.strval) ]; return T_MP; }
\"wrap_content\"  { yylval.strval = strdup(yytext); yylval.strval[strlen(yylval.strval)]; return T_WC; }





[ \t]+ { }
\r\n  { }

. { }


%% 




void yyerror(const char* err) {
error_counter++;
printf("[ERROR - LINE %d] %s\n", yylineno , err);

if(error_counter == 5 ) {
printf("MAXIMUM ERROR FOUND\n");
exit(EXIT_FAILURE);
}
}



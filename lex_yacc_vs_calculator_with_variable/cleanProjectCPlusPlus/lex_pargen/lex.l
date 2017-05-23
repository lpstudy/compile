%{
//this code will be added into the header of generated .cpp file
#include <iostream>
#include "sym_table.h"
#include "yacc.h"
using namespace std;

//already defined in yacc.y, use %token...
//enum{LT,  EQ, GT, IF, ELSE, ID, NUMBER, PLUS, MINUS, TIMES, OVER, INT, DOUBLE,CHAR, LP,RP};

const char* tokenStr[] = {"LT",  "EQ", "GT", "IF", "ELSE", "ID", "NUMBER", "PLUS", "MINUS", "TIMES", "OVER", "INT", "DOUBLE","CHAR"};
static void print_token(int token, char* lex);

%}

%name lexer

delim [ \t]
ws    {delim}+
letter [a-zA-Z]
digit [0-9]
id    {letter}({letter}|{digit})*
/* can support 12.34 */
number {digit}+(\.{digit}+)?


%%
%{
//this code will be added into yyaction function
    YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}

{ws} {/* do nothing */}
"int"  {print_token(INT, yytext); return INT;}
"double"  {print_token(DOUBLE, yytext);}
"char"  {print_token(CHAR, yytext);}

"+"         {print_token(PLUS, yytext); return PLUS;}
"-"         {print_token(MINUS, yytext); return MINUS;}
"*"         {print_token(TIMES, yytext); return TIMES;}
"/"         {print_token(OVER, yytext); return OVER;}
"("         {return LP;}
")"         {return RP;}
"\n"        {return EOL;}
"="	        {return ASSIGN;}
{id}        {
				int p = sym_table.lookup(yytext);
				if(p == -1){//not find
					p = sym_table.insert(yytext);//insert the default value 0.0
				}
				yylval = p;//return the position
				return ID;
			}
{number}    {yylval = atof(yytext);return NUMBER;}
"//".*      {return COMMENT;}
"."         {printf("Mystery character %s\n", yytext); }
%%



static void print_token(int token, char* lex)
{
#ifdef LEX_DEUB
	cout<<"token:" << token<<" "<<"lex:"<<lex<<endl;
#endif
}

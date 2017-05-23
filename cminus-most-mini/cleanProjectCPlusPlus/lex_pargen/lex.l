%{
//this code will be added into the header of generated .cpp file
#include <iostream>
#include "sym_table.h"
#include "yacc.h"
#include "tree.h"
using namespace std;

int lineno = 1;
Node dummy;

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
number -?{digit}+(\.{digit}+)?
//(-?[1-9]+[0-9]*)|(-?[1-9])|0

%%
%{
//this code will be added into yyaction function
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}

{ws} {/* do nothing */}
"int"  {print_token(INT, yytext); return INT;}
"double"  {print_token(DOUBLE, yytext);}
"char"  {print_token(CHAR, yytext);}

";"         {return SEMICOLON;}
","			{return COMMA;}

"+"         {print_token(PLUS, yytext); return PLUS;}
"-"         {print_token(MINUS, yytext); return MINUS;}
"*"         {print_token(TIMES, yytext); return TIMES;}
"/"         {print_token(OVER, yytext); return OVER;}
"("         {return LP;}
")"         {return RP;}

"<"			{return LT;}
">"			{return GT;}
"<="		{return LE;}
">="		{return GE;}
"=="		{return EQ;}
"!="		{return NE;}
"\n"        {lineno++;}
"="	        {return ASSIGN;}
"if"		{return IF;}
"else"		{return ELSE;}
"while"		{return WHILE;}
"input"		{return INPUT;}
"output"	{return OUTPUT;}
"main"		{return MAIN;}
"$"			{return END;}

"{"         {print_token(LBRACE, yytext); return LBRACE;}
"}"         {print_token(RBRACE, yytext); return RBRACE;}
"||"        {print_token(OR, yytext); return OR;}
"&&"        {print_token(AND, yytext); return AND;}
"!"         {print_token(NOT, yytext); return NOT;}
"sqrt"      {return SQRT;}
"fabs"		{return FABS;} 

{id}        {
				int p = sym_table.lookup(yytext);
				if(p == -1){//not find
					p = sym_table.insert(yytext);//insert the default value 0.0
				}
				yylval = &dummy;
				yylval->attr.symtbl_seq = p;//return the position
				return ID;
			}
{number}    {
				yylval = &dummy;
				yylval->attr.vali = atof(yytext);
				return NUMBER;
			}
"//"       {
				char c;
                do
                {
                    c = input();
                }while(c != '\n');
				lineno++;
		    }
"\""        {
				char c = '0';
				int i = 0;
				char* buf = (char*)malloc(1024);
                while(c != '\"')
                {
                    c = input();
					buf[i++] = c;
                };
				buf[i] = '\0';
				yylval->sibling = (Node*)buf; 
				printf("buf=%s\n", buf);
				//return STRING;
			}
"."         {printf("Mystery character %s\n", yytext); }
%%



static void print_token(int token, char* lex)
{
#ifdef LEX_DEUB
	cout<<"token:" << token<<" "<<"lex:"<<lex<<endl;
#endif
}

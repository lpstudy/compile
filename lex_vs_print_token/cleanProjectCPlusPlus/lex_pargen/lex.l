%{

#include <iostream>
using namespace std;
enum{
LT,  EQ, GT, IF, ELSE, ID, NUMBER, PLUS, MINUS, TIMES, OVER, INT, DOUBLE,CHAR
};
const char* tokenStr[] = {"LT",  "EQ", "GT", "IF", "ELSE", "ID", "NUMBER", "PLUS", "MINUS", "TIMES", "OVER", "INT", "DOUBLE","CHAR"
};
static void print_token(int token, char* lex);

%}

%name lexer

delim [ \t\n]
ws    {delim}+
letter [a-zA-Z]
digit [0-9]
id    {letter}({letter}|{digit})*
/* can support 12.34 */
number {digit}+(\.{digit}+)?


%%
{ws} {/* do nothing */}
"int"  {print_token(INT, yytext);}
"double"  {print_token(DOUBLE, yytext);}
"char"  {print_token(CHAR, yytext);}

"+"         {print_token(PLUS, yytext); }
"-"         {print_token(MINUS, yytext);}
"*"         {print_token(TIMES, yytext);}
"/"         {print_token(OVER, yytext); }
{id}        {print_token(ID, yytext);}
{number}    {print_token(NUMBER, yytext);}
%%




static void print_token(int token, char* lex)
{
	cout<<"token:" << tokenStr[token]<<" "<<"lex:"<<lex<<endl;
}

int main()
{
//create a lexer, and call the lex function.
//it will read from stdin and parser the tokens.
 YYLEXERNAME lexer;
 if(lexer.yycreate()){
	 lexer.yylex();
 }
}
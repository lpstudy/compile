/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 197 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* lex.cpp
* C++ source file generated from lex.l.
* 
* Date: 04/27/16
* Time: 12:38:53
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\lex.l"


#include <iostream>
using namespace std;
enum{
LT,  EQ, GT, IF, ELSE, ID, NUMBER, PLUS, MINUS, TIMES, OVER, INT, DOUBLE,CHAR
};
const char* tokenStr[] = {"LT",  "EQ", "GT", "IF", "ELSE", "ID", "NUMBER", "PLUS", "MINUS", "TIMES", "OVER", "INT", "DOUBLE","CHAR"
};
static void print_token(int token, char* lex);


#line 51 "lex.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\lex.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 26 ".\\lex.l"
/* do nothing */
#line 149 "lex.cpp"
		}
		break;
	case 2:
		{
#line 27 ".\\lex.l"
print_token(INT, yytext);
#line 156 "lex.cpp"
		}
		break;
	case 3:
		{
#line 28 ".\\lex.l"
print_token(DOUBLE, yytext);
#line 163 "lex.cpp"
		}
		break;
	case 4:
		{
#line 29 ".\\lex.l"
print_token(CHAR, yytext);
#line 170 "lex.cpp"
		}
		break;
	case 5:
		{
#line 31 ".\\lex.l"
print_token(PLUS, yytext); 
#line 177 "lex.cpp"
		}
		break;
	case 6:
		{
#line 32 ".\\lex.l"
print_token(MINUS, yytext);
#line 184 "lex.cpp"
		}
		break;
	case 7:
		{
#line 33 ".\\lex.l"
print_token(TIMES, yytext);
#line 191 "lex.cpp"
		}
		break;
	case 8:
		{
#line 34 ".\\lex.l"
print_token(OVER, yytext); 
#line 198 "lex.cpp"
		}
		break;
	case 9:
		{
#line 35 ".\\lex.l"
print_token(ID, yytext);
#line 205 "lex.cpp"
		}
		break;
	case 10:
		{
#line 36 ".\\lex.l"
print_token(NUMBER, yytext);
#line 212 "lex.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 156;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 3, 1 },
		{ 3, 3 },
		{ 3, 3 },
		{ 13, 8 },
		{ 16, 12 },
		{ 8, 8 },
		{ 8, 8 },
		{ 8, 8 },
		{ 8, 8 },
		{ 8, 8 },
		{ 8, 8 },
		{ 8, 8 },
		{ 8, 8 },
		{ 8, 8 },
		{ 8, 8 },
		{ 18, 14 },
		{ 19, 15 },
		{ 20, 16 },
		{ 14, 10 },
		{ 21, 18 },
		{ 22, 19 },
		{ 23, 22 },
		{ 3, 1 },
		{ 24, 23 },
		{ 3, 3 },
		{ 15, 11 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 4, 1 },
		{ 5, 1 },
		{ 0, 0 },
		{ 6, 1 },
		{ 0, 0 },
		{ 7, 1 },
		{ 8, 1 },
		{ 8, 1 },
		{ 8, 1 },
		{ 8, 1 },
		{ 8, 1 },
		{ 8, 1 },
		{ 8, 1 },
		{ 8, 1 },
		{ 8, 1 },
		{ 8, 1 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 17, 17 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 10, 1 },
		{ 11, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 12, 1 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 },
		{ 9, 24 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 24, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -6, 1 },
		{ 0, 0, 7 },
		{ 0, 0, 5 },
		{ 0, 0, 6 },
		{ 0, 0, 8 },
		{ 0, -41, 10 },
		{ 24, 0, 9 },
		{ 24, -84, 9 },
		{ 24, -84, 9 },
		{ 24, -104, 9 },
		{ 17, 0, 0 },
		{ 24, -80, 9 },
		{ 24, -99, 9 },
		{ 24, -97, 9 },
		{ 0, 2, 10 },
		{ 24, -93, 9 },
		{ 24, -76, 9 },
		{ 24, 0, 2 },
		{ 24, 0, 4 },
		{ 24, -85, 9 },
		{ 24, -76, 9 },
		{ 0, 33, 3 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 37 ".\\lex.l"





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

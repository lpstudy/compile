/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 200 of your 30 day trial period.
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
* Date: 04/30/16
* Time: 10:59:14
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

//this code will be added into the header of generated .cpp file
#include <iostream>
#include "yacc.h"
using namespace std;

//already defined in yacc.y, use %token...
//enum{LT,  EQ, GT, IF, ELSE, ID, NUMBER, PLUS, MINUS, TIMES, OVER, INT, DOUBLE,CHAR, LP,RP};

const char* tokenStr[] = {"LT",  "EQ", "GT", "IF", "ELSE", "ID", "NUMBER", "PLUS", "MINUS", "TIMES", "OVER", "INT", "DOUBLE","CHAR"};
static void print_token(int token, char* lex);


#line 52 "lex.cpp"
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
#line 27 ".\\lex.l"

//this code will be added into yyaction function
    YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
    //double yylval;

#line 150 "lex.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 33 ".\\lex.l"
/* do nothing */
#line 157 "lex.cpp"
		}
		break;
	case 2:
		{
#line 34 ".\\lex.l"
print_token(INT, yytext); return INT;
#line 164 "lex.cpp"
		}
		break;
	case 3:
		{
#line 35 ".\\lex.l"
print_token(DOUBLE, yytext);
#line 171 "lex.cpp"
		}
		break;
	case 4:
		{
#line 36 ".\\lex.l"
print_token(CHAR, yytext);
#line 178 "lex.cpp"
		}
		break;
	case 5:
		{
#line 38 ".\\lex.l"
print_token(PLUS, yytext); return PLUS;
#line 185 "lex.cpp"
		}
		break;
	case 6:
		{
#line 39 ".\\lex.l"
print_token(MINUS, yytext); return MINUS;
#line 192 "lex.cpp"
		}
		break;
	case 7:
		{
#line 40 ".\\lex.l"
print_token(TIMES, yytext); return TIMES;
#line 199 "lex.cpp"
		}
		break;
	case 8:
		{
#line 41 ".\\lex.l"
print_token(OVER, yytext); return OVER;
#line 206 "lex.cpp"
		}
		break;
	case 9:
		{
#line 42 ".\\lex.l"
return LP;
#line 213 "lex.cpp"
		}
		break;
	case 10:
		{
#line 43 ".\\lex.l"
return RP;
#line 220 "lex.cpp"
		}
		break;
	case 11:
		{
#line 44 ".\\lex.l"
return EOL;
#line 227 "lex.cpp"
		}
		break;
	case 12:
		{
#line 45 ".\\lex.l"
 return ID;
#line 234 "lex.cpp"
		}
		break;
	case 13:
		{
#line 46 ".\\lex.l"
 yylval = atof(yytext);return NUMBER;
#line 241 "lex.cpp"
		}
		break;
	case 14:
		{
#line 47 ".\\lex.l"
return COMMENT;
#line 248 "lex.cpp"
		}
		break;
	case 15:
		{
#line 48 ".\\lex.l"
printf("Mystery character %s\n", yytext); 
#line 255 "lex.cpp"
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
		{ 4, 1 },
		{ 3, 3 },
		{ 18, 12 },
		{ 20, 15 },
		{ 12, 12 },
		{ 12, 12 },
		{ 12, 12 },
		{ 12, 12 },
		{ 12, 12 },
		{ 12, 12 },
		{ 12, 12 },
		{ 12, 12 },
		{ 12, 12 },
		{ 12, 12 },
		{ 21, 16 },
		{ 0, 17 },
		{ 23, 19 },
		{ 24, 20 },
		{ 25, 21 },
		{ 17, 11 },
		{ 26, 23 },
		{ 27, 24 },
		{ 3, 1 },
		{ 28, 27 },
		{ 3, 3 },
		{ 29, 28 },
		{ 19, 14 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 5, 1 },
		{ 6, 1 },
		{ 7, 1 },
		{ 8, 1 },
		{ 0, 0 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 12, 1 },
		{ 12, 1 },
		{ 12, 1 },
		{ 12, 1 },
		{ 12, 1 },
		{ 12, 1 },
		{ 12, 1 },
		{ 12, 1 },
		{ 12, 1 },
		{ 22, 22 },
		{ 22, 22 },
		{ 22, 22 },
		{ 22, 22 },
		{ 22, 22 },
		{ 22, 22 },
		{ 22, 22 },
		{ 22, 22 },
		{ 22, 22 },
		{ 22, 22 },
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
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 14, 1 },
		{ 15, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 16, 1 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 },
		{ 13, 29 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 29, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -6, 1 },
		{ 0, 0, 11 },
		{ 0, 0, 9 },
		{ 0, 0, 10 },
		{ 0, 0, 7 },
		{ 0, 0, 5 },
		{ 0, 0, 6 },
		{ 0, 0, 15 },
		{ 0, -26, 8 },
		{ 0, -42, 13 },
		{ 29, 0, 12 },
		{ 29, -76, 12 },
		{ 29, -106, 12 },
		{ 29, -94, 12 },
		{ -17, 7, 14 },
		{ 22, 0, 0 },
		{ 29, -79, 12 },
		{ 29, -98, 12 },
		{ 29, -96, 12 },
		{ 0, 2, 13 },
		{ 29, -92, 12 },
		{ 29, -75, 12 },
		{ 29, 0, 2 },
		{ 29, 0, 4 },
		{ 29, -83, 12 },
		{ 29, -74, 12 },
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
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 49 ".\\lex.l"




static void print_token(int token, char* lex)
{
#ifdef LEX_DEUB
	cout<<"token:" << token<<" "<<"lex:"<<lex<<endl;
#endif
}


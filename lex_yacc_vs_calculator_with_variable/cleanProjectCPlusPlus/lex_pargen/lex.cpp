/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 201 of your 30 day trial period.
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
* Time: 20:33:15
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
#include "sym_table.h"
#include "yacc.h"
using namespace std;

//already defined in yacc.y, use %token...
//enum{LT,  EQ, GT, IF, ELSE, ID, NUMBER, PLUS, MINUS, TIMES, OVER, INT, DOUBLE,CHAR, LP,RP};

const char* tokenStr[] = {"LT",  "EQ", "GT", "IF", "ELSE", "ID", "NUMBER", "PLUS", "MINUS", "TIMES", "OVER", "INT", "DOUBLE","CHAR"};
static void print_token(int token, char* lex);


#line 53 "lex.cpp"
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
#line 28 ".\\lex.l"

//this code will be added into yyaction function
    YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

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
return ASSIGN;
#line 234 "lex.cpp"
		}
		break;
	case 13:
		{
#line 46 ".\\lex.l"

				int p = sym_table.lookup(yytext);
				if(p == -1){//not find
					p = sym_table.insert(yytext);//insert the default value 0.0
				}
				yylval = p;//return the position
				return ID;
			
#line 248 "lex.cpp"
		}
		break;
	case 14:
		{
#line 54 ".\\lex.l"
yylval = atof(yytext);return NUMBER;
#line 255 "lex.cpp"
		}
		break;
	case 15:
		{
#line 55 ".\\lex.l"
return COMMENT;
#line 262 "lex.cpp"
		}
		break;
	case 16:
		{
#line 56 ".\\lex.l"
printf("Mystery character %s\n", yytext); 
#line 269 "lex.cpp"
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
		{ 19, 12 },
		{ 21, 16 },
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
		{ 22, 17 },
		{ 0, 18 },
		{ 24, 20 },
		{ 25, 21 },
		{ 26, 22 },
		{ 18, 11 },
		{ 27, 24 },
		{ 28, 25 },
		{ 3, 1 },
		{ 29, 28 },
		{ 3, 3 },
		{ 30, 29 },
		{ 20, 15 },
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
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 13, 1 },
		{ 23, 23 },
		{ 23, 23 },
		{ 23, 23 },
		{ 23, 23 },
		{ 23, 23 },
		{ 23, 23 },
		{ 23, 23 },
		{ 23, 23 },
		{ 23, 23 },
		{ 23, 23 },
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
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 15, 1 },
		{ 16, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 17, 1 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 },
		{ 14, 30 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 30, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -6, 1 },
		{ 0, 0, 11 },
		{ 0, 0, 9 },
		{ 0, 0, 10 },
		{ 0, 0, 7 },
		{ 0, 0, 5 },
		{ 0, 0, 6 },
		{ 0, 0, 16 },
		{ 0, -26, 8 },
		{ 0, -42, 14 },
		{ 0, 0, 12 },
		{ 30, 0, 13 },
		{ 30, -76, 13 },
		{ 30, -106, 13 },
		{ 30, -94, 13 },
		{ -18, 7, 15 },
		{ 23, 0, 0 },
		{ 30, -79, 13 },
		{ 30, -98, 13 },
		{ 30, -96, 13 },
		{ 0, 6, 14 },
		{ 30, -92, 13 },
		{ 30, -75, 13 },
		{ 30, 0, 2 },
		{ 30, 0, 4 },
		{ 30, -83, 13 },
		{ 30, -74, 13 },
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
		0,
		0
	};
	yybackup = backup;
}
#line 57 ".\\lex.l"




static void print_token(int token, char* lex)
{
#ifdef LEX_DEUB
	cout<<"token:" << token<<" "<<"lex:"<<lex<<endl;
#endif
}


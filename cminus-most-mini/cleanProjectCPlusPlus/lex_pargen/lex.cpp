/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 209 of your 30 day trial period.
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
* Date: 05/09/16
* Time: 13:35:32
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
#include "tree.h"
using namespace std;

int lineno = 1;
Node dummy;

//already defined in yacc.y, use %token...
//enum{LT,  EQ, GT, IF, ELSE, ID, NUMBER, PLUS, MINUS, TIMES, OVER, INT, DOUBLE,CHAR, LP,RP};

const char* tokenStr[] = {"LT",  "EQ", "GT", "IF", "ELSE", "ID", "NUMBER", "PLUS", "MINUS", "TIMES", "OVER", "INT", "DOUBLE","CHAR"};
static void print_token(int token, char* lex);


#line 57 "lex.cpp"
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
#line 32 ".\\lex.l"

//this code will be added into yyaction function
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

#line 154 "lex.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 37 ".\\lex.l"
/* do nothing */
#line 161 "lex.cpp"
		}
		break;
	case 2:
		{
#line 38 ".\\lex.l"
print_token(INT, yytext); return INT;
#line 168 "lex.cpp"
		}
		break;
	case 3:
		{
#line 39 ".\\lex.l"
print_token(DOUBLE, yytext);
#line 175 "lex.cpp"
		}
		break;
	case 4:
		{
#line 40 ".\\lex.l"
print_token(CHAR, yytext);
#line 182 "lex.cpp"
		}
		break;
	case 5:
		{
#line 42 ".\\lex.l"
return SEMICOLON;
#line 189 "lex.cpp"
		}
		break;
	case 6:
		{
#line 43 ".\\lex.l"
return COMMA;
#line 196 "lex.cpp"
		}
		break;
	case 7:
		{
#line 45 ".\\lex.l"
print_token(PLUS, yytext); return PLUS;
#line 203 "lex.cpp"
		}
		break;
	case 8:
		{
#line 46 ".\\lex.l"
print_token(MINUS, yytext); return MINUS;
#line 210 "lex.cpp"
		}
		break;
	case 9:
		{
#line 47 ".\\lex.l"
print_token(TIMES, yytext); return TIMES;
#line 217 "lex.cpp"
		}
		break;
	case 10:
		{
#line 48 ".\\lex.l"
print_token(OVER, yytext); return OVER;
#line 224 "lex.cpp"
		}
		break;
	case 11:
		{
#line 49 ".\\lex.l"
return LP;
#line 231 "lex.cpp"
		}
		break;
	case 12:
		{
#line 50 ".\\lex.l"
return RP;
#line 238 "lex.cpp"
		}
		break;
	case 13:
		{
#line 52 ".\\lex.l"
return LT;
#line 245 "lex.cpp"
		}
		break;
	case 14:
		{
#line 53 ".\\lex.l"
return GT;
#line 252 "lex.cpp"
		}
		break;
	case 15:
		{
#line 54 ".\\lex.l"
return LE;
#line 259 "lex.cpp"
		}
		break;
	case 16:
		{
#line 55 ".\\lex.l"
return GE;
#line 266 "lex.cpp"
		}
		break;
	case 17:
		{
#line 56 ".\\lex.l"
return EQ;
#line 273 "lex.cpp"
		}
		break;
	case 18:
		{
#line 57 ".\\lex.l"
return NE;
#line 280 "lex.cpp"
		}
		break;
	case 19:
		{
#line 58 ".\\lex.l"
lineno++;
#line 287 "lex.cpp"
		}
		break;
	case 20:
		{
#line 59 ".\\lex.l"
return ASSIGN;
#line 294 "lex.cpp"
		}
		break;
	case 21:
		{
#line 60 ".\\lex.l"
return IF;
#line 301 "lex.cpp"
		}
		break;
	case 22:
		{
#line 61 ".\\lex.l"
return ELSE;
#line 308 "lex.cpp"
		}
		break;
	case 23:
		{
#line 62 ".\\lex.l"
return WHILE;
#line 315 "lex.cpp"
		}
		break;
	case 24:
		{
#line 63 ".\\lex.l"
return INPUT;
#line 322 "lex.cpp"
		}
		break;
	case 25:
		{
#line 64 ".\\lex.l"
return OUTPUT;
#line 329 "lex.cpp"
		}
		break;
	case 26:
		{
#line 65 ".\\lex.l"
return MAIN;
#line 336 "lex.cpp"
		}
		break;
	case 27:
		{
#line 66 ".\\lex.l"
return END;
#line 343 "lex.cpp"
		}
		break;
	case 28:
		{
#line 68 ".\\lex.l"
print_token(LBRACE, yytext); return LBRACE;
#line 350 "lex.cpp"
		}
		break;
	case 29:
		{
#line 69 ".\\lex.l"
print_token(RBRACE, yytext); return RBRACE;
#line 357 "lex.cpp"
		}
		break;
	case 30:
		{
#line 70 ".\\lex.l"
print_token(OR, yytext); return OR;
#line 364 "lex.cpp"
		}
		break;
	case 31:
		{
#line 71 ".\\lex.l"
print_token(AND, yytext); return AND;
#line 371 "lex.cpp"
		}
		break;
	case 32:
		{
#line 72 ".\\lex.l"
print_token(NOT, yytext); return NOT;
#line 378 "lex.cpp"
		}
		break;
	case 33:
		{
#line 73 ".\\lex.l"
return SQRT;
#line 385 "lex.cpp"
		}
		break;
	case 34:
		{
#line 74 ".\\lex.l"
return FABS;
#line 392 "lex.cpp"
		}
		break;
	case 35:
		{
#line 76 ".\\lex.l"

				int p = sym_table.lookup(yytext);
				if(p == -1){//not find
					p = sym_table.insert(yytext);//insert the default value 0.0
				}
				yylval = &dummy;
				yylval->attr.symtbl_seq = p;//return the position
				return ID;
			
#line 407 "lex.cpp"
		}
		break;
	case 36:
		{
#line 85 ".\\lex.l"

				yylval = &dummy;
				yylval->attr.vali = atof(yytext);
				return NUMBER;
			
#line 418 "lex.cpp"
		}
		break;
	case 37:
		{
#line 90 ".\\lex.l"

				char c;
                do
                {
                    c = input();
                }while(c != '\n');
				lineno++;
		    
#line 432 "lex.cpp"
		}
		break;
	case 38:
		{
#line 98 ".\\lex.l"

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
			
#line 452 "lex.cpp"
		}
		break;
	case 39:
		{
#line 112 ".\\lex.l"
printf("Mystery character %s\n", yytext); 
#line 459 "lex.cpp"
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

	yytransitionmax = 193;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 4, 1 },
		{ 38, 17 },
		{ 3, 3 },
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
		{ 46, 27 },
		{ 58, 47 },
		{ 39, 19 },
		{ 40, 20 },
		{ 41, 21 },
		{ 59, 47 },
		{ 42, 23 },
		{ 43, 24 },
		{ 47, 27 },
		{ 3, 1 },
		{ 5, 1 },
		{ 6, 1 },
		{ 3, 3 },
		{ 7, 1 },
		{ 44, 25 },
		{ 8, 1 },
		{ 45, 26 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 14, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 17, 1 },
		{ 36, 8 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 21, 1 },
		{ 53, 53 },
		{ 53, 53 },
		{ 53, 53 },
		{ 53, 53 },
		{ 53, 53 },
		{ 53, 53 },
		{ 53, 53 },
		{ 53, 53 },
		{ 53, 53 },
		{ 53, 53 },
		{ 48, 28 },
		{ 49, 29 },
		{ 50, 30 },
		{ 51, 31 },
		{ 52, 33 },
		{ 54, 42 },
		{ 55, 43 },
		{ 56, 44 },
		{ 57, 45 },
		{ 0, 14 },
		{ 60, 48 },
		{ 61, 49 },
		{ 62, 50 },
		{ 63, 51 },
		{ 37, 16 },
		{ 64, 54 },
		{ 65, 55 },
		{ 66, 56 },
		{ 67, 57 },
		{ 68, 58 },
		{ 69, 60 },
		{ 70, 61 },
		{ 71, 62 },
		{ 72, 63 },
		{ 73, 65 },
		{ 74, 68 },
		{ 23, 1 },
		{ 24, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 75, 70 },
		{ 76, 72 },
		{ 27, 1 },
		{ 77, 73 },
		{ 78, 75 },
		{ 35, 5 },
		{ 28, 1 },
		{ 0, 0 },
		{ 29, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 30, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 31, 1 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 32, 1 },
		{ 33, 1 },
		{ 34, 1 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 },
		{ 22, 78 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 78, -8, 0 },
		{ 1, 0, 0 },
		{ 0, -5, 1 },
		{ 0, 0, 19 },
		{ 0, 39, 32 },
		{ 0, 0, 38 },
		{ 0, 0, 27 },
		{ 0, 12, 0 },
		{ 0, 0, 11 },
		{ 0, 0, 12 },
		{ 0, 0, 9 },
		{ 0, 0, 7 },
		{ 0, 0, 6 },
		{ 17, 28, 8 },
		{ 0, 0, 39 },
		{ 0, 32, 10 },
		{ 0, -43, 36 },
		{ 0, 0, 5 },
		{ 0, -44, 13 },
		{ 0, -43, 20 },
		{ 0, -42, 14 },
		{ 78, 0, 35 },
		{ 78, -83, 35 },
		{ 78, -89, 35 },
		{ 78, -79, 35 },
		{ 78, -66, 35 },
		{ 78, -87, 35 },
		{ 78, -32, 35 },
		{ 78, -51, 35 },
		{ 78, -46, 35 },
		{ 78, -36, 35 },
		{ 0, 0, 28 },
		{ 0, -55, 0 },
		{ 0, 0, 29 },
		{ 0, 0, 18 },
		{ 0, 0, 31 },
		{ 0, 0, 37 },
		{ 53, 0, 0 },
		{ 0, 0, 15 },
		{ 0, 0, 17 },
		{ 0, 0, 16 },
		{ 78, -27, 35 },
		{ 78, -46, 35 },
		{ 78, -43, 35 },
		{ 78, -25, 35 },
		{ 78, 0, 21 },
		{ 78, -96, 35 },
		{ 78, -30, 35 },
		{ 78, -40, 35 },
		{ 78, -37, 35 },
		{ 78, -27, 35 },
		{ 0, 0, 30 },
		{ 0, 7, 36 },
		{ 78, -34, 35 },
		{ 78, -17, 35 },
		{ 78, -19, 35 },
		{ 78, -32, 35 },
		{ 78, -33, 35 },
		{ 78, 0, 2 },
		{ 78, -25, 35 },
		{ 78, -26, 35 },
		{ 78, -29, 35 },
		{ 78, -20, 35 },
		{ 78, 0, 4 },
		{ 78, -19, 35 },
		{ 78, 0, 22 },
		{ 78, 0, 34 },
		{ 78, -26, 35 },
		{ 78, 0, 26 },
		{ 78, -22, 35 },
		{ 78, 0, 33 },
		{ 78, -5, 35 },
		{ 78, -3, 35 },
		{ 78, 0, 24 },
		{ 78, -17, 35 },
		{ 78, 0, 23 },
		{ 78, 0, 3 },
		{ 0, 70, 25 }
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
#line 113 ".\\lex.l"




static void print_token(int token, char* lex)
{
#ifdef LEX_DEUB
	cout<<"token:" << token<<" "<<"lex:"<<lex<<endl;
#endif
}


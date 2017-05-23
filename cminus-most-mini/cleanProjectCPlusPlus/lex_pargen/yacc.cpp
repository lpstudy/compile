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
* yacc.cpp
* C++ source file generated from yacc.y.
* 
* Date: 05/09/16
* Time: 13:35:32
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\yacc.y"

#include <fstream>
#include "lex.h"
#include "sym_table.h"
#include "tree.h"

#line 45 "yacc.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\yacc.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 16 ".\\yacc.y"

	// place any extra initialisation code here

#line 69 "yacc.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 21 ".\\yacc.y"

	// place any extra cleanup code here

#line 83 "yacc.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 44 ".\\yacc.y"
 (*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(4 - 4); parser_tree.setRoot((*(YYSTYPE YYFAR*)yyvalptr)); executeTree(parser_tree); exit(0);
#line 193 "yacc.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 47 ".\\yacc.y"

				(*(YYSTYPE YYFAR*)yyvalptr) = createCompStmt(parser_tree, yyattribute(2 - 3));	
				
			
#line 209 "yacc.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 54 ".\\yacc.y"

				YYSTYPE t = yyattribute(1 - 2);
				if(yyattribute(1 - 2) != NULL){
					while(t->sibling != NULL)
						t = t->sibling;
					t->sibling = yyattribute(2 - 2);
					(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
				}else {
					(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 2);
				}
				
			
#line 233 "yacc.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 66 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 246 "yacc.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 68 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 259 "yacc.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 69 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 272 "yacc.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 70 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 285 "yacc.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 71 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 298 "yacc.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 72 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 311 "yacc.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 73 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 324 "yacc.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 76 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createIfStmt(parser_tree, yyattribute(3 - 7), yyattribute(5 - 7), yyattribute(7 - 7));
#line 337 "yacc.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 77 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createIfStmt(parser_tree, yyattribute(3 - 5), yyattribute(5 - 5));
#line 350 "yacc.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 79 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createWhileStmt(parser_tree, yyattribute(3 - 5), yyattribute(5 - 5));
#line 363 "yacc.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 81 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createInputStmt(parser_tree, yyattribute(3 - 4));
#line 376 "yacc.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 83 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOutStmt(parser_tree, yyattribute(3 - 4));
#line 389 "yacc.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 85 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 2);
#line 402 "yacc.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 86 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr)=NULL;
#line 415 "yacc.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 88 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), ASSIGN);
#line 428 "yacc.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 89 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 441 "yacc.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 90 ".\\yacc.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(2 - 2), NULL, UMINUS_EXPR); 
#line 454 "yacc.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 93 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), OR);
#line 467 "yacc.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 94 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 480 "yacc.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 96 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), AND);
#line 493 "yacc.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 97 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);
#line 506 "yacc.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 99 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), EQ);
#line 519 "yacc.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 100 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), LT);
#line 532 "yacc.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 101 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), GT);
#line 545 "yacc.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 102 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), LE);
#line 558 "yacc.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 103 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), GE);
#line 571 "yacc.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 104 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), NE);
#line 584 "yacc.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 105 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 597 "yacc.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 107 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), PLUS);
#line 610 "yacc.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 108 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), MINUS);
#line 623 "yacc.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 109 ".\\yacc.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 636 "yacc.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 111 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), TIMES);
#line 649 "yacc.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 112 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(1 - 3), yyattribute(3 - 3), OVER);
#line 662 "yacc.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 113 ".\\yacc.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 675 "yacc.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 115 ".\\yacc.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3); 
#line 688 "yacc.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 116 ".\\yacc.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1); 
#line 701 "yacc.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 117 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createConst(parser_tree, yyattribute(1 - 1)->attr.vali);
#line 714 "yacc.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 119 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(2 - 2), NULL, NOT_EXPR);
#line 727 "yacc.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 120 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(3 - 2), NULL, SQRT);
#line 740 "yacc.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 121 ".\\yacc.y"
(*(YYSTYPE YYFAR*)yyvalptr) = createOpExpr(parser_tree, yyattribute(3 - 2), NULL, FABS);
#line 753 "yacc.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 123 ".\\yacc.y"
 (*(YYSTYPE YYFAR*)yyvalptr) = createId(parser_tree, (int)(yyattribute(1 - 1)->attr.symtbl_seq));
#line 766 "yacc.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "error", 256 },
		{ "NUMBER", 257 },
		{ "ID", 258 },
		{ "PLUS", 259 },
		{ "MINUS", 260 },
		{ "TIMES", 261 },
		{ "OVER", 262 },
		{ "LP", 263 },
		{ "RP", 264 },
		{ "LBRACE", 267 },
		{ "RBRACE", 268 },
		{ "ASSIGN", 272 },
		{ "LT", 273 },
		{ "GT", 274 },
		{ "GE", 275 },
		{ "NE", 276 },
		{ "LE", 277 },
		{ "EQ", 278 },
		{ "AND", 279 },
		{ "OR", 280 },
		{ "NOT", 281 },
		{ "SQRT", 282 },
		{ "FABS", 283 },
		{ "IF", 284 },
		{ "ELSE", 285 },
		{ "WHILE", 286 },
		{ "INPUT", 287 },
		{ "OUTPUT", 288 },
		{ "SEMICOLON", 289 },
		{ "MAIN", 291 },
		{ "UMINUS", 293 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: program",
		"program: MAIN LP RP compond_stmt",
		"compond_stmt: LBRACE stmt_list RBRACE",
		"stmt_list: stmt_list stmt",
		"stmt_list: stmt",
		"stmt: expr_stmt",
		"stmt: compond_stmt",
		"stmt: if_stmt",
		"stmt: while_stmt",
		"stmt: input_stmt",
		"stmt: output_stmt",
		"if_stmt: IF LP expression RP stmt ELSE stmt",
		"if_stmt: IF LP expression RP stmt",
		"while_stmt: WHILE LP expression RP stmt",
		"input_stmt: INPUT LP var RP",
		"output_stmt: OUTPUT LP var RP",
		"expr_stmt: expression SEMICOLON",
		"expr_stmt: SEMICOLON",
		"expression: var ASSIGN expression",
		"expression: or_expression",
		"expression: MINUS expression",
		"or_expression: or_expression OR and_expression",
		"or_expression: and_expression",
		"and_expression: and_expression AND additive_expression",
		"and_expression: additive_expression",
		"additive_expression: additive_expression EQ rel_expression",
		"additive_expression: additive_expression LT rel_expression",
		"additive_expression: additive_expression GT rel_expression",
		"additive_expression: additive_expression LE rel_expression",
		"additive_expression: additive_expression GE rel_expression",
		"additive_expression: additive_expression NE rel_expression",
		"additive_expression: rel_expression",
		"rel_expression: rel_expression PLUS term",
		"rel_expression: rel_expression MINUS term",
		"rel_expression: term",
		"term: term TIMES factor",
		"term: term OVER factor",
		"term: factor",
		"factor: LP expression RP",
		"factor: var",
		"factor: NUMBER",
		"factor: NOT factor",
		"factor: SQRT factor",
		"factor: FABS factor",
		"var: ID"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 4, 0 },
		{ 2, 3, 1 },
		{ 3, 2, 2 },
		{ 3, 1, 3 },
		{ 4, 1, 4 },
		{ 4, 1, 5 },
		{ 4, 1, 6 },
		{ 4, 1, 7 },
		{ 4, 1, 8 },
		{ 4, 1, 9 },
		{ 5, 7, 10 },
		{ 5, 5, 11 },
		{ 6, 5, 12 },
		{ 7, 4, 13 },
		{ 8, 4, 14 },
		{ 9, 2, 15 },
		{ 9, 1, 16 },
		{ 10, 3, 17 },
		{ 10, 1, 18 },
		{ 10, 2, 19 },
		{ 11, 3, 20 },
		{ 11, 1, 21 },
		{ 12, 3, 22 },
		{ 12, 1, 23 },
		{ 13, 3, 24 },
		{ 13, 3, 25 },
		{ 13, 3, 26 },
		{ 13, 3, 27 },
		{ 13, 3, 28 },
		{ 13, 3, 29 },
		{ 13, 1, 30 },
		{ 14, 3, 31 },
		{ 14, 3, 32 },
		{ 14, 1, 33 },
		{ 15, 3, 34 },
		{ 15, 3, 35 },
		{ 15, 1, 36 },
		{ 16, 3, 37 },
		{ 16, 1, 38 },
		{ 16, 1, 39 },
		{ 16, 2, 40 },
		{ 16, 2, 41 },
		{ 16, 2, 42 },
		{ 17, 1, 43 }
	};
	yyreduction = reduction;

	yytokenaction_size = 66;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 85, YYAT_SHIFT, 5 },
		{ 60, YYAT_SHIFT, 7 },
		{ 76, YYAT_SHIFT, 59 },
		{ 76, YYAT_SHIFT, 60 },
		{ 75, YYAT_SHIFT, 59 },
		{ 75, YYAT_SHIFT, 60 },
		{ 83, YYAT_SHIFT, 85 },
		{ 60, YYAT_SHIFT, 10 },
		{ 68, YYAT_SHIFT, 51 },
		{ 68, YYAT_SHIFT, 52 },
		{ 68, YYAT_SHIFT, 53 },
		{ 68, YYAT_SHIFT, 54 },
		{ 68, YYAT_SHIFT, 55 },
		{ 68, YYAT_SHIFT, 56 },
		{ 74, YYAT_SHIFT, 57 },
		{ 74, YYAT_SHIFT, 58 },
		{ 67, YYAT_SHIFT, 50 },
		{ 85, YYAT_SHIFT, 14 },
		{ 65, YYAT_SHIFT, 82 },
		{ 85, YYAT_SHIFT, 15 },
		{ 85, YYAT_SHIFT, 16 },
		{ 85, YYAT_SHIFT, 17 },
		{ 85, YYAT_SHIFT, 18 },
		{ 73, YYAT_SHIFT, 57 },
		{ 73, YYAT_SHIFT, 58 },
		{ 60, YYAT_SHIFT, 11 },
		{ 60, YYAT_SHIFT, 12 },
		{ 60, YYAT_SHIFT, 13 },
		{ 31, YYAT_SHIFT, 51 },
		{ 31, YYAT_SHIFT, 52 },
		{ 31, YYAT_SHIFT, 53 },
		{ 31, YYAT_SHIFT, 54 },
		{ 31, YYAT_SHIFT, 55 },
		{ 31, YYAT_SHIFT, 56 },
		{ 72, YYAT_SHIFT, 57 },
		{ 72, YYAT_SHIFT, 58 },
		{ 71, YYAT_SHIFT, 57 },
		{ 71, YYAT_SHIFT, 58 },
		{ 70, YYAT_SHIFT, 57 },
		{ 70, YYAT_SHIFT, 58 },
		{ 69, YYAT_SHIFT, 57 },
		{ 69, YYAT_SHIFT, 58 },
		{ 33, YYAT_SHIFT, 59 },
		{ 33, YYAT_SHIFT, 60 },
		{ 32, YYAT_SHIFT, 57 },
		{ 32, YYAT_SHIFT, 58 },
		{ 64, YYAT_SHIFT, 81 },
		{ 63, YYAT_SHIFT, 80 },
		{ 62, YYAT_SHIFT, 79 },
		{ 48, YYAT_SHIFT, 9 },
		{ 44, YYAT_SHIFT, 8 },
		{ 36, YYAT_SHIFT, 61 },
		{ 30, YYAT_SHIFT, 50 },
		{ 29, YYAT_SHIFT, 49 },
		{ 28, YYAT_SHIFT, 48 },
		{ 27, YYAT_SHIFT, 47 },
		{ 20, YYAT_SHIFT, 45 },
		{ 17, YYAT_SHIFT, 44 },
		{ 16, YYAT_SHIFT, 43 },
		{ 15, YYAT_SHIFT, 42 },
		{ 14, YYAT_SHIFT, 41 },
		{ 4, YYAT_SHIFT, 5 },
		{ 3, YYAT_SHIFT, 4 },
		{ 2, YYAT_ACCEPT, 0 },
		{ 1, YYAT_SHIFT, 3 },
		{ 0, YYAT_SHIFT, 1 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -226, 1, YYAT_ERROR, 0 },
		{ -199, 1, YYAT_ERROR, 0 },
		{ 63, 1, YYAT_ERROR, 0 },
		{ -202, 1, YYAT_ERROR, 0 },
		{ -206, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 85 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ 0, 0, YYAT_DEFAULT, 48 },
		{ 0, 0, YYAT_DEFAULT, 48 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ -203, 1, YYAT_ERROR, 0 },
		{ -204, 1, YYAT_ERROR, 0 },
		{ -205, 1, YYAT_ERROR, 0 },
		{ -206, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ -212, 1, YYAT_DEFAULT, 85 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ -234, 1, YYAT_ERROR, 0 },
		{ -218, 1, YYAT_REDUCE, 39 },
		{ -227, 1, YYAT_REDUCE, 19 },
		{ -227, 1, YYAT_REDUCE, 22 },
		{ -245, 1, YYAT_REDUCE, 24 },
		{ -215, 1, YYAT_REDUCE, 31 },
		{ -219, 1, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_REDUCE, 37 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ -213, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ 0, 0, YYAT_DEFAULT, 48 },
		{ 0, 0, YYAT_DEFAULT, 48 },
		{ 0, 0, YYAT_DEFAULT, 44 },
		{ -208, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ -211, 1, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ 0, 0, YYAT_DEFAULT, 60 },
		{ -256, 1, YYAT_DEFAULT, 44 },
		{ 0, 0, YYAT_REDUCE, 38 },
		{ -216, 1, YYAT_ERROR, 0 },
		{ -217, 1, YYAT_ERROR, 0 },
		{ -218, 1, YYAT_ERROR, 0 },
		{ -246, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ -263, 1, YYAT_REDUCE, 21 },
		{ -265, 1, YYAT_REDUCE, 23 },
		{ -219, 1, YYAT_REDUCE, 26 },
		{ -221, 1, YYAT_REDUCE, 27 },
		{ -223, 1, YYAT_REDUCE, 29 },
		{ -225, 1, YYAT_REDUCE, 30 },
		{ -236, 1, YYAT_REDUCE, 28 },
		{ -245, 1, YYAT_REDUCE, 25 },
		{ -257, 1, YYAT_REDUCE, 32 },
		{ -259, 1, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 36 },
		{ 0, 0, YYAT_DEFAULT, 85 },
		{ 0, 0, YYAT_DEFAULT, 85 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ -279, 1, YYAT_REDUCE, 12 },
		{ 0, 0, YYAT_REDUCE, 13 },
		{ -267, 1, YYAT_DEFAULT, 48 },
		{ 0, 0, YYAT_REDUCE, 11 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 45;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 85, 19 },
		{ 80, 84 },
		{ 85, 86 },
		{ 85, 23 },
		{ 85, 24 },
		{ 85, 25 },
		{ 85, 26 },
		{ 85, 22 },
		{ 85, 27 },
		{ 48, 66 },
		{ 48, 29 },
		{ 48, 30 },
		{ 60, 78 },
		{ 60, 37 },
		{ 58, 76 },
		{ 58, 34 },
		{ 48, 28 },
		{ 56, 74 },
		{ 56, 33 },
		{ 50, 68 },
		{ 50, 32 },
		{ 49, 67 },
		{ 49, 31 },
		{ 5, 20 },
		{ 5, 21 },
		{ 79, 83 },
		{ 59, 77 },
		{ 57, 75 },
		{ 55, 73 },
		{ 54, 72 },
		{ 53, 71 },
		{ 52, 70 },
		{ 51, 69 },
		{ 44, 65 },
		{ 43, 64 },
		{ 42, 63 },
		{ 41, 62 },
		{ 20, 46 },
		{ 13, 40 },
		{ 12, 39 },
		{ 11, 38 },
		{ 10, 36 },
		{ 9, 35 },
		{ 4, 6 },
		{ 0, 2 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 43, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 41, -1 },
		{ 20, 85 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 32, 48 },
		{ 31, 48 },
		{ 24, 60 },
		{ 23, 60 },
		{ 22, 60 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 33, 85 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 26, 48 },
		{ 25, 48 },
		{ 17, -1 },
		{ 16, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -1, 49 },
		{ 9, 50 },
		{ 6, 56 },
		{ 18, 56 },
		{ 17, 56 },
		{ 16, 56 },
		{ 15, 56 },
		{ 14, 56 },
		{ 3, 58 },
		{ 12, 58 },
		{ -1, 60 },
		{ 10, 60 },
		{ -4, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 21, 85 },
		{ -3, 85 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -2, 48 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 125 ".\\yacc.y"




int main(int argc, char *argv[])
{
    printf("This is a simple compiler.\n");
    printf("You can copy the main functions in input.txt and paste it here\n");
	printf("There are two main functions and they will work both.\n");

	int n = 1;
	lexer lexer;
	parser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			//lexer.yyin = new ifstream("input.txt");
			//lexer.yyin = new ifstream(argv[1]);
			//lexer.yyout = new ofstream(argv[2]);
			n = parser.yyparse();
			executeTree(parser_tree);
			//parse_tree.get_label();
			//parser_tree.gen_code(*lexer.yyout);
		}
	}
	
	getchar();
	return n;
}


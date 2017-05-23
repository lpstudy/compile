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
* yacc.h
* C++ header file generated from yacc.y.
* 
* Date: 05/09/16
* Time: 13:35:32
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _YACC_H
#define _YACC_H

#include <yycpars.h>

/////////////////////////////////////////////////////////////////////////////
// parser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR parser : public _YL yyfparser {
public:
	parser();
	virtual ~parser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
#line 12 ".\\yacc.y"

	// place any extra class members here

#line 69 "yacc.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME parser
#endif

#line 26 ".\\yacc.y"

#ifndef YYSTYPE
#define YYSTYPE Node *
#endif

#line 82 "yacc.h"
#define NUMBER 257
#define ID 258
#define PLUS 259
#define MINUS 260
#define TIMES 261
#define OVER 262
#define LP 263
#define RP 264
#define EOL 265
#define COMMENT 266
#define LBRACE 267
#define RBRACE 268
#define INT 269
#define DOUBLE 270
#define CHAR 271
#define ASSIGN 272
#define LT 273
#define GT 274
#define GE 275
#define NE 276
#define LE 277
#define EQ 278
#define AND 279
#define OR 280
#define NOT 281
#define SQRT 282
#define FABS 283
#define IF 284
#define ELSE 285
#define WHILE 286
#define INPUT 287
#define OUTPUT 288
#define SEMICOLON 289
#define COMMA 290
#define MAIN 291
#define END 292
#define UMINUS 293
#endif

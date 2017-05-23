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
* yacc.h
* C++ header file generated from yacc.y.
* 
* Date: 04/30/16
* Time: 20:33:15
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
#line 10 ".\\yacc.y"

	// place any extra class members here

#line 69 "yacc.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME parser
#endif

#line 24 ".\\yacc.y"

#ifndef YYSTYPE
#define YYSTYPE double
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
#define INT 267
#define DOUBLE 268
#define CHAR 269
#define ASSIGN 270
#define UMINUS 271
#endif

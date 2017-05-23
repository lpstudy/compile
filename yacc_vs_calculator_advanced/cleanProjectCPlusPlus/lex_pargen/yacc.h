/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 193 of your 30 day trial period.
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
* Date: 04/23/16
* Time: 11:09:22
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _YACC_H
#define _YACC_H

#include <yycpars.h>

/////////////////////////////////////////////////////////////////////////////
// yacc

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR yacc : public _YL yyfparser {
public:
	yacc();
	virtual ~yacc();

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
#line 9 ".\\yacc.y"

	// place any extra class members here
	virtual int yygettoken();

#line 70 "yacc.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME yacc
#endif

#line 24 ".\\yacc.y"

#ifndef YYSTYPE
#define YYSTYPE double
#endif

#line 83 "yacc.h"
#define UMINUS 257
#endif

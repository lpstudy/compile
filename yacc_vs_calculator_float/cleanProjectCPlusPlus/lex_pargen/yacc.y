%{
#include <stdio.h>
%}



%name yacc
// class definition
{
	// place any extra class members here
	virtual int yygettoken();
	double yyvalue;
}
// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// place any declarations here
%include {
#ifndef YYSTYPE
#define YYSTYPE double
#endif
}

%token NUMBER

%%

lines : lines expr '\n' {printf("%f\n", $2);}
	  | lines '\n'
	  |//empty line
	  ;

expr : expr '+' term {$$ = $1 + $3;}	
        | expr '-' term {$$ = $1 - $3;}	
        | term
        ;
term : term '*' factor {$$ = $1 * $3;}    
        | term '/' factor {$$ = $1 / $3;}        
        | factor {$$=$1;}
        ;
factor : '(' expr ')'   {$$=$2;}        
         | NUMBER {$$=yyvalue;}
         ;     
%%





int YYPARSERNAME::yygettoken()
{
    int c;
    double value;
    while((c = getchar())  == ' ');//jump the empty
    
    //here not the blank
    if(isdigit(c) || c == '.'){
        ungetc(c, stdin);
		cin>>value;
		yyvalue = value;
		return NUMBER;
    }
	
	return c;
}
int main()
{
//create a lexer, and call the lex function.
//it will read from stdin and parser the tokens.
	int n = 1;
	
	YYPARSERNAME parser;
	if (parser.yycreate()) 
	{
		n = parser.yyparse();
	}
	return n;
}
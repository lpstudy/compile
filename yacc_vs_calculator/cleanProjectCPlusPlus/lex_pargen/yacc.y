%{

%}



%name yacc
// class definition
{
	// place any extra class members here
	virtual int yygettoken();
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
         | DIGIT
         ;  
DIGIT	:	'0'				{ $$ = 0.0; }
		|	'1'				{ $$ = 1.0; }
		|	'2'				{ $$ = 2.0; }
		|	'3'				{ $$ = 3.0; }
		|	'4'				{ $$ = 4.0; }
		|	'5'				{ $$ = 5.0; }
		|	'6'				{ $$ = 6.0; }
		|	'7'				{ $$ = 7.0; }
		|	'8'				{ $$ = 8.0; }
		|	'9'				{ $$ = 9.0; }
		;         
%%





int YYPARSERNAME::yygettoken()
{
    return getchar();
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
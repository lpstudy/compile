%{
#include "lex.h"
#include "sym_table.h"
%}



%name parser
// class definition
{
	// place any extra class members here
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

%token NUMBER ID
%token PLUS MINUS TIMES OVER
%token LP RP EOL COMMENT
%TOKEN INT DOUBLE CHAR
%token ASSIGN

%left PLUS MINUS
%left TIMES OVER
%right UMINUS

%%

lines	:	lines expr EOL	{ printf("%g\n", $2); }
		|	lines EOL
		|   lines COMMENT
		|   
		;

expr	:	expr PLUS expr	{ $$ = $1 + $3; }
		|	expr MINUS expr	{ $$ = $1 - $3; }
		|	expr TIMES expr	{ $$ = $1 * $3; }
		|	expr OVER expr	{ $$ = $1 / $3; }
		|	LP expr RP	{ $$ = $2; }
		|	'-' expr %prec UMINUS	{ $$ = -$2; }
		|	NUMBER {$$=$1;} //$$=$1 can be ignored
		|   ID {$$ = sym_table.getValue($1);}//get value from sym_table
		|   ID ASSIGN expr {sym_table.setValue($1, $3); $$=$3; }//modify the value
		;  
%%



int main(int argc, char *argv[])
{
    printf("a cacluator which support +,-,*,/,() and variable: \n");
    printf("    e.g.  12.2+3*(2+5)\n");
	printf("          a = 10\n");
	printf("          a+3*a\n");
	int n = 1;
	lexer lexer;
	parser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			//lexer.yyin = new ifstream(argv[1]);
			//lexer.yyout = new ofstream(argv[2]);
			n = parser.yyparse();
			//parse_tree.get_label();
			//parse_tree.gen_code(*lexer.yyout);
		}
	}
	
	getchar();
	return n;
}

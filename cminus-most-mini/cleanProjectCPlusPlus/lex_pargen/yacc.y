%{
#include <fstream>
#include "lex.h"
#include "sym_table.h"
#include "tree.h"
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
#define YYSTYPE Node *
#endif
}

%token NUMBER ID
%token PLUS MINUS TIMES OVER
%token LP RP EOL COMMENT LBRACE RBRACE
%TOKEN INT DOUBLE CHAR
%token ASSIGN LT GT GE NE LE EQ AND OR NOT SQRT FABS
%token IF ELSE WHILE INPUT OUTPUT
%token SEMICOLON COMMA MAIN END

%right UMINUS

%%

program : MAIN LP RP compond_stmt { $$=$4; parser_tree.setRoot($$); executeTree(parser_tree); exit(0);} //for test
			;
compond_stmt : LBRACE stmt_list RBRACE
			{
				$$ = createCompStmt(parser_tree, $2);	
				
			}
			;

stmt_list : stmt_list stmt
			{
				YYSTYPE t = $1;
				if($1 != NULL){
					while(t->sibling != NULL)
						t = t->sibling;
					t->sibling = $2;
					$$ = $1;
				}else {
					$$ = $2;
				}
				
			}
			| stmt {$$ = $1;}
			;
stmt	:	expr_stmt{$$=$1;}
			| compond_stmt {$$=$1;}
			| if_stmt {$$=$1;}
			| while_stmt {$$=$1;}
			| input_stmt {$$=$1;}
			| output_stmt {$$=$1;}
			;
           
if_stmt  : IF LP expression RP stmt ELSE stmt {$$ = createIfStmt(parser_tree, $3, $5, $7);}
			| IF LP expression RP stmt {$$ = createIfStmt(parser_tree, $3, $5);}
			;
while_stmt : WHILE LP expression RP stmt {$$ = createWhileStmt(parser_tree, $3, $5);}
			;
input_stmt : INPUT LP var RP {$$ = createInputStmt(parser_tree, $3);}
			;
output_stmt : OUTPUT LP var RP {$$ = createOutStmt(parser_tree, $3);}
			;
expr_stmt : expression SEMICOLON {$$=$1;}
			| SEMICOLON {$$=NULL;} //not to create any Node
			;
expression: var ASSIGN expression {$$ = createOpExpr(parser_tree, $1, $3, ASSIGN);}
			| or_expression {$$=$1;}
			| MINUS expression %prec UMINUS	{ $$ = createOpExpr(parser_tree, $2, NULL, UMINUS_EXPR); }
			;

or_expression : or_expression OR and_expression {$$ = createOpExpr(parser_tree, $1, $3, OR);}
			| and_expression {$$ = $1;}
			;
and_expression : and_expression AND additive_expression {$$ = createOpExpr(parser_tree, $1, $3, AND);}
			| additive_expression {$$=$1;}
			;
additive_expression : additive_expression EQ rel_expression {$$ = createOpExpr(parser_tree, $1, $3, EQ);}
					| additive_expression LT rel_expression	{$$ = createOpExpr(parser_tree, $1, $3, LT);}
					| additive_expression GT rel_expression	{$$ = createOpExpr(parser_tree, $1, $3, GT);}
					| additive_expression LE rel_expression	{$$ = createOpExpr(parser_tree, $1, $3, LE);}
					| additive_expression GE rel_expression	{$$ = createOpExpr(parser_tree, $1, $3, GE);}
					| additive_expression NE rel_expression	{$$ = createOpExpr(parser_tree, $1, $3, NE);}
					| rel_expression {$$ = $1;}
					;
rel_expression : rel_expression PLUS term {$$ = createOpExpr(parser_tree, $1, $3, PLUS);}
                    | rel_expression MINUS term {$$ = createOpExpr(parser_tree, $1, $3, MINUS);}
                    | term { $$ = $1; }
                    ;
term                : term TIMES factor {$$ = createOpExpr(parser_tree, $1, $3, TIMES);}
                    | term OVER factor {$$ = createOpExpr(parser_tree, $1, $3, OVER);}
                    | factor { $$ = $1; }
                    ;
factor              : LP expression RP { $$ = $2; }
                    | var { $$ = $1; }
                    | NUMBER {$$ = createConst(parser_tree, $1->attr.vali);}
                    //| CONSTCHAR {$$ = createOpExpr(parser_tree, $1, $3, OVER);}
                    | NOT factor {$$ = createOpExpr(parser_tree, $2, NULL, NOT_EXPR);}
					| SQRT factor {$$ = createOpExpr(parser_tree, $3, NULL, SQRT);}
					| FABS factor  {$$ = createOpExpr(parser_tree, $3, NULL, FABS);}
                    ;
var               : ID { $$ = createId(parser_tree, (int)($1->attr.symtbl_seq));} //$1 stores sym_seq, returned by lex.l
					;
%%



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

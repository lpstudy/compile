%{
/***/
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name lexer


%%
[ \t]+ {printf(" ");}
\n|.    {printf("%sxxx", yytext);}
%%



int main()
{
//create a lexer, and call the lex function.
//it will read from stdin and parser the tokens.
 YYLEXERNAME lexer;
 if(lexer.yycreate()){
	 lexer.yylex();
 }
}
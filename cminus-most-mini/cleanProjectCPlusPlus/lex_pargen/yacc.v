#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 209 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# yacc.v
# YACC verbose file generated from yacc.y.
# 
# Date: 05/09/16
# Time: 13:35:32
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : program $end

    1  program : MAIN LP RP compond_stmt

    2  compond_stmt : LBRACE stmt_list RBRACE

    3  stmt_list : stmt_list stmt
    4            | stmt

    5  stmt : expr_stmt
    6       | compond_stmt
    7       | if_stmt
    8       | while_stmt
    9       | input_stmt
   10       | output_stmt

   11  if_stmt : IF LP expression RP stmt ELSE stmt
   12          | IF LP expression RP stmt

   13  while_stmt : WHILE LP expression RP stmt

   14  input_stmt : INPUT LP var RP

   15  output_stmt : OUTPUT LP var RP

   16  expr_stmt : expression SEMICOLON
   17            | SEMICOLON

   18  expression : var ASSIGN expression
   19             | or_expression
   20             | MINUS expression

   21  or_expression : or_expression OR and_expression
   22                | and_expression

   23  and_expression : and_expression AND additive_expression
   24                 | additive_expression

   25  additive_expression : additive_expression EQ rel_expression
   26                      | additive_expression LT rel_expression
   27                      | additive_expression GT rel_expression
   28                      | additive_expression LE rel_expression
   29                      | additive_expression GE rel_expression
   30                      | additive_expression NE rel_expression
   31                      | rel_expression

   32  rel_expression : rel_expression PLUS term
   33                 | rel_expression MINUS term
   34                 | term

   35  term : term TIMES factor
   36       | term OVER factor
   37       | factor

   38  factor : LP expression RP
   39         | var
   40         | NUMBER
   41         | NOT factor
   42         | SQRT factor
   43         | FABS factor

   44  var : ID


##############################################################################
# States
##############################################################################

state 0
	$accept : . program $end

	MAIN  shift 1

	program  goto 2


state 1
	program : MAIN . LP RP compond_stmt

	LP  shift 3


state 2
	$accept : program . $end  (0)

	$end  accept


state 3
	program : MAIN LP . RP compond_stmt

	RP  shift 4


state 4
	program : MAIN LP RP . compond_stmt

	LBRACE  shift 5

	compond_stmt  goto 6


state 5
	compond_stmt : LBRACE . stmt_list RBRACE

	NUMBER  shift 7
	ID  shift 8
	MINUS  shift 9
	LP  shift 10
	LBRACE  shift 5
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13
	IF  shift 14
	WHILE  shift 15
	INPUT  shift 16
	OUTPUT  shift 17
	SEMICOLON  shift 18

	compond_stmt  goto 19
	stmt_list  goto 20
	stmt  goto 21
	expr_stmt  goto 22
	if_stmt  goto 23
	while_stmt  goto 24
	input_stmt  goto 25
	output_stmt  goto 26
	expression  goto 27
	var  goto 28
	or_expression  goto 29
	and_expression  goto 30
	additive_expression  goto 31
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 6
	program : MAIN LP RP compond_stmt .  (1)

	.  reduce 1


state 7
	factor : NUMBER .  (40)

	.  reduce 40


state 8
	var : ID .  (44)

	.  reduce 44


state 9
	expression : MINUS . expression

	NUMBER  shift 7
	ID  shift 8
	MINUS  shift 9
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	expression  goto 35
	var  goto 28
	or_expression  goto 29
	and_expression  goto 30
	additive_expression  goto 31
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 10
	factor : LP . expression RP

	NUMBER  shift 7
	ID  shift 8
	MINUS  shift 9
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	expression  goto 36
	var  goto 28
	or_expression  goto 29
	and_expression  goto 30
	additive_expression  goto 31
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 11
	factor : NOT . factor

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	factor  goto 38


state 12
	factor : SQRT . factor

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	factor  goto 39


state 13
	factor : FABS . factor

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	factor  goto 40


state 14
	if_stmt : IF . LP expression RP stmt ELSE stmt
	if_stmt : IF . LP expression RP stmt

	LP  shift 41


state 15
	while_stmt : WHILE . LP expression RP stmt

	LP  shift 42


state 16
	input_stmt : INPUT . LP var RP

	LP  shift 43


state 17
	output_stmt : OUTPUT . LP var RP

	LP  shift 44


state 18
	expr_stmt : SEMICOLON .  (17)

	.  reduce 17


state 19
	stmt : compond_stmt .  (6)

	.  reduce 6


state 20
	compond_stmt : LBRACE stmt_list . RBRACE
	stmt_list : stmt_list . stmt

	NUMBER  shift 7
	ID  shift 8
	MINUS  shift 9
	LP  shift 10
	LBRACE  shift 5
	RBRACE  shift 45
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13
	IF  shift 14
	WHILE  shift 15
	INPUT  shift 16
	OUTPUT  shift 17
	SEMICOLON  shift 18

	compond_stmt  goto 19
	stmt  goto 46
	expr_stmt  goto 22
	if_stmt  goto 23
	while_stmt  goto 24
	input_stmt  goto 25
	output_stmt  goto 26
	expression  goto 27
	var  goto 28
	or_expression  goto 29
	and_expression  goto 30
	additive_expression  goto 31
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 21
	stmt_list : stmt .  (4)

	.  reduce 4


state 22
	stmt : expr_stmt .  (5)

	.  reduce 5


state 23
	stmt : if_stmt .  (7)

	.  reduce 7


state 24
	stmt : while_stmt .  (8)

	.  reduce 8


state 25
	stmt : input_stmt .  (9)

	.  reduce 9


state 26
	stmt : output_stmt .  (10)

	.  reduce 10


state 27
	expr_stmt : expression . SEMICOLON

	SEMICOLON  shift 47


state 28
	expression : var . ASSIGN expression
	factor : var .  (39)

	ASSIGN  shift 48
	.  reduce 39


state 29
	expression : or_expression .  (19)
	or_expression : or_expression . OR and_expression

	OR  shift 49
	.  reduce 19


state 30
	or_expression : and_expression .  (22)
	and_expression : and_expression . AND additive_expression

	AND  shift 50
	.  reduce 22


state 31
	and_expression : additive_expression .  (24)
	additive_expression : additive_expression . EQ rel_expression
	additive_expression : additive_expression . LT rel_expression
	additive_expression : additive_expression . GT rel_expression
	additive_expression : additive_expression . LE rel_expression
	additive_expression : additive_expression . GE rel_expression
	additive_expression : additive_expression . NE rel_expression

	LT  shift 51
	GT  shift 52
	GE  shift 53
	NE  shift 54
	LE  shift 55
	EQ  shift 56
	.  reduce 24


state 32
	additive_expression : rel_expression .  (31)
	rel_expression : rel_expression . PLUS term
	rel_expression : rel_expression . MINUS term

	PLUS  shift 57
	MINUS  shift 58
	.  reduce 31


state 33
	rel_expression : term .  (34)
	term : term . TIMES factor
	term : term . OVER factor

	TIMES  shift 59
	OVER  shift 60
	.  reduce 34


state 34
	term : factor .  (37)

	.  reduce 37


state 35
	expression : MINUS expression .  (20)

	.  reduce 20


state 36
	factor : LP expression . RP

	RP  shift 61


state 37
	factor : var .  (39)

	.  reduce 39


state 38
	factor : NOT factor .  (41)

	.  reduce 41


state 39
	factor : SQRT factor .  (42)

	.  reduce 42


state 40
	factor : FABS factor .  (43)

	.  reduce 43


state 41
	if_stmt : IF LP . expression RP stmt ELSE stmt
	if_stmt : IF LP . expression RP stmt

	NUMBER  shift 7
	ID  shift 8
	MINUS  shift 9
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	expression  goto 62
	var  goto 28
	or_expression  goto 29
	and_expression  goto 30
	additive_expression  goto 31
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 42
	while_stmt : WHILE LP . expression RP stmt

	NUMBER  shift 7
	ID  shift 8
	MINUS  shift 9
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	expression  goto 63
	var  goto 28
	or_expression  goto 29
	and_expression  goto 30
	additive_expression  goto 31
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 43
	input_stmt : INPUT LP . var RP

	ID  shift 8

	var  goto 64


state 44
	output_stmt : OUTPUT LP . var RP

	ID  shift 8

	var  goto 65


state 45
	compond_stmt : LBRACE stmt_list RBRACE .  (2)

	.  reduce 2


state 46
	stmt_list : stmt_list stmt .  (3)

	.  reduce 3


state 47
	expr_stmt : expression SEMICOLON .  (16)

	.  reduce 16


state 48
	expression : var ASSIGN . expression

	NUMBER  shift 7
	ID  shift 8
	MINUS  shift 9
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	expression  goto 66
	var  goto 28
	or_expression  goto 29
	and_expression  goto 30
	additive_expression  goto 31
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 49
	or_expression : or_expression OR . and_expression

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	and_expression  goto 67
	additive_expression  goto 31
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 50
	and_expression : and_expression AND . additive_expression

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	additive_expression  goto 68
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 51
	additive_expression : additive_expression LT . rel_expression

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	rel_expression  goto 69
	term  goto 33
	factor  goto 34


state 52
	additive_expression : additive_expression GT . rel_expression

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	rel_expression  goto 70
	term  goto 33
	factor  goto 34


state 53
	additive_expression : additive_expression GE . rel_expression

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	rel_expression  goto 71
	term  goto 33
	factor  goto 34


state 54
	additive_expression : additive_expression NE . rel_expression

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	rel_expression  goto 72
	term  goto 33
	factor  goto 34


state 55
	additive_expression : additive_expression LE . rel_expression

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	rel_expression  goto 73
	term  goto 33
	factor  goto 34


state 56
	additive_expression : additive_expression EQ . rel_expression

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	rel_expression  goto 74
	term  goto 33
	factor  goto 34


state 57
	rel_expression : rel_expression PLUS . term

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	term  goto 75
	factor  goto 34


state 58
	rel_expression : rel_expression MINUS . term

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	term  goto 76
	factor  goto 34


state 59
	term : term TIMES . factor

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	factor  goto 77


state 60
	term : term OVER . factor

	NUMBER  shift 7
	ID  shift 8
	LP  shift 10
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13

	var  goto 37
	factor  goto 78


state 61
	factor : LP expression RP .  (38)

	.  reduce 38


state 62
	if_stmt : IF LP expression . RP stmt ELSE stmt
	if_stmt : IF LP expression . RP stmt

	RP  shift 79


state 63
	while_stmt : WHILE LP expression . RP stmt

	RP  shift 80


state 64
	input_stmt : INPUT LP var . RP

	RP  shift 81


state 65
	output_stmt : OUTPUT LP var . RP

	RP  shift 82


state 66
	expression : var ASSIGN expression .  (18)

	.  reduce 18


state 67
	or_expression : or_expression OR and_expression .  (21)
	and_expression : and_expression . AND additive_expression

	AND  shift 50
	.  reduce 21


state 68
	and_expression : and_expression AND additive_expression .  (23)
	additive_expression : additive_expression . EQ rel_expression
	additive_expression : additive_expression . LT rel_expression
	additive_expression : additive_expression . GT rel_expression
	additive_expression : additive_expression . LE rel_expression
	additive_expression : additive_expression . GE rel_expression
	additive_expression : additive_expression . NE rel_expression

	LT  shift 51
	GT  shift 52
	GE  shift 53
	NE  shift 54
	LE  shift 55
	EQ  shift 56
	.  reduce 23


state 69
	additive_expression : additive_expression LT rel_expression .  (26)
	rel_expression : rel_expression . PLUS term
	rel_expression : rel_expression . MINUS term

	PLUS  shift 57
	MINUS  shift 58
	.  reduce 26


state 70
	additive_expression : additive_expression GT rel_expression .  (27)
	rel_expression : rel_expression . PLUS term
	rel_expression : rel_expression . MINUS term

	PLUS  shift 57
	MINUS  shift 58
	.  reduce 27


state 71
	additive_expression : additive_expression GE rel_expression .  (29)
	rel_expression : rel_expression . PLUS term
	rel_expression : rel_expression . MINUS term

	PLUS  shift 57
	MINUS  shift 58
	.  reduce 29


state 72
	additive_expression : additive_expression NE rel_expression .  (30)
	rel_expression : rel_expression . PLUS term
	rel_expression : rel_expression . MINUS term

	PLUS  shift 57
	MINUS  shift 58
	.  reduce 30


state 73
	additive_expression : additive_expression LE rel_expression .  (28)
	rel_expression : rel_expression . PLUS term
	rel_expression : rel_expression . MINUS term

	PLUS  shift 57
	MINUS  shift 58
	.  reduce 28


state 74
	additive_expression : additive_expression EQ rel_expression .  (25)
	rel_expression : rel_expression . PLUS term
	rel_expression : rel_expression . MINUS term

	PLUS  shift 57
	MINUS  shift 58
	.  reduce 25


state 75
	rel_expression : rel_expression PLUS term .  (32)
	term : term . TIMES factor
	term : term . OVER factor

	TIMES  shift 59
	OVER  shift 60
	.  reduce 32


state 76
	rel_expression : rel_expression MINUS term .  (33)
	term : term . TIMES factor
	term : term . OVER factor

	TIMES  shift 59
	OVER  shift 60
	.  reduce 33


state 77
	term : term TIMES factor .  (35)

	.  reduce 35


state 78
	term : term OVER factor .  (36)

	.  reduce 36


state 79
	if_stmt : IF LP expression RP . stmt ELSE stmt
	if_stmt : IF LP expression RP . stmt

	NUMBER  shift 7
	ID  shift 8
	MINUS  shift 9
	LP  shift 10
	LBRACE  shift 5
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13
	IF  shift 14
	WHILE  shift 15
	INPUT  shift 16
	OUTPUT  shift 17
	SEMICOLON  shift 18

	compond_stmt  goto 19
	stmt  goto 83
	expr_stmt  goto 22
	if_stmt  goto 23
	while_stmt  goto 24
	input_stmt  goto 25
	output_stmt  goto 26
	expression  goto 27
	var  goto 28
	or_expression  goto 29
	and_expression  goto 30
	additive_expression  goto 31
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 80
	while_stmt : WHILE LP expression RP . stmt

	NUMBER  shift 7
	ID  shift 8
	MINUS  shift 9
	LP  shift 10
	LBRACE  shift 5
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13
	IF  shift 14
	WHILE  shift 15
	INPUT  shift 16
	OUTPUT  shift 17
	SEMICOLON  shift 18

	compond_stmt  goto 19
	stmt  goto 84
	expr_stmt  goto 22
	if_stmt  goto 23
	while_stmt  goto 24
	input_stmt  goto 25
	output_stmt  goto 26
	expression  goto 27
	var  goto 28
	or_expression  goto 29
	and_expression  goto 30
	additive_expression  goto 31
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 81
	input_stmt : INPUT LP var RP .  (14)

	.  reduce 14


state 82
	output_stmt : OUTPUT LP var RP .  (15)

	.  reduce 15


83: shift-reduce conflict (shift 85, reduce 12) on ELSE
state 83
	if_stmt : IF LP expression RP stmt . ELSE stmt
	if_stmt : IF LP expression RP stmt .  (12)

	ELSE  shift 85
	.  reduce 12


state 84
	while_stmt : WHILE LP expression RP stmt .  (13)

	.  reduce 13


state 85
	if_stmt : IF LP expression RP stmt ELSE . stmt

	NUMBER  shift 7
	ID  shift 8
	MINUS  shift 9
	LP  shift 10
	LBRACE  shift 5
	NOT  shift 11
	SQRT  shift 12
	FABS  shift 13
	IF  shift 14
	WHILE  shift 15
	INPUT  shift 16
	OUTPUT  shift 17
	SEMICOLON  shift 18

	compond_stmt  goto 19
	stmt  goto 86
	expr_stmt  goto 22
	if_stmt  goto 23
	while_stmt  goto 24
	input_stmt  goto 25
	output_stmt  goto 26
	expression  goto 27
	var  goto 28
	or_expression  goto 29
	and_expression  goto 30
	additive_expression  goto 31
	rel_expression  goto 32
	term  goto 33
	factor  goto 34


state 86
	if_stmt : IF LP expression RP stmt ELSE stmt .  (11)

	.  reduce 11


##############################################################################
# Summary
##############################################################################

State 83 contains 1 shift-reduce conflict(s)


32 token(s), 18 nonterminal(s)
45 grammar rule(s), 87 state(s)


##############################################################################
# End of File
##############################################################################

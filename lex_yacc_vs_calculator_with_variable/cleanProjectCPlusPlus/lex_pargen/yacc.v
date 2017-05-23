#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 201 of your 30 day trial period.
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
# Date: 04/30/16
# Time: 20:33:15
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : lines $end

    1  lines : lines expr EOL
    2        | lines EOL
    3        | lines COMMENT
    4        |

    5  expr : expr PLUS expr
    6       | expr MINUS expr
    7       | expr TIMES expr
    8       | expr OVER expr
    9       | LP expr RP
   10       | '-' expr
   11       | NUMBER
   12       | ID
   13       | ID ASSIGN expr


##############################################################################
# States
##############################################################################

state 0
	$accept : . lines $end
	lines : .  (4)

	.  reduce 4

	lines  goto 1


state 1
	lines : lines . expr EOL
	lines : lines . EOL
	lines : lines . COMMENT
	$accept : lines . $end  (0)

	$end  accept
	'-'  shift 2
	NUMBER  shift 3
	ID  shift 4
	LP  shift 5
	EOL  shift 6
	COMMENT  shift 7

	expr  goto 8


state 2
	expr : '-' . expr

	'-'  shift 2
	NUMBER  shift 3
	ID  shift 4
	LP  shift 5

	expr  goto 9


state 3
	expr : NUMBER .  (11)

	.  reduce 11


state 4
	expr : ID .  (12)
	expr : ID . ASSIGN expr

	ASSIGN  shift 10
	.  reduce 12


state 5
	expr : LP . expr RP

	'-'  shift 2
	NUMBER  shift 3
	ID  shift 4
	LP  shift 5

	expr  goto 11


state 6
	lines : lines EOL .  (2)

	.  reduce 2


state 7
	lines : lines COMMENT .  (3)

	.  reduce 3


state 8
	lines : lines expr . EOL
	expr : expr . PLUS expr
	expr : expr . MINUS expr
	expr : expr . TIMES expr
	expr : expr . OVER expr

	PLUS  shift 12
	MINUS  shift 13
	TIMES  shift 14
	OVER  shift 15
	EOL  shift 16


state 9
	expr : expr . PLUS expr
	expr : expr . MINUS expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : '-' expr .  (10)

	.  reduce 10


state 10
	expr : ID ASSIGN . expr

	'-'  shift 2
	NUMBER  shift 3
	ID  shift 4
	LP  shift 5

	expr  goto 17


state 11
	expr : expr . PLUS expr
	expr : expr . MINUS expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : LP expr . RP

	PLUS  shift 12
	MINUS  shift 13
	TIMES  shift 14
	OVER  shift 15
	RP  shift 18


state 12
	expr : expr PLUS . expr

	'-'  shift 2
	NUMBER  shift 3
	ID  shift 4
	LP  shift 5

	expr  goto 19


state 13
	expr : expr MINUS . expr

	'-'  shift 2
	NUMBER  shift 3
	ID  shift 4
	LP  shift 5

	expr  goto 20


state 14
	expr : expr TIMES . expr

	'-'  shift 2
	NUMBER  shift 3
	ID  shift 4
	LP  shift 5

	expr  goto 21


state 15
	expr : expr OVER . expr

	'-'  shift 2
	NUMBER  shift 3
	ID  shift 4
	LP  shift 5

	expr  goto 22


state 16
	lines : lines expr EOL .  (1)

	.  reduce 1


17: shift-reduce conflict (shift 12, reduce 13) on PLUS
17: shift-reduce conflict (shift 13, reduce 13) on MINUS
17: shift-reduce conflict (shift 14, reduce 13) on TIMES
17: shift-reduce conflict (shift 15, reduce 13) on OVER
state 17
	expr : expr . PLUS expr
	expr : expr . MINUS expr
	expr : expr . TIMES expr
	expr : expr . OVER expr
	expr : ID ASSIGN expr .  (13)

	PLUS  shift 12
	MINUS  shift 13
	TIMES  shift 14
	OVER  shift 15
	.  reduce 13


state 18
	expr : LP expr RP .  (9)

	.  reduce 9


state 19
	expr : expr PLUS expr .  (5)
	expr : expr . PLUS expr
	expr : expr . MINUS expr
	expr : expr . TIMES expr
	expr : expr . OVER expr

	TIMES  shift 14
	OVER  shift 15
	.  reduce 5


state 20
	expr : expr . PLUS expr
	expr : expr MINUS expr .  (6)
	expr : expr . MINUS expr
	expr : expr . TIMES expr
	expr : expr . OVER expr

	TIMES  shift 14
	OVER  shift 15
	.  reduce 6


state 21
	expr : expr . PLUS expr
	expr : expr . MINUS expr
	expr : expr TIMES expr .  (7)
	expr : expr . TIMES expr
	expr : expr . OVER expr

	.  reduce 7


state 22
	expr : expr . PLUS expr
	expr : expr . MINUS expr
	expr : expr . TIMES expr
	expr : expr OVER expr .  (8)
	expr : expr . OVER expr

	.  reduce 8


##############################################################################
# Summary
##############################################################################

State 17 contains 4 shift-reduce conflict(s)


15 token(s), 3 nonterminal(s)
14 grammar rule(s), 23 state(s)


##############################################################################
# End of File
##############################################################################

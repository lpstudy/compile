#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 193 of your 30 day trial period.
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
# Date: 04/23/16
# Time: 13:21:24
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : lines $end

    1  lines : lines expr '\n'
    2        | lines '\n'
    3        |

    4  expr : expr '+' term
    5       | expr '-' term
    6       | term

    7  term : term '*' factor
    8       | term '/' factor
    9       | factor

   10  factor : '(' expr ')'
   11         | NUMBER


##############################################################################
# States
##############################################################################

state 0
	$accept : . lines $end
	lines : .  (3)

	.  reduce 3

	lines  goto 1


state 1
	lines : lines . expr '\n'
	lines : lines . '\n'
	$accept : lines . $end  (0)

	$end  accept
	'\n'  shift 2
	'('  shift 3
	NUMBER  shift 4

	expr  goto 5
	term  goto 6
	factor  goto 7


state 2
	lines : lines '\n' .  (2)

	.  reduce 2


state 3
	factor : '(' . expr ')'

	'('  shift 3
	NUMBER  shift 4

	expr  goto 8
	term  goto 6
	factor  goto 7


state 4
	factor : NUMBER .  (11)

	.  reduce 11


state 5
	lines : lines expr . '\n'
	expr : expr . '+' term
	expr : expr . '-' term

	'\n'  shift 9
	'+'  shift 10
	'-'  shift 11


state 6
	expr : term .  (6)
	term : term . '*' factor
	term : term . '/' factor

	'*'  shift 12
	'/'  shift 13
	.  reduce 6


state 7
	term : factor .  (9)

	.  reduce 9


state 8
	expr : expr . '+' term
	expr : expr . '-' term
	factor : '(' expr . ')'

	')'  shift 14
	'+'  shift 10
	'-'  shift 11


state 9
	lines : lines expr '\n' .  (1)

	.  reduce 1


state 10
	expr : expr '+' . term

	'('  shift 3
	NUMBER  shift 4

	term  goto 15
	factor  goto 7


state 11
	expr : expr '-' . term

	'('  shift 3
	NUMBER  shift 4

	term  goto 16
	factor  goto 7


state 12
	term : term '*' . factor

	'('  shift 3
	NUMBER  shift 4

	factor  goto 17


state 13
	term : term '/' . factor

	'('  shift 3
	NUMBER  shift 4

	factor  goto 18


state 14
	factor : '(' expr ')' .  (10)

	.  reduce 10


state 15
	expr : expr '+' term .  (4)
	term : term . '*' factor
	term : term . '/' factor

	'*'  shift 12
	'/'  shift 13
	.  reduce 4


state 16
	expr : expr '-' term .  (5)
	term : term . '*' factor
	term : term . '/' factor

	'*'  shift 12
	'/'  shift 13
	.  reduce 5


state 17
	term : term '*' factor .  (7)

	.  reduce 7


state 18
	term : term '/' factor .  (8)

	.  reduce 8


##############################################################################
# Summary
##############################################################################

10 token(s), 5 nonterminal(s)
12 grammar rule(s), 19 state(s)


##############################################################################
# End of File
##############################################################################

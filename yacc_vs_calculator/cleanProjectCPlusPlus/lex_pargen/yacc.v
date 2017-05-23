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
# Time: 11:17:54
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
   11         | DIGIT

   12  DIGIT : '0'
   13        | '1'
   14        | '2'
   15        | '3'
   16        | '4'
   17        | '5'
   18        | '6'
   19        | '7'
   20        | '8'
   21        | '9'


##############################################################################
# States
##############################################################################

state 0
	$accept : . lines $end
	lines : .  (3)

	.  reduce 3

	lines  goto 1


state 1
	$accept : lines . $end  (0)
	lines : lines . expr '\n'
	lines : lines . '\n'

	$end  accept
	'\n'  shift 2
	'('  shift 3
	'0'  shift 4
	'1'  shift 5
	'2'  shift 6
	'3'  shift 7
	'4'  shift 8
	'5'  shift 9
	'6'  shift 10
	'7'  shift 11
	'8'  shift 12
	'9'  shift 13

	expr  goto 14
	term  goto 15
	factor  goto 16
	DIGIT  goto 17


state 2
	lines : lines '\n' .  (2)

	.  reduce 2


state 3
	factor : '(' . expr ')'

	'('  shift 3
	'0'  shift 4
	'1'  shift 5
	'2'  shift 6
	'3'  shift 7
	'4'  shift 8
	'5'  shift 9
	'6'  shift 10
	'7'  shift 11
	'8'  shift 12
	'9'  shift 13

	expr  goto 18
	term  goto 15
	factor  goto 16
	DIGIT  goto 17


state 4
	DIGIT : '0' .  (12)

	.  reduce 12


state 5
	DIGIT : '1' .  (13)

	.  reduce 13


state 6
	DIGIT : '2' .  (14)

	.  reduce 14


state 7
	DIGIT : '3' .  (15)

	.  reduce 15


state 8
	DIGIT : '4' .  (16)

	.  reduce 16


state 9
	DIGIT : '5' .  (17)

	.  reduce 17


state 10
	DIGIT : '6' .  (18)

	.  reduce 18


state 11
	DIGIT : '7' .  (19)

	.  reduce 19


state 12
	DIGIT : '8' .  (20)

	.  reduce 20


state 13
	DIGIT : '9' .  (21)

	.  reduce 21


state 14
	lines : lines expr . '\n'
	expr : expr . '+' term
	expr : expr . '-' term

	'\n'  shift 19
	'+'  shift 20
	'-'  shift 21


state 15
	term : term . '/' factor
	expr : term .  (6)
	term : term . '*' factor

	'*'  shift 22
	'/'  shift 23
	.  reduce 6


state 16
	term : factor .  (9)

	.  reduce 9


state 17
	factor : DIGIT .  (11)

	.  reduce 11


state 18
	factor : '(' expr . ')'
	expr : expr . '+' term
	expr : expr . '-' term

	')'  shift 24
	'+'  shift 20
	'-'  shift 21


state 19
	lines : lines expr '\n' .  (1)

	.  reduce 1


state 20
	expr : expr '+' . term

	'('  shift 3
	'0'  shift 4
	'1'  shift 5
	'2'  shift 6
	'3'  shift 7
	'4'  shift 8
	'5'  shift 9
	'6'  shift 10
	'7'  shift 11
	'8'  shift 12
	'9'  shift 13

	term  goto 25
	factor  goto 16
	DIGIT  goto 17


state 21
	expr : expr '-' . term

	'('  shift 3
	'0'  shift 4
	'1'  shift 5
	'2'  shift 6
	'3'  shift 7
	'4'  shift 8
	'5'  shift 9
	'6'  shift 10
	'7'  shift 11
	'8'  shift 12
	'9'  shift 13

	term  goto 26
	factor  goto 16
	DIGIT  goto 17


state 22
	term : term '*' . factor

	'('  shift 3
	'0'  shift 4
	'1'  shift 5
	'2'  shift 6
	'3'  shift 7
	'4'  shift 8
	'5'  shift 9
	'6'  shift 10
	'7'  shift 11
	'8'  shift 12
	'9'  shift 13

	factor  goto 27
	DIGIT  goto 17


state 23
	term : term '/' . factor

	'('  shift 3
	'0'  shift 4
	'1'  shift 5
	'2'  shift 6
	'3'  shift 7
	'4'  shift 8
	'5'  shift 9
	'6'  shift 10
	'7'  shift 11
	'8'  shift 12
	'9'  shift 13

	factor  goto 28
	DIGIT  goto 17


state 24
	factor : '(' expr ')' .  (10)

	.  reduce 10


state 25
	term : term . '/' factor
	expr : expr '+' term .  (4)
	term : term . '*' factor

	'*'  shift 22
	'/'  shift 23
	.  reduce 4


state 26
	term : term . '/' factor
	expr : expr '-' term .  (5)
	term : term . '*' factor

	'*'  shift 22
	'/'  shift 23
	.  reduce 5


state 27
	term : term '*' factor .  (7)

	.  reduce 7


state 28
	term : term '/' factor .  (8)

	.  reduce 8


##############################################################################
# Summary
##############################################################################

19 token(s), 6 nonterminal(s)
22 grammar rule(s), 29 state(s)


##############################################################################
# End of File
##############################################################################

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
# Time: 11:09:22
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

    4  expr : expr '+' expr
    5       | expr '-' expr
    6       | expr '*' expr
    7       | expr '/' expr
    8       | '(' expr ')'
    9       | '-' expr
   10       | NUMBER

   11  NUMBER : '0'
   12         | '1'
   13         | '2'
   14         | '3'
   15         | '4'
   16         | '5'
   17         | '6'
   18         | '7'
   19         | '8'
   20         | '9'


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
	'-'  shift 4
	'0'  shift 5
	'1'  shift 6
	'2'  shift 7
	'3'  shift 8
	'4'  shift 9
	'5'  shift 10
	'6'  shift 11
	'7'  shift 12
	'8'  shift 13
	'9'  shift 14

	expr  goto 15
	NUMBER  goto 16


state 2
	lines : lines '\n' .  (2)

	.  reduce 2


state 3
	expr : '(' . expr ')'

	'('  shift 3
	'-'  shift 4
	'0'  shift 5
	'1'  shift 6
	'2'  shift 7
	'3'  shift 8
	'4'  shift 9
	'5'  shift 10
	'6'  shift 11
	'7'  shift 12
	'8'  shift 13
	'9'  shift 14

	expr  goto 17
	NUMBER  goto 16


state 4
	expr : '-' . expr

	'('  shift 3
	'-'  shift 4
	'0'  shift 5
	'1'  shift 6
	'2'  shift 7
	'3'  shift 8
	'4'  shift 9
	'5'  shift 10
	'6'  shift 11
	'7'  shift 12
	'8'  shift 13
	'9'  shift 14

	expr  goto 18
	NUMBER  goto 16


state 5
	NUMBER : '0' .  (11)

	.  reduce 11


state 6
	NUMBER : '1' .  (12)

	.  reduce 12


state 7
	NUMBER : '2' .  (13)

	.  reduce 13


state 8
	NUMBER : '3' .  (14)

	.  reduce 14


state 9
	NUMBER : '4' .  (15)

	.  reduce 15


state 10
	NUMBER : '5' .  (16)

	.  reduce 16


state 11
	NUMBER : '6' .  (17)

	.  reduce 17


state 12
	NUMBER : '7' .  (18)

	.  reduce 18


state 13
	NUMBER : '8' .  (19)

	.  reduce 19


state 14
	NUMBER : '9' .  (20)

	.  reduce 20


state 15
	lines : lines expr . '\n'
	expr : expr . '+' expr
	expr : expr . '-' expr
	expr : expr . '*' expr
	expr : expr . '/' expr

	'\n'  shift 19
	'*'  shift 20
	'+'  shift 21
	'-'  shift 22
	'/'  shift 23


state 16
	expr : NUMBER .  (10)

	.  reduce 10


state 17
	expr : expr . '+' expr
	expr : expr . '-' expr
	expr : expr . '*' expr
	expr : expr . '/' expr
	expr : '(' expr . ')'

	')'  shift 24
	'*'  shift 20
	'+'  shift 21
	'-'  shift 22
	'/'  shift 23


state 18
	expr : expr . '+' expr
	expr : expr . '-' expr
	expr : expr . '*' expr
	expr : expr . '/' expr
	expr : '-' expr .  (9)

	.  reduce 9


state 19
	lines : lines expr '\n' .  (1)

	.  reduce 1


state 20
	expr : expr '*' . expr

	'('  shift 3
	'-'  shift 4
	'0'  shift 5
	'1'  shift 6
	'2'  shift 7
	'3'  shift 8
	'4'  shift 9
	'5'  shift 10
	'6'  shift 11
	'7'  shift 12
	'8'  shift 13
	'9'  shift 14

	expr  goto 25
	NUMBER  goto 16


state 21
	expr : expr '+' . expr

	'('  shift 3
	'-'  shift 4
	'0'  shift 5
	'1'  shift 6
	'2'  shift 7
	'3'  shift 8
	'4'  shift 9
	'5'  shift 10
	'6'  shift 11
	'7'  shift 12
	'8'  shift 13
	'9'  shift 14

	expr  goto 26
	NUMBER  goto 16


state 22
	expr : expr '-' . expr

	'('  shift 3
	'-'  shift 4
	'0'  shift 5
	'1'  shift 6
	'2'  shift 7
	'3'  shift 8
	'4'  shift 9
	'5'  shift 10
	'6'  shift 11
	'7'  shift 12
	'8'  shift 13
	'9'  shift 14

	expr  goto 27
	NUMBER  goto 16


state 23
	expr : expr '/' . expr

	'('  shift 3
	'-'  shift 4
	'0'  shift 5
	'1'  shift 6
	'2'  shift 7
	'3'  shift 8
	'4'  shift 9
	'5'  shift 10
	'6'  shift 11
	'7'  shift 12
	'8'  shift 13
	'9'  shift 14

	expr  goto 28
	NUMBER  goto 16


state 24
	expr : '(' expr ')' .  (8)

	.  reduce 8


state 25
	expr : expr . '+' expr
	expr : expr . '-' expr
	expr : expr '*' expr .  (6)
	expr : expr . '*' expr
	expr : expr . '/' expr

	.  reduce 6


state 26
	expr : expr '+' expr .  (4)
	expr : expr . '+' expr
	expr : expr . '-' expr
	expr : expr . '*' expr
	expr : expr . '/' expr

	'*'  shift 20
	'/'  shift 23
	.  reduce 4


state 27
	expr : expr . '+' expr
	expr : expr '-' expr .  (5)
	expr : expr . '-' expr
	expr : expr . '*' expr
	expr : expr . '/' expr

	'*'  shift 20
	'/'  shift 23
	.  reduce 5


state 28
	expr : expr . '+' expr
	expr : expr . '-' expr
	expr : expr . '*' expr
	expr : expr '/' expr .  (7)
	expr : expr . '/' expr

	.  reduce 7


##############################################################################
# Summary
##############################################################################

20 token(s), 4 nonterminal(s)
21 grammar rule(s), 29 state(s)


##############################################################################
# End of File
##############################################################################

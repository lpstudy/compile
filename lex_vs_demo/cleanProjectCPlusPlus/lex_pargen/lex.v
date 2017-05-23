#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 192 of your 30 day trial period.
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
# lex.v
# Lex verbose file generated from lex.l.
# 
# Date: 04/22/16
# Time: 10:49:10
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [ \t]+

    2  \n|.


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a - 0x1f (22)   goto 3
	0x20               goto 4
	0x21 - 0xff (223)  goto 3


state 2
	^INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a - 0x1f (22)   goto 3
	0x20               goto 4
	0x21 - 0xff (223)  goto 3


state 3
	match 2


state 4
	0x09               goto 4
	0x20               goto 4

	match 1


#############################################################################
# Summary
#############################################################################

1 start state(s)
2 expression(s), 4 state(s)


#############################################################################
# End of File
#############################################################################

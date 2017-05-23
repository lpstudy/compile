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
# lex.v
# Lex verbose file generated from lex.l.
# 
# Date: 04/30/16
# Time: 20:33:15
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [ \t]+

    2  "int"

    3  "double"

    4  "char"

    5  "+"

    6  "-"

    7  "*"

    8  "/"

    9  "("

   10  ")"

   11  "\n"

   12  "="

   13  [a-zA-Z]([a-zA-Z]|[0-9])*

   14  [0-9]+(\.[0-9]+)?

   15  "//".*

   16  "."


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x28               goto 5
	0x29               goto 6
	0x2a               goto 7
	0x2b               goto 8
	0x2d               goto 9
	0x2e               goto 10
	0x2f               goto 11
	0x30 - 0x39 (10)   goto 12
	0x3d               goto 13
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x62 (2)    goto 14
	0x63               goto 15
	0x64               goto 16
	0x65 - 0x68 (4)    goto 14
	0x69               goto 17
	0x6a - 0x7a (17)   goto 14


state 2
	^INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x28               goto 5
	0x29               goto 6
	0x2a               goto 7
	0x2b               goto 8
	0x2d               goto 9
	0x2e               goto 10
	0x2f               goto 11
	0x30 - 0x39 (10)   goto 12
	0x3d               goto 13
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x62 (2)    goto 14
	0x63               goto 15
	0x64               goto 16
	0x65 - 0x68 (4)    goto 14
	0x69               goto 17
	0x6a - 0x7a (17)   goto 14


state 3
	0x09               goto 3
	0x20               goto 3

	match 1


state 4
	match 11


state 5
	match 9


state 6
	match 10


state 7
	match 7


state 8
	match 5


state 9
	match 6


state 10
	match 16


state 11
	0x2f               goto 18

	match 8


state 12
	0x2e               goto 19
	0x30 - 0x39 (10)   goto 12

	match 14


state 13
	match 12


state 14
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x7a (26)   goto 14

	match 13


state 15
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x67 (7)    goto 14
	0x68               goto 20
	0x69 - 0x7a (18)   goto 14

	match 13


state 16
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x6e (14)   goto 14
	0x6f               goto 21
	0x70 - 0x7a (11)   goto 14

	match 13


state 17
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x6d (13)   goto 14
	0x6e               goto 22
	0x6f - 0x7a (12)   goto 14

	match 13


state 18
	0x00 - 0x09 (10)   goto 18
	0x0b - 0xff (245)  goto 18

	match 15


state 19
	0x30 - 0x39 (10)   goto 23


state 20
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61               goto 24
	0x62 - 0x7a (25)   goto 14

	match 13


state 21
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x74 (20)   goto 14
	0x75               goto 25
	0x76 - 0x7a (5)    goto 14

	match 13


state 22
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x73 (19)   goto 14
	0x74               goto 26
	0x75 - 0x7a (6)    goto 14

	match 13


state 23
	0x30 - 0x39 (10)   goto 23

	match 14


state 24
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x71 (17)   goto 14
	0x72               goto 27
	0x73 - 0x7a (8)    goto 14

	match 13


state 25
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61               goto 14
	0x62               goto 28
	0x63 - 0x7a (24)   goto 14

	match 13


state 26
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x7a (26)   goto 14

	match 2


state 27
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x7a (26)   goto 14

	match 4


state 28
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x6b (11)   goto 14
	0x6c               goto 29
	0x6d - 0x7a (14)   goto 14

	match 13


state 29
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x64 (4)    goto 14
	0x65               goto 30
	0x66 - 0x7a (21)   goto 14

	match 13


state 30
	0x30 - 0x39 (10)   goto 14
	0x41 - 0x5a (26)   goto 14
	0x61 - 0x7a (26)   goto 14

	match 3


#############################################################################
# Summary
#############################################################################

1 start state(s)
16 expression(s), 30 state(s)


#############################################################################
# End of File
#############################################################################

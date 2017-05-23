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
# lex.v
# Lex verbose file generated from lex.l.
# 
# Date: 05/09/16
# Time: 13:35:32
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

    5  ";"

    6  ","

    7  "+"

    8  "-"

    9  "*"

   10  "/"

   11  "("

   12  ")"

   13  "<"

   14  ">"

   15  "<="

   16  ">="

   17  "=="

   18  "!="

   19  "\n"

   20  "="

   21  "if"

   22  "else"

   23  "while"

   24  "input"

   25  "output"

   26  "main"

   27  "$"

   28  "{"

   29  "}"

   30  "||"

   31  "&&"

   32  "!"

   33  "sqrt"

   34  "fabs"

   35  [a-zA-Z]([a-zA-Z]|[0-9])*

   36  -?[0-9]+(\.[0-9]+)?

   37  "//"

   38  "\""

   39  "."


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x22               goto 6
	0x24               goto 7
	0x26               goto 8
	0x28               goto 9
	0x29               goto 10
	0x2a               goto 11
	0x2b               goto 12
	0x2c               goto 13
	0x2d               goto 14
	0x2e               goto 15
	0x2f               goto 16
	0x30 - 0x39 (10)   goto 17
	0x3b               goto 18
	0x3c               goto 19
	0x3d               goto 20
	0x3e               goto 21
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x62 (2)    goto 22
	0x63               goto 23
	0x64               goto 24
	0x65               goto 25
	0x66               goto 26
	0x67 - 0x68 (2)    goto 22
	0x69               goto 27
	0x6a - 0x6c (3)    goto 22
	0x6d               goto 28
	0x6e               goto 22
	0x6f               goto 29
	0x70 - 0x72 (3)    goto 22
	0x73               goto 30
	0x74 - 0x76 (3)    goto 22
	0x77               goto 31
	0x78 - 0x7a (3)    goto 22
	0x7b               goto 32
	0x7c               goto 33
	0x7d               goto 34


state 2
	^INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x22               goto 6
	0x24               goto 7
	0x26               goto 8
	0x28               goto 9
	0x29               goto 10
	0x2a               goto 11
	0x2b               goto 12
	0x2c               goto 13
	0x2d               goto 14
	0x2e               goto 15
	0x2f               goto 16
	0x30 - 0x39 (10)   goto 17
	0x3b               goto 18
	0x3c               goto 19
	0x3d               goto 20
	0x3e               goto 21
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x62 (2)    goto 22
	0x63               goto 23
	0x64               goto 24
	0x65               goto 25
	0x66               goto 26
	0x67 - 0x68 (2)    goto 22
	0x69               goto 27
	0x6a - 0x6c (3)    goto 22
	0x6d               goto 28
	0x6e               goto 22
	0x6f               goto 29
	0x70 - 0x72 (3)    goto 22
	0x73               goto 30
	0x74 - 0x76 (3)    goto 22
	0x77               goto 31
	0x78 - 0x7a (3)    goto 22
	0x7b               goto 32
	0x7c               goto 33
	0x7d               goto 34


state 3
	0x09               goto 3
	0x20               goto 3

	match 1


state 4
	match 19


state 5
	0x3d               goto 35

	match 32


state 6
	match 38


state 7
	match 27


state 8
	0x26               goto 36


state 9
	match 11


state 10
	match 12


state 11
	match 9


state 12
	match 7


state 13
	match 6


state 14
	0x30 - 0x39 (10)   goto 17

	match 8


state 15
	match 39


state 16
	0x2f               goto 37

	match 10


state 17
	0x2e               goto 38
	0x30 - 0x39 (10)   goto 17

	match 36


state 18
	match 5


state 19
	0x3d               goto 39

	match 13


state 20
	0x3d               goto 40

	match 20


state 21
	0x3d               goto 41

	match 14


state 22
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 35


state 23
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x67 (7)    goto 22
	0x68               goto 42
	0x69 - 0x7a (18)   goto 22

	match 35


state 24
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x6e (14)   goto 22
	0x6f               goto 43
	0x70 - 0x7a (11)   goto 22

	match 35


state 25
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x6b (11)   goto 22
	0x6c               goto 44
	0x6d - 0x7a (14)   goto 22

	match 35


state 26
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61               goto 45
	0x62 - 0x7a (25)   goto 22

	match 35


state 27
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x65 (5)    goto 22
	0x66               goto 46
	0x67 - 0x6d (7)    goto 22
	0x6e               goto 47
	0x6f - 0x7a (12)   goto 22

	match 35


state 28
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61               goto 48
	0x62 - 0x7a (25)   goto 22

	match 35


state 29
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x74 (20)   goto 22
	0x75               goto 49
	0x76 - 0x7a (5)    goto 22

	match 35


state 30
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x70 (16)   goto 22
	0x71               goto 50
	0x72 - 0x7a (9)    goto 22

	match 35


state 31
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x67 (7)    goto 22
	0x68               goto 51
	0x69 - 0x7a (18)   goto 22

	match 35


state 32
	match 28


state 33
	0x7c               goto 52


state 34
	match 29


state 35
	match 18


state 36
	match 31


state 37
	match 37


state 38
	0x30 - 0x39 (10)   goto 53


state 39
	match 15


state 40
	match 17


state 41
	match 16


state 42
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61               goto 54
	0x62 - 0x7a (25)   goto 22

	match 35


state 43
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x74 (20)   goto 22
	0x75               goto 55
	0x76 - 0x7a (5)    goto 22

	match 35


state 44
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x72 (18)   goto 22
	0x73               goto 56
	0x74 - 0x7a (7)    goto 22

	match 35


state 45
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61               goto 22
	0x62               goto 57
	0x63 - 0x7a (24)   goto 22

	match 35


state 46
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 21


state 47
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x6f (15)   goto 22
	0x70               goto 58
	0x71 - 0x73 (3)    goto 22
	0x74               goto 59
	0x75 - 0x7a (6)    goto 22

	match 35


state 48
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x68 (8)    goto 22
	0x69               goto 60
	0x6a - 0x7a (17)   goto 22

	match 35


state 49
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x73 (19)   goto 22
	0x74               goto 61
	0x75 - 0x7a (6)    goto 22

	match 35


state 50
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x71 (17)   goto 22
	0x72               goto 62
	0x73 - 0x7a (8)    goto 22

	match 35


state 51
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x68 (8)    goto 22
	0x69               goto 63
	0x6a - 0x7a (17)   goto 22

	match 35


state 52
	match 30


state 53
	0x30 - 0x39 (10)   goto 53

	match 36


state 54
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x71 (17)   goto 22
	0x72               goto 64
	0x73 - 0x7a (8)    goto 22

	match 35


state 55
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61               goto 22
	0x62               goto 65
	0x63 - 0x7a (24)   goto 22

	match 35


state 56
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x64 (4)    goto 22
	0x65               goto 66
	0x66 - 0x7a (21)   goto 22

	match 35


state 57
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x72 (18)   goto 22
	0x73               goto 67
	0x74 - 0x7a (7)    goto 22

	match 35


state 58
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x74 (20)   goto 22
	0x75               goto 68
	0x76 - 0x7a (5)    goto 22

	match 35


state 59
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 2


state 60
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x6d (13)   goto 22
	0x6e               goto 69
	0x6f - 0x7a (12)   goto 22

	match 35


state 61
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x6f (15)   goto 22
	0x70               goto 70
	0x71 - 0x7a (10)   goto 22

	match 35


state 62
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x73 (19)   goto 22
	0x74               goto 71
	0x75 - 0x7a (6)    goto 22

	match 35


state 63
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x6b (11)   goto 22
	0x6c               goto 72
	0x6d - 0x7a (14)   goto 22

	match 35


state 64
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 4


state 65
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x6b (11)   goto 22
	0x6c               goto 73
	0x6d - 0x7a (14)   goto 22

	match 35


state 66
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 22


state 67
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 34


state 68
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x73 (19)   goto 22
	0x74               goto 74
	0x75 - 0x7a (6)    goto 22

	match 35


state 69
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 26


state 70
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x74 (20)   goto 22
	0x75               goto 75
	0x76 - 0x7a (5)    goto 22

	match 35


state 71
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 33


state 72
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x64 (4)    goto 22
	0x65               goto 76
	0x66 - 0x7a (21)   goto 22

	match 35


state 73
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x64 (4)    goto 22
	0x65               goto 77
	0x66 - 0x7a (21)   goto 22

	match 35


state 74
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 24


state 75
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x73 (19)   goto 22
	0x74               goto 78
	0x75 - 0x7a (6)    goto 22

	match 35


state 76
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 23


state 77
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 3


state 78
	0x30 - 0x39 (10)   goto 22
	0x41 - 0x5a (26)   goto 22
	0x61 - 0x7a (26)   goto 22

	match 25


#############################################################################
# Summary
#############################################################################

1 start state(s)
39 expression(s), 78 state(s)


#############################################################################
# End of File
#############################################################################

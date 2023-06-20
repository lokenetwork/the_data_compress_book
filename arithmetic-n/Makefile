# first so "all" becomes default target
all: arithn_c arithn_e

arithn_c: main-c.c arith-n.c bitio.c errhand.c
	gcc -g -o arithn_c $^

arithn_e: main-e.c arith-n.c bitio.c errhand.c
	gcc -g -o arithn_e $^

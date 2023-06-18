# first so "all" becomes default target
all: arith_c arith_e

arith_c: main-c.c arith.c bitio.c errhand.c
	gcc -g -o arith_c $^

arith_e: main-e.c arith.c bitio.c errhand.c
	gcc -g -o arith_e $^

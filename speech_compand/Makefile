# first so "all" becomes default target
all: compand_c compand_e

compand_c: main-c.c compand.c bitio.c errhand.c
	gcc -g -o compand_c $^ -lm

compand_e: main-e.c compand.c bitio.c errhand.c
	gcc -g -o compand_e $^ -lm

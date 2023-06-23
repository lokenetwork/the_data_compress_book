# first so "all" becomes default target
all: dct_c dct_e

dct_c: main-c.c dct.c bitio.c errhand.c
	gcc -g -o dct_c $^ -lm

dct_e: main-e.c dct.c bitio.c errhand.c
	gcc -g -o dct_e $^ -lm

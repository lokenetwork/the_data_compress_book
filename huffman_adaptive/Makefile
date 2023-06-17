# first so "all" becomes default target
all: huff_adaptive_c huff_adaptive_e

huff_adaptive_c: main-c.c ahuff.c bitio.c errhand.c
	gcc -g -o huff_adaptive_c main-c.c ahuff.c bitio.c errhand.c

huff_adaptive_e: main-e.c ahuff.c bitio.c errhand.c
	gcc -g -o huff_adaptive_e main-e.c ahuff.c bitio.c errhand.c

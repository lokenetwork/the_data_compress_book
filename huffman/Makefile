# first so "all" becomes default target
all: huff_c huff_e

huff_c: huff_c main-c.c huff.c bitio.c errhand.c
	gcc -g -o huff_c main-c.c huff.c bitio.c errhand.c

huff_e: huff_c main-c.c huff.c bitio.c errhand.c
	gcc -g -o huff_e main-e.c huff.c bitio.c errhand.c

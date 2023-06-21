# first so "all" becomes default target
all: lzw15_c lzw15_e

lzw15_c: main-c.c lzw15v.c bitio.c errhand.c
	gcc -g -o lzw15_c $^

lzw15_e: main-e.c lzw15v.c bitio.c errhand.c
	gcc -g -o lzw15_e $^

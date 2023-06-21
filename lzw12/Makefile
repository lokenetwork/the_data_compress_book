# first so "all" becomes default target
all: lzw12_c lzw12_e

lzw12_c: main-c.c lzw12.c bitio.c errhand.c
	gcc -g -o lzw12_c $^

lzw12_e: main-e.c lzw12.c bitio.c errhand.c
	gcc -g -o lzw12_e $^

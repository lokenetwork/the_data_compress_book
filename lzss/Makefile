# first so "all" becomes default target
all: lzss_c lzss_e

lzss_c: main-c.c lzss.c bitio.c errhand.c
	gcc -g -o lzss_c $^

lzss_e: main-e.c lzss.c bitio.c errhand.c
	gcc -g -o lzss_e $^

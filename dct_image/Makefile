# first so "all" becomes default target
all: silence_c silence_e

silence_c: main-c.c silence.c bitio.c errhand.c
	gcc -g -o silence_c $^

silence_e: main-e.c silence.c bitio.c errhand.c
	gcc -g -o silence_e $^

all: parse.c
	gcc -o hi parse.c
run: all
	./hi
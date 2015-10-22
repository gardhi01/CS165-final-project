all: captolow.o getc.o
	cc -o getc getc.o captolow.o
captolow.o: captolow.c getc.h
	cc -c captolow.c
getc.o: getc.c getc.h
	cc -c getc.c
clean:
	rm *.o
	rm getc

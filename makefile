all: test.o linkedlist.o
	gcc -o program test.o linkedlist.o

test.o: linkedlist.h node.h
	gcc -c test.c

linkedlist.o: linkedlist.h node.h linkedlist.c
	gcc -c linkedlist.c

run:
	./program
	rm *.o

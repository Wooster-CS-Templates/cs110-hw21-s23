CFLAGS=-std=c99 -Wall
CC=gcc

recursion: recursive_functions.o main.o
	$(CC) $(CFLAGS) recursive_functions.o main.o -o recursion

test: tests.o recursive_functions.o
	$(CC) $(CFLAGS) recursive_functions.o tests.o -o test

tests.o: tests/tests.c recursive_functions.h
	$(CC) $(CFLAGS) -c tests/tests.c

main.o: main.c recursive_functions.h
	$(CC) $(CFLAGS) -c main.c

recursive_functions.o: recursive_functions.h recursive_functions.c
	$(CC) $(CFLAGS) -c recursive_functions.c

gh-test-recursion: clean test
	./test

clean:
	rm -f test recursion *.o

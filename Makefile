CC = gcc            
CFLAGS = -Wall       

all: vector_test

vector_test: vector.o vector_test.o
	$(CC) -o vector_test vector.o vector_test.o

vector.o: vector.c
	$(CC) $(CFLAGS) -c vector.c

vector_test.o: vector_test.c
	$(CC) $(CFLAGS) -c vector_test.c

clean:
	rm -f *.o vector_test

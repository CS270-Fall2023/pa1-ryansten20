CC = gcc
CFLAGS = -Wall -g
PA1: PA1.o getTokens.o
	$(CC) PA1.o getTokens.o -o PA1

PA1.o: PA1.c
	$(CC) $(CFLAGS) -c PA1.c

getTokens.o: getTokens.c getTokens.h
	$(CC) $(CFLAGS) -c getTokens.c

clean:
	rm *.o PA1

all: PA1
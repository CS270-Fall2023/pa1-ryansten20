PA1: PA1.o getTokens.o
	gcc PA1.o getTokens.o -o PA1

PA1.o: PA1.c
	gcc -c PA1.c

getTokens.o: getTokens.c getTokens.h
	gcc -c getTokens.c

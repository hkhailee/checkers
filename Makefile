CC=gcc
CFLAGS = -Wall -std=c99

all: checkers


debug: CFLAGS += -g -0g
debug: all

checkers: checkers.o checkers.c
	$(CC) -c checkers.c -o checkers.o 

clean: rm *.o checkers
.PHONY: clean

CC = gcc
CFLAGS = -O0 -g3 -Wall -static

DIST = ubuntu

all : invertTree isSameTree reverse

invertTree.o : invertTree.c
	$(CC) -c invertTree.c $(CFLAGS)

invertTree : invertTree.o
	$(CC) -o invertTree invertTree.o $(CFLAGS)

isSameTree.o : isSameTree.c
	$(CC) -c isSameTree.c $(CFLAGS)

isSameTree : isSameTree.o
	$(CC) -o isSameTree isSameTree.c $(CFLAGS)

reverse.o : reverse.c
	$(CC) -c reverse.c $(CFLAGS)

reverse : reverse.o
	$(CC) -o reverse reverse.c $(CFLAGS)

clean:
	rm -f *.o

dist:

# makefile for a horse game
#
# Originally created by Tony Schneider 2012/02/18

CC = gcc
CCFLAGS = -Iinclude -std=c99

all: horse

horse: obj/main.o obj/gameFunctions.o
	$(CC) $(CCFLAGS) obj/main.o obj/gameFunctions.o -o horse

obj/main.o: src/main.c
	@if not exist obj mkdir obj
	$(CC) $(CCFLAGS) -c src/main.c -o obj/main.o

obj/gameFunctions.o: src/gameFunctions.c include/gameFunctions.h
	@if not exist obj mkdir obj
	$(CC) $(CCFLAGS) -c src/gameFunctions.c -o obj/gameFunctions.o

clean:
	rm -rf obj/*o horse
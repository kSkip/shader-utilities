CC=gcc
CFLAGS=-Wall

default: shader_utilities.o

shader_utilities.o: shader_utilities.c shader_utilities.h
	$(CC) $(CFLAGS) -c $< -o $@

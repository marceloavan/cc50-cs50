CC = gcc

CFLAGS = -ggdb -std=c99 -Wall -Werror -Wformat=0

LIBS = -lm -lcc50

%: %.c
	$(CC) $(CFLAGS) -o $@ $@.c $(LIBS)

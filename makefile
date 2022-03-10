# Created: Petri Pihla
# Date : 03.03.2022

CC=gcc
CFLAGS=-Wall -Wextra -Werror

all: final

final: main.o MY_strings.o
	$(CC) $(CFLAGS) main.o MY_strings.o -o final

main.o: main.c main.h
	$(CC) $(CFLAGS) -c main.c

MY_strings.o: MY_strings.c MY_strings.h main.h
	$(CC) $(CFLAGS) -c MY_strings.c

clean:
	rm -f final.exe log.txt *.o

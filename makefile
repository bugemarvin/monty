CC=gcc
CFLAGS=-I.
DEPS = monty.h
OBJ = *.o 

%.o: %.c $(DEPS)
	$(CC) -Wall -Werror -Wextra -pedantic -std=c89 -c -o $@ $< $(CFLAGS)

monty: $(OBJ)
	$(CC) -Wall -Werror -Wextra -pedantic -std=c89 -o $@ $^ $(CFLAGS)

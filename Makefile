CC=gcc
CFLAGS=-Wall -Wextra -g

SRC=src/main.c
OUT=server

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)


run:
	./$(OUT)

clean:
	rm -f $(OUT)

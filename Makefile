EXEC=fizzbuzz
CFLAGS=-Wall
CFLAGS+=-Wextra
CFLAGS+=-Werror
CC=gcc
SRC_FILE=ft_fizz_buzz

.PHONY: run
run: $(EXEC)
	./$(EXEC)

$(EXEC): main.o $(SRC_FILE).o
	$(CC) $^ -o $(EXEC)

main.o: main.c $(SRC_FILE).h
	$(CC) $(CFLAGS) -c main.c

$(SRC_FILE).o: $(SRC_FILE).c
	$(CC) $(CFLAGS) -c $(SRC_FILE).c


.PHONY: clean
clean:
	rm -rf $(EXEC) *.o

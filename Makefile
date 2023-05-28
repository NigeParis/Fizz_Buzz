EXEC=fizzbuzz
CFLAGS=-Wall -Wextra -Werror
CC=gcc
GAME_ENGINE=ft_fizz_buzz
#GAME_INTERFACE=ft_interface

.PHONY: run
run: $(EXEC)
	./$(EXEC)

$(EXEC): main.o $(GAME_ENGINE).o #$(GAME_INTERFACE).o
	$(CC) $^ -o $(EXEC)

main.o: main.c $(GAME_ENGINE).h
	$(CC) $(CFLAGS) -c main.c

$(GAME_ENGINE).o: $(GAME_ENGINE).c
	$(CC) $(CFLAGS) -c $(GAME_ENGINE).c

#$(GAME_INTERFACE).o: $(GAME_INTERFACE).c
#	$(CC) $(CFLAGS) -c $(GAME_INTERFACE).c

.PHONY: clean
clean:
	rm -rf $(EXEC) *.o

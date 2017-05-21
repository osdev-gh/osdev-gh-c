CC = gcc
CFLAGS = 
LDFLAGS = 
SRC = main.c
OBJ := $(SRC:.c=.o)
BIN := $(shell basename $$PWD)

.PHONY: all
all: $(BIN) .gitignore

$(BIN): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

.gitignore:
	! test -f .gitignore && echo $(BIN) > .gitignore

.PHONY: clean
clean:
	rm -f $(BIN) $(OBJ)

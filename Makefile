CC = gcc
CFLAGS = -Wall
EXE = main
SRC = src

all: clean build run 

run: 
	./$(EXE)

build: 
	$(shell $(CC) $(CFLAGS) $(SRC)/*.c -o $(EXE))

clean: 
	rm -rf $(EXE)
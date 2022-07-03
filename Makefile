CC=gcc
OBJ=passwordgen.o
MAIN=passwordgen.c

passwordgen: $(OBJ)
	$(CC) $(MAIN) -o $(OBJ)

format:
	clang-format -i $(MAIN)

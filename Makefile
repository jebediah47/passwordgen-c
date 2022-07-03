CC=gcc
OBJ=passwordgen
MAIN=passwordgen.c

passwordgen: $(OBJ)
	$(CC) $(MAIN) -o $(OBJ)

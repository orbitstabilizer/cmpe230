INCLUDE_DIR= .#./include/
EXEC=prog
CC=gcc-12
CFLAGS=-I $(INCLUDE_DIR) -o $(EXEC) 
SRC=$(wildcard ./*.c)


clean :
	rm $(EXEC)

main:  
	$(CC) $(SRC) $(CFLAGS)



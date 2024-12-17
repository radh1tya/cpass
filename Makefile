CC = cc
INPUT = main.c
OUTPUT = cpass

install:
	$(CC) $(INPUT) -o $(OUTPUT)

remove:
	rm $(OUTPUT)

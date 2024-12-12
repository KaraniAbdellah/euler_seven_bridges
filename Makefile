CC=gcc
CFLAGS = -Wall -Wextra
EXEC=main
FILES= src/graph.c src/main.c

build: 
	$(CC) $(CFLAGS) $(FILES) -o $(EXEC)

clean:
	rm $(EXEC)





CC = gcc

GitMaster: ./lib/*.c
	$(CC) ./lib/*.c  -o ./bin/GitMaster
	
	
clean:
	rm GitMaster


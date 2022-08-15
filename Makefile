
CC = gcc

GitMaster: *.c
	$(CC) *.c  -o GitMaster
	
	
clean:
	rm *.o
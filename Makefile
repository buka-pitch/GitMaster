
CC = gcc
Prog = GitMaster
GitMaster: ./lib/*.c
	$(CC) ./lib/*.c  -o ./bin/$(Prog)
	

clean:
	rm $(Prog)


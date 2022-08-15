#include "GitMaster.h"

void Commit(char *message)
{
	char *cmd = {"git"}, *args[5];
	args[0] = cmd;
	args[1] = "commit";
	if (message)
	{	
		args[2] = "-m";
		args[3] = message;
		args[4] = NULL;
		printf("\ncommit message : %s", message);
	}
	else{
		args[2] = NULL;
	}
	for (int j = 0; args[j] != NULL; j++)
	{
		printf("%s ", args[j]);
	}

		_fork_excute(cmd, args);
}
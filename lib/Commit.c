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
	}
	else{
		args[2] = NULL;
	}

		_fork_excute(cmd, args);
}

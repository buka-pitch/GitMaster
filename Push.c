#include "GitMaster.h"


void Push(char *branch)
{
	char *cmd[6] = {"git", "push", "--set-upstream", "origin", "main", NULL};
	if (branch)
	{
		cmd[3] = branch;
	}

	_fork_excute(cmd[0], cmd);
}
#include "GitMaster.h"


void Push(void)
{
	char *cmd[] = {"git", "push", NULL};


	_fork_excute(cmd[0], cmd);
}
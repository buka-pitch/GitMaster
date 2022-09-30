#include "GitMaster.h"

void Create_Branch(char *branchName)
{
	char *cmd = {"git"}, *args[4];

	args[0] = "git";
	args[1] = "branch";
	args[2] = branchName;
	args[3] = NULL;

	_fork_excute(cmd, args);
}

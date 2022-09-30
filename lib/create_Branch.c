#include "GitMaster.h"

/**
 * Create_Branch - function to create branch
 * @branchName: string name for the new branch
 * @Tag: Flags
 */

void Create_Branch(char *branchName, char *Tag)
{
	char *cmd = {"git"}, *args[5];

	args[0] = "git";
	args[1] = "branch";
	
	if (Tag == NULL)
	{
		args[2] = branchName;
		args[3] = NULL;
	}
	else
	{
		args[2] = Tag;
		args[3] = branchName;
		args[4] = NULL;
	}


	_fork_excute(cmd, args);
}

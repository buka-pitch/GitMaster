#include "GitMaster.h"

void _Pull()
{
	char *cmd = {"git"};
	char *param[2] = {"git", "pull"};
	_fork_excute(cmd, param);	
}

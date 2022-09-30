#include "GitMaster.h"

/**
 * function to pull code from git
 */

void _Pull()
{
	char *param[3];
	param[0] = "git";
	param[1] = "pull";
	param[2] = NULL;

	_fork_excute(param[0], param);	
}

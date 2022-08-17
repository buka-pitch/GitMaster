#include "GitMaster.h"

char** Add(char **argv)
{
	char **arguments = (char **)malloc(50*sizeof(char));
	char *cmd = {"git"};
	arguments[0] = cmd;
	arguments[1] = "add";
	// assign argv to arguments array
	for (int i = 2; argv[i - 2] != NULL; i++)
	{
		arguments[i] = argv[i - 2];
	}
	printf("add commands :");
	for (int j = 0; arguments[j] != NULL; j++)
	{
		printf("%s ", arguments[j]);
	}
	_fork_excute(cmd, arguments);
	return (arguments);
}

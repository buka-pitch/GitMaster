#include "GitMaster.h"

/**
 *
 * add - function to add git files
 * @argv: argument (filenames)
 * Return: the filenames
 */

char** Add(char **argv)
{
	char **arguments = (char **)malloc(50*sizeof(char));
	arguments[0] = "git";
	arguments[1] = "add";
	// assign argv to arguments array
	for (int i = 2; argv[i - 2] != NULL; i++)
	{
		arguments[i] = argv[i - 2];
	}

	_fork_excute(arguments[0], arguments);
	return (arguments);
}

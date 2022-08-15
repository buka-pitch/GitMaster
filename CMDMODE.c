#include "GitMaster.h"


void CMDMODE(int argc, char *argv[])
{
	char **filenames;
	int i;
	if (argc < 2)
		return;
	char **params = malloc(50*sizeof(char));
	for (i = 0; argv[i];i++)
	{
		// Get the help command -h and return help message
		if (strcmp(argv[i], HELP) == 0 )
			help();
		if (strcmp(argv[i], ADD) == 0)
		{
		// get all the args after the add command -a
		// and add them to the params array to add them to the repository
			int k = i + 1, l = 0;
			for (; k < argc; k++)
			{
				if (argv[k] != NULL)
				{
					if (strcmp(argv[k],COMMIT) == 0 || strcmp(argv[k],ADD) == 0 || strcmp(argv[k],HELP) == 0 || strcmp(argv[k],PUSH) == 0 )
						break;
					params[l] = argv[k];
					l++;
				}
			}
				filenames = Add(params);
		}
		if (strcmp(argv[i], COMMIT) == 0)
		{
		// Get the COMMIT Command -c
		// get the commit message if there is one and commit the files
			
			Commit(argv[i + 1]);
		}
		if (strcmp(argv[i], PUSH) == 0)
		{
			Push();
		}
	}
	free(filenames);
}

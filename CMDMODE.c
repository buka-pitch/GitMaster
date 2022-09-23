#include "GitMaster.h"


void CMDMODE(int argc, char *argv[])
{
	char **filenames;
	int i;
	if (argc < 2)
		return;
	char **params = malloc(50*sizeof(char));

	if (params == NULL)
	{
		fprintf(stderr, "GitMaster cant access memory space");
		return;
	}

	for (i = 0; argv[i];i++)
	{
		// Get the help command -h and return help message
		if (strcmp(argv[i], HELP) == 0 )
			execlp("python3","python3", "help.cpython-310.pyc");	
		if (strcmp(argv[i], ADD) == 0)
		{
		// get all the args after the add command -a
		// and add them to the params array to add them to the repository
			int k = i + 1, l = 0;
			for (; k < argc; k++)
			{
				if (argv[k] != NULL)
				{
					if (strcmp(argv[k],COMMIT) == 0 || strcmp(argv[k],ADD) == 0 || strcmp(argv[k],HELP) == 0 || strcmp(argv[k],PUSH) == 0 || strcmp(argv[k],CREATE_BRANCH) == 0)
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
			Push(argv[i + 1]);
		}
		
		if (strcmp(argv[i],CREATE_BRANCH) == 0)
		{
			Create_Branch(argv[i + 1]);
		}
	    if (strcmp(argv[i], CHANGE_BRANCH) == 0)
        {
          	changeBranch(argv[i + 1]);
        }
		if (strcmp(argv[i], GITIGNORE) == 0)
		{
			char **gitignores = malloc(50 * sizeof(char));
			if (gitignores == NULL)
			{
				fprintf(stderr, "GitMaster can't access memory");
				return;
			}

			// get all the args after the add command -a
			// and add them to the params array to add them to the repository
			int q = i + 1, p = 0;
			for (; q < argc; q++)
			{
				if (argv[q] != NULL)
				{
					if (strcmp(argv[q],COMMIT) == 0 || strcmp(argv[q],ADD) == 0 || strcmp(argv[q],HELP) == 0 || strcmp(argv[q],PUSH) == 0 || strcmp(argv[q],CREATE_BRANCH) == 0)
						break;
					gitignores[p] = argv[q];
					p++;
				}

			}
			git_ignore(gitignores);
		}
	}
	free(params);
	free(filenames);
}





#include "GitMaster.h"
#include "Colors.h"

/**
 * git_init - initializing a git repo
 * @url: git remote url to add
 */

void git_init(char *url)
{
	int ps;
	char *args[6], *Tag = "-M";
	char *branch = "main";
	args[0] = "git";
	args[1] = "init";

	/* running the init command*/
	ps = _fork_excute(args[0], args);
	if (ps == 0)
	{
		/* creating a README file*/

		FILE *fp;

		fp = fopen("README.md", "w");
		fprintf(fp, "# README ...\n");
		fclose(fp);

		args[0] = "README.md";
		args[1] = NULL;
		args[2] = "init";
		Add(args);
		Commit(args[2]);
		Create_Branch(branch, Tag);
	}

	if (ps == 0)
	{
		args[0] = "git";
		args[1] = "remote";
		args[2] = "add";
		args[3] = "origin";
		args[4] = url;
		args[5] = NULL;
		ps = 0;

		ps = _fork_excute(args[0], args);
	}
	cyan();
	printf("Git Repository initialized and Readme Created\n ");
	red();
	printf("Enjoy !!!\n");
	
}

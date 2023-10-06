#include "GitMaster.h"

//##############################################################
//TODO : FIX The Cant read file error
//		- implement a way not to deplicate a file in gitignore
//##############################################################

/**
 * git_ignore - function to add git ignore files
 * @str: file or extention name
 */

void git_ignore(char **str)
{
	FILE *fp;
	int i;
	size_t len = 0;
	char **buffer, cmp[100];
	size_t nread;

	buffer = malloc(sizeof(char) * 50);

	fp = fopen(".gitignore", "a+");
	if (fp == NULL) fprintf(stderr, "cant open file\n");

	int line = 0;

	for (i = 0; str[i] != NULL; i++)
	{
		while (!feof(fp) && !ferror(fp))
		{
			if((getline(buffer, &len, fp)) != -1 ) {
				if (strstr(buffer[line], str[i]) != NULL) {
					printf("%s exists in gitignore\n",str[i]);
					return;
				}				

			}
			
		}
		printf("######################### \n%s added to gitignore file\n",str[i]);
				fprintf(fp, "%s\n", str[i]);

		
	}
	free(buffer);
	fclose(fp);
	free(str);
}

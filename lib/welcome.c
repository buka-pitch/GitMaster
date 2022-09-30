#include "GitMaster.h"
#include "Colors.h"

void welcome(void)
{

	int check = system("which git");
	int i = 0;
	cyan();
	system("clear");
	printf("GUI MODE\n");
	printf("\t\t------------------------ GiTMaster ------------------------\n\n");
	printf("\t\t-----------------------------------------------------------\n\n");
	printf("\t\t GitMaster is a project to simplify working with git.\n\t\t try GitMaster -h for more informations\n\t\t you can use GitMaster without starting the application by\n\t\t using inline commands 'GitMaster <options> [commands]'\n ");
	printf("");
	if (check == 0)
	{

		printf("\n\n\n\t\tLoading ");
		while (i <= 1)
		{
			fflush(stdout);
			printf("################");
			sleep(1);
			if (i == 1)
			{
				printf(" | Done\n");
				sleep(1);
				system("clear");
				printf("\t------------------------ GiTMaster ------------------------\n\n");
				printf("\t-----------------------------------------------------------\n\n");
			}
			i++;
		}
	}
	else
		printf("\n\t\t git not found please install git to use GitMaster\n\n");
}

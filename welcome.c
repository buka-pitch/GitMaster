#include "GitMaster.h"

void welcome(void)
{
	int i = 0;
	system("clear");
	printf("GUI MODE\n");
	printf("\t-------------------------------- GiTMaster --------------------------------\n\n");
	printf("\t---------------------------------------------------------------------------\n\n");
	printf("\t GitMaster is a project to simplify working with git.\t try GitMaster -h for more informations\n\t you can use GitMaster without starting the application by using inline commands 'GitMaster <options> [commands]'\n ");
	printf("");
	printf("\n\n\n\t\tLoading ");
	while (i <= 5)
	{
		fflush(stdout);
		printf("#######");
		sleep(1);
		if (i == 5)
		{
			printf(" | Done\n");
			sleep(1);
			system("clear");
			printf("\t-------------------------------- GiTMaster --------------------------------\n\n");
			printf("\t---------------------------------------------------------------------------\n\n");
		}
		i++;
	}
}
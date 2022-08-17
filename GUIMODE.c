#include "GitMaster.h"

void MainChoice()
{
	printf("\t Wha Do You Want To Do ?\n");
	printf("\t--------------------------------------------\n\n");
	printf("\t1.  Add File to Git  & Commit it ---  not ready\n");
	printf("\t2.  Push To Git           	---  not ready\n");
	printf("\t3.  Pull From Git         	---  not ready\n");
	printf("\t4.  Show All Files in Git     ---  not ready\n");
	printf("\t5.  Create a New Branch       ---  not ready\n");
	printf("\t6.  Change Branch         	---  not ready\n");
	printf("\t7.  Merge To Branch       	---  not ready\n");
	printf("\t8.  Rebase To  Branch     	---  not ready\n");
	printf("\n\tchoose your option :");
}
void GUIMODE(void)
{
	welcome();
	MainChoice();
	getchar();
}

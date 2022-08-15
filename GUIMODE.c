#include "GitMaster.h"

void MainChoice()
{
	printf("\t Wha Do You Want To Do ?\n");
	printf("\t--------------------------------------------\n\n");
	printf("\t1.  Add File to Git  & Commit it\n");
	printf("\t2.  Push To Git\n");
	printf("\t3.  Pull From Git\n");
	printf("\t4.  Show All Files in Git\n");
	printf("\t5.  Create a New Branch\n");
	printf("\t6.  Change Branch\n");
	printf("\t7.  Merge To Branch\n");
	printf("\t8.  Rebase To  Branch\n");
	printf("\n\tchoose your option :");
}
void GUIMODE(void)
{
	welcome();
	MainChoice();
	getchar();
}
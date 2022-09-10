#include "GitMaster.h"

void help(void)
{
	printf("====================== GitMaster ============================\nThis program helps you to excute git commands more effectivly by using inline command (one liner) or with choose like console\nUsage: ./GitMaster <-flag> [command] <--another-flag> (optional)\n");
	printf("\n");
	printf("\tFlags\n");
	printf("\t\t-a\t\tAdd multiple files to git\n");
	printf("\t\t-c\t\tCommit changes to git folowed by the commit message\n");
	printf("\t\t-p\t\tPush changes to git followed by the upstream branch (optional) default upstream is main\n");
	printf("\t\t-h\t\tPrints this help message\n");
	printf("\t\t-ch\t\tchange to branch followed by the branch name\n");
	printf("\t\t-cr\t\tCreate a new git branch\n\n");
	printf("\tExample :\n");
	printf("\t\t./GitMaster -a main.py master.py options.py -c \"initial commit\" -p dev \n");
	printf("\t\t./GitMaster -a main.py -c \"commit msg\" -p\n");


}

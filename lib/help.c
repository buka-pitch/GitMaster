#include "GitMaster.h"
#include "Colors.h"

/**
 * FUNCTION to Display the help msg
 */

void help()
{

	printf("====================== \033[0;33m GitMaster \033[0m ======================\n");
	cyan();
	printf("This program helps you to excute git commands more effectivly\n by using inline command (one line)\n\n");
	green();
	printf("Flags\n");
	printf("\t-a\tAdd multiple files to git\n");
	printf("\t-c\tCommit changes to git folowed by the commit message\n");
	printf("\t-p\tPush changes to git followed by the upstream branch (optional) default upstream is main\n");
	printf("\t-h\tPrints this help message\n");
	printf("\t-ch\tchange to branch followed by the branch name\n");
	printf("\t-cr\tCreate a new git branch\n\n");
	printf("Example :\n");
	yellow();
	printf("\t./GitMaster -a main.py master.py options.py -c \"initial commit\" -p dev \n");
	printf("\t./GitMaster -a main.py -c \"commit msg\" -p\n\n");
	white();
	printf("===================================================\n");
}


/**
 * FUNCTIONS to create a colored text
 */
void green()
{
	printf("\033[0;32m");
}

void blue()
{
	printf("\033[0;34m");
}

void yellow()
{
	printf("\033[0;33m");
}

void red()
{
	printf("\033[0;31m");
}

void cyan()
{
	printf("\033[0;36m");
}

void white()
{
	printf("\033[0;37m");
}

/**
 * FUNCTION to reset the colors
 */

void reset()
{
  printf("\033[0m");
}

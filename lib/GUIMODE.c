/****************************************************************************
* GitMaster GUIMODE AUTHOR : Biruk Yonas						    		*
* Github repo : https://github.com/buka-pitch/GitMaster.git					*
*																			*
*****************************************************************************/

#include "GitMaster.h"
#include "Colors.h"
void cleaner(void)
{
	system("clear");
	cyan();
	printf("#################################################################\n");
	printf("-------------------------GitMast3r-------------------------------\n");
	printf("#################################################################\n\n");
}
/**
 * MainChoice - function to provide choose like choice
 */
void MainChoice()
{
	printf("\t Wha Do You Want To Do ?\n");
	printf("\t--------------------------------------------\n\n");

	printf("\t1.  Add File to Git  & Commit it\n");
	printf("\t2.  Push To Git           	\n");
	printf("\t3.  Pull From Git				\n");
	printf("\t4.  Show All Files in Git     ---  not ready\n");
	printf("\t5.  Create a New Branch       ---  not ready\n");
	printf("\t6.  Change Branch         	---  not ready\n");
	printf("\t7.  Merge To Branch       	---  not ready\n");
	printf("\t8.  Rebase To  Branch     	---  not ready\n");
	printf("\tAny other key to Quit");
	printf("\n\tchoose your option :");

}

/**
 * GUIMODE - main function of GUIMODE
 */
void GUIMODE(void)
{
	int choosen_number;
	long num;
	welcome();
	MainChoice();

	scanf("%d",&choosen_number);
	printf("%d\n", choosen_number);
	Evaluate_choice(choosen_number);
}

/**
 * Evaluate_choice - function to evaluate the users input and serve as a switch
 * @num: number input of the
 */
void Evaluate_choice(int num)
{
	if (num && num >= 1)
	{
		switch (num){
		case 1:
			//add file to git
			add_selected();
			break;
		case 2:
			//push to git
			push_selected();
			break;
		case 3:
			//pull from Git
			pull_selected();
			break;
		case 4:
			//show all files in git
			show_selected();
			break;
		case 5:
			//create a new Branch
			create_selected();
			break;
		case 6:
			//change branch
			changeBranch_selected();
			break;
		case 7:
			//merge to git
			merge_selected();
			break;
		case 8:
			// rebase to git 
			rebase_selected();
			break;
		default:
			break;
		}
	}
}

/**
 * add_selected - function to invoke the adding action from the add module
 */
void add_selected(void)
{
	int i = 0;
	char **filenames = malloc(sizeof(char)*20);
	cleaner();
	while (1)
	{
		char *buf = malloc(sizeof(char)*20);
		char *check = malloc(sizeof(char)*5);
		printf("Enter the File name To Add\n: ");
		scanf("%s", buf);
		filenames[i] = buf;
		cleaner();
		printf("%s added\n",filenames[i]);
		i++;
		printf("Do you want to add another file\n\t(Y) for yes and (N) for no\n");
		scanf("%s",check);
		if (strcmp(check, "Y") == 0)
		{
			cleaner();
			continue;
		}
		else if (strcmp(check, "N") == 0)
		{
			char **adder = Add(filenames);
			sleep(2);
			Commit_Added();
			break;
		}
		i++;
		free(buf);
		free(check);

	}
}
/**
 * Commit_Added - function to invoke the Commit action from the commit module
 */
void Commit_Added(void)
{
	cleaner();
	char msg[10];
	char *prompt = malloc(sizeof(char)*5);
	printf("Do you want to Commit it now ?\n(Y) for yes (N) for no");
	scanf("%s", prompt);
	if (strcmp(prompt, "Y") == 0)
	{
		cleaner();
		printf("please enter commit message ...\n  :");
		scanf("%s", msg);
		Commit(msg);
		sleep(1);
		Push_to_git();
		GUIMODE();

	}
	else if (strcmp(prompt, "N") == 0)
	{
		GUIMODE();
	}
}

void Push_to_git(void)
{
	char *prompt = malloc(sizeof(char)*5);
	char *prompt2 = malloc(sizeof(char)*5);
	char branch[10];
	printf("Do You Want to push it to git now! ?\n :  ");
	scanf("%s",prompt);
	if (strcmp(prompt, "Y") == 0)
	{
		cleaner();
		printf("Do you want to Specify Branch name ?\n : ");
		scanf("%s",prompt2);
		if (strcmp(prompt2, "Y") == 0)
		{
			printf("Enter branch name to Push to. !\n:   ");
			scanf("%s",branch);
			Push(branch);
			free(prompt);
			free(prompt2);
			sleep(3);
			GUIMODE();
		}
		else if (strcmp(prompt2, "N") == 0)
		{
			Push(branch);
			free(prompt2);
			free(prompt);
			sleep(1);
			GUIMODE();
		}
	}
	else if (strcmp(prompt, "N") == 0)
	{
		free(prompt);
		free(prompt2);
		GUIMODE();
	}
}
void push_selected(void)
{
	Push_to_git();
}
void pull_selected(void)
{}
void show_selected(void)
{}
void create_selected(void)
{}
void changeBranch_selected(void)
{}
void merge_selected(void)
{}
void rebase_selected(void)
{}

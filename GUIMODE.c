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
	printf("\tAny other number to Quit.\n");
	printf("\n\tchoose your option :");

}
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

void add_selected(void)
{
	int i = 0;
	char **filenames = malloc(sizeof(char)*20);
	system("clear");
	while (1)
	{
		char *buf = malloc(sizeof(char)*20);
		char *check = malloc(sizeof(char)*5);
		printf("Enter the File name To Add\n: ");
		scanf("%s", buf);
		filenames[i] = buf;

		printf("%s added\n",filenames[i]);
		i++;
		printf("Do you want to add another file\n\t(Y) for yes and (N) for no\n");
		scanf("%s",check);
		if (strcmp(check, "Y") == 0)
		{
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

void Commit_Added(void)
{
	char msg[10];
	char *prompt = malloc(sizeof(char)*5);
	printf("Do you want to Commit it now ?\n(Y) for yes (N) for no");
	scanf("%s", prompt);
	if (strcmp(prompt, "Y") == 0)
	{
		printf("please enter commit message ...\n  :");
		scanf("%s", msg);
		Commit(msg);
		sleep(2);
		GUIMODE();

	}
	else if (strcmp(prompt, "N") == 0)
	{
		
	}

}
void push_selected(void)
{}
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

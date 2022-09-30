#include "GitMaster.h"
#include <errno.h>

int _fork_excute(char *cmd,char **params)
{
// printf("%d \n",(int)sizeof(params+4));
	// char **arguments = malloc(sizeof(params));
	// arguments[0] = cmd;
	// for (int i = 1; params[i - 1] != NULL; i++)
	// {
	// 	arguments[i] = params[i - 1];
	// }

	int pid = fork();
	if  (pid == 0)
	{
		execvp(cmd,params);
		printf("%s : %s\n", strerror(errno),cmd);
		return (1);
	}
	else
	{
		wait(NULL);
		return (0);
	
	}

}

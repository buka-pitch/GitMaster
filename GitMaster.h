#ifndef MAIN
#define MAIN





#define SUCCESS 0
#define FAILURE -1

#define NumberOfCommands 3
#define ADD "-a"
#define COMMIT "-c"
#define PUSH "-p"
#define HELP "-h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void GUIMODE(void);
void CMDMODE(int argc,char *argv[]);
void help(void);
char** Add(char **argv);
void Commit(char *message);
void Push(char *branch);
void welcome(void);
void _fork_excute(char *cmd, char **params);
#endif
#ifndef MAIN
#define MAIN


#define SUCCESS 0
#define FAILURE -1

#define NumberOfCommands 3
#define ADD "-a"
#define COMMIT "-c"
#define PUSH "-p"
#define HELP "-h"
#define CHANGE_BRANCH "-ch"
#define CREATE_BRANCH "-cr"
#define GITIGNORE "-ignore"
#define PULL "-pull"

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdarg.h>

void Push_to_git(void);
void Create_Branch(char *branchName);
void Evaluate_choice(int num);
void GUIMODE(void);
void CMDMODE(int argc,char *argv[]);
void help(void);
char** Add(char **argv);
void Commit(char *message);
void Push(char *branch);
void welcome(void);
void _fork_excute(char *cmd, char **params);
void changeBranch(char *branch);
void Commit_Added(void);
void push_selected(void);
void pull_selected(void);
void add_selected(void);
void show_selected(void);
void create_selected(void);
void changeBranch_selected(void);
void merge_selected(void);
void rebase_selected(void);
void git_ignore(char **str);
void _Pull(void);
#endif

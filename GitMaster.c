#include "GitMaster.h"

int main(int argc, char *argv[])
{
	
	if (argc >= 2)
		CMDMODE(argc,argv);
	if (argc == 1)
		GUIMODE();
	return (SUCCESS);
}

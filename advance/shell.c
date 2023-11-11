#include "shell.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printUserMessage(argv[0]);
        return 1;
    }
    char command[256];
    char *prompt = "($)";
    while (1)
    {
	    print(prompt);
	    if (fgets(command, sizeof(command), stdin) == NULL)
	    {
		    perror("fgets");
	    }
	    exeCommand(command);
    }
        return 0;
}

#include "shell.h"

int main(void)
{
	char command[120];
	char *prompt;

	prompt = "($)";

	while (1)
	{
		print(prompt);

		fgets(command, sizeof(command), stdin);
	}

	return (0);
}

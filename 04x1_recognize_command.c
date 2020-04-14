#include "sh.h"
/**
 * recognize_command - It make the job of cut the command
 * and pass it to checker.
 * @com: The current command with its arguments.
 * @count: Receives the current number that have the counter of commands.
 * @shell_name: Receives the current shell name.
 *
 * Return: It returns nothing.
 */

void recognize_command(char *com, int count, char *shell_name)
{
	int status, traveler;
	char *av[1024] = {NULL};
	char cmd[1024] = {'\0'};

	if (!com || *com == '\n')
		return;

	/*Travels through command parameter until*/
	/*There are not spaces in it*/
	for (; *com == ' '; com++)
		;

	_memcpy(cmd, com, _strlen(com));

	traveler = 0;
	av[traveler] = strtok(cmd, DELIM);

	while (av[traveler++])
		av[traveler] = strtok(NULL, DELIM);

	status = check_for_path(av, count, shell_name);

	if (status != 0)
	{
		if (status == 1)
		{
			_perror(shell_name, av[0], "not found\n", count);
			return;
		}
		if (status == -1)
		{
			_perror(shell_name, av[0], "has occured an error\n", count);
			return;
		}
		if (status == 2)
			check_flag(status, shell_name, av[0], count);
	}
}


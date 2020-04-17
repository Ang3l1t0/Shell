#include "sh.h"
/**
 * recognize_command - It make the job of cut the command
 * and pass it to checker.
 * @com: The current command with its arguments.
 * @count: Receives the current number that have the counter of commands.
 * @shell_name: Receives the current shell name.
 * Return: It returns nothing.
 */

int recognize_command(char *com, int count, char *shell_name)
{
	int status, traveler, rtn = 0;
	char *av[1024] = {NULL};
	char cmd[1024] = {'\0'};

	if (!com || *com == '\n')
		return (0);

	/*Travels through command parameter until*/
	/*There are not spaces in it*/
	for (; *com == ' '; com++)
		;

	_memcpy(cmd, com, _strlen(com));

	traveler = 0;
	av[traveler] = strtok(cmd, DELIM);

	while (av[traveler++])
		av[traveler] = strtok(NULL, DELIM);
	if (!(*av)) /* Check if the given command is NULL after the split */
		return (0);
	if ((_strcmp(*av, "exit")) == 0)
		return (1);

	status = check_for_path(av, count, shell_name);

	if (status != 0)
	{
		if (status == 127)
			check_flag(3, shell_name, av[0], count), rtn = 127;
		else if (status == -1)
			rtn = 2;
		else if (status == 126)
			check_flag(2, shell_name, av[0], count), rtn = 126;
	}
	return (rtn);
}

#include "sh.h"
/**
 * check_flag - Used for print error messages.
 * @flag: Receives the flag that identifies the error process.
 * @shell_name: Receives the current shell name.
 * @com: Receives the executed command.
 * @count: Receives the current number that have the counter of commands.
 *
 * Return: It returns nothing.
 */

void check_flag(int flag, char *shell_name, char *com, int count)
{
	switch (flag)
	{
		case 1:
			_perror(shell_name, com, "No such file or directory\n", count);
			break;
		case 2:
			_perror(shell_name, com, "Permission denied\n", count);
			break;
		case 3:
			_perror(shell_name, com, "not found\n", count);
	}
}


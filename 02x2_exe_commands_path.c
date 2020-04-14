#include "sh.h"
/**
 * exe_path - It executes the given command via full path.
 * @av: Array of arguments with the current command.
 * Return: It returns 0 on success, otherwise returns 1.
 */

int exe_path(char **av)
{
	/* Check whether the command starts with ./ or / */
	if ((av[0][0] == '.' && av[0][1] == '/') || (av[0][0] == '/'))
	{
		if (execve(av[0], av, environ) != -1)
			return (0);
	}
	return (1);
}

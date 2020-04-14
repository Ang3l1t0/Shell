#include "sh.h"
/**
 * exe_fname - It executes the given command via binary name.
 * @av: Array of arguments with the current command.
 * Return: It returns 0 on success, otherwise returns 1.
 */

int exe_fname(char **av)
{
	dir *dirs = NULL, *tmp;

	dirs = path_helper();

	while (dirs)
	{
		_strcat(dirs->directory, "/");
		_strcat(dirs->directory, av[0]);
		if (execve(dirs->directory, av, environ) < 0)
		{
			tmp = dirs->next;
			free(dirs->directory);
			free(dirs);
			dirs = tmp;
			continue;
		}
	}

	free_linked(dirs);
	return (1);
}

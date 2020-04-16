#include "sh.h"
/**
 * check_for_path - Check everything to know about the command.
 *                         (PERMISSIONS/EXISTENCE)
 * @av: Array of arguments that will be executed with the command.
 * @count: Receives the current number that have the count of commands.
 * @shell_name: Receives the current shell name.
 *
 * Return: It return the status of the given command that serves
 *         for recognize processes, on failure returns -3.
 */

int check_for_path(char **av, int count, char *shell_name)
{
	int status, flag, prcs;
	pid_t n_pid = 0;

	prcs = find_fpth(*av);
	if (prcs != 0)
	{
		if (prcs == 126)
			return (prcs); /* if prcs is equals to 2 the use do not have permissions. */
		prcs = find_fname(*av);
		if (prcs != 0)
			return (prcs);
	}

	n_pid = fork();

	if (n_pid >= 0)
	{
		if (n_pid == 0)
		{
			flag = exe_path(av);
			if (flag != 0)
			{
				flag = exe_fname(av);
				if (flag != 0)
					check_flag(flag, shell_name, av[0], count);
			}
			exit(0);
		}
		else
		{
			wait(&status);
			if (WEXITSTATUS(status) != 0)
				return (-1);
			return (0);
		}
	}

	_perror(shell_name, av[0], "Error with creation subprocess\n", count);
	return (1);
}


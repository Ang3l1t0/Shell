#include "sh.h"
/**
 * signalHandler - It handles the interruption signal.
 * @val: Set to ignore signals.
 * Return: nothing.
 */
void signalHandler(int val)
{

	(void) val;

	signal(SIGINT, signalHandler);
	write(STDOUT_FILENO, "\n$ ", 3);
	fflush(stdout);

}

/**
 * main - execute the shell loop.
 * @ac: Arguments counter.
 * @av: Array of arguments.
 * Return: It returns 0 on successful.
 */
int main(int ac, char **av)
{

	char *com = NULL;
	size_t size = 0;
	ssize_t bytes_rd = 0;
	int count = 1;

	signal(SIGINT, signalHandler);

	if (ac > 1)
	{
		free(com);
		return (0);
	}

	while (1)
	{

		if ((isatty(STDIN_FILENO)) == 1)
			write(STDOUT_FILENO, "$ ", 2);

		bytes_rd = getline(&com, &size, stdin);
		if (bytes_rd != EOF)
		{
			fflush(stdout); /* Frees garbage from the buffer. */
			if (_strcmp(com, "exit\n") == 0)
			{
				free(com);
				exit(0);
			}
			recognize_command(com, count, av[0]);
			bytes_rd = 0;
			count++;
		}
		else
			break;
	}
	free(com);
	return (0);
}

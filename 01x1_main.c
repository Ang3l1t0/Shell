#include "sh.h"
/**
 * signalHandler - It handles the interruption signal.
 * @value: Set to ignore signals.
 * Return: It returns nothing.
 */
void signalHandler(int value)
{

	(void) value;

	signal(SIGINT, signalHandler);
	write(STDOUT_FILENO, "\n$ ", 3);
	fflush(stdout);

}

/**
 * main - It takes the job of execute the shell loop.
 * @ac: Arguments count.
 * @av: Array of arguments.
 * Return: It returns 0 on successful.
 */
int main(int ac, char **av)
{
	char *com = NULL;
	size_t size = 0;
	ssize_t bytes_rd = 0;
	int flg = 0, ex = 0, count = 1;

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
		if (bytes_rd == EOF)
			break;

		fflush(stdout); /* Frees garbage from the buffer. */
		flg = recognize_command(com, count, av[0]);
		if (flg != 0)
		{
			if (flg == 1)
				free(com), exit(ex);
			else
				ex = flg;
		}
		else
			ex = 0;
		bytes_rd = 0;
		count++;
	}
	free(com);
	return (0);
}


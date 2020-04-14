#include "sh.h"

/**
 * _perror - It's a error showed to stdout.
 * @sname: Current shell name.
 * @cmd: Current command.
 * @msg: Error message to print.
 * @counter: The current value of given commands.
 *
 * Return: It returns nothing.
 */

void _perror(char *sname, char *cmd, char *msg, int counter)
{

	_puts(sname);
	_puts(": ");
	print_integer(counter);
	_puts(": ");
	_puts(cmd);
	_puts(": ");
	_puts(msg);

}

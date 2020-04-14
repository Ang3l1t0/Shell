#include "sh.h"
/**
 * _puts - It prints a string.
 * @str: String to be printed.
 *
 * Return: It returns nothing.
 */

void _puts(char *str)
{

	for (; *str; str++)
		write(STDERR_FILENO, str, 1);

}


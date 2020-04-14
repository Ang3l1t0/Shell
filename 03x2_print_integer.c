#include "sh.h"
/**
 * print_integer - Prints integer values.
 * @integer: integer to print.
 * Return: Return integer numbers.
 */

void print_integer(int integer)
{
	int iter;
	char *str = NULL;

	iter = 0;

	str = _calloc(21, sizeof(char));

	if (integer == 0)
		*(str + iter) = '0';

	while (integer > 0)
	{
		*(str + iter) = ((integer % 10) + '0'), iter++;
		integer /= 10;
	}

	_reverse(str);

	*(str + iter) = '\0';

	_puts(str);

	free(str);
}


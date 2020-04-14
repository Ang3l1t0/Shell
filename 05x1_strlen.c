#include "sh.h"
/**
 * _strlen - It gives the length of a given string.
 * @str: String to give length.
 * Return: It returns the length of a given string.
 */

size_t _strlen(char *str)
{
	size_t len = 0;

	while (*(str + len) != '\0')
		len++;

	return (len);
}


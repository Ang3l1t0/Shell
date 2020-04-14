#include "sh.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: String to copy.
 *
 * Return: A copy of the string given as a parameter.
 */

char *_strdup(char *str)
{
	size_t i, j;
	char *newS;

	i = _strlen(str);

	newS = _calloc(1024, sizeof(char));
	if (!newS)
		return (NULL);

	j = 0;
	while (j < i)
		*(newS + j) = *(str + j), j++;

	return (newS);
}

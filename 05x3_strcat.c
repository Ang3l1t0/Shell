#include "sh.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: destination
 * @src: source
 *
 * Return: two strings concatenates.
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	c = 0;

	while (*(dest + c) != '\0')
		c++;

	for (i = 0; src[i] != '\0'; i++)
		*(dest + c + i) = *(src + i);

	*(dest + c + i) = '\0';

	return (dest);
}


#include "sh.h"
/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y = 0;

	while ((s1[x] != '\0' && s2[y] != '\0') && s1[x] == s2[y])
	{
		s1++;
		s2++;
	}
	if (s1[x] == s2[y])
	{
		return (0);
	}
	else
	{
		return (s1[x] - s2[y]);
	}
}

#include "sh.h"
/**
 * _calloc - It allocates memory for an array, using malloc.
 * @nmemb: Array with elements.
 * @size: Size of array with elements.
 * Return: It returns  a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = (nmemb * size);

	ar = malloc(sizeof(char) * i);
	if (ar == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		*(ar + j) = 0;

	return (ar);
}

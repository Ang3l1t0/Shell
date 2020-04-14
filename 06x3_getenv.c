#include "sh.h"
/**
 * _getenv - It gets a wanted environment variable.
 * @var: Environment variable wanted.
 * Return: It returns a pointer to a char with the variable wanted.
 */

char *_getenv(char *var)
{

	int i, j, k;
	int flag = 0;
	char *str = NULL;
	int lenth;

	if (var)
	{
		lenth = _strlen(var);
		for (i = 0; environ[i]; i++)
		{
			if (flag == 1)
			{
				break;
			}
			for (j = 0; j < lenth; j++)
			{
				if (environ[i][j] == *(var + j)) /*Look for matches*/
				{
					if ((j + 1) == lenth)
					{
						flag = 1;
						break;
					}
				}
				else
				{
					break;
				}
			}

		}
		str = _calloc(sizeof(*str), (_strlen(environ[i - 1]) - lenth));
		if (!str)
			return (NULL);

		for (k = 0, j = (lenth + 1); environ[i - 1][j]; k++, j++)
			str[k] = environ[i - 1][j];
	}
	return (str);
}


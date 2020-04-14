#include "sh.h"
/**
 * find_fpth - It looks for the binary via full path.
 * @com: The current command.
 * Return: It returns 0 on success, returns 1 if the file is a directory,
 * return 2 if the file do not have permissions, on failure 1.
 */

int find_fpth(char *com)
{
	struct stat st;

	/* Checks whether the com starts with './' | '/' | '.' */
	if ((com[0] == '.' && com[1] == '/') || (com[0] == '/'))
	{
		if (stat(com, &st) == 0)
		{
			if ((st.st_mode & X_OK) && (st.st_mode & __S_IFREG))
			{
				return (0);
			}
			else
			{
				return (2);
			}
		}
	}

	if ((com[0] == '/' || com[0] == '.') && stat(com, &st) == 0)
	{
		if (st.st_mode & __S_IFDIR)
			return (2);
	}

	return (1);
}


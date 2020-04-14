#include "sh.h"
/**
 * find_fname - It looks for existence and permissions of the binary.
 * @com: Current command.
 * Return: It returns 0 on success, otherwise returns 1.
 */

int find_fname(char *com)
{
	dir *dirs = NULL, *tmp;
	struct stat st;

	if ((com[0] != '.' && com[1] != '/'))
	{
		if ((com[0] != '/'))
		{
			dirs = path_helper();

			while (dirs != NULL)
			{
				_strcat(dirs->directory, "/");
				_strcat(dirs->directory, com);
				if ((stat(dirs->directory, &st)) == 0)
				{
					if (st.st_mode & X_OK)
					{
						free_linked(dirs);
						return (0);
					}
				}
				tmp = dirs->next;
				free(dirs->directory);
				free(dirs);
				dirs = tmp;
			}
		}
	}
	return (1);
}


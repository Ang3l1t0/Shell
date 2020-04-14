#include "sh.h"
/**
 * path_helper - It creates new nodes with each directory in PATH.
 * Return: It returns a pointer to a structure dir.
 */

dir *path_helper(void)
{

	dir *dir_struct = NULL;
	int dir_num, iter;
	char *path = NULL;
	char *div[1024] = {NULL};

	path = _getenv("PATH");
	dir_num = 0;
	div[dir_num] = strtok(path, ":\0");

	while (div[dir_num++] != NULL)
		div[dir_num] = strtok(NULL, ":\0");

	for (iter = 0; iter < (dir_num - 1); iter++)
		add_node_end(&dir_struct, div[iter]);

	free(path);
	return (dir_struct);
}


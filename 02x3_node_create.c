#include "sh.h"
/**
 * path_helper - It creates new nodes with each directory in PATH.
 * Return: It returns a pointer to a structure dir.
 */

dir *path_helper(void)
{

	dir *dirs_struct = NULL;
	int directory_num, iter;
	char *path = NULL;
	char *div[1024] = {NULL};

	path = _getenv("PATH");
	directory_num = 0;
	div[directory_num] = strtok(path, ":\0");

	while (div[directory_num++] != NULL)
		div[directory_num] = strtok(NULL, ":\0");

	for (iter = 0; iter < (directory_num - 1); iter++)
		add_node_end(&dirs_struct, div[iter]);

	free(path);
	return (dirs_struct);
}


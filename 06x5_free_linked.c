#include "sh.h"
/**
 * free_linked - Free all memory data allocated.
 * @head: Linked List.
 * Return: It returns anything.
 */

void free_linked(dir *head)
{
	dir *temp;

	while (head)
	{
		temp = head->next;
		free(head->directory);
		free(head);
		head = temp;
	}
}


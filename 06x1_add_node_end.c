#include "sh.h"
/**
 * add_node_end - Add new node at the end of a linked list.
 * @head: Reference to the header of a LL.
 * @s: String.
 * Return: Node Address.
 */

dir *add_node_end(dir **head, char *s)
{

	dir *newNode;

	if (!head || !s)
		return (NULL);

	newNode = malloc(sizeof(dir));
	if (!newNode)
		return (NULL);

	newNode->directory = _strdup(s);
	newNode->next = NULL;

	while (*head)
		head = &(*head)->next;

	*head = newNode;

	return (newNode);
}


#include "lists.h"

/**
 * free_dlistint - Entry Point
 *
 * Description: This function frees a doubly linked list
 *
 * @head: double pointer to head node
 *
 * @n: integer member of node to be added
 *
 * Return: (dlistint_t *) pointer to newnode, (NULL) on failure
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	dlistint_t *nextnode = NULL;

	if (head == NULL)
		return;

	current = head;
	while (current)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
	}
}

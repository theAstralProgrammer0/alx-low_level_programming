#include "lists.h"

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

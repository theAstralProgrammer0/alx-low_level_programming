#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *headnode, *nextnode;

	if (*head == NULL)
		return (0);
	else
	{
		headnode = *head;
		nextnode = headnode->next;
		*head = nextnode;
	}
	return (headnode->n);
}

#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
			*head = current->next;
		}
		free(current);
		return (1);
	}
	current = *head;
	for (i = 0; current; i++)
	{
		if (i < index)
		{
			if (current->next == NULL)
				return (-1);
			current = current->next;
		}
		else
		{
			if (current->next == NULL)
			{
				current->prev->next = NULL;
				free(current);
				return (1);
			}
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
				free(current);
				return (1);
			}
		}
	}
	return (-1);
}

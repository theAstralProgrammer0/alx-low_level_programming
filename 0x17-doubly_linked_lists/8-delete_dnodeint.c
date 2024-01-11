#include "lists.h"

/**
 * delete_dnodeint_at_index - Entry Point
 *
 * Description: This function deletes a node at an index in a doubly linked
 * list
 *
 * @head: double pointer to head node
 *
 * @index: index where node is to be added
 *
 * Return: (int) 1 on Success, -1 on Failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		if (current->next != NULL)
		{
			current->next->prev = NULL;
			*head = current->next;
		}
		free(current);
		return (1);
	}
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
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
	}
	return (-1);
}

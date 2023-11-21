#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int length, i = 0, count = 0;
	listint_t *prev, *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (head == NULL || new == NULL)
		return (-1);
        while (temp)
        {
                ++count;
                temp = temp->next;
        }
	length = count;
	if (index > length - 1)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (i < index)
	{
		prev = temp;
		temp = temp->next;
		++i;
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}

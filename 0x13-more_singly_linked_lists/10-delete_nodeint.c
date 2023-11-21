#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t listint_len(const listint_t *h)
{
        int count = 0;
        listint_t *temp, *head = (listint_t *) h;

        temp = head;

        while (temp)
        {
                ++count;
                temp = temp->next;
        }
        return (count);
}


int pop_listint(listint_t **head)
{
        int data;
        listint_t *temp;

        if (*head == NULL)
                return (0);

        temp = *head;
        *head = (*head)->next;
        data = temp->n;
        free(temp);
        return (data);
}


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int length, i = 0;
	listint_t *prev, *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (head == NULL || new == NULL)
		return (-1);

	length = listint_len(*head);

	if (index > length - 1)
		return (-1);

	if (index == 0)
	{
		pop_listint(head);
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

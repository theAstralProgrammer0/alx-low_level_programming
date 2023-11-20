#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1, count = 0;
	listint_t *temp, *newnode, *nextnode;


	if (*head == NULL)
		count = 0;
	else
	{
		temp = *head;

		while(temp)
		{
			++count;
			temp = temp->next;
		}
	}

	if (count < idx)
		return (NULL);
	else
	{
		newnode = (listint_t *) malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);

		temp = *head;

		while(i < idx)
		{
			temp = temp->next;
			++i;
		}
		nextnode = temp->next;
		newnode->next = nextnode;
		temp->next = newnode;
		newnode->n = n;
	}
	return (newnode);
}


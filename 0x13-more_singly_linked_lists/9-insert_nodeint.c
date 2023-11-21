#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, count = 0;
	listint_t *temp, *newnode, *prevnode;

	if (*head == NULL)
		return (NULL);

	temp = *head;

	while(temp)
	{
		++count;
		temp = temp->next;
	}
	newnode = (listint_t *) malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if ((count - 1) < idx)
		return (NULL);
	else
	{
		temp = *head;
		

		while(i < idx)
		{
			prevnode = temp;
			temp = temp->next;
			++i;
		}
		newnode->n = n;
		newnode->next = temp;
		prevnode->next = newnode;
	}
	return (newnode);
}


#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = (listint_t *) malloc(sizeof(listint_t));
	newnode->next = NULL;
	newnode->n = n;

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;

		while(temp->next)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}

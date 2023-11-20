#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *) malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->n = n;
	*head = newnode;
	
	return (newnode);
}




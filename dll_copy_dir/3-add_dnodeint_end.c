#include "lists.h"

dlistint_t* add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *temp = NULL;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL || head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		newnode->prev = temp;
		temp->next = newnode;
	}
	return (newnode);
}


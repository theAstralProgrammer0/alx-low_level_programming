#include "lists.h"

/**
 * add_dnodeint_end - Entry Point
 *
 * Description: This function adds a node at the end of a doubly linked
 * list
 *
 * @head: double pointer to head node
 *
 * @n: integer member of node to be added
 *
 * Return: (dlistint_t *) pointer to newnode, (NULL) on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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

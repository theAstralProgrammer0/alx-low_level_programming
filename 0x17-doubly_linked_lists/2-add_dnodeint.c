#include "lists.h"

/**
 * add_dnodeint - Entry Point
 *
 * Description: This function adds a node at the beginning of a doubly linked
 * list
 *
 * @head: double pointer to head node
 *
 * @n: integer member of node to be added
 *
 * Return: (dlistint_t *) pointer to newnode, (NULL) on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

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
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}
	return (newnode);
}

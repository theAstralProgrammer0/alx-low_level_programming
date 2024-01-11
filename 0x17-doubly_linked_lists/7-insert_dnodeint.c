#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry Point
 *
 * Description: This function inserts a node at an index in a doubly linked
 * list
 *
 * @h: double pointer to head node
 *
 * @n: integer member of node to be added
 *
 * @idx: index to be added
 *
 * Return: (dlistint_t *) pointer to newnode, (NULL) on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *newnode = NULL;
	unsigned int i;

	if (*h == NULL || h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	temp = *h;
	for (i = 0; i < idx; i++)
	{
		if (i < idx - 1)
			temp = temp->next;
		else
		{
			newnode->prev = temp;
			newnode->next = temp->next;
			temp->next->prev = newnode;
			temp->next = newnode;
		}
	}
	return (newnode);
}

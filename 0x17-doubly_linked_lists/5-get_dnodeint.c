#include "lists.h"

/**
 * get_dnodeint_at_index - Entry Point
 *
 * Description: This function retrives a node at a given index in a doubly
 * linked list
 *
 * @head: pointer to head node
 *
 * @index: index where node is to be added
 *
 * Return: (dlistint_t *) pointer to node_at_index, (NULL) on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;
	for (i = 0; temp; i++)
	{
		if (i < index)
			temp = temp->next;
		else
			return (temp);
	}
	return (NULL);
}

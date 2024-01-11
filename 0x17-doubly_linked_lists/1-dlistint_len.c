#include <stdio.h>
#include "lists.h"

/**
  * dlist_len - Entry Point
  *
  * Description: This function finds the number of nodes in a linked list
  *
  * @h: head that points to the head node of linked list
  *
  * Return: (count) int
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	dlistint_t *temp = (dlistint_t *) h;

	while (h != NULL)
	{
		if (temp != NULL)
		{
			temp = temp->next;
			count++;
		}
		else
			break;
	}
	return (count);
}

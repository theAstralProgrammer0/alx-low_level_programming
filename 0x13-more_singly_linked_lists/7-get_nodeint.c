#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * get_nodeint_at_index - Entry Point
  * Description: A function that returns pointer to the data of a node at a
  * specific index
  * @head: head pointer
  * @index: index
  * Return: (temp) pointer to node at index
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0, i = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp)
	{
		++count;
		temp = temp->next;
	}

	temp = head;

	if ((count - 1) >= index)
	{
		while (i < index)
		{
			temp = temp->next;
			++i;
		}
	}
	else
		return (NULL);
	return (temp);
}



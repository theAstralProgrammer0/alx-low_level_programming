#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0, i = 0;
	listint_t *temp;
	
	if (head == NULL)
		return (NULL);

	temp = head;

	while(temp)
	{
		++count;
		temp = temp->next;
	}

	temp = head;
	
	if ((count - 1) < index)
		return (NULL);
	else
	{
		while(i < index)
		{
			temp = temp->next;
			++i;
		}
	}
	return (temp);
}



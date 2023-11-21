#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/**unsigned int i = 0*/
	unsigned int count = 0;
	listint_t *temp;
	/**listint_t *prevnode, *nextnode;*/

	if (*head == NULL)
		count = 0;
	else
	{
		temp = *head;

		while(temp)
		{
			++count;
			temp = temp->next;
		}
	}

	printf("count is length of list equals %d, index is %d\n", count, index);

	/**if (count < index)
		return (-1);
	else
	{
		temp = *head;
		
		while(i < index - 1)
		{
			prevnode = temp;
			temp = temp->next;
			++i;
		}
		nextnode = temp->next;
		prevnode->next = nextnode;
		free(temp);
	}*/
	return (1);
}

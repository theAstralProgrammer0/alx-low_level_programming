#include <stdio.h>
#include "lists.h"


size_t print_listint(const listint_t *h)
{
	int count = 0;
	listint_t *temp, *head = (listint_t *) h;

	if (head == NULL)
		return (0);
	else
	{
		temp = head;

		while (temp)
		{
			++count;
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}

	return (count);
}

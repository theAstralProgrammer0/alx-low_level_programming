#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	else
	{
		temp = head;

		while(temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}

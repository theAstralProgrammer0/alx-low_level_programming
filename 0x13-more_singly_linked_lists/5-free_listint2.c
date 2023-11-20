#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *freer, *temp;

	if (head == NULL)
		return;
	else
	{
		temp = *head;

		while(temp)
		{
			freer = temp;
			temp = temp->next;
			free(freer);
		}
		*head = NULL;
	}
}


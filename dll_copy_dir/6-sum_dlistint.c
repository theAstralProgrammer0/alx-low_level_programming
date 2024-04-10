#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

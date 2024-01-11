#include "lists.h"

/**
 * sum_dlistint - Entry Point
 *
 * Description: This function adds integers in each node of a doubly linked
 * list
 *
 * @head: pointer to head node
 *
 * Return: (int) sum
 */

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

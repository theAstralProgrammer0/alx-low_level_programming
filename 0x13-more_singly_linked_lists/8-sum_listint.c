#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - Entry Point
  * Description: A function that sums up all node integer data and returns the
  * sum
  * @head: head pointer
  * Return: (sum) int
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head != NULL)
	{
		temp = head;

		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	else
		return (0);
	return (sum);
}

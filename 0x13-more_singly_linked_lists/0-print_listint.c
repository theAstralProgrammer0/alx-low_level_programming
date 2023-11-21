#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Entry Point
  * Description: A function that prints a linked list
  * @h: head pointer
  * Return: (count) int
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	listint_t *temp, *head = (listint_t *) h;

	temp = head;

	while (temp)
	{
		++count;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}

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
	size_t count = 0;

	while (h)
	{
		++count;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

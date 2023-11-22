#include <stdio.h>
#include "lists.h"

/**
  * print_listint_safe - Entry Point
  * Description: A function that prints a linked list
  * @head: head pointer
  * Return: (count) int
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	return (count);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_dlistint - Entry Point
  *
  * Description: This function prints the contents of the node in a doubly
  * linked list
  *
  * @h: head pointer to head node
  *
  * Return: (count) int
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp = (dlistint_t *)h;
	
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}

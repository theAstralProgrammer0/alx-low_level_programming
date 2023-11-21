#include <stdio.h>
#include "lists.h"

/**
  * listint_len - ENtry Point
  * Description: A function that finds the length of a linked list
  * @h: head pointer
  * Return: (count) int
  */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	listint_t *temp, *head = (listint_t *) h;

	temp = head;

	while (temp)
	{
		++count;
		temp = temp->next;
	}
	return (count);
}

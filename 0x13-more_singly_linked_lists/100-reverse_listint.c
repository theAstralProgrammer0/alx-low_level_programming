#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - Entry Point
  * Description: A function that reverses a linked list
  * @head: head pointer
  * Return: (prev) pointer to new head
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	return (prev);
}

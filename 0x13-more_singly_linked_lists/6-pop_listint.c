#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - Entry Point
  * Description: A function that 'pops' a node off the head of the linked list
  * @head: head double pointer
  * Return: (data) int value being popped
  */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}

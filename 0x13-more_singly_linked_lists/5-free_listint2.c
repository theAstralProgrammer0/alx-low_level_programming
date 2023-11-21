#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - Entry Point
  * Description: A function that frees an entire linked list and sets the head
  * to NULL
  * @head: head double pointer
  * Return: (freer) node to be freed
  */

void free_listint2(listint_t **head)
{
	listint_t *freer, *temp;

	temp = *head;

	while (temp)
	{
		freer = temp;
		temp = temp->next;
		free(freer);
	}
	*head = NULL;
}


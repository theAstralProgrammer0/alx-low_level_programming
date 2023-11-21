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
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;

		while (*head)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}
	else
		return;
	*head = NULL;
}


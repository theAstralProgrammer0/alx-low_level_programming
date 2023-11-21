#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - Entry Point
  * Description: A function that frees an entire linked list
  * @head: head pointer
  * Return: (freer) node being freed
  */

void free_listint(listint_t *head)
{
	listint_t *freer, *temp;

	temp = head;

	while (temp)
	{
		freer = temp;
		temp = temp->next;
		free(freer);
	}
}


#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
  * free_list - Entry Point
  *
  * Description: This function frees all allocated memory for a linked list
  *
  * @head: Head node pointer
  *
  * Return: Nothing
  */

void free_list(list_t *head)
{
	list_t *nextNode = NULL, *temp = NULL;

	temp = head;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		nextNode = temp->next;

		if (temp->str != NULL)
			free(temp->str);
		free(temp);
		temp = nextNode;
	}
}

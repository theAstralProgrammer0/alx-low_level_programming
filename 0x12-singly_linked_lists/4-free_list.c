#include <stdlib.h>
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
	list_t *nextNode, *temp;

	temp = head;

	if (head == NULL)
		return;

	while (temp->next)
	{
		nextNode = temp->next;

		if (temp->str != NULL)
			free(temp->str);
		free(temp);
		temp = nextNode;
	}
}

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
	list_t *nextNode;

	while (head)
	{
		nextNode = head->next;
		free(head->str);
		free(head);
		head = nextNode;
	}
}

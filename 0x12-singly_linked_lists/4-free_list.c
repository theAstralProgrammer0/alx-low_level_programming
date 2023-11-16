#include <stdlib.h>
#include "lists.h"



void free_list(list_t *head)
{
	list_t *nextNode;

	while (currentNode)
	{
		nextNode = head->next;
		free(head->str);
		free(head);
		head = nextNode;
	}
}

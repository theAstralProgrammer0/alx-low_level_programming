#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
	list_t *currentNode, *nextNode;

	currentNode = head;

	while (currentNode)
	{
		nextNode = currentNode->next;
		free(currentNode->str);
		free(currentNode);
		currentNode = nextNode;
	}
}

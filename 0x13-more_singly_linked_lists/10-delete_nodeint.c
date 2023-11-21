#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - Entry Point
  * Description: This function deletes a node at a specific index
  * @head: double pointer to head node
  * @index: index
  * Return: Always 1 (success), -1 (failurre)
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *currNode = NULL;
	listint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}

	currNode = temp->next;
	temp->next = currNode->next;
	free(currNode);
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = (list_t *) malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = NULL;
	newnode->str = strdup(str);
	newnode->len = strlen(str);

	if (*head == NULL)
		*head = temp = newnode;
	else
	{
		temp = *head;

		while(temp->next != NULL)
			temp = temp->next;

		temp->next = newnode;
	}

	return (newnode);
}

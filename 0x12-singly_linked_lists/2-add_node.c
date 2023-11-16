#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = (list_t *) malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	*head = newnode;

	return (newnode);
}

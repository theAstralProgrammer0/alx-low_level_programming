#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = (list_t *) malloc(sizeof(list_t));

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
		*head = temp = newnode;
	
	while(temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}

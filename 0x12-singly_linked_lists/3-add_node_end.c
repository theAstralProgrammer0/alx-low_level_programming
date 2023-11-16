#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - Entry Point
  *
  * Description: This function adds a node to the end of a linked list
  *
  * @head: Pointer to head pointer
  *
  * @str: String vallue for list node member
  *
  * Return: (newnode) pointer to last created node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp = *head;

	newnode = (list_t *) malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}

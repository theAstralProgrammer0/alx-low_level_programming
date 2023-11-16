#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Entry Point
  *
  * Description: This function adds a node to the end of linked list
  *
  * @head: Pointer to head pointer
  *
  * @str: String to be used
  *
  * Return: (newnode) pointer to list_t linked list
  */

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

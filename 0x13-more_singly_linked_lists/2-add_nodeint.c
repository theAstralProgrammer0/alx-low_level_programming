#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Entry Point
  * Description: A function that adds a node to a list
  * @head: Head double pointer
  * @n: Node integer data
  * Return: (newnode) pointer to lastest node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *) malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	return (newnode);
}




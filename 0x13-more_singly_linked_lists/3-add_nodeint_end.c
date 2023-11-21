#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - Entry Point
  * Description: A function that adds a new node to the end of a linked list
  * @head: head double pointer
  * @n: Node integer data
  * Return: (newnode) pointer to latest node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = (listint_t *) malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}

#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dlistint_t - doubly linked list
 * @n: integer 
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */

typedef struct dlistint_t
{
	int n;
	struct dlistint_t *next;
	struct dlistint_t *prev;
} dlistint_t;

typedef struct dlist_t
{
	struct dlistint_t *head;
	struct dlistint_t *tail;
	size_t length;
} dlist_t;

/* This function initializes the doubly linked list */
dlist_t *init_list();
/* This function prints the int data members of a doubly linked list. It returns
 * the length of the list */
size_t print_dlistint(const dlistint_t *head);
/* This function returns the length of a doubly linked list */
size_t dlistint_len(const dlistint_t *head);
/* Adds node to beginning of list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/* This function adds a node at the beginning of a doubly linked list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/* This function frees a doubly linked list */
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
#endif

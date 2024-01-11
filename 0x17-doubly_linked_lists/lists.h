#ifndef LISTS_H
#define LISTS_H

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
	struct dlistint_t* next;
	struct dlistint_t* prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *);
/**
 * size_t list_len(const list_t *);
 * list_t *add_node(list_t **, const char *);
 * list_t *add_node_end(list_t **, const char *);
 * void free_list(list_t *);
 */
#endif

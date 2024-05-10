#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define min(x, y) ((x) < (y) ? (x) : (y))

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/** Main Functions **/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);


/** Auxilliary Functions **/
void print_array(int *array, int size);
void print_array_bound(int *array, int l, int r);
size_t probe(int *array, int low, int high, int value);
int search_core(int *array, size_t size, int low, int high, int value);
int bin_search(int *array, int l, int r, int value);
#endif

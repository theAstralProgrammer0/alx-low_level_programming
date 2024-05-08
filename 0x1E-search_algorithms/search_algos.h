#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/** Main Functions **/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/** Auxilliary Functions **/
void print_array(int *array, int size);
#endif

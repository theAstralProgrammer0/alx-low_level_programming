#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _calloc - Entry Point
  *
  * Description: A function that mimics the calloc function
  *
  * @nmemb: Number of elements in the allocated array memory
  *
  * @size: Size of the allocated array memory
  *
  * Return: (ptr) to allocated array
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int comp_size;
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	comp_size = nmemb * size;

	ptr = malloc(comp_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, comp_size);

	return (ptr);
}

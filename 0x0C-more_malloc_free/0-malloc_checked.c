#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - Entry Point
  *
  * Description: A function that allocates memory and exits with 98 if memory
  * cannot be allocated
  *
  * @b: Size to be allocated
  *
  * Return: (ptr) new memory
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

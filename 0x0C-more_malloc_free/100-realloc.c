#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * alloc - Auxilliary Function
  *
  * Description: A function used to allocate a size of memory using malloc and
  * check if it returns NULL
  *
  * @size: Size to be allocated
  *
  * Return: (allocd_ptr) to the newly allocated memory
  */

void *alloc(unsigned int size)
{
	void *allocd_ptr = malloc(size);

	if (allocd_ptr == NULL)
		return (NULL);

	return (allocd_ptr);
}

/**
  * _realloc - Entry Point
  *
  * Description: A funcion to reallocate memory from an old size to a new size
  * copying anything stored in the old memory and populating the newly
  * allocated memory of size new_size with the existing content of the old
  * memory
  *
  * @ptr: Old memory allocated using either malloc or calloc
  *
  * @old_size: Size of previously allocated memory
  *
  * @new_size: Size of newly allocated memory
  *
  * Return: (new_ptr) to newly allocated memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	{
		new_ptr = alloc(new_size);
	}

	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
		new_ptr = ptr;

	else
	{
		unsigned int min_size;

		new_ptr = alloc(new_size);

		min_size = (old_size < new_size) ? old_size : new_size;

		memcpy(new_ptr, ptr, min_size);

		free(ptr);
	}

	return (new_ptr);
}

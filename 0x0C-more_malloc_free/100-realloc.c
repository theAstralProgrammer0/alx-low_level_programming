#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *alloc(unsigned int size)
{
	void *allocd_ptr = malloc(size);

	if (allocd_ptr == NULL)
		return (NULL);

	return (allocd_ptr);
}

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

		memcpy(new_ptr, ptr, old_size);
		
		free(ptr);
	}

	return (new_ptr);
}

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

	if (ptr == NULL || old_size == 0)
	{
		new_ptr = alloc(new_size);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		new_ptr = alloc(new_size);
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size < old_size)
	{
		new_ptr = alloc(new_size);
		memcpy(new_ptr, ptr, new_size);
		free(ptr);
	}

	return (new_ptr);
}

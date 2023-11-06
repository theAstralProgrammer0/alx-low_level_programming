#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

void free_dog(dog_t *d)
{
	int i;

	for (i = 0; i < sizeof(dog_t); i++)
	{
		free(d[i]);
	}
	free(d);
}

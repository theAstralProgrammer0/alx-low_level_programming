#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - Entry Point
  *
  * Description: A function that frees the entire allocated memory for the
  * new_dog
  *
  * @d: object of data type dog_t
  *
  * Return: Nothing
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

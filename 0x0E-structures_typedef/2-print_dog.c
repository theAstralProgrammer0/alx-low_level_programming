#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
  * print_dog - Entry Point
  *
  * Description: This function prints the members of the struct dog
  *
  * @d: struct dog object
  *
  * Return: Nothing
  */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

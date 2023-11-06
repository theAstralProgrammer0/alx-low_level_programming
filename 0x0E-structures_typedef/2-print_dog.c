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
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

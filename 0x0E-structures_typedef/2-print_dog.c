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
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

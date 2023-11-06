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

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age != 0 ? d->age : 0.0);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}

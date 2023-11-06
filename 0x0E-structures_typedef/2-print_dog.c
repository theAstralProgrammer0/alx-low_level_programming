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
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

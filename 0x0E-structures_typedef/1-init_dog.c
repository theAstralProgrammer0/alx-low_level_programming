#include <stdio.h>
#include "dog.h"
/**
  * init_dog - Entry Point
  *
  * Description: This function initializes a struct dog variable
  * object
  *
  * @d: dog variable/object of type struct dog
  *
  * @name: name of dog
  *
  * @age: age of dog
  *
  * @owner: name of owner of dog
  *
  * Return: Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d = {name, age, owner};
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
  * new_dog - Entry Point
  *
  * Description: This function creates a new dog object from the parameter
  * members
  *
  * @name: name of the new dog
  *
  * @age: age of the new dog
  *
  * @owner: owner of the new dog
  *
  * Return: (dog_object_ptr) to new dog object
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = (dog_t *) malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	new_dog->age = age;
	
	return (new_dog);
}

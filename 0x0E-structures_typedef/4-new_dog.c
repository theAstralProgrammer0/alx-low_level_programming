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
	size_t len_name, len_owner;
	char *new_name, *new_owner;
	dog_t *new_dog;

	len_name = strlen(name);
	len_owner = strlen(owner);

	new_dog = (dog_t *) malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_name = (char *) malloc(len_name + 1);
	new_owner = (char *) malloc(len_owner + 1);

	new_dog->name = strcpy(new_name, name);
	new_dog->owner = strcpy(new_owner, owner);
	new_dog->age = age;

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	return (new_dog);
}

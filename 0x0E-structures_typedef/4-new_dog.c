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
	dog_t *new_dog;

	len_name = strlen(name);
	len_owner = strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return  (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

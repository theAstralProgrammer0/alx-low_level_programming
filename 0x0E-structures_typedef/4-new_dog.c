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

	if (!name || age < 0 || !owner)
		return (NULL);

	len_name = strlen(name);
	len_owner = strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_name = (char *) malloc(sizeof(char) * (len_name + 1));
	if (new_name == NULL)
	{
		free(new_name);
		return  (NULL);
	}
	new_owner = (char *) malloc(sizeof(char) * (len_owner + 1));
	if (new_owner == NULL)
	{
		free(new_owner);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->owner = new_owner;
	new_dog->age = age;

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	return (new_dog);
}

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

	new_name = (char *) malloc(sizeof(name));
	if (new_name == NULL)
		return (NULL);
	new_owner = (char *) malloc(sizeof(owner));
	if (new_owner == NULL)
		return (NULL);

	new_dog = (dog_t *) malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	memcpy(new_name, name, len_name);
	memcpy(new_owner, owner, len_owner);


	new_dog->name = new_name;
	new_dog->owner = new_owner;
	new_dog->age = age;
	
	return (new_dog);
}

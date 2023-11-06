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
	char *new_name, *new_owner;
	unsigned int len_name, len_owner;
	dog_t *dog_object_ptr;

	len_name = strlen(name);
	len_owner = strlen(owner);

	new_name = (char *) malloc(len_name * sizeof(char));
	new_owner = (char *) malloc(len_owner * sizeof(char));
	dog_object_ptr = (dog_t *) malloc(sizeof(dog_t));

	if (dog_object_ptr == NULL)
		return (NULL);

	memcpy(new_name, name, len_name);
	memcpy(new_owner, owner, len_owner);

	dog_object_ptr->name = new_name;
	dog_object_ptr->age = age;
	dog_object_ptr->owner = new_owner;

	return (dog_object_ptr);
}

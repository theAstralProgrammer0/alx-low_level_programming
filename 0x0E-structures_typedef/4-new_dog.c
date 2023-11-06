#include <stdio.h>
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
	dog_t *dog_object_ptr;
	dog_t dog_object;

	dog_object_ptr = &dog_object;

	if (dog_object_ptr != NULL)
	{
		dog_object_ptr->name = name;
		dog_object_ptr->age = age;
		dog_object_ptr->owner = owner;
	}
	return (dog_object_ptr);
}

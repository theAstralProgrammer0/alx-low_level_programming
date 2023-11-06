#include <stdio.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_object_ptr;
	dog_t dog_object;

	dog_object_ptr = &dog_object;
	
	dog_object_ptr->name = name;
	dog_object_ptr->age = age;
	dog_object_ptr->owner = owner;
	
	return (dog_object_ptr);
}

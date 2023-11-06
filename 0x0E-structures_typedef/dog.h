#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Dog object
  *
  * Description: Contains all the members of the class/object "dog"
  *
  * @name: Name of dog
  *
  * @age: Age of dog
  *
  * @owner: Name of Owner of dog
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(dog_t *, char *, float, char *);
void print_dog(dog_t *);
dog_t *new_dog(char *, float, char *);
void free_dogs(dog_t *);

#endif

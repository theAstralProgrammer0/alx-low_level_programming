#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - Entry Point
  *
  * Description: This function creates an array dynamically at runtime and
  * initializes (populates) the array with a char
  *
  * @size: Size of the array to be created
  *
  * @c: Character to populate the array with
  *
  * Return: (arrptr) pointer to array in heap
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arrptr = (char *) calloc(size, sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(arrptr + i) = c;
	}

	return (arrptr);
}

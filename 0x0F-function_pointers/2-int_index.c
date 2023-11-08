#include <stddef.h>
/**
  * int_index - Entry Point
  *
  * Description: A function that finds and returns the index of the first
  * occurence of an integer inside an array that meets a specific comparison
  * condition
  *
  * @array: Array being iterated over
  *
  * @size: Size of the array
  *
  * @cmp: Function pointer pointing to the comparator function
  *
  * Return: (i) the index
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}

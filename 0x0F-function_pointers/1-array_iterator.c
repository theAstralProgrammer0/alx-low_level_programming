#include <stddef.h>

/**
  * array_iterator - Entry Point
  *
  * Description: A file that iterates over an array of numbers while calling 
  * separate callbacks (int main) to operate on each of the array indices
  *
  * @array: Array to be iterated over
  *
  * @size: Size of the array
  *
  * @action: Function pointer pointing to different functions depending on
  * the function address passed in the int main function
  *
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}

#include "search_algos.h"

/**
 * print_array - Aux Function
 *
 * Description: Prints an array or sub-array
 *
 * @array: pointer to first element in the array
 * @size: size of the array
 *
 * Return: Nothing
 */
void print_array(int *array, int size)
{
	int i = 0;

	while (i <= size)
	{
		if (i != size)
			printf("%i, ", array[i]);
		else
			printf("%i\n", array[i]);
		i++;
	}
}


/**
 * binary_search - Entry Point
 *
 * Description: searches for a value in a sorted array of integers
 *		using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index FOUND, -1 NOT FOUND|NULL array
 */
int binary_search(int *array, size_t size, int value)
{

	int low = 0;
	int mid;
	int high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid =  low + ((high - low) / 2);
		printf("Searching in array: ");
		print_array(&array[low], (high - low));
		if (value == array[mid])
			return (mid);

		if (value > array[mid])
		{
			low = mid + 1;
		}
		if (value < array[mid])
		{
			high = mid - 1;
		}
	}
	return (-1);
}

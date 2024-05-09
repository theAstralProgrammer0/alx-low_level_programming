#include "search_algos.h"
#define min(x, y) ((x) < (y) ? (x) : (y))

/**
 * print_array_bound - Aux Function
 *
 * Description: Prints arrays but mostly sub-arrays
 *
 * @array: pointer to first element in the array
 * @l: left boundary of array
 * @r: right boundary of array
 *
 * Return: Nothing
 */
void print_array_bound(int *array, int l, int r)
{
	int i = l;

	while (i <= r)
	{
		if (i != r)
			printf("%i, ", array[i]);
		else
			printf("%i\n", array[i]);
		i++;
	}
}


/**
 * bin_search - Aux Function
 *
 * Description: performs a binary search on an array to match a value
 *
 * @array: pointer to the first element of the array to search in
 * @l: left boundary of array
 * @r: right boundary of array
 * @value: value to search for
 *
 * Return: index of value FOUND, -1 NOT FOUND
 */
int bin_search(int *array, int l, int r, int value)
{
	int m;

	if (l <= r)
	{
		printf("Searching in array: ");
		print_array_bound(array, l, r);

		if (array[l] == value)
			return (l);

		m = l + (r - l) / 2;

		if (array[m] == value)
			return (m);

		if (array[m] < value)
			return (bin_search(array, m + 1, r, value));

		if (array[m] > value)
			return (bin_search(array, l, m - 1, value));
	}
	return (-1);
}

/**
 * exponential_search - Entry Point
 *
 * Description: searches for a value in a sorted array of integers
 *		using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value FOUND, -1 NOT FOUND|array = NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1;
	int min_val;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		i *= 2;
	}

	min_val = min(i, (int)size - 1);
	printf("Value found between indexes [%i] and [%i]\n", i / 2, min_val);
	return (bin_search(array, i / 2, min_val, value));
}

#include "search_algos.h"

/**
 * probe - Aux Function
 *
 * Description: determines the probe position
 *
 * @array: pointer to the first element of the array to search in
 * @low: low boundary of subject array
 * @high: high boundary of subject array
 * @value: value to search for
 *
 * Return: Always (probe)
 */
size_t probe(int *array, int low, int high, int value)
{
	size_t probe = low + (((double)(high - low) /
			       (array[high] - array[low])) *
			      (value - array[low]));
	return (probe);
}

/**
 * search_core - Aux Function
 *
 * Description: searches the array recursively for a match
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @low: low boundary of subject array
 * @high: high boundary of subject array
 * @value: value to search for
 *
 * Return: index of value FOUND, -1 NOT FOUND
 */
int search_core(int *array, size_t size, int low, int high, int value)
{
	size_t p;

	p = probe(array, low, high, value);
	if (p > size)
		printf("Value checked array[%lu] is out of range\n", p);

	if (p < size)
		printf("Value checked array[%lu] = [%i]\n", p, array[p]);

	if (low <= high && value >= array[low] && value <= array[high])
	{
		if (array[p] == value)
			return (p);

		if (array[p] < value)
			return (search_core(array, size, p + 1, high, value));

		if (array[p] > value)
			return (search_core(array, size, low, p - 1, value));
	}
	return (-1);
}


/**
 * interpolation_search - Entry Function
 *
 * Description: searches for a value in a sorted array of integers
 *		using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value FOUND, -1 NOT FOUND|array = NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;

	if (!array)
		return (-1);

	return (search_core(array, size, low, high, value));
}

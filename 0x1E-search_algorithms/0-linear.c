#include "search_algos.h"

/**
 * linear_search - Entry Point
 *
 * Description: Searches an array of numbers sequentially for a value
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: i on Search hit, -1 on Search miss
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
		continue;
	}
	return (-1);
}

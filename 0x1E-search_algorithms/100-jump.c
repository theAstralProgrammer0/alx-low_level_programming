#include "search_algos.h"

/**
 * jump_search - Entry Point
 *
 * Description: searches for a value in a sorted array of integers using the
 *		Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value FOUND, -1 NOT FOUND|array = NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0;

	if (!array)
		return (-1);

	printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
	while (array[step] < value)
	{
		prev = step;
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		step += sqrt(size);

		if (step >= (int)size)
			break;
	}

	printf("Value found between indexes [%i] and [%i]\n", prev, step);

	while (prev < (int)size)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		prev++;

		if (array[prev] == value)
		{
			printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
			return (prev);
		}
	}

	return (-1);
}

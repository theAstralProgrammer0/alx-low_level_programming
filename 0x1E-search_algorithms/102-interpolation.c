#include "search_algos.h"

size_t probe(int *array, int low, int high, int value)
{
	size_t probe = low + (((double)(high - low) /
			       (array[high] - array[low])) *
			      (value - array[low]));
	return (probe);
}


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


int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;

	if (!array)
		return (-1);
	
	return (search_core(array, size, low, high, value));
}

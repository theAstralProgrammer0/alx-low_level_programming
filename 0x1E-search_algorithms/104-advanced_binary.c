#include "search_algos.h"

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


int search_binary(int *array, int l, int r, int value)
{
	int m;

	if (l <= r)
	{
		printf("Searching in array: ");
		print_array_bound(array, l, r);

		m = l + (r - l) / 2;
		
		if (array[m] == value)
			return (m);
		
		else if (array[m] < value)
			return search_binary(array, m + 1, r, value);
		
		else
			return search_binary(array, l, m - 1, value);
	}
	return (-1);
}


int advanced_binary(int *array, size_t size, int value)
{
	int left, right;

	if (!array)
		return (-1);

	left = 1;
	right = size - 1;

	if (array[0] == value)
		return (0);
	return search_binary(array, left, right, value);
}

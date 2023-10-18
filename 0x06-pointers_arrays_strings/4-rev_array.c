#include <stdio.h>

/**
  * reverse_array - Entry Point
  *
  * Description: This function reverses the elements of an array
  *
  * @a: Subject Array
  *
  * @n: Size of Array
  *
  * Return: Nothing
  */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}


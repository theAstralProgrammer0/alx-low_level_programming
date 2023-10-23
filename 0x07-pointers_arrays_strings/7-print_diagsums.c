#include <stdio.h>

/**
  * print_diagsums - Entry Point
  *
  * Description: This function adds both diagonal elements of a matrix
  *
  * @a: Matrix
  *
  * @size: Size of array
  *
  * Return: Nothing
  */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sumL = 0;
	int sumR = 0;

	for (i = size - 1; i <= (size * size) - size; i += (size - 1))
	{
		sumR += a[i];
	}
	for (j = 0; j < (size * size); j += (size + 1))
	{
		sumL += a[j];
	}
	printf("%d, %d\n", sumL, sumR);
}

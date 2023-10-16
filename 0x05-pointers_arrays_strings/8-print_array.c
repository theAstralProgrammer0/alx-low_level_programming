#include <stdio.h>
#include <string.h>

/**
  * print_array - Entry Point
  *
  * Description: The Program prints the elements of a given array
  *
  * @a: Array parameter passed in from int main
  *
  * @n: Number of elements in the array passed from int main
  *
  * Return: Nothing
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}

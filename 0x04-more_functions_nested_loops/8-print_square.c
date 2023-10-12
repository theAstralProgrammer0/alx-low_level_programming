#include <stdio.h>
#include "main.h"

/**
  * print_square - Entry Point
  *
  * Description: This is a C program to print a square based on a given size.
  *
  * @size: The size of the length of the triangle.
  */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else if (size <= 0)
	{
		putchar('\n');
	}
}

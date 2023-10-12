#include <stdio.h>
#include "main.h"

/**
  * print_triangle - Entry Point
  *
  * Description: This is a C program to print a triangle based on a given size.
  *
  * @size: The size of the height and base of the triangle.
  */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
				{
					putchar(' ');
				}
				else
				{
					putchar('#');
				}
			}	
			putchar('\n');
		}
	}
	putchar('\n');
}

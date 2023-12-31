#include <stdio.h>
#include "main.h"

/**
  * print_diagonal - Entry Point
  *
  * Description: A C program to print a diagonal based on a given length.
  *
  * @n: The length of the diagonal.
  */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		putchar('\n');

	else
	{
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= i; ++j)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}

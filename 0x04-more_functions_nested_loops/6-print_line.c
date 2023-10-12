#include <stdio.h>
#include "main.h"

/**
  * print_line - Entry Point
  *
  * Description: A C program to print a line based on a given length.
  *
  * @n: The length of the line.
  */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
	else if (n <= 0)
		putchar('\n');
}

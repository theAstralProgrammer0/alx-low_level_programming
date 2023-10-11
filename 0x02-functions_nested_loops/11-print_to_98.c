#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - Entry Point
  *
  * @n: integer argument from function call
  */


void print_to_98(int n)
{
	if (n <= 98)
	{
		print_n_less_equal_98(n);
	}
	else
	{
		print_n_greater_98(n);
	}
	putchar('\n');
}

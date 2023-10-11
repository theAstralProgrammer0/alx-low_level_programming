#include <stdio.h>

/**
  * print_n_greater_98 - Entry Point
  *
  */

void print_n_greater_98(int n)
{
	int i;
	
	for (i = n; i >= 98; i--)
	{
		int num = i;
		int div = 1;

		while (num / div > 9)
		{
			div *= 10;
		}
		while (div > 0)
		{
			putchar(num / div + '0');
			num %= div;
			div /= 10;
		}
		if (i > 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
}

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
		int i;

		for (i = n; i <= 98; i++)
		{
			int num = i;
			int div = 1;

			if (num < 0)
			{
				putchar('-');
				num = -num;
			}
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
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
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
	putchar('\n');
}

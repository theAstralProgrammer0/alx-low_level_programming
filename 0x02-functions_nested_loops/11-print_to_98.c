#include <stdio.h>
#include "main.h"

/**
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			n += 1;

			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	if (n > 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			n -= 1;

			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
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
			
			while (num / div  > 9)
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
			if (i > 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}

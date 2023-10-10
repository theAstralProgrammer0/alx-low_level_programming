#include <stdio.h>
#include "main.h"

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

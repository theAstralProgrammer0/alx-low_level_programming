#include <stdio.h>

/**
  * times_table - Entry Point
  *
  */

void times_table(void)
{
	int a;
	int b;
	int product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;

			if (b == 0)
			{
				putchar('0' + 0);
			}
			else if (product < 10)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar('0' + product);
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar('0' + (product / 10));
				putchar('0' + (product % 10));
			}

			if (b == 9)
			{
				putchar('\n');
			}
		}
	}

}

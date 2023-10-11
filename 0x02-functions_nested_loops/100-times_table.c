#include <stdio.h>

/**
  * print_times_table - Entry Point
  *
  * @n: integer to determine times table width
  *
  * Return: The function does not return any value
  *
*/

void print_times_table(int n)
{
	if (!(n > 15 || n < 0))
	{
		int a;
		int b;
		int product;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				product = a * b;
				if (b != 0)
				{
					if (product % 10 == product)
					{
						printf(",   %d", product);
					} else if (product % 100 == product)
					{
						printf(",  %d", product);
					} else if (product % 1000 == product)
					{
						printf(", %d", product);
					}
				}
				else
					printf("%d", product);
			}
			printf("\n");
		}
	}
}

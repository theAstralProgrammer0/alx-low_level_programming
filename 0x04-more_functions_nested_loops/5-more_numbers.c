#include <stdio.h>

/**
  * more_numbers - Entry Point
  *
  * Description: A program to print the numbers 0 - 14 10 times
  *
  * Return: The function does not return
  */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				putchar('0' + j);

			}
			else if (j >= 10)
			{
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));
			}
		}
		printf("\n");
	}
	printf("\n");
}

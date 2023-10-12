#include <stdio.h>

/**
  * print_most_numbers - Entry Point
  *
  * Description: A program to print the numbers 0 - 9 except 2 & 4
  *
  * Return: The function does not return
  */

void print_most_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j != 2 && j != 4)
			putchar('0' + j);
	}
	putchar('\n');
}

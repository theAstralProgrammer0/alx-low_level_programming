#include <stdio.h>

/**
  * print_numbers - Entry Point
  *
  * Description: A program to print the numbers 0 - 9
  *
  * Return: The function does not return
  */

void print_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar('0' + j);
	}
	putchar('\n');
}

#include <stdio.h>
#include "main.h"

/**
  * print_number - Entry Point
  *
  * Description: This function prints any integer utilizing the concept of
  * recursion.
  *
  * @n: Number to be printed
  *
  * Return: Nothing
  */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (n / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}

#include <stdio.h>
#include "main.h"
#include <limits.h>


/**
  * print_last_digit - Entry Point
  *
  * _putchar - function that prints a character 
  *
  * @n: signed integer from main.c arg
  *
  * Return: Always 0 (Success)
  *
  */


int print_last_digit(int n)
{
	int m;

	switch (n == INT_MIN)
	{
		case 1:
			m = 8;
			_putchar(m + '0');
			return (m);
		default:
			switch (n < 0)
			{
				case 1:
					n = -n;
					m = n % 10;
					_putchar(m + '0');
					return (m);
				default:
					m = n % 10;
					_putchar(m + '0');
					return (m);
			}
	}
}

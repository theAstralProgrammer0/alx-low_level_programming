#include <stdio.h>
#include "main.h"
#include <math.h>

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
	int p;

	switch (n < 0)
	{
		case 1:
			n = n + 2 * (-n);
			m = n % 10;
			p = _putchar(m + '0');
			return (p);
		default:
			m = n % 10;
			p = _putchar(m + '0');
			return (p);
	}
}

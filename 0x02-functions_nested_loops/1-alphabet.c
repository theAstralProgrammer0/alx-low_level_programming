#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * print_alphabet - Entry Point
  *
  * _putchar - function that prints characters 
  *
  */


void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	int i;
	int length = strlen(str);

	for (i = 0; i <= length - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

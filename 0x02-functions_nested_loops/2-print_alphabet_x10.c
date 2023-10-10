#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * print_alphabet_x10 - Entry Point
  *
  * _putchar - function that prints characters
  *
  */


void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	int i;
	int j;
	int length = strlen(str);

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= length - 1; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}

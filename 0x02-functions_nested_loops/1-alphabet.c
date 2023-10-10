#include <stdio.h>
#include <string.h>
#include "main.h"

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i <= strlen(str) - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


void main(void)
{
	print_alphabet();
}

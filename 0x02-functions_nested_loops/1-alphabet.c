#include <stdio.h>
#include <string.h>
#include "main.h"

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i <= strlen(str) - 1; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}


void main(void)
{
	print_alphabet();
}

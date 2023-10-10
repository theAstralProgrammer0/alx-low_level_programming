#include <stdio.h>
#include <string.h>
#include "main.h"

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


int main(void)
{
	print_alphabet();

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
  * print_binary - Entry Point
  *
  * Description: This function converts a number to binary using bitwise
  * operator (right shift) and prints it
  *
  * @n: Number to be converted
  *
  * Return: Nothing
  */

void print_binary(unsigned long int n)
{
	int i = (sizeof(n) * 8) - 1; /**zero based indexing of bits in C*/
	int leading_zeros = 1;

	if (!n)
		putchar('0');
	while (i >= 0)
	{
		if ((n >> i & 1) == 1)
		{
			putchar('1');
			leading_zeros = 0; /**turn of leading zeros*/
		}
		else if (!leading_zeros)
			putchar('0');
		--i;
	}
}

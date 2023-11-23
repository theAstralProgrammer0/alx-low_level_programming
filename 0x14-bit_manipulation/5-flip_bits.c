#include <stdio.h>
#include <stdlib.h>

/**
  * flip_bits - Entry Point
  *
  * Description: This is a program that counts how many bit flips are needed to
  * convert a number to another number
  *
  * @n: First number
  *
  * @m: Second number
  *
  * Return: (count) int
  */

int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int i = sizeof(x) * 8, count = 0;

	x = n ^ m;

	while (i)
	{
		if ((x >> i & 1) == 1)
			count += 1;
		--i;
	}
	return (count);
}

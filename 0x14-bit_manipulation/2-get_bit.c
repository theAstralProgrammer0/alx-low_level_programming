#include <stdio.h>
#include <stdlib.h>

/**
  * get_bit - Entry Point
  *
  * Description: A function that returns the bit of at an index
  *
  * @n: Number to be parsed
  *
  * @index: Bit index
  *
  * Return: 0 (success), 1 (sucess), -1 (failure)
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = sizeof(n) * 8 - 1;

	if (index > i)
		return (-1);
	while (i >= index)
	{
		if (i == index)
			return ((n >> i & 1));
		--i;
	}
	return (0);
}

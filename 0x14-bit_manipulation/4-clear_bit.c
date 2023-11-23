#include <stdio.h>
#include <stdlib.h>

/**
  * clear_bit - Entry Point
  *
  * Description: This is a function that clears a number's bit at a specified
  * index to 0
  *
  * @n: The number
  *
  * @index: The index
  *
  * Return: 1 (Success), -1 (Failure)
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = sizeof(*n) * 8 - 1;
	unsigned long int mask = 1 << index;

	if (index > i)
		return (-1);
	while (i >= index)
	{
		if (i == index)
		{
			if ((*n >> i & 1) == 0)
				return (1);
			*n ^= mask;
		}
		--i;
	}
	return (1);
}

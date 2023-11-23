#include <stdio.h>
#include <stdlib.h>

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = sizeof(*n) * 8 - 1;
	unsigned long int mask = 1 << index;

	if (index > i)
		return (-1);
	while (i >= index)
	{
		if (i == index)
		{
			if ((*n >> i & 1) == 1)
				return (1);
			*n ^= mask;
		}
		--i;
	}
	return (1);
}

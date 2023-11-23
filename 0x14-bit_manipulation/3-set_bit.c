#include <stdio.h>
#include <stdlib.h>

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = sizeof(*n) * 8 - 1;

	if (index > i)
		return (-1);
	while (i >= index)
	{
		if (i == index)
		{
			*n >> i;
			*n = 1;
		}
		--i;
	}
	return (1);
}

#include <stdio.h>
#include <stdlib.h>

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = sizeof(n) * 8 - 1;

	while (i >= index)
	{
		if (i == index)
			return ((n >> i & 1));
		--i;
	}
	return (0);
}

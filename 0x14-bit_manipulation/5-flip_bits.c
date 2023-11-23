#include <stdio.h>
#include <stdlib.h>

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

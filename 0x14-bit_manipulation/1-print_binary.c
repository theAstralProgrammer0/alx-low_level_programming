#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned long int n)
{
	int i = (sizeof(n) * 8) - 1; /**to account for zero based indexing of
				       bits in C*/
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

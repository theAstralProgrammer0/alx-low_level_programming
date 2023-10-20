#include <stdio.h>

void print_number(int n)
{
	int div = 1;
	
	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	while (n / div >= 10)
	{
		div *= 10;
	}
	if (n / div < 10)
	{
		putchar((n / div) + '0');
		n %= div;
	}
	while (n % div != 0)
	{
		div /= 10;
		putchar((n / div) + '0');
		n %= div;
	}
}



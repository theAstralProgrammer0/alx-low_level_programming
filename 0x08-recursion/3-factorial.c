#include <stdio.h>

int factorial(int n)
{
	int s;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	s = n * factorial(n - 1);
		return (s);
}

#include <stdio.h>
#include "main.h"

int is_prime(int n)
{
	if (n <= 1)
		return (0);
	return (prime_help(n, 2));
}

int prime_help(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);

	return (prime_help(n, i + 1));
}

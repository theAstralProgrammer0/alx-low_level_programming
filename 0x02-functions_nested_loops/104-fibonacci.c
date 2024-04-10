#include <stdio.h>

unsigned int fibonacci(int a, int b, int n, int c) 
{
	static unsigned int sum;

	if (c > n)
	{
		printf("\n");
		return (sum);
	}
	sum = a + b;
	if (!c)
		printf("%u", sum);
	else
		printf(", %u", sum);
	a = b;
	b = sum;
	return (fibonacci(a, b, n, c + 1));
}


/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
  *
  */

int main(void)
{
	unsigned int fib;

	fib = fibonacci(0, 1, 98, 0);
	printf("fib => %u\n", fib);
	return (0);
}

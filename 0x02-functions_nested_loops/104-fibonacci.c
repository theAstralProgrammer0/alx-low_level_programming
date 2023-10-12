#include <stdio.h>

/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
  *
  */

int main(void)
{
	int n = 98;
	int a = 1, b = 2;
	int i;

	printf("%d, %d", a, b);

	for (i = 3; i <= n; i++)
	{
		unsigned long int c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}

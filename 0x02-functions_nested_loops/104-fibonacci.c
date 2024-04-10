#include <stdio.h>

/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
  *
  */

int main(void)
{  
	unsigned long int a = 1, b = 2, next;
	int n = 98;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= n; i++)
	{
		next = a + b;

		printf(", %lu", next);

		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}

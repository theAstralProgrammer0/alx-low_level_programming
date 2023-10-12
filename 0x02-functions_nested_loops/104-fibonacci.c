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

	printf("%u, %u", a, b);

	for (i = 3; i <= n; i++)
	{
		next = a + b;

		if (next < 0)
		{
			next = -next;
		}

		printf(", %u", next);

		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}

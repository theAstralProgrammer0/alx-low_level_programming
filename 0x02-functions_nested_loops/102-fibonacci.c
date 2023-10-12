#include <stdio.h>


/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int x = 1, y = 2, n;
	unsigned long int z;
	
	printf("%d, %d, ", x, y);

	for (n = 0; n <= 47; n++)
	{
		z = x + y;
		x = y;
		y = z;
		
		if (n != 47)
		{
			printf("%lu, ", z);
		}
		else
		{
			printf("%lu", z);
		}
	}
	printf("\n");

	return (0);
}

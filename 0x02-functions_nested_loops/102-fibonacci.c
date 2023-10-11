#include <stdio.h>

/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int x = 1, y = 1, n;
	long int z;
	
	printf("%d, %d, ", x, y);

	for (n = 0; n <= 46; n++)
	{
		z = x + y;
		x = y;
		y = z;
		
		if (n != 46)
		{
			printf("%li, ", z);
		}
		else
		{
			printf("%li", z);
		}
	}
	printf("\n");
}


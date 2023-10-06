#include <stdio.h>

/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
  *
  */

int main(void)
{
	int i;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}

	putchar('\n');
	return (0);
}

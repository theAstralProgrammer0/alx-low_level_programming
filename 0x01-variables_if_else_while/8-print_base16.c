#include <stdio.h>

/**
  * main - Entry Point
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	char str[] = "0123456789abcdef";

	int i = 0;

	while (i <= 15)
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
	return (0);
}

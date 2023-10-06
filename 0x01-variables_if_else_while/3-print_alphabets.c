#include <stdio.h>

/**
  * main - Entry Point
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	char str[] =
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i = 0;

	while (i <= 51)
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
	return (0);
}

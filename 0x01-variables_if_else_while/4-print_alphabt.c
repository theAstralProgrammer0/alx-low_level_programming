#include <stdio.h>

/**
  * main - Entry Point
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	char str[] = "abcdfghijklmnoprstuvwxyz";

	int i = 0;

	while (i <= 23)
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
  * main - Entry Point
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	char str[] = "zyxwvutsrqponmlkjihgfedcba";

	int i = 0;

	while (i <= 25)
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
	return (0);
}

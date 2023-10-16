#include <stdio.h>
#include <string.h>

/**
  * puts_half - Entry Point
  *
  * Description: The Program prints half the characters from a given string
  *
  * @str: String parameter passed in from int main
  *
  * Return: Nothing
  */

void puts_half(char *str)
{
	int i;
	int l;
	int n;

	l = strlen(str);

	if (l % 2 == 0)
		n = (l - 1) / 2;
	else
		n = l / 2;

	for (i = n + 1; i < l; i++)
		putchar(str[i]);
	putchar('\n');
}

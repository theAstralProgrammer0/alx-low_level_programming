#include <stdio.h>
#include <string.h>

/**
  * print_rev - Entry Point
  *
  * Description: This function takes in a string and prints it in reverse order
  *
  * @s: This is the parameter passed into the function from int main
  *
  * Return: Function does not return anything
  */

void print_rev(char *s)
{
	int i,l;
	
	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i = l - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}


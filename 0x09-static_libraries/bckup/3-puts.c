#include <stdio.h>

/**
  * _puts - Entry Point
  *
  * Description: A program to accept string as input and print the value to
  * stdout
  *
  * @str: Variable used to hold string array
  *
  * Return: The function does not return anything
  */

void _puts(char *str)
{
	int i = 0;

	while (1)
	{
		if (str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
		else
			break;
	}
	putchar('\n');
}

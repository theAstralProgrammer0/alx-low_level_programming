#include <stdio.h>

/**
  * _puts_recursion - Entry Point
  *
  * Description: This function prints a string by printing each character
  * recursively
  *
  * @s: String to be printed
  *
  * Return: Nothing
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
}

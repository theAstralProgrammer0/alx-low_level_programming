#include <stdio.h>

/**
  * _print_rev_recursion - Entry Point
  *
  * Description: This function prints a string in reverse using recursion
  *
  * @s: String to be reversed
  *
  * Return: Nothing
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}

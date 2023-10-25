#include <stdio.h>

/**
  * _strlen_recursion - Entry Point
  *
  * Description: This is a function that counts the length of  a string using
  * recusive function
  *
  * @s: String to be parsed
  *
  * Return: (count) int
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

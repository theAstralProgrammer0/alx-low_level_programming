#include <stdio.h>

/**
  * _strchr - Entry Point
  *
  * Description: This is a function that locates a character in a string
  *
  * @s: String to be parsed
  *
  * @c: Character to be matched
  *
  * Return: (s) pointer
  */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;

		if (a == c)
			return (s - 1);
		if (a == 0)
			return (NULL);
	}
	return (NULL);
}

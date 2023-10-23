#include <stdio.h>

/**
  * _atoi - Entry Point
  *
  * @s: String to be parsed
  *
  * Return: The integer contained in the string
  *
  */

int _atoi(char *s)
{
	unsigned int integer = 0;
	int neg_sign = 1;

	do
	{
		if (*s == '-')
			neg_sign = neg_sign * -1;
		else if (*s >= '0' && *s <= '9')
			integer = (integer * 10) + (*s - '0');
		else if (integer > 0)
			break;

			
	} while (*s++)

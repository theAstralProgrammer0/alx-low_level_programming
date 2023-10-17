#include <stdio.h>

/**
  * _atoi - Entry Point
  *
  * @s: String pointer variable
  *
  * Return: Function returns an integer after parsing string
  */

int _atoi(char *s)
{
	int neg = 1;
	unsigned int integer = 0;

	do
	{
		if (*s == '-')
			neg = neg * -1;
		else if (*s >= '0' && *s <= '9')
			integer = (integer * 10) + (*s - '0');
		else if (integer > 0)
			break;
	}
	while (*s++);

	return (neg * integer);
}



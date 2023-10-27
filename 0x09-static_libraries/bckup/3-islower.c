#include <stdio.h>

/**
  * _islower - Entry Point
  *
  * @c: Argument for ASCII value of character passed in double quotes
  *
  * Return: Always 1 (Lower Case)
  *
  */


int _islower(int c)
{
	switch (c >= 97 && c <= 122)
	{
		case 1:
			return (1);
		default:
			return (0);
	}
}

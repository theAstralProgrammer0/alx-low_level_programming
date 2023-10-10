#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _isalpha- Entry Point
  *
  * @c: Argument for ASCII value of character passed in double quotes
  *
  * Return: Always 1 (Alphabet)
  *
  */


int _islower(int c)
{
	switch ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		case 1:
			return (1);
		default:
			return (0);
	}
}

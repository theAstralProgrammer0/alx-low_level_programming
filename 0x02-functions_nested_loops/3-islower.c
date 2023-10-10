#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _islower - Entry Point
  *
  * Return: Always 1 (Lower Case)
  *
  * int c: ASCII value of a character entered in ' ' 
  *
  */


int _islower(int c)
{
	switch (c >= 97 && c <= 122)
	{
		case 1:
			return (1);
			break;
		default:
			return (0);
			break;
	}
}

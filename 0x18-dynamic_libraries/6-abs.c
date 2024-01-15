#include <stdio.h>
#include "main.h"
#include <math.h>

/**
  * _abs - Entry Point
  *
  * @n: signed integer from main.c arg
  *
  * Return: Always 0 (Success)
  *
  */


int _abs(int n)
{
	switch (n < 0)
	{
		case 1:
			n = n + 2 * (-n);
			return (n);
		default:
			return (n);
	}
}

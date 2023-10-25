#include <stdio.h>

/**
  * _pow_recursion - Entry Point
  *
  * Description: A function that finds x raised to the power of y
  *
  * @x: Mantissa
  *
  * @y: Index
  *
  * Return: (-1) int, (1) int, (s) int
  */

int _pow_recursion(int x, int y)
{
	int s;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	s = x * _pow_recursion(x, y - 1);
	return (s);
}

#include <stdio.h>

/**
  * factorial - Entry Point
  *
  * Description: A function that calculates the factorial of a number
  * recursively
  *
  * @n: Number we want to find its factorial
  *
  * Return: (-1) int, (s) int, (0) int
  */

int factorial(int n)
{
	int s;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	s = n * factorial(n - 1);
		return (s);
}

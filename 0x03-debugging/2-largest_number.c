#include "main.h"

/**
 * a_largest - returns a as the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int a_largest(int a, int b, int c)
{

	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (a > c && c > b)
	{
		largest = a;
	}
	else if (a == b && a > c)
	{
		largest = a;
	}
	else if (b == c && b < a)
	{
		largest = a;
	}
	else if (a == b && b == c)
	{
		largest = a;
	}
	return (largest);
}


/**
 * b_largest - returns b as the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int b_largest(int a, int b, int c)
{
	int largest;

	if (b > a && a > c)
	{
		largest = b;
	}
	else if (b > c && c > a)
	{
		largest = b;
	}
	else if (b == c && b > a)
	{
		largest = b;
	}
	else if (c == a && c < b)
	{
		largest = b;
	}
	return (largest);
}


/**
 * c_largest - returns c as the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int c_largest(int a, int b, int c)
{
	int largest;

	if (c > a && a > b)
	{
		largest = c;
	}
	else if (c > b && b > a)
	{
		largest = c;
	}
	else if (c == a && c > b)
	{
		largest = c;
	}
	else if (a == b && a < c)
	{
		largest = c;
	}
	return (largest);
}


/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	largest = a_largest(a, b, c);
	largest = b_largest(a, b, c);
	largest = c_largest(a, b, c);
	return (largest);
}

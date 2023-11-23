#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * isBinary - Auxilliary Function
  *
  * Description: This function checks if the string argument is a binary
  * string
  *
  * @bin_str: String argument
  *
  * Return: (0) if bin_str is not a 0 or 1, (1) if bin_str is a
  * binary string
  */

int isBinary(const char bin_str[])
{
	int i, len;

	len = strlen(bin_str);
	for (i = 0; i < len; i++)
	{
		if ((bin_str[i] != '0') && bin_str[i] != '1')
			return (0);
	}
	return (1);
}

/**
  * _pow_recursion - Auxilliary Function
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

/**
  * binary_to_uint - Entry Point
  *
  * Description: This function converts a binary to an unsigned integer
  *
  * @b: binary string
  *
  * Return: (bin_num) the decimal version of the binary string
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_num = 0;
	int i, j, len;

	if (b == NULL)
		return (0);
	if (!isBinary(b))
		return (0);

	len = strlen(b);
	for (i = len - 1, j = 0; i >= 0; --i, ++j)
	{
		bin_num += (b[i] - '0') * _pow_recursion(2, j);
	}
	return (bin_num);
}

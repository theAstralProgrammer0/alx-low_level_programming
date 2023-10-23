#include <stdio.h>

/**
  * _memset - Entry Point
  *
  * Description: This is a program that sets a memory space and fills it with a
  * character
  *
  * @s: Address to where memory is to be set and populated with bytes
  *
  * @b: Character to fill set memory space
  *
  * @n: Size of bytes (or space) to be allocated for byte population
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}


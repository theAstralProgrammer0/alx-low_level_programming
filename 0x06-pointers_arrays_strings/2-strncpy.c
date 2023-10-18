#include <stdio.h>

/**
  * _strncpy - Entry Point
  *
  * Description: A function to a number of bytes into a destination buffer
  *
  * @dest: Destination buffer
  *
  * @src: Source string
  *
  * @n: Maximum number of bytes to be copied from src string
  *
  * Return: (dest) pointer
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

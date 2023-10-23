#include <stdio.h>

/**
  * _memcpy - Entry Point
  *
  * Description: This function copies a memory area
  *
  * @dest: Destination buffer
  *
  * @src: Source memory area
  *
  * @n: Number of bytes to be copied
  *
  * Return: (dest) pointer
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(dest + j) = *(src + j);

	return (dest);
}

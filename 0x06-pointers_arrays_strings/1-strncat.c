#include <stdio.h>
#include <string.h>

/**
  * _strncat - Entry Point
  *
  * Description: This function concatenates n bytes of strings from a source
  * string to a destination buffer.
  *
  * @dest: Destination buffer
  *
  * @src: Source string
  *
  * @n: Maximum number of bytes of string to be concatenated
  *
  * Return: (dest) pointer
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	return (dest);
}

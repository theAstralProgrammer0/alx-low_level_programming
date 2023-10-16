#include <stdio.h>
#include <string.h>

/**
  * _strcpy - Entry Point
  *
  * Destination: Write a function that copies the string pointed to by src,
  * to the buffer pointed to by dest.
  *
  * @dest: Destination buffer to store copied string
  *
  * @src: Source of string being copied
  *
  * Return: Function returns a pointer variable which points to the destination
  * buffer
  */

char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = strlen(src);

	for (i = 0; i < l; i++)
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			break;
	return (dest);
}

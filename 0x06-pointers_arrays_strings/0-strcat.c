#include <stdio.h>
#include "string.h"

/**
  * _strcat - Entry Point
  *
  * Description: This function concatenates two strings together
  *
  * @src: Source string
  *
  * @dest: Destination buffer
  *
  * Return: (dest) pointer
  */

char *_strcat(char *dest, char *src)
{
	int i;
	int len_dest;
	int len_src;

	len_dest = strlen(dest);
	len_src = strlen(src);

	for (i = 0; i < len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}

	return (dest);
}




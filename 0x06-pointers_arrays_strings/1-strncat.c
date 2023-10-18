#include <stdio.h>
#include "string.h"

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_dest;
	int len_src;

	len_dest = strlen(dest);
	len_src = strlen(src);

	for (i = 0; i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}

	return (dest);
}




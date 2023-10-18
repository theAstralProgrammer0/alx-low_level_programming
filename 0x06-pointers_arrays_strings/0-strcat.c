#include <stdio.h>
#include "string.h"

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




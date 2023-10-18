#include <stdio.h>
#include <string.h>

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




#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int match = 0;

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
			return (haystack + i);
	}
	return (NULL);
}

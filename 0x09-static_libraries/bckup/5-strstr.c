#include <stdio.h>

/**
  * _strstr - Entry Point
  *
  * Description: This function checks for a substring in the main string and
  * returns the beginning of the occurence of the string
  *
  * @haystack: Main String
  *
  * @needle: String Search
  *
  * Return: (haystack + i) pointer
  */

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

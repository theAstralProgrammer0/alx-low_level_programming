#include <stdio.h>

/**
  * _strpbrk - Entry Point
  *
  * Description: This function searches a main string for the first character
  * in an accept string that matches any of its characters
  *
  * @s: main string being parsed
  *
  * @accept: string whose characters are checked against the mainstring for a
  * match
  *
  * Return: pointer to the first occurence of the character in the main string
  * that matches a character in the accept string.
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}

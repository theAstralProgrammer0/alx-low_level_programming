#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - Entry Point
  *
  * Description: A function that concatenates two strings together with a
  * couple conditions
  *
  * @s1: First string
  *
  * @s2: Second string
  *
  * @n: Bytes to concat
  *
  * Return: (s3) new string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, lens1, lens2, position;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
		lens1 = 1;
	}
	if (s2 == NULL)
	{
		s2 = "";
		lens2 = 1;
	}

	lens1 = strlen(s1);
	lens2 = strlen(s2);

	if (n >= lens2)
	{
		n = lens2;
	}

	s3 = (char *) malloc(lens1 + n + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0, position = 0; i < lens1; i++, position++)
	{
		s3[position] = s1[i];
	}

	for (i = 0; i < n; i++, position++)
	{
		s3[position] = s2[i];
	}
	s3[position++] = '\0';

	return (s3);
}

#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - Entry Point
  *
  * Description: A function concatenates two strings by dwnamically allocating
  * memory for the final string
  *
  * @s1: First string
  *
  * @s2: Second string
  *
  * Return: (concatstr) pointer to final string
  */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *concatstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 1; *s1 != '\0'; i++)
	{
		s1++;
	}
	s1 -= i - 1;

	for (j = 1; *s2 != '\0'; j++)
	{
		s2++;
	}
	s2 -= j - 1;

	concatstr = (char *)calloc(i + j - 1, sizeof(char));

	if (concatstr == NULL)
		return (NULL);

	for (k = 0; k < i - 1; k++)
	{
		*(concatstr + k) = *(s1 + k);
	}
	for (k = 0; k < j; k++)
	{
		*(concatstr + (i - 1) + k) = *(s2 + k);
	}

	return (concatstr);
}

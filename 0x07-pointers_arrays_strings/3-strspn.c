#include <stdio.h>

/**
  * _strspn - Entry Point
  *
  * Description: This is a function that returns the number of bytes in the
  * initial segment of a main string which consist only of bytes from another
  * string.
  *
  * @s: Main String
  *
  * @accept: The other string
  *
  * Return: (count) integer
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, flag, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
			}
		}

		if (flag == 0)
			return (count);
	}
	return (0);
}

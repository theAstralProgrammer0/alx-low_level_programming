#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - Entry Point
  *
  * Description: A function that allocates memory for a duplicate string
  * dynamically and copies all the characters in the string to this new
  * duplicate string location
  *
  * @str: String to be parsed
  *
  * Return: (dupstr) pointer to duplicated string
  */

char *_strdup(char *str)
{
	int i, j;
	char *dupstr;

	if (str == NULL)
		return (NULL);

	for (i = 1; *str != '\0'; i++)
	{
		str++;
	}
	str = str - i + 1;
	dupstr = (char *)calloc(i, sizeof(char));

	if (dupstr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		*(dupstr + j) = *(str + j);
	}

	return (dupstr);
}

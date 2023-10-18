#include <stdio.h>
#include <string.h>

/**
  * string_toupper - Entry Point
  *
  * Description: This function converts all lowercase letters in a string to
  * uppercase
  *
  * @str: String being uppercased
  *
  * Return: (str) pointer
  */

char *string_toupper(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}

	return (str);
}

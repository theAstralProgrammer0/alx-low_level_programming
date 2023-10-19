#include <stdio.h>
#include <string.h>

/**
  * rot13 - Entry Point
  *
  * Description: This function rotates letters 13 steps forward or backward
  * depending on the letter
  *
  * @str: String to be parsed
  *
  * Return: (str) pointer
  */


char *rot13(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i]
			<= 'm'))
			str[i] = str[i] + 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' &&
				str[i] <= 'z'))
			str[i] = str[i] - 13;
	}
	return (str);
}

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
	int i;
	int j;

	char no_rot13[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; no_rot13[j] != '\0'; j++)
		{
			if (str[i] == no_rot13[j])
			{
				str[i] = rot13[j];
			}
		}
	}
	return (str);
}

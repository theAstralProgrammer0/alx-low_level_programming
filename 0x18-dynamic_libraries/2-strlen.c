#include <stdio.h>

/**
  * _strlen - Entry Point
  *
  * Description: This function counts the number of characters in a string
  *
  * @s: string being passed from int main
  *
  * Return: It returns the count of all the characters before the null byte
  */

int _strlen(char *s)
{
	int i = 0;

	while (1)
	{
		if (s[i] != '\0')
			i++;
		else
			break;
	}
	return (i);
}

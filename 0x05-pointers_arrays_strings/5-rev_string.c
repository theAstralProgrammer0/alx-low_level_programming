#include <stdio.h>
#include <string.h>

/**
  * rev_string - Entry Point
  *
  * Description: This function takes in a string and prints it in reverse order
  *
  * @s: This is the parameter passed into the function from int main
  *
  * Return: Function does not return anything
  */

void rev_string(char *s)
{
	int i, l, li;
	char temp;

	l = strlen(s);
	li = l - 1;

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[li - i];
		s[li - i] = temp;
	}
	printf("%s\n", s);

}


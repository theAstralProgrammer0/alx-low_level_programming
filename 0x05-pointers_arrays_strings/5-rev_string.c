#include <stdio.h>
#include <string.h>

/**
  * print_rev - Entry Point
  *
  * Description: This function takes in a string and prints it in reverse order
  *
  * @s: This is the parameter passed into the function from int main
  *
  * Return: Function does not return anything
  */

void print_rev(char *s)
{
	int i, l, li;
	char temp;
	l = strlen(s);
	li = l - 1;

	for (i = 0; i < l; i++)
	{
		temp = s[i];
		s[i] = s[li - i];
		s[li - i] = temp;
	}
	printf("%s", s);

}


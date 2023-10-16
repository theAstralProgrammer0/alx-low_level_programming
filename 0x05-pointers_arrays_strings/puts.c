#include <stdio.h>

/**
  * _puts - Entry Point
  *
  * Description: A program to accept string as input and print the value to
  * stdout
  *
  * @str: Variable used to hold string array
  *
  * Return: The function does not return anything
  */

void _puts(char *str)
{
	int i = 0;

	while(1)
	{
		if (str[i] == '\0')
			break;
		else
		{
			putchar(str[i]);
			i++;
		}
	}
	putchar('\n');

	printf("The size of &str[0] is %ld\n", sizeof(&str[0]));
	printf("The size of str[0] is %ld\n", sizeof(str[0]));
	printf("The size of *str is %ld\n", sizeof(*str));
	printf("The size of str is %ld\n", sizeof(str));
}

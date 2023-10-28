#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * isNumber - Helper function
  *
  * Description: Helps iterate over string received from terminal to check if
  * there exists any non-digit character
  *
  * @digit: String from terminal argument
  *
  * Return: 1 (if isNumber), 0 (otherwise)
  */

int isNumber(char *digit)
{
	int j;

	for (j = 0; digit[j] != '\0'; j++)
	{
		if (isdigit(digit[j]) == 0)
			return (0);
	}

	return (1);
}

/**
  * main - Entry Point
  *
  * Description: A function that adds all numbers entered in the terminal as
  * arguments
  *
  * @argc: Terminal argument count
  *
  * @argv: Array of terminal arguments
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isNumber(argv[i]) == 0 || atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		if (argc == 1)
			printf("%d\n", 0);

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

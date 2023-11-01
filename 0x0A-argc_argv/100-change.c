#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
  * isNumber - Auxilliary Function
  *
  * Description: This function checks if the terminal argument is an
  * alphanumeric string or if it is negative
  *
  * @digitstr: String from terminal
  *
  * Return: (0) if digitstr is not a digit, (1) if digitstr is a
  * digit
  */

int isNumber(char digitstr[])
{
	int i, len;

	len = strlen(digitstr);

	for (i = 0; i < len; i++)
	{
		if (digitstr[i] == '-')
			return (0);

		if (isdigit(digitstr[i]) == 0)
			return (0);
	}

	return (1);
}


int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (*argv[1] == '\0')
		printf("%d\n", 0);

	else
	{
		cents = atoi(argv[1]);

		if (cents <= 0)
			printf("%d\n", 0);

		else if (isNumber(argv[1]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		coin_finder(cents, 0, 0);
		return (0);
	}

	return (0);
}


void coin_finder(int cents, int coins, int i)
{
	int change[5] = {25, 10, 5, 2, 1};

	if (cents < 0)
		return;
	if (cents == 0)
		printf("%d\n", coins);
	else
	{
		coins += cents / change[i];
		cents %= change[i];
		coin_finder(cents, coins, i + 1);
	}
}

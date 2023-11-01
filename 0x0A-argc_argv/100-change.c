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
		if ((digitstr[i] == '-') || (isdigit(digitstr[i]) == 0))
			return (0);
	}

	return (1);
}

/**
  * main - Entry Point
  *
  * Description: This function calls the isNumber and coinfinder functions to
  * parse terminal arguments and print the minimum number of coins to make
  * change for an amount of money
  *
  * @argc: Terminal Argument Count
  *
  * @argv: Array of Terminal Argument Strings
  *
  * Return: 0 (Success), 1 (Failure)
  */


int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (argv[1][0] == '\0')
	{
		printf("0\n");
		return (1);
	}

	else
	{
		if (isNumber(argv[1]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("%d\n", 0);
			return (1);
		}

		coin_finder(cents, 0, 0);
		return (0);
	}

	return (0);
}


/**
  * coin_finder - Auxilliary Function
  *
  * Description: This function is used to calculte and print the minimum amount
  * of coins to make change for an amount of money
  *
  * @cents: Amount of money passed as terminal argv
  *
  * @coins: Amount of coins required to make change for cents
  *
  * @i: index to track minimum change
  *
  * Return: Nothing
  */

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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"


int isNumber(char digitstr[])
{
	int i, len;
	
	len = strlen(digitstr);

	for (i = 0; i < len; i++)
	{
		if (isdigit(digitstr[i]) == 0)
			return (0);
	}

	return (1);
}


int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2 || isNumber(argv[1]) == 0)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		cents = atoi(argv[1]);

		if (cents == 0)
		{
			printf("%d\n", 0);
			return (0);
		}

		coin_finder(cents, 0, 0);
		return (0);
	}
}


int coin_finder(int cents, int coins, int i)
{
	int change[5] = {25, 10, 5, 2, 1};

	if (cents == 0)
		printf("%d\n", coins);
	else
	{
		coins += cents / change[i];
		cents %= change[i];
		coin_finder(cents, coins, i + 1);
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int argvcounter(int ac, char **av)
{
	int i, j, count;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}

	return (count);
}

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

char *argstostr(int ac, char **av)
{
	int i, j, count, position;
	char *alloc_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	count = argvcounter(ac, av);

	alloc_str = (char *) malloc(count * sizeof(char));

	if (alloc_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			alloc_str[position] = av[i][j];
			position++;
		}

		alloc_str[position++] = '\n';
	}

	return (alloc_str);
}

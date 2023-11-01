#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * argvcounter - Auxilliary Function
  *
  * Description: The function counts all the characters entered into the
  * terminal as arguments (including the null byte)
  *
  * @ac: argc (Terminal argument count)
  *
  * @av: argv (Terminal argument array)
  *
  * Return: (count) int
  */

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


/**
  * argstostr - Auxilliary Function
  *
  * Description: The function allocates memory dynamically and concatenates
  * with a newline separator
  *
  * @ac: argc (Terminal argument count)
  *
  * @av: argv (Terminal argument array)
  *
  * Return: (count) int
  */

char *argstostr(int ac, char **av)
{
	int i, j, count, position = 0;
	char *alloc_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	count = argvcounter(ac, av);

	alloc_str = (char *) malloc((count + 1) * sizeof(char));

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

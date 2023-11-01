#include <stdlib.h>

/**
 * wordcounter - Auxilliary function
 *
 * Description: A function to count the words in a string
 *
 * @str: string to count words present
 *
 * Return: The number of words
*/

int wordcounter(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			str++;
		else
		{
			while (*str != ' ' && *str != '\0')
				str++;
			count++;
		}
	}
	return (count);
}

/**
 * free_array - Auxilliary function
 *
 * Description: A function to free the memory allocated for an array
 *
 * @arr: array to be freed
 *
 * @i: array index
 *
 * Return: Nothing
*/

void free_array(char **arr, int i)
{
	if (arr != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(arr[i]);
			i--;
		}
		free(arr);
	}
}

/**
 * strtow - Entry Point
 *
 * Description: A function that splits a string to words
 *
 * @str: string to split.
 *
 * Return: (NULL) on failure
*/

char **strtow(char *str)
{
	int i, s, j, len, word;
	char **splitstr;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = wordcounter(str);

	splitstr = malloc((len + 1) * sizeof(char *));

	if (len == 0 || splitstr == NULL)
		return (NULL);

	for (i = s = 0; i < len; i++)
	{
		for (word = s; str[word] != '\0'; word++)
		{
			if (str[word] == ' ')
				s++;

			if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
			{
				splitstr[i] = malloc((word - s + 2) * sizeof(char));
				if (splitstr[i] == NULL)
				{
					free_array(splitstr, i);
					return (NULL);
				}
				break;
			}
		}

		for (j = 0; s <= word; s++, j++)
			splitstr[i][j] = str[s];
		splitstr[i][j] = '\0';
	}
	splitstr[i] = NULL;
	return (splitstr);
}

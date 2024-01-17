#include "monty.h"

/**
 * main - Entry Point
 *
 * Description: This function is where it all begins
 *
 * @argc: argument count
 *
 * @argv: string array of arguments
 *
 * Return: 0 Success, Otherwise Failure
 */

int main(int argc, char **argv)
{
	FILE *fp;
	char *buf = NULL, *token, *tokens[2];
	size_t size, i;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file <file>\n");
		exit(EXIT_FAILURE);
	}

	while (getline(&buf, &size, fp) != -1)
	{
		//printf("%s\n", buf);
		while (token)
		{
			token = strtok(buf, " ");
			*tokens = token;
			buf = NULL;
			i++;
		}
		tokens[2] = NULL;
		for (i = 0; *tokens != NULL; i++)
			printf("%s\n", tokens[i]);
	}

	return (0);
}

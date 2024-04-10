#include "monty.h"

void checkops(char **tokens, int line_num)
{
	int i;
}

char **tokenizer(char *line, char **tokens, const char *delim)
{
	char *token;
	int i = 0;

	while (i < 2)
	{
		token = strtok(line, delim);
		if (!token)
			break;
		tokens[i] = token;
		line = NULL;
		printf("token %d: %s\n", i + 1, token);
		i++;
	}
	return(tokens);
}


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
	char *buf = NULL, *tokens[2], *copy, **args;
	size_t size;
	int i = 0, line_num = 0;

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
		copy = buf;
		line_num++;
		args = tokenizer(copy, tokens, " \t\n");
		checkops(tokens, line_num);
	}
	fclose(fp);
	free(buf);
	return (0);
}

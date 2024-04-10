#include "monty.h"

glob_t *glob = NULL;

/**
 * stack_init - Aux function
 *
 * Description: Initializes the stack and returns the top/head of the stack
 *
 * Return: Pointer to top of stack
 */
void stack_init(void)
{
	stack_t *top = NULL;
	stack_t **stack = &top;
	size_t inst_num, i;
	
	glob = malloc(sizeof(glob_t));
	if (glob == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	glob->top = top;
	glob->stack = stack;
	glob->tokens = malloc(2 * sizeof(char *));
	if (glob->tokens == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}	
}


/**
 * execop - Aux function
 *
 * Description: Executes a monty operation. It compares the operation from 
 * the line of monty code and checks if an opcode in the list of instructions
 * matches the operation and calls the corresponding function
 *
 * @stack: Pointer to the stack
 * 
 * @tokens: Array of strings. tokens[0] = opcode, tokens[1] = int
 *
 * @line_num: Line number of the instruction
 *
 * Return: Nothing
 */
void execop(int line_number)
{
	int i, num;
	
	instruction_t insts[2] = {
		{"push", push},
		{"pall", pall}
	};
	
	num = sizeof(insts) / sizeof(insts[0]);
	
	if (glob->tokens[0] == NULL)
		return;
	
	for (i = 0; i < num; i++)
	{
		if (strcmp(glob->tokens[0], insts[i].opcode) == 0)
		{
			insts[i].f(glob->stack, line_number);
			return;
		}
	}
}

void tokenizer(char *line, const char *delim)
{
	char *token = NULL;
	int i = 0;

	while (i < 2)
	{
		token = strtok(line, delim);
		if (!token)
			break;
		line = NULL;
		glob->tokens[i] = token;
		i++;
	}
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
	FILE *fp = NULL;
	char *buffer = NULL, *buffer_copy = NULL;
	size_t size;
	int i = 0, line_number = 0;
	
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	stack_init();
	while (getline(&buffer, &size, fp) != -1)
	{
		printf("I'm in\n");
		buffer_copy = buffer;
		line_number++;
		tokenizer(buffer_copy, " \t\n");
		execop(line_number);
	}
	free(buffer);
	fclose(fp);
	free_glob(glob);
	return (0);
}

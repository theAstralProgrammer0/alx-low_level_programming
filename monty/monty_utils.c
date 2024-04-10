#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *top = NULL, *newnode = NULL;
	int intNumber;
	
	if (!isNumber(glob->tokens[1]))
	{
		if (glob)
			free_glob(glob);
		dprintf(2, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	intNumber = atoi(glob->tokens[1]);
	newnode = (stack_t *)malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		if (glob)
			free_glob(glob);
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	
	newnode->n = intNumber;
	newnode->next = glob->top;
	newnode->prev = NULL;

	if (glob->top)
		glob->top->prev = newnode;
	glob->top = newnode;
}


void pall(stack_t **stack, unsigned int line_number)
{
	printf("Hello\n");
}

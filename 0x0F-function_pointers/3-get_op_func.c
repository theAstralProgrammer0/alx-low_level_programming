#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
  * get_op_func - Entry Point
  *
  * Description: This function takes a string as argument and returns a
  * function pointer based on the string passed
  *
  * @s: Operator string passed
  *
  * Return: (f) function pointer pointing to any of the function names in the
  * ops array of structures
  */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}


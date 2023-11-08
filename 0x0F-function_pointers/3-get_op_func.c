#include <stdio.h>
#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}


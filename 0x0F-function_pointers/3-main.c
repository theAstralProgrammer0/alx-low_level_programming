#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int a, b, res;
	char *op;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (strcmp(op, "+") != 0 && strcmp(op, "-") != 0 && *op != '*' && strcmp(op, "/") != 0 && strcmp(op, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	f = (*get_op_func)(op);
	res = f(a, b);

	printf("%d\n", res);

	return (0);
}

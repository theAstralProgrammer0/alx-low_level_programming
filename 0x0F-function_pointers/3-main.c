#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
  * main - Entry Point
  *
  * Description: This function takes in the terminal argument count and vector
  * of the arguments (an array of the strings) from the terminal (stdin) and
  * performs an arithmetic operation on it depending on the selection by the
  * user at runtime
  *
  * @argc: Terminal argument count
  *
  * @argv: Terminal argument vector
  *
  * Return: (res) int
  */

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
	f = (*get_op_func)(op);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = f(a, b);

	printf("%d\n", res);

	return (0);
}

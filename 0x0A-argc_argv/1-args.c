#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: This is a function that prints the number of arguments in the
  * terminal
  *
  * @argc: Terminal arguments count
  *
  * @argv: Array of terminal arguments
  *
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		;
	}

	printf("%d\n", argc - 1);
	return (0);
}

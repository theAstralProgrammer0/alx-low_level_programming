#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
  * main - Entry Point
  *
  * Description: A program that multiplies two numbers from the terminal
  *
  * @argc: Terminal argument count
  *
  * @argv: Array of terminal arguments
  *
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		int arg1 = atoi(argv[1]);
		int arg2 = atoi(argv[2]);
		
		mul = arg1 * arg2;
		printf("%d\n", mul);
		return (0);
	}
	
	if (argc != 3)
	{
		write(1, "Error\n", 7);
		return (1);
	}

	return (0);
}

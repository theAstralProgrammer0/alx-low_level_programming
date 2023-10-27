#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: This is a program that prints all the terminal arguments
  *
  * @argc: Terminal arguments count
  *
  * @argv: Array of terminal arguments
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}


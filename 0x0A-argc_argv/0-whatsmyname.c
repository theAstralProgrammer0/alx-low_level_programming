#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: This is a function that prints the name
  * of the executable compiled into
  *
  * @argc: Count of the arguments from the terminal
  *
  * @argv: Array of terminal argument strings
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}

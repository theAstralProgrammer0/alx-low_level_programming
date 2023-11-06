#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  *
  * Description: This function prints the name of this file
  *
  * Return: Nothing
  */

void main(void)
{
	char *filename;

	filename = __FILE__;

	printf("%s\n", filename);
}

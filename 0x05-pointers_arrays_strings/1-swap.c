#include <stdio.h>

/**
  * swap_int - Entry Point
  *
  * Description: A function  for swaping integer variables
  *
  * @a: first integer
  *
  * @b: second integer
  *
  * Return: The function does not return anything
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

/**
  * set_string - Entry Point
  *
  * Description: This function assigns a pointer the value of a string
  *
  * @s: pointer
  *
  * @to: pointer to a string
  *
  * Return: Nothing
  */

void set_string(char **s, char *to)
{
	*s = to;
}

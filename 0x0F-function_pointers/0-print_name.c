#include <stddef.h>
/**
  * print_name - Entry Point
  *
  * Description: A function that calls other (callback) functions to print a
  * given name string in different formats
  *
  * @name: Name parameter
  *
  * @f: Function pointer pointing to the callback functions
  *
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(f)(name);
}

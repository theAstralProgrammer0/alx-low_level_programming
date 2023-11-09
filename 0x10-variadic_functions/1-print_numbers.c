#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - Entry Point
  *
  * Description: This function prints numbers in a specified format
  *
  * @separator: Separator string
  *
  * @n: Number of digits to be printed
  *
  * Return: Nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		int num;

		num = va_arg(list, int);

		if (i == 0)
			printf("%d", num);
		else if (separator == NULL)
			printf("%d", num);
		else
			printf("%s%d", separator, num);
	}
	putchar('\n');
	va_end(list);
}


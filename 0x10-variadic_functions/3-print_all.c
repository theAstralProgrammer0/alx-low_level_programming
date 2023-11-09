#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - Entry Point
  *
  * Description: This function prints any of 4 data types in a specified format
  * (comma and space separated)
  *
  * @format: Format string
  *
  * Return: Nothing
  */

void print_all(const char *const format, ...)
{
	va_list spec;
	const char *fmt_string;
	char *s_value, *sep = "";

	va_start(spec, format);
	fmt_string = format;
	if (format)
	{
		while (*fmt_string)
		{
			switch (*fmt_string)
			{
				case 'c':
					printf("%s%c", sep, va_arg(spec, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(spec, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(spec,
								double));
					break;
				case 's':
					s_value = va_arg(spec, char *);
					if (s_value == NULL)
						s_value = "(nil)";
					printf("%s%s", sep, s_value);
					break;
				default:
					fmt_string++;
					continue;
			}
			sep = ", ";
			fmt_string++;
		}
	}
	putchar('\n');
	va_end(spec);
}

#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list specifier;
	const char * fmt_string;
	int i_value;
	char c_value;
	float f_value;
	char *s_value, *separator = "";

	va_start(specifier, format);
	fmt_string = format;

	if(format)
	{
		while (*fmt_string)
		{
			switch (*fmt_string)
			{
				case 'c':
					c_value = va_arg(specifier, int);
					printf("%s%c",separator, c_value);
					break;
				case 'i':
					i_value = va_arg(specifier, int);
					printf("%s%i", separator, i_value);
					break;
				case 'f':
					f_value = va_arg(specifier, double);
					printf("%s%f", separator, f_value);
					break;
				case 's':
					s_value = va_arg(specifier, char *);
					if (s_value == NULL)
						s_value = "(nil)";
					printf("%s%s", separator, s_value);
					break;
				default:
					fmt_string++;
					continue;
			}
			separator = ", ";
			fmt_string++;
		}
	}
	putchar('\n');
	va_end(specifier);
}

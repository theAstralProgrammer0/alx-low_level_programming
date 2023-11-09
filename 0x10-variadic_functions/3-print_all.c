#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list specifier;
	const char * fmt_string;
	int i_value;
	char c_value;
	float f_value;
	char *s_value;

	va_start(specifier, format);
	fmt_string = format;

	while (*fmt_string)
	{
		switch (*fmt_string)
		{
			case 'c':
				c_value = va_arg(specifier, int);
				printf("%c", c_value);
				break;
			case 'i':
				i_value = va_arg(specifier, int);
				printf("%i", i_value);
				break;
			case 'f':
				f_value = va_arg(specifier, double);
				printf("%f", f_value);
				break;
			case 's':
				s_value = va_arg(specifier, char *);
				printf("%s", s_value);
				break;
			default:
				break;
				
		}
		if (*(fmt_string + 1) != '\0')
		{
			if (*fmt_string == 'c' || *fmt_string == 'i' ||
					*fmt_string == 'f' || *fmt_string ==
					's')
				printf(", ");
		}
		fmt_string++;
	}
	putchar('\n');
	va_end(specifier);
}

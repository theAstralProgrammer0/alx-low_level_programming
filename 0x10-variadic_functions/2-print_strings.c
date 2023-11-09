#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list list;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			str = "(nil)";

		if (separator == NULL)
			printf("%s", str);

		else if (i > 0)
			printf("%s%s", separator, str);

		else
			printf("%s", str);
	}
	putchar('\n');
	va_end(list);
}
			

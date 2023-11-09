#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	size_t i, sum = 0;
	va_list list_of_nums;

	if (n == 0)
		return (0);

	va_start(list_of_nums, n);

	for (i = 0; i < n; i++)
	{
		int num = 0;

		num = va_arg(list_of_nums, int);
		sum += num;
	}

	va_end(list_of_nums);
	return (sum);
}

#include <stdio.h>
#include <stdarg.h>

/**
  * sum_them_all - Entry Point
  *
  * Description: This is a function that sums all integer arguments of a
  * variadic funtion
  *
  * @n: Number of numbers to be summed
  *
  * Return: (sun) integer
  */

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

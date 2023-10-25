#include <stdio.h>

int _pow_recursion(int x, int y)
{
	int s;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	s = x * _pow_recursion(x, y - 1);
	return (s);
}

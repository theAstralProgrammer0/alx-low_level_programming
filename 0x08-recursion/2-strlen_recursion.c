#include <stdio.h>

int _strlen_recursion(char *s)
{
	static int count = 0;

	if (*s == '\0')
		return (count);

	count++;	
	_strlen_recursion(s + 1);
}	

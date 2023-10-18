#include <stdio.h>

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < sizeof(str) / sizeof(char); i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}

	return (str);
}

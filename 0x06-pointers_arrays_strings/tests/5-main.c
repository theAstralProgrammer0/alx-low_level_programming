#include <stdio.h>

void stringToUpper(char *str, int n);

int main(void)
{
	char str[] = "Look up!\n";

	int n;

	n = sizeof(str) / sizeof(char);

	printf("%s", str);
	stringToUpper(str, n);
	printf("%s", str);

	return (0);
}

void stringToUpper(char *str, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
}

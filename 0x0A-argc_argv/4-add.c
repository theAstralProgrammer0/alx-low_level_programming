#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isNumber(char *digit)
{
	while(*digit != '\0')
	{
		if (isdigit(*digit) == 1)
			digit++;
		else
			return (0);
	}
}

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isNumber(argv[i]) == 1 || atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		if (argc == 1)
			printf("%d\n", 0);

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

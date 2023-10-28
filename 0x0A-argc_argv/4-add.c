#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		else if (argc == 1)
		{
			printf("%d\n", 0);
			return (0);
		}

		sum += atoi(argv[i]);
	}
	
	printf("%d\n", sum);

	return (0);
}

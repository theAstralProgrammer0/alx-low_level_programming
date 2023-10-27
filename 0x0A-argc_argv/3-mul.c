#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		int arg1 = atoi(argv[argc - 2]);
		int arg2 = atoi(argv[argc - 1]);
		
		mul = arg1 * arg2;
		printf("%d\n", mul);
		return (0);
	}
	write(1, "Error\n", 7);
	return (1);
}

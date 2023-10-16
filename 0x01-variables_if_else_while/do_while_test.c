#include <stdio.h>

int main(void)
{
	int a;

	a = 65;

	do
	{
		printf("%c is the charater of %d\n", a, a);
		a++;
	}
	while (a < 75);

	printf("This is out of the while loop\n");
}

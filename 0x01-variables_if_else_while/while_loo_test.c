#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char i;

	printf("Enter any character >> ");
	while (i != 'x')
	{
		scanf("%c", &i);
	
		printf("\nThe character you just entered is: %c\n", i);
	}

	printf("This is the end of the while loop");

	return (0);
}

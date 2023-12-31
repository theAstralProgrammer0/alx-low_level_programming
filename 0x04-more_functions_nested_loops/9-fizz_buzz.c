#include <stdio.h>

/**
  * main - Entry Point
  *
  * Description: This is the legendary FizzBuzz code
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int num;
	char F[] = "Fizz";
	char B[] = "Buzz";
	char FB[] = "FizzBuzz";

	for (num = 1; num <= 100; num++)
	{
		if (num < 100)
		{
			if (num % 3 == 0 && num % 5 == 0)
				printf("%s ", FB);
			else if (num % 3 == 0)
				printf("%s ", F);
			else if (num % 5 == 0)
				printf("%s ", B);
			else
				printf("%d ", num);
		}
		else if (num == 100)
			printf("Buzz");
	}
	putchar('\n');
	return (0);
}

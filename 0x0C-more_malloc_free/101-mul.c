#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

int isNumber(char digitstr[]);
void *alloc(size_t);
void multiplyStrings(char *, char *);

/**
  * isNumber - Auxilliary Function
  *
  * Description: This function checks if a string is a positive number
  *
  * @digitstr: The string
  *
  * Return: (1) if its a number, (0) otherwise
  */

int isNumber(char digitstr[])
{
	int i, len;

	len = strlen(digitstr);

	for (i = 0; i < len; i++)
	{
		if ((digitstr[i] == '-') || (isdigit(digitstr[i]) == 0))
			return (0);
	}

	return (1);
}

/**
  * alloc - Auxilliary Function
  *
  * Description: This function allocates memory and check if its allocated
  *
  * @size: Size to allocate
  *
  * Return: (ptr) to the allocated memory
  */

void *alloc(size_t size)
{
	void *ptr;

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

/**
  * main - Entry Point
  *
  * Description: This function multiplies two strings
  *
  * @argc: Terminal argument count
  *
  * @argv: Terminal argument array
  *
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	char *n1, *n2;

	n1 = argv[1];
	n2 = argv[2];

	if (argc != 3 || isNumber(n1) == 0 || isNumber(n2) == 0)
	{
		printf("Error\n");
		exit(98);
	}

	if (atoi(n1) == 0 || atoi(n2) == 0)
	{
		printf("0");
		putchar('\n');
		return (0);
	}

	multiplyStrings(n1, n2);

	return (0);
}

/**
  * multiplyStrings - Auxilliary Function
  *
  * Description: This function contains the algorithm to multiply two strings
  *
  * @num1: First number
  *
  * @num2: Second number
  *
  * Return: (resultString) to the result string
  */

void multiplyStrings(char *num1, char *num2)
{
	int i, j, len1, len2, lenResult, mul, sum, *result;

	len1 = strlen(num1);
	len2 = strlen(num2);
	lenResult = len1 + len2;

	result = (int *) alloc(lenResult * sizeof(int));
	memset(result, 0, lenResult * sizeof(int));

	/**Multiplication Algorithm*/
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = mul + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	for (i = 0; i < lenResult; i++)
	{
		int leadingZeros = 1;

		if (result[i] == 0 && leadingZeros)
			continue;
		else
		{
			leadingZeros = 0;
			printf("%d", result[i]);
		}
	}
	putchar('\n');

	free(result);
}


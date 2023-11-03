#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int isNumber(char digitstr[]);
void *alloc(size_t);
char *multiplyStrings(char *, char *);
char *convertIntArrToStr(int *, int);

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


void *alloc(size_t size)
{
	void *ptr;

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

int main(int argc, char *argv[])
{
	char *s;
	char *n1, *n2;

	n1 = argv[1];
	n2 = argv[2];


	if (argc != 3 || isNumber(n1) == 0 || isNumber(n2) == 0)
	{
		printf("Error\n");
		exit (98);
	}
/**	printf("%s, %s", n1, n2);*/

	s = multiplyStrings(n1, n2);
	
	printf("%s\n", s);
	free(s);

	return (0);
}


char *multiplyStrings(char *num1, char *num2)
{
	int i, j, len1, len2, lenResult, mul, sum, *result;
	char *resultString;

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

	resultString = convertIntArrToStr(result, lenResult);

	return (resultString);
}

char *convertIntArrToStr(int *result, int arrSize)
{
	int i, idx, leadingZeros = 1;
	char *retString;

	retString = (char *) alloc(arrSize);

	for (i = 0; i < arrSize; i++)
	{
		if (result[i] == 0 && leadingZeros)
			continue; /**Skip leading zeros*/
		else
		{
			leadingZeros = 0;
			retString[idx++] = result[i] + '0';
		}
	}

	retString[arrSize] = '\0';
	free(result);

	return (retString);
}

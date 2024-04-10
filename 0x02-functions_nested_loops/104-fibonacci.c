#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add - Auxilliary function
 *
 * Description: adds any two number strings together
 *
 * @a: first number string
 *
 * @b: second number string
 *
 * @result: result string
 *
 * Return: Nothing
 */
void add(char *a, char *b, char *result)
{
	int len_a = strlen(a);
	int len_b = strlen(b);
	int i = len_a - 1;
	int j = len_b - 1;
	int k = 0;
	int sum = 0;
	int carry = 0;
	int digit_a;
	int digit_b;
	int start;
	int end;
	char temp;

	/** add to generate result **/
	while (i >= 0 || j >= 0 || carry)
	{
		digit_a = (i >= 0) ? (a[i] - '0') : 0;
		digit_b = (j >= 0) ? (b[j] - '0') : 0;
		sum = digit_a + digit_b + carry;

		result[k++] = (sum % 10) + '0';
		carry = sum / 10;

		(i >= 0) ? i-- : i;
		(j >= 0) ? j-- : j;
	}
	/** append null to end of result string **/
	result[k] = '\0';
	/** reverse result string **/
	start = 0;
	end = k - 1;
	while (start < end)
	{
		temp = result[start];
		result[start] = result[end];
		result[end] = temp;
		start++;
		end--;
	}
}

/**
 * fibonacci - Auxilliary function
 *
 * Description: prints the fibonacci sequence up to the nth value
 *
 * @n: nth value
 *
 * Return: Nothing
 */
void fibonacci(int n)
{
	char a[1000] = "1";
	char b[1000] = "2";
	char sum[1000];
	int i;

	/** print first 2 numbers **/
	printf("%s, %s", a, b);

	/** add iteratively and print result **/
	for (i = 3; i <= n; i++)
	{
		add(a, b, sum);
		printf(", %s", sum);

		/** update a and b **/
		strcpy(a, b);
		strcpy(b, sum);
	}
}

/**
 * main - Entry Point
 *
 * Description: Driver function
 *
 * Return: 0 Success, Always
 */
int main(void)
{
	int n = 98;

	fibonacci(n);
	putchar('\n');
	return (0);
}

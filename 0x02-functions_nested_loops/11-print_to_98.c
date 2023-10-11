/**
  * print_to_98 - Entry Point
  *
  * @n: integer argument from function call
  */


/**void print_to_98(int n)
*{
*	if (n <= 98)
*	{
*		print_n_less_equal_98(n);
*	}
*	else
*	{
*		print_n_greater_98(n);
*	}
*	putchar('\n');
*}
*/
#include <stdio.h>

/**
 * print_to_98 - print the number given up to 98
 * @k: this is the number to start from
 * Return: this function does not return anything
 */
void print_to_98(int k)
{
	if (k < 98)
	{
		while (k < 98)
		{
			printf("%d, ", k);
				k++;
		}
	}
	else if (k > 98)
	{
		while (k > 98)
		{
			printf("%d, ", k);
			k--;
		}
	}
	printf("98\n");
}

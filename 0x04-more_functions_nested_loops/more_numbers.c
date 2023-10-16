#include <stdio.h>
#define N 60
#define NUM2 14 

/**
  * more_numbers - Entry Point 
  *
  * Description: Funuction to print numbers from 0 - 14, 10 times.
  *
  * Return: This function does not retur any value
  */


/**
  i
j01234567891011121314
 01234567891011121314
 01234567891011121314
 01234567891011121314
 01234567891011121314
 01234567891011121314
 01234567891011121314
 01234567891011121314
 01234567891011121314
 01234567891011121314
*/

3, 20 ...}

void more_numbers()
{
	int i;
	int j;

	for (i = 0; i < NUM1; i++)
	{
		for (j = 0; j <= NUM2; j++)
		{
			if (j < 10)
			{
				putchar('0' + j);
			}
			else if (j >= 10)
			{
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));
			}
		}
		 putchar('\n');
	}
}

#include <stdio.h>
#include <string.h>

/**
  * puts2 - Entry Point


  */

void puts2(char *str)
{
	int i;
	int l;

	l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
		else
			continue;
	}
	putchar('\n');
}

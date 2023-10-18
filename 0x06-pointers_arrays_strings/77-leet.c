#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *leet(char *str)
{
	int i, len;

	len = strlen(str);

	char lA = '4';
	char lE = '3';
	char lO = '0';
	char lT = '7';
	char lL = '1';

	char *a;
	char *A;
	char *e;
	char *E;
	char *o;
	char *O;
	char *t;
	char *T;
	char *l;
	char *L;
	a = &lA;
	A = &lA;
	e = &lE;
	E = &lE;
	o = &lO;
	O = &lO;
	t = &lT;
	T = &lT;
	l = &lL;
	L = &lL;

	char **leetchars;

	*leetchars = "AaeEoOtTlL";

	for (i = 0; i < len; i++)
	{
		while (leetchars)
		{
			if (*leetchars)
			{
				str[i] = **leetchars;
				break;
			}
			leetchars++;
		}
	}
	return (str);
}

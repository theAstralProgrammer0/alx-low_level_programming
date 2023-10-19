#include <stdio.h>
#include <string.h>

char *leet(char *str)
{
	char leetMap[256];
	int i, len;

	len = strlen(str);

	leetMap['A'] = '4';
	leetMap['a'] = '4';
	leetMap['E'] = '3';
	leetMap['e'] = '3';
	leetMap['O'] = '0';
	leetMap['o'] = '0';
	leetMap['T'] = '7';
	leetMap['t'] = '7';
	leetMap['L'] = '1';
	leetMap['l'] = '1';

	for (i = 0; i < len; i++)
	{
		if (leetMap[(unsigned char) str[i]])
			str[i] = leetMap[(unsigned char) str[i]];
	}

	return (str);
}

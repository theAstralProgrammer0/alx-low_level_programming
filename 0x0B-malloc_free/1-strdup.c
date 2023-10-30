#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	else
	{
		int i, j;
		char *dupstr;

		for (i = 1; *str != '\0'; i++)
		{
			str++;
		}

		str = str - i + 1;
	
		dupstr = (char *)calloc(i, sizeof(char));

		if (dupstr == NULL)
			return (NULL);

		for (j = 0; j < i; j++)
		{
			*(dupstr + j) = *(str + j);
		}

		return (dupstr);
	}
}

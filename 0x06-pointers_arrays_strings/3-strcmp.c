#include <stdio.h>
#include <string.h>

int _strcmp(char *s1, char *s2)
{
	int i;
	int flag;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
		else
		{
			flag = s1[i] - s2[i];
			continue;
		}
		
	}

	return (flag);
}

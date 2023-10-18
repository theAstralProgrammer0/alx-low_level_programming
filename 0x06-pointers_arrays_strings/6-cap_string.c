#include <stdio.h>
#include <string.h>

/**
  * cap_string - Entry Point
  *
  * Description: This function converts every lowercase after a separator to
  * uppercase.
  *
  * Return: (str) pointer
  */

char *cap_string(char *str)
{
	int i, len;
	
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ((str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i]
					== '.' || str[i] == '!' || str[i] == '?'
					|| str[i] == '"' || str[i] == '(' ||
					str[i] == ')' || str[i] == '{' || str[i]
					== '}' || str[i] == '\t' || str[i] ==
					'\n') &&  (str[i + 1] >= 97) && (str[i +
						1] <= 122))
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}

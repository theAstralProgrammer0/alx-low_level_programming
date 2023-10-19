#include <stdio.h>
#include <string.h>

/**
  * cap_string - Entry Point
  *
  * Description: This function converts every lowercase after a separator to
  * uppercase.
  *
  * @str: String to be parsed
  *
  * Return: (str) pointer
  */

char *cap_string(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}

			if ((str[i - 1] == ' ' || str[i - 1] == ',' || str[i -
						1] == ';' || str[i - 1]
					== '.' || str[i - 1] == '!' || str[i - 1] == '?'
					|| str[i - 1] == '"' || str[i - 1] == '(' ||
					str[i - 1] == ')' || str[i - 1] == '{'
					|| str[i - 1]
					== '}' || str[i - 1] == '\t' || str[i -
					1] ==
					'\n'))
				str[i] = str[i] - 32;
		}
	}
	return (str);
}

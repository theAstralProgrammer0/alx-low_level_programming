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
		if ((str[i] == 33 || str[i] == 34 || str[i] == 40 || str[i] ==
					41 || str[i] == 44 || str[i] == 46 ||
					str[i] == 59 || str[i] == 63 || str[i]
					== 123 || str[i] == 125 || str[i] == 32
					|| str[i] == '\t' || str[i] == '\n') &&  (str[i + 1] >= 97) && (str[i + 1] <= 122))
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}

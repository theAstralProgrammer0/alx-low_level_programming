#include "monty.h"

int isNumber(const char digitstr[])
{
	size_t len = strlen(digitstr);
	
	if (len == 0)
		return (0);
	if (digitstr[0] == '-')
	{
		if (len == 1)
			return (0);
	}
	digitstr++;
	for (size_t i = 0; i < len; i++)
	{
		if (!isdigit(digitstr[i]))
			return (0);
	}
    return (1);
}

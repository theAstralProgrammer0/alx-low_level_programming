#include <stdio.h>
#include <string.h>

char *cap_string(char *);

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	
	char *ptr;

	ptr = cap_string(str);

	printf("%s", ptr);
	printf("%s", str);

	return (0);
}

char *cap_string(char *str)
{
	int i, len;
	//char sep[12] = {' ', '	', ',', '\n', '!', '.', '?', '\"', '(',')','{', '}'}; 
	char *sep = " 	,;.!?\"{}()\n";
	//printf("%s", sep);
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
	/**	if (str[i] >= 97 && str[i] <= 122)
		{
			int j;
			while (j < 12)
			{
				//printf("%c\n", *sep);
				//printf("Within the inner while loop\n");
				if (str[i - 1] == sep[j])
					str[i] = str[i] -32;
				break;

			}
		}*/
		
		while (*sep++)
		{
			if (str[i] == *sep)
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 1] = str[i + 1] - 32;
			}
			break;
		}
	}

	return (str);
}

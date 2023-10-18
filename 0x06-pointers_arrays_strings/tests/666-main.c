#include <stdio.h>
#include <string.h>

char *cap_string(char *);

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	
	char *ptr;

	ptr = cap_string(str);

	printf("%s", str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}

char *cap_string(char *str)
{
	int i, j, len, len_sep;
	
	len = strlen(str);
	
	for (i = 0; i < len; i++)
	{
		printf("%d, ", len);
		if ((str[i] == 33 || str[i] == 34 || str[i] == 40 || str[i] ==
				41 || str[i] == 44 || str[i] == 46 || str[i] ==
				59 || str[i] == 63 || str[i] == 123 || str[i] ==
				125 || str[i] == 32 || str[i] == '	' ||
				str[i] == '\n') &&  (str[i + 1] >= 97) && (str[i +
						1] <= 122))
		{
			printf("I'm inside");
			str[i + 1] = str[i + 1] - 32;
		}
	}

	return (str);
}


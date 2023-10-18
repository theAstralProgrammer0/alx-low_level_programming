#include <stdio.h>
#include "main.h"

int main(void)
{
	int n;
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;


	printf("%s\n", s1);
	printf("%s", s2);
	n = 1;
	ptr = _strncat(s1, s2, n);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	n = 1098;
	ptr = _strncat(s1, s2, n);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	/**n = -10;
	ptr = _strncat(s1, s2, n);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	*/
	return (0);
}



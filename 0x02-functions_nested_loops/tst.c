#include <stdio.h>

int main(void)
{
	char result[1000] = "0123456789";
	int k = 0;
	
	printf("result[1000] = %s\n", result);
	printf("result[k++] immediately is at %c index because k is %d\n", result[k++], k);
	printf("result[k] right after is at %c index because k is %d\n", result[k], k);

	k = 0;
	result[k++] = 'J';
	printf("result[k++] after calling result[k++] = 'J' is %c because k is %d\n", result[k++], k);
	printf("result[k] after calling result[k++] twice, one with the 'J' and the other when using printf is %c because k is %d\n", result[k], k);
	return (0);
}	

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arrptr = (char *) calloc(size, sizeof(char));

	for (i = 0; i < size; i++)
	{
		*(arrptr + i) = c;
	}

	return (arrptr);
}

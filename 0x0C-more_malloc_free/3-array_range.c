#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int i, nmemb, *ptr;

	if (min > max)
		return (NULL);

	nmemb = max - min + 1;
	
	ptr = (int *) calloc(nmemb, sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}

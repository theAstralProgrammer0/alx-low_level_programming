#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char *filename;

	filename = __FILE__;

	printf("%s\n", filename);
}

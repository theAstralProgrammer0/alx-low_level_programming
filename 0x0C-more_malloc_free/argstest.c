#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *n1;
	char *n2;

	n1 = argv[1];
	n2 = argv[2];

	printf("%s, %s", n1, n2);
	return(0);
}

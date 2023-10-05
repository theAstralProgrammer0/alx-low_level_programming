#include <stdio.h>
#include <errno.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	errno = 1;
	perror("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (errno);
}

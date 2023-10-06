#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
*/

int main(void)
{
	char msg[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, msg, sizeof(str) - 1);
	return (1);
}

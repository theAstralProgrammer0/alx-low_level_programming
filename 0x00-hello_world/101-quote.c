#include <stdio.h>
#include <errno.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
/**
 * cutchar - Reusable function
 *
 * s - holder
*/

int main(void)
{
	const char *msg =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 0;

	while (msg[len])
	{
		 len++;
	}

	if (write(STDERR_FILENO, msg, len) == -1)
	{
		return (1);
	}

	return (1);
}

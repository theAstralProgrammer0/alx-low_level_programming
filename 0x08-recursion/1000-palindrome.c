#include <stdio.h>

char *is_palindrome(char *);

int compare(char *, char *);

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}

int compare(char *new, char *s)
{
	if (*new == '\0')
		return (1);
	if (*new != *s)
		return (0);
	else
		compare(new + 1, s + 1);
}
char *is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (compare(new, s));
	}
	is_palindrome(s + 1);
	putchar(*s);
}

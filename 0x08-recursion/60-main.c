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

    r = is_prime(1);
    printf("%d\n", r);
    r = is_prime(1024);
    printf("%d\n", r);
    r = is_prime(16);
    printf("%d\n", r);
    r = is_prime(17);
    printf("%d\n", r);
    r = is_prime(25);
    printf("%d\n", r);
    r = is_prime(-1);
    printf("%d\n", r);
    r = is_prime(113);
    printf("%d\n", r);
    r = is_prime(7919);
    printf("%d\n", r);
    return (0);
}

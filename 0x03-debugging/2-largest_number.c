#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else if (c > a && a > b)
    {
        largest = c;
    }

    else if (a > c && c > b)
    {
        largest = a;
    }

    else if (b > c && c > a)
    {
        largest = b;
    }
    
    else if (c > b && b > a)
    {
        largest = c;
    }
    else if (a == b && a > c)
    {
	    largest = a;
    }
    else if (b == c && b > a)
    {
	    largest = b;
    }
    else if (c == a && c > b)
    {
	    largest = c;
    }
    else if (a == b && a < c)
    {
	    largest = c;
    }
    else if (b == c && b < a)
    {
	    largest = a;
    }
    else if (c == a && c < b)
    {
	    largest = b;
    }
    else if (a == b && b == c)
    {
	    largest = a;
    }

    return (largest);
}

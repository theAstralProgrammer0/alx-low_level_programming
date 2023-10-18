#include <stdio.h>

void print_array(int *a, int n);
void reverse_array(int *a, int n);

int main(void)
{
	int a[] = {1,2,3,4,5,6,7};
	int size_a = sizeof(a) / sizeof(int);
	print_array(a, size_a);
	putchar('\n');
	reverse_array(a, size_a);
	print_array(a, size_a);
	putchar('\n');
	return (0);
}

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
		i++;
	}
}

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}


#include <stdio.h>


int sum(int n);


int main(void)
{
	int ans;

	ans = sum(5);

	printf("The sum of n numbers is: %d", ans);

	return (0);
}


int sum(int n)
{
	int s;

	if (n <= 1)
		return (1);
	else
	{
		s = n + sum(n - 1);
		return (s);
	}
}

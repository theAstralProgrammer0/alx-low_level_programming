#include <stdio.h>

/*function definition*/
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

/*function definition*/
void sun(char *str)
{
	printf("Value of str is %s\n", str);
}

/*function definition*/
void gun(char *gtr)
{
	printf("Value of gtr is %s\n", gtr);
}



int main(void)
{
	/*function pointer declaration*/
	void (*fptr)(int a);
	
	/*function pointer initialization*/
	fptr = &fun;

	/*function call via function pointer*/
	(*fptr)(5);

	/*array of  functions*/
	void (*fptrs[2])(char *string);
	fptrs = [fun, sun];

	/*string for comparison*/
	char *string;
	string = "I am string";
	fptrs[1](string);
	return (0);
}

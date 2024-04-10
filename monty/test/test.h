#ifndef TEST_H
#define TEST_H
#include <stdio.h>

typedef struct global_var
{
	char *str;
	char **str_arr;
	int int_arr[2];
} glob_t;

extern glob_t glob;

#endif

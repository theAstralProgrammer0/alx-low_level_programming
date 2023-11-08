#ifndef CALC_H
#define CALC_H

/**
  * struct op - Operator Struct
  *
  * @op: The operator
  *
  * @f: The function associated with the operator
  */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *s))(int, int);


#endif

#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void stack_init(void);
void execop(int line_number);
void tokenizer(char *line, const char *delim);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
int isNumber(const char *digitstr);
/**
 *
 */
typedef struct global_var
{
	stack_t **stack;
	stack_t *top;
	stack_t *front;
	stack_t *rear;
	char **tokens;
} glob_t;

/* stack pointer global variable*/
extern glob_t *glob;

void free_glob(glob_t *glob);
#endif

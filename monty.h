#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

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

stack_t *add_node(stack_t **head, unsigned int num);
size_t print_list(const stack_t *h);
size_t print_last(const stack_t *h, int i);
size_t free_list(stack_t *h);
void argc_errors(void);
void unknown(char *store, int i);
void empty(int i);
int pop(stack_t **head, int m);
int swap(stack_t **head, int num);
int add(stack_t **head, int num);
int sub(stack_t **head, int num);
int div_int_stack(stack_t **head, int num);
int mul_int_stack(stack_t **head, int num);
int mod_int_stack(stack_t **head, int num);
void pchar(stack_t *h, int num);

#endif

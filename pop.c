#include "monty.h"

/**
 * pop - reomoves element on top
 * @h: linked list
 * @m: line number
 * Return: void
 */

int pop(stack_t **h, int m)
{
	int i;
	stack_t *node;

	if ((*h) == NULL)
	{
	fprintf(stderr, "L%d: can't pop an empty stack\n", m);
	_exit(EXIT_FAILURE);
	}

	i = (*h)->n;
	node = (*h)->next;
	free(*h);
	(*h) = node;

	return (i);
}

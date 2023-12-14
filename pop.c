#include "monty.h"

/**
 * pop - reomoves element on top
 * @head: linked list
 * Return void
 */

int pop(stack_t **h)
{
	int i;
	stack_t *node;

	i = (*h)->n;
	node = (*h)->next;
	free(*h);
	(*h) = node;

	return (i);
}

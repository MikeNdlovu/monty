#include "monty.h"

/**
 * swap - swaps first two elements on stack
 * @head: head of the list
 * @num: line number
 * Return: success
 */
int swap(stack_t **head, int num)
{
	int m, i = 0;
	stack_t *node, *check;

	check = (*head);
	while (check)
	{
	check = check->next;
	i++;
	}

	if (i < 2)
	{
	fprintf(stderr, "L%d: can't swap, stack too short\n", num);
	_exit(EXIT_FAILURE);
	}

	else
	{
	m = (*head)->n;
	node = (*head);
	node = node->next;
	(*head)->n = node->n;
	((*head)->next)->n = m;
	}
	return (m);
}

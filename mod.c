#include "monty.h"

/**
 * mod_int_stack - mods first two elements of a linkedlist
 * @head: pointer to the linked list
 * @num: line number
 * Return: success
 */
int mod_int_stack(stack_t **head, int num)
{
	int mod, i = 0;
	stack_t *node, *check;

	check = (*head);
	while (check)
	{
	check = check->next;
	i++;
	}

	if (i < 2)
	{
	fprintf(stderr, "L%d: can't mod, stack too short\n", num);
	_exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
	fprintf(stderr, "L%d: division by zero\n", num);
	_exit(EXIT_FAILURE);
	}

	mod = ((*head)->next)->n % (*head)->n;
	node = (*head);
	node = node->next;
	node->n = mod;
	free(*head);
	*head = node;
	
	return (mod);
}

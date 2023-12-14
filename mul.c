#include "monty.h"

/**
 * mul - muls first two elements of a linkedlist
 * @head: pointer to the linked list
 * @num: line number
 * Return: success
 */
int mul_int(stack_t **head, int num)
{
	int mul, i = 0;
	stack_t *node, *check;

	check = (*head);
	while (check)
	{
	check = check->next;
	i++;
	}

	if (i < 2)
	{
	fprintf(stderr, "L%d: can't mul, stack too short\n", num);
	_exit(EXIT_FAILURE);
	}

	mul = ((*head)->next)->n * (*head)->n;
	node = (*head);
	node = node->next;
	node->n = mul;
	free(*head);
	*head = node;
	
	return (mul);
}

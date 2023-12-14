#include "monty.h"

/**
 * sub - adds first two elements of a linkedlist
 * @head: pointer to the linked list
 * @num: line number
 * Return: success
 */
int sub(stack_t **head, int num)
{
	int sub, i = 0;
	stack_t *node, *check;

	check = (*head);
	while (check)
	{
	check = check->next;
	i++;
	}

	if (i < 2)
	{
	fprintf(stderr, "L%d: can't sub, stack too short\n", num);
	_exit(EXIT_FAILURE);
	}

	sub = ((*head)->next)->n - (*head)->n;
	printf("%d\n", sub);
	node = (*head);
	node = (node->next)->next;
	free(*head);
	*head = node;

	return (sub);
}

#include "monty.h"

/**
 * add - adds first two elements of a linkedlist
 * @head: pointer to the linked list
 * @num: line number
 * Return: success
 */
int add(stack_t **head, int num)
{
	int sum, i = 0;
	stack_t *node, *check;

	check = (*head);
	while (check)
	{
	check = check->next;
	i++;
	}

	if (i < 2)
	{
	fprintf(stderr, "L%d: can't add, stack too short\n", num);
	_exit(EXIT_FAILURE);
	}

	sum = (*head)->n + ((*head)->next)->n;
	printf("%d\n", sum);
	node = (*head);
	node = (node->next)->next;
	free(*head);
	*head = node;

	return (sum);
}

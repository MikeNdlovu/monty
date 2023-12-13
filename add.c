#include "monty.h"

/**
 * add_node - adds a node to a list
 * @head: pointer starting ofthe list
 * @num: number being stored in a list
 * Return: list
 */
stack_t *add_node(stack_t **head, unsigned int num)
{
	stack_t *node;

	if (head == NULL)
		return ('\0');

	node = malloc(sizeof(stack_t));
		if (node == NULL)
		return (NULL);
	if (*head == NULL)
	node->next = NULL;
	else
	node->next = *head;
	node->n = num;
	*head = node;

	return (*head);
}

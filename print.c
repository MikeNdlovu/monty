#include "monty.h"

/**
 * print_list - prints linked list
 * @h: pointer to linked list
 * Return: success
 */

size_t print_list(const stack_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * print_last - prints linked list
 * @h: pointer to linked list
 * @i: number line is located in
 * Return: success
 */
size_t print_last(const stack_t *h, int i)
{
	if (h == NULL)
	{
	fprintf(stderr, "L%d: can't pint, stack empty\n", i);
	_exit(EXIT_FAILURE);
	}

	else
	printf("%d\n", h->n);
	return (0);
}

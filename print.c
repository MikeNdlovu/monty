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

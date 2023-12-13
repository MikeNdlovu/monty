#include "monty.h"

/**
 * free_list - frees a linked lis
 * @h: pointer nto list being freed
 * Return: number of itmes in list
 */

size_t free_list(stack_t *h)
{
	int i = 0;

	while (h)
	{
		free(h);
		h = h->next;
		i++;
	}
	return (i);
}

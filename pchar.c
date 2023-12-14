#include "monty.h"

/**
 * pchar - puts ascii value of an int in stack
 * @h: linked list stack
 * @num: line number
 */
void pchar(stack_t *h, int num)
{
	int n;

	if (h == NULL)
	{
	fprintf(stderr, "L%d: can't pchar, stack empty", num);
	_exit(EXIT_FAILURE);
	}

	n = h->n;
	if (n >= 0 && n <= 127)
	{
	putchar(n);
	putchar('\n');
	}

	else if (n < 0 || n > 127)
	{
	fprintf(stderr, "L%d: can't pchar, value out of range",num);
	_exit(EXIT_FAILURE);
	}
}

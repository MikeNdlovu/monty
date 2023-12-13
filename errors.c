#include "monty.h"

/**
 * argc_errors - number of args has to be two
 * @n: number
 * Return: void
 */

void argc_errors()
{
	fprintf(stderr, "USAGE: monty file\n");
	_exit(EXIT_FAILURE);
}

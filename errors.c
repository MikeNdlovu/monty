#include "monty.h"

/**
 * argc_errors - number of args has to be two
 * Return: void
 */

void argc_errors(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	_exit(EXIT_FAILURE);
}

/**
 * unknown - number of args has to be two
 * @store: contains instruction
 * @i: line number
 * Return: void
 */

void unknown(char *store, int i)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", i, store);
	_exit(EXIT_FAILURE);
}

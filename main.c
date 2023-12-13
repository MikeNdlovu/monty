#include "monty.h"

/**
 * main - main func
 * @agc: num of args
 * @agv: args
 * Return: success
 */

int main(int agc, char **agv)
{
	FILE *fptr;
	char *store, *push = "push", *tok;
	int num;

	fptr = fopen(agv[1], "r");
	stack_t *head = NULL;

	if (agc != 2)
	argc_errors(agc);
	else if (fptr == NULL)
	fprintf(stderr, "Error: Can't open file %s\n", agv[1]);
	else
	{
	store = malloc(sizeof(char) * 15);

	while (fgets(store, 15, fptr) != NULL)
	{
		if (store[0] == 'p' && store[1] == 'u' && store[2] == 's' && store[3] == 'h')
		{
		strtok(store, " \n");
		num = atoi(strtok(NULL, " \n"));
		add_node(&head, num);
		}
		if (store[0] == 'p' && store[1] == 'a' && store[2] == 'l' && store[3] == 'l')
		print_list(head);
	}
	free_list(head);
	fclose(fptr);
	free(store);
	}
	return (0);
}

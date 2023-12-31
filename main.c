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
	char *st;
	int num, i = 0;
	stack_t *head = NULL;

	fptr = fopen(agv[1], "r");

	if (agc != 2)
	argc_errors();
	else if (fptr == NULL)
	fprintf(stderr, "Error: Can't open file %s\n", agv[1]);
	else
	{
	st = malloc(sizeof(char) * 15);

	while (fgets(st, 15, fptr) != NULL)
	{
		i++;
		strtok(st, " \n");
		if (st[0] == 'p' && st[1] == 'u' && st[2] == 's' && st[3] == 'h')
		{
		num = atoi(strtok(NULL, " \n"));
		add_node(&head, num);
		}
		else if (st[0] == 'p' && st[1] == 'a' && st[2] == 'l' && st[3] == 'l')
		print_list(head);
		else if (st[0] == 'p' && st[1] == 'i' && st[2] == 'n' && st[3] == 't')
		print_last(head, i);
		else if (st[0] == 'p' && st[1] == 'o' && st[2] == 'p')
		pop(&head, i);
		else if (st[0] == 's' && st[1] == 'w' && st[2] == 'a' && st[3] == 'p')
		swap(&head, i);
		else if (st[0] == 'a' && st[1] == 'd' && st[2] == 'd')
		add(&head, i);
		else if ((st[0] == 'n' && st[1] == 'o' && st[2] == 'p') || st[0] == '#')
		;
		else if (st[0] == 's' && st[1] == 'u' &&  st[2] == 'b')
		sub(&head, i);
		else if (st[0] == 'd' && st[1] == 'i' &&  st[2] == 'v')
		div_int_stack(&head, i);
		else if (st[0] == 'm' && st[1] == 'u' &&  st[2] == 'l')
		mul_int_stack(&head, i);
		else if (st[0] == 'm' && st[1] == 'o' &&  st[2] == 'd')
		mod_int_stack(&head, i);
		else if (st[0] == 'p' && st[1] == 'c' && st[2] == 'h' && st[3] == 'a' && st[4] == 'r')
		pchar(head, i);
		else
		unknown(st, i);
	}
	free_list(head);
	fclose(fptr);
	free(st);
	}
	return (0);
}

#include "monty.h"
/**
 * f_push - adds node(s) to the stack
 * @head: stack head
 * @counter: line No.
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int i, x = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			x++;
		for (; bus.arg[x] != '\0'; x++)
		{
			if (bus.arg[x] > 57 || bus.arg[x] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}

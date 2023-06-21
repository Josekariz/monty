#include "monty.h"
/**
 * f_mod - Computes rest of the division of second
 * top element of the stack
 * @head: Stack head
 * @counter: line No.
 * Return: no return
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int lenth = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		lenth++;
	}
	if (lenth < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

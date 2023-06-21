#include "monty.h"
/**
 * f_add - add top 2 elems of the stack
 * @head:  head of the stack
 * @counter: line No.
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

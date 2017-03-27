#include "lists.h"
/**
 *print_listint - print all elements of list to stdout
 *@h: linked list to print
 *Return: all elements of list
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *c;

	for (c = h, i = 0; c != NULL; i++, c = c->next)
	{
		printf("%d\n", c->n);
	}
	return (i);
}

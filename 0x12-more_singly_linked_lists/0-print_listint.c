#include "lists.h"
/**
 *print_listint - print all elements of list to stdout
 *@h: linked list to print
 *Return: all elements of list
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->head, h->str);
		h = h->next;
	}
	return (i);
}

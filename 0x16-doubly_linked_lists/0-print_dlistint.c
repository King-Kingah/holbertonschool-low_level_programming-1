#include "lists.h"
/**
 *print_list - print all elements of a dlistint_t list
 *@h: linked list to print
 *Return: formatted list to stdout
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%s\n", h->next);
		h = h->next;
	}
	return (i);
}

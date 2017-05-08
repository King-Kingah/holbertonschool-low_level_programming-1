#include "lists.h"
/**
 *print_list - print all elements of a list_t list
 *@h: linked list to print
 *Return: message to stdout
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}

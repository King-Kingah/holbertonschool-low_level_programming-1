#include "lists.h"
/**
 * listint_len -  function that returns the number of elements in a list
 *@h: linked list head
 *return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t i;

	for (c = h, i = 0; c != NULL; i++, c = c->next)
		;
	return(i);
}

#include "lists.h"
/**
 *
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t i;

	for (c = h, i = 0; c != NULL; i++, c = c->next)
		;
	return(i);
}

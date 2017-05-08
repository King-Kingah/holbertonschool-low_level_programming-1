#include "lists.h"
/**
 *free_dlistint - a function that frees a dlistint_t list.
 *@head - pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
		return;

	for (current = head; head != NULL; )
		head = head->next;
		free(current);
}

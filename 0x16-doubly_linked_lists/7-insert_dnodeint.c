#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: double pointer to head
 * @idx: index of the list where new node should be added, starts at 0
 * @n: data to insert to list node
 * Return: the address of the new node, or NULL if it failed
 * if not possible to add new node at index index, don't add and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *insert_after;
	unsigned int i;

	if (h == NULL) /*check if list empty*/
		return (NULL);

	insert_after = *h;
	/* traverse to end of list */
	for (i = 1; insert_after && i < idx; i++)
	{
		insert_after = insert_after->next;
		if (insert_after == NULL) /*check if possible to add new node*/
			return (NULL);
	}
	/* allocate size for new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		free(new);
		return (NULL);
	/* put data in new node */
	new->n = n;

	if (idx == 0)
	{
		*h = new;
		new->next = insert_after;
	}
	else if (insert_after->next)
	{
		new->next = insert_after->next;
		insert_after->next = new;
	}
	else
	{
		new->next = NULL;
		insert_after->next = new;
	}

	return (new);
}

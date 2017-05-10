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
	dlistint_t *traverse;
	unsigned int i = 0;

	if (h == NULL) /*check if list empty*/
		return (NULL);

	traverse = *h;
	for (i = 1; traverse && i < idx; i++) /* traverse to end of list */
	{
		traverse = traverse->next;
		if (traverse == NULL) /*check if possible to add new node*/
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t)); /* allocate size for new node */

	if (new == NULL)
		free(new);
		return (NULL);
	new->n = n; /* put data in new node */

	if (idx == 0)
	{
		*h = new;
		new->next = traverse;
	}
	else if (traverse->next)
	{
		new->next = traverse->next;
		traverse->next = new;
	}
	else
	{
		new->next = NULL;
		traverse->next = new;
	}
	return (new);
}

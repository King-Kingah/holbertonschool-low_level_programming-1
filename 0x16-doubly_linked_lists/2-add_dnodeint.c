#include "lists.h"
/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *@head: double pointer to head of list
 *@n: data stored in list
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	/* allocate new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* put data into new node */
	new->n = n;
	/* assign new->prev to point to NULL */
	new->prev = NULL;
	new->next = NULL;

	if (*head != NULL)
	{
		new->next = (*head); /* assign new->next to point to head */
		new->next->prev = new; /* assign head->prev to point to new */
	}

	/* reassign head to point to new node */
	(*head) = new;

	return (new);
}

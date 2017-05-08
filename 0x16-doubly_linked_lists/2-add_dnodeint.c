#include "lists.h"
/**
 *add_dnodeint - Write a function that adds a new node at the beginning of a dlistint_t list
 *@head: double pointer to head of list
 *@n: data stored in list
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL;
	dlistint_t *new = NULL;

	current = *head;
	/* allocate new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	
	/* put data into new node */
	new->n = n;
	
	/* reassign head to point to new node */
	(*head) = new;
	
	/* make next of new node as head */
	if (current == NULL)
		new->next = current;

	return (new);
}

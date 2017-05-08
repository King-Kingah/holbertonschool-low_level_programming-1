#include "lists.h"
/**
 * add_dnodeint_end - Write a function that adds a new node at the end of a dlistint_t list.
 * @head: double pointer to head of linked list
 * @n: data to insert into linked list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = NULL;

	for (current = *head; current && current->next != NULL; )
		current = current->next;

	/*allocate space for new node */
	new = malloc(sizeof(dlistint_t));

	/* check if new is empty */
	if (new == NULL)
		return (NULL);
	

	/* put data into new node */
	new->n = n;

	/* make new node end of list by pointing to NULL */
	new->next = NULL;
	
	/* insert node by having current->next point to new node */
	if (current)
		current->next = new;
	else
		*head = new;
	return (new);
}



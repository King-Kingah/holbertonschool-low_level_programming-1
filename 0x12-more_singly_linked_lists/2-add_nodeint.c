#include "lists.h"
/**
 * add_nodeint - function that adds a new node to the beginning of a list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: address of new element, NULL if failed
 *
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = NULL;
	listint_t *new = NULL;

	current = *head;
	new = malloc(sizeof(listint_t)); /* allocate new node */
	if (new == NULL)
		return(NULL);
	new->n = n; /* put new data into new node */
	(*head) = new; /* move head to point to new node */
	if (current == NULL)
		new->next = NULL; /*make next of new node as head */
	else
		new->next = current;
	return (new);
}

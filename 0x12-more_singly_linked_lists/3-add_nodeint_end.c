#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: address of new element, NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = NULL;
	listint_t *new = NULL;

	for (current = *head; current && current->next != NULL; )
		current = current->next;

	new = malloc(sizeof(listint_t)); /* allocate node */
	if (new == NULL) /* check new node if empty */
		return (NULL);
	new->n = n;   /*put new data into new node */
	new->next = NULL;  /*make next of new node end by pointing to NULL */

	if (current)
		current->next = new;
	else
		*head = new;
	return (new);
}

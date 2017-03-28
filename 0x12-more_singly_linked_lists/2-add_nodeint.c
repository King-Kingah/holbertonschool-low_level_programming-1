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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return(NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}

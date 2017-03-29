#include "lists.h"
/**
 * reverse_listint - Reverse a `listint_t` linked list
 * @head: double pointer to head
 * Description: Limited to going through loop only once.
 * Not allowed to use `malloc` or `free` or arrays
 * Can only declare a max of 2 variables.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t *rest;

	if (*head == NULL)
		return (NULL);

	rest = *head;
	*head = rest->next;
	first = (*head)->next;
	rest->next = NULL;
	if (*head == NULL)
	{
		*head = rest;
		return (rest);
	}
	while (first != NULL)
	{
		(*head)->next = rest;
		rest = *head;
		*head = first;
		first = (*head)->next;
	}

	(*head)->next = rest;
	return (*head);
}

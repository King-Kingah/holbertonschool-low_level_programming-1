#include "lists.h"
/**
 * free_listint2 - function that frees a list and sets head to NULL
 * @head: pointer to head node
*/

void free_listint2(listint_t **head)
{
	listint_t *space;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		space = *head;
		*head = (*head)->next;
		free(space);
	}
}

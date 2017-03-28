#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to head node
*/
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head->n);
		free(head);
	}
}

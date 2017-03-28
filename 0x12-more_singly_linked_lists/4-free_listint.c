#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to head node
*/
void free_listint(listint_t *head)
{
	listint_t *space;

	while (head != NULL)
	{
		space = head;
		head = head->next;
		free(space);
	}
}

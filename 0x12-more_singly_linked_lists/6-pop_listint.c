#include "lists.h"
/**
 *pop_listint - function that deletes the head node of a listint_t linked list
 *@head: double pointer
 *Return: returns the head node's data (n) if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_head = NULL;

	if (*head == NULL)
		return (0);


	if (n == 0)
	{
		*head = temp_head->next;
	}
	return (n);
}

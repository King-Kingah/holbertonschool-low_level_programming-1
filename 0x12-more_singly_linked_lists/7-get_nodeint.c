#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth node of a linked list
 *@head: root of list
 *@index: index of the node
 *Return: nth node of a list, null if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
			return(current->n);
		i++;
		current = current->next;
	}
	return(i);
}

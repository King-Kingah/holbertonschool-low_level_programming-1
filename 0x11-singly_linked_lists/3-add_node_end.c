#include "lists.h"
/**
 * add_node_end - Add node to end of linked list
 * @head: head of the list
 * @str: string for node
 *
 * Return: address to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		for (i = 0; tmp->next != NULL; i++)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	else
		*head = new;
	new->next = NULL;
	new->str = strdup(str);
	return (new);
}

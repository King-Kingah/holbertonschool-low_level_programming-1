#include "lists.h"
/**
 *add_node - function to add a node to the beginning of a list
 *@head: current head of list
 *@str: character string
 *Return: pointer to a new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}

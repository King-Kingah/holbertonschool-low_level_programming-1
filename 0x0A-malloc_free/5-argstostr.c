#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all arguments
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: NULL if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	p = malloc(i * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}

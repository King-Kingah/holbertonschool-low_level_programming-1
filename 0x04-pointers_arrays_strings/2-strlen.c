#include "holberton.h"

/**
 * strlen - returns the length of a string
 * @char *s - character
 */
int _strlen(char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}

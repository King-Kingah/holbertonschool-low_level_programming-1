#include "holberton.h"
/**
 * _strlen_recursion - return length of string
 * @s: character string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}

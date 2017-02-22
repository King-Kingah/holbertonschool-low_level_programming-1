#include "holberton.h"

/**
 * *_strcpy - copies string pointed to by src
 * @char *dest - character pointer
 * @char *src - character source
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest+;
		src+;
	}

	return (c);
}

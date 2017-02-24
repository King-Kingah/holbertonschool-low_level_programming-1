#include "holberton.h"
/**
 * _strncpy - this function copies a string
 * @dest: character string destination
 * @src: character string source
 * @n: integer
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
/**
 * char *strncpy(char *dest, const char *src, size_t n)
 *{
 *    size_t i;
 *
 *    for (i = 0; i < n && src[i] != '\0'; i++)
 *        dest[i] = src[i];
 *    for ( ; i < n; i++)
 *        dest[i] = '\0';
 *
 *    return dest;
 *}
 *
*/

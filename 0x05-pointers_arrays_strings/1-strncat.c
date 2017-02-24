#include "holberton.h"

/**
 * _strncat - function that concatenates two strings using at most `n` bytes
 * @dest: character string destination
 * @src: character string source
 * @n: integer
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
/**
 * char* strncat(char *dest, const char *src, size_t n)
 * {
 *	size_t dest_len = strlen(dest);
 *	size_t i;
 *	for (i = 0 ; i < n && src[i] != '\0' ; i++)
 *		dest[dest_len + i] = src[i];
 *	dest[dest_len + i] = '\0';
 *	return dest;
 * }
*/

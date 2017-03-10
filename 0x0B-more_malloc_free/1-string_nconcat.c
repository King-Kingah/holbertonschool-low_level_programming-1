#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat - function to concatenate two strings
 *@s1: character string
 *@s2: character string
 *@n: unsigned integer
 *Return: pointer to newly allocated space in memory, which
 *contains s1 followed by the first n bytes of s2, and null terminated
 *return NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i;
	unsigned int j;
	unsigned int c;
	unsigned int d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;

	if (n > j)
	{
		a = malloc((i + j) * sizeof(*a));
	}
	else
		a = malloc((i + n) * sizeof(*a));
	if (a == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < i; c++)
	{
		*(a + c) = *(s1 + c);
	}
	for (d = 0; d < j; c++, d++)
	{
		*(a + c) = *(s2 + d);
	}
	*(a + i) = '\0';
	return (a);
}

#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - function that allocates memory for an array using malloc
 *@nmemb: unsigned integer
 *@size: unsigned integer
 *Return: Success - return pointer to allocated memory
 *If nmemb or size is 0, then _calloc returns NULL
 *If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}

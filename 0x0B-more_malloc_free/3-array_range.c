#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: smallest number
 * @max: biggest number
 * Return: the pointer to the newly created array
 *If min > max, return NULL - malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}

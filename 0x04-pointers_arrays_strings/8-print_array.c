#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print array of integers
 * @int *a: integer
 * @int n: integer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(", ");
	}
	printf("\n");
}

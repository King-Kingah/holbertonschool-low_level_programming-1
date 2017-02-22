#include "holberton.h"

/**
 * swap_int - swaps values of two integers
 * @int *a: pointer to integer
 * @int *b: pointer to integer
 *
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}

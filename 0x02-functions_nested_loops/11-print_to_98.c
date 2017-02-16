#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98  - print numbers n to 98
 * @n: integer
 *
 * Return: print to stdout numbers n to 98 followed by a newline.
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98 ; n++)
	{
		printf("%d, ", n);
	}
	printf("\n");
	for (n = 98; n==98 ; n)
	{
		printf("%d", n);
		}
	for (n = 111; n >= 98 ; n--)
	{
		printf("%d, ", n);
	}
}

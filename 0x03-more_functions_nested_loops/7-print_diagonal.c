#include "holberton.h"

/**
 *print_diagonal: print a diagonal line on terminal
 *@n: integer
 */
void print_diagonal(int n)
{
	int y;

	if(n > 0)
	{
		for(y=0; y < n; y++)
			_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
